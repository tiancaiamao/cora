#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun2944(struct Cora* co);
void _35clofun2943(struct Cora* co);
void _35clofun2942(struct Cora* co);
void _35clofun2941(struct Cora* co);
void _35clofun2940(struct Cora* co);
void _35clofun2939(struct Cora* co);
void _35clofun2938(struct Cora* co);
void _35clofun2937(struct Cora* co);
void _35clofun2936(struct Cora* co);
void _35clofun2935(struct Cora* co);
void _35clofun2934(struct Cora* co);
void _35clofun2933(struct Cora* co);
void _35clofun2932(struct Cora* co);
void _35clofun2931(struct Cora* co);
void _35clofun2930(struct Cora* co);
void _35clofun2929(struct Cora* co);
void _35clofun2928(struct Cora* co);
void _35clofun2927(struct Cora* co);
void _35clofun2926(struct Cora* co);
void _35clofun2925(struct Cora* co);
void _35clofun2924(struct Cora* co);
void _35clofun2923(struct Cora* co);
void _35clofun2922(struct Cora* co);
void _35clofun2921(struct Cora* co);


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
pushCont(co, 8, _35clofun2944, 0);
__nargs = 2;
__arg0 = globalRef(intern("import"));
__arg1 = makeString1("cora/lib/toc/internal");
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

void _35clofun2944(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2919 = __arg1;
Obj _35val2917= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val2917;
__arg2 = _35val2919;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2917 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2918 = primCdr(exp);
pushCont(co, 0, _35clofun2944, 1, _35val2917);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg2918;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2905 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2905) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2906 = primIsCons(exp);
if (True == _35reg2906) {
Obj _35reg2907 = primCar(exp);
Obj _35reg2908 = primEQ(_35reg2907, intern("quote"));
if (True == _35reg2908) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2909 = primCar(exp);
pushCont(co, 20, _35clofun2943, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg2909;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2913 = primIsCons(exp);
if (True == _35reg2913) {
Obj _35reg2914 = primCar(exp);
Obj _35reg2915 = primEQ(_35reg2914, intern("quote"));
if (True == _35reg2915) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2916 = primCar(exp);
pushCont(co, 1, _35clofun2944, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg2916;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label3:
{
Obj _35val2897 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2897) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2898 = primIsCons(exp);
if (True == _35reg2898) {
Obj _35reg2899 = primCar(exp);
Obj _35reg2900 = primEQ(_35reg2899, intern("quote"));
if (True == _35reg2900) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2901 = primCar(exp);
pushCont(co, 18, _35clofun2943, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg2901;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 2, _35clofun2944, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2881 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2881) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2882 = primIsCons(exp);
if (True == _35reg2882) {
Obj _35reg2883 = primCar(exp);
Obj _35reg2884 = primEQ(_35reg2883, intern("quote"));
if (True == _35reg2884) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2885 = primCar(exp);
pushCont(co, 14, _35clofun2943, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg2885;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
Obj _35reg2889 = primIsString(exp);
if (True == _35reg2889) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2890 = primIsCons(exp);
if (True == _35reg2890) {
Obj _35reg2891 = primCar(exp);
Obj _35reg2892 = primEQ(_35reg2891, intern("quote"));
if (True == _35reg2892) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2893 = primCar(exp);
pushCont(co, 16, _35clofun2943, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg2893;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 3, _35clofun2944, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("boolean?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label5:
{
Obj exp = __arg1;
Obj _35reg2880 = primIsSymbol(exp);
if (True == _35reg2880) {
__nargs = 2;
__arg0 = globalRef(intern("value"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 4, _35clofun2944, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("number?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2699 = __arg1;
Obj _35reg2704 = primSet(intern("cora/lib/toc.compile"), makeNative(3, _35clofun2939, 1, 0));
Obj _35reg2710 = primSet(intern("for-each"), makeNative(7, _35clofun2939, 2, 0));
Obj _35reg2717 = primSet(intern("cora/lib/toc.generate-jumptable"), makeNative(11, _35clofun2939, 3, 0));
Obj _35reg2738 = primSet(intern("cora/lib/toc.generate-toplevel-group"), makeNative(12, _35clofun2940, 2, 0));
Obj _35reg2745 = primSet(intern("cora/lib/toc.generate-c"), makeNative(0, _35clofun2941, 2, 0));
Obj _35reg2764 = primSet(intern("cora/lib/toc.handle-import-eagerly"), makeNative(4, _35clofun2941, 1, 0));
Obj _35reg2805 = primSet(intern("cora/lib/toc.split-type-and-code"), makeNative(11, _35clofun2941, 4, 0));
Obj _35reg2806 = primSet(intern("cora/lib/infer.*typecheck*"), False);
Obj _35reg2840 = primSet(intern("cora/lib/toc.preprocess"), makeNative(10, _35clofun2942, 1, 0));
Obj _35reg2847 = primSet(intern("cora/lib/toc.compile-to-c"), makeNative(17, _35clofun2942, 3, 0));
Obj _35reg2849 = primSet(intern("set"), makeNative(18, _35clofun2942, 2, 0));
Obj _35reg2851 = primSet(intern("car"), makeNative(19, _35clofun2942, 1, 0));
Obj _35reg2853 = primSet(intern("cdr"), makeNative(20, _35clofun2942, 1, 0));
Obj _35reg2855 = primSet(intern("cons"), makeNative(0, _35clofun2943, 2, 0));
Obj _35reg2857 = primSet(intern("cons"), makeNative(1, _35clofun2943, 2, 0));
Obj _35reg2859 = primSet(intern("+"), makeNative(2, _35clofun2943, 2, 0));
Obj _35reg2861 = primSet(intern("-"), makeNative(3, _35clofun2943, 2, 0));
Obj _35reg2863 = primSet(intern("*"), makeNative(4, _35clofun2943, 2, 0));
Obj _35reg2865 = primSet(intern("/"), makeNative(5, _35clofun2943, 2, 0));
Obj _35reg2867 = primSet(intern("="), makeNative(6, _35clofun2943, 2, 0));
Obj _35reg2869 = primSet(intern(">"), makeNative(7, _35clofun2943, 2, 0));
Obj _35reg2871 = primSet(intern("<"), makeNative(8, _35clofun2943, 2, 0));
Obj _35reg2873 = primSet(intern("gensym"), makeNative(9, _35clofun2943, 1, 0));
Obj _35reg2875 = primSet(intern("symbol?"), makeNative(10, _35clofun2943, 1, 0));
Obj _35reg2877 = primSet(intern("not"), makeNative(11, _35clofun2943, 1, 0));
Obj _35reg2879 = primSet(intern("string?"), makeNative(12, _35clofun2943, 1, 0));
Obj _35reg2920 = primSet(intern("cora/lib/toc.eval0"), makeNative(5, _35clofun2944, 1, 0));
__nargs = 2;
__arg1 = _35reg2920;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val1206 = __arg1;
Obj _35reg1221 = primSet(intern("cora/lib/toc.assq"), makeNative(3, _35clofun2921, 2, 0));
Obj _35reg1227 = primSet(intern("cora/lib/toc.foldl"), makeNative(7, _35clofun2921, 3, 0));
Obj _35reg1237 = primSet(intern("cora/lib/toc.pos-in-list0"), makeNative(11, _35clofun2921, 3, 0));
Obj _35reg1238 = primSet(intern("cora/lib/toc.index"), makeNative(12, _35clofun2921, 2, 0));
Obj _35reg1245 = primSet(intern("cora/lib/toc.exist-in-env"), makeNative(16, _35clofun2921, 2, 0));
Obj _35reg1246 = primCons(intern("primSet"), Nil);
Obj _35reg1247 = primCons(makeNumber(2), _35reg1246);
Obj _35reg1248 = primCons(intern("set"), _35reg1247);
Obj _35reg1249 = primCons(intern("primCar"), Nil);
Obj _35reg1250 = primCons(makeNumber(1), _35reg1249);
Obj _35reg1251 = primCons(intern("car"), _35reg1250);
Obj _35reg1252 = primCons(intern("primCdr"), Nil);
Obj _35reg1253 = primCons(makeNumber(1), _35reg1252);
Obj _35reg1254 = primCons(intern("cdr"), _35reg1253);
Obj _35reg1255 = primCons(intern("primCons"), Nil);
Obj _35reg1256 = primCons(makeNumber(2), _35reg1255);
Obj _35reg1257 = primCons(intern("cons"), _35reg1256);
Obj _35reg1258 = primCons(intern("primIsCons"), Nil);
Obj _35reg1259 = primCons(makeNumber(1), _35reg1258);
Obj _35reg1260 = primCons(intern("cons?"), _35reg1259);
Obj _35reg1261 = primCons(intern("primAdd"), Nil);
Obj _35reg1262 = primCons(makeNumber(2), _35reg1261);
Obj _35reg1263 = primCons(intern("+"), _35reg1262);
Obj _35reg1264 = primCons(intern("primSub"), Nil);
Obj _35reg1265 = primCons(makeNumber(2), _35reg1264);
Obj _35reg1266 = primCons(intern("-"), _35reg1265);
Obj _35reg1267 = primCons(intern("primMul"), Nil);
Obj _35reg1268 = primCons(makeNumber(2), _35reg1267);
Obj _35reg1269 = primCons(intern("*"), _35reg1268);
Obj _35reg1270 = primCons(intern("primDiv"), Nil);
Obj _35reg1271 = primCons(makeNumber(2), _35reg1270);
Obj _35reg1272 = primCons(intern("/"), _35reg1271);
Obj _35reg1273 = primCons(intern("primEQ"), Nil);
Obj _35reg1274 = primCons(makeNumber(2), _35reg1273);
Obj _35reg1275 = primCons(intern("="), _35reg1274);
Obj _35reg1276 = primCons(intern("primGT"), Nil);
Obj _35reg1277 = primCons(makeNumber(2), _35reg1276);
Obj _35reg1278 = primCons(intern(">"), _35reg1277);
Obj _35reg1279 = primCons(intern("primLT"), Nil);
Obj _35reg1280 = primCons(makeNumber(2), _35reg1279);
Obj _35reg1281 = primCons(intern("<"), _35reg1280);
Obj _35reg1282 = primCons(intern("primGenSym"), Nil);
Obj _35reg1283 = primCons(makeNumber(1), _35reg1282);
Obj _35reg1284 = primCons(intern("gensym"), _35reg1283);
Obj _35reg1285 = primCons(intern("primIsSymbol"), Nil);
Obj _35reg1286 = primCons(makeNumber(1), _35reg1285);
Obj _35reg1287 = primCons(intern("symbol?"), _35reg1286);
Obj _35reg1288 = primCons(intern("primNot"), Nil);
Obj _35reg1289 = primCons(makeNumber(1), _35reg1288);
Obj _35reg1290 = primCons(intern("not"), _35reg1289);
Obj _35reg1291 = primCons(intern("primIsNumber"), Nil);
Obj _35reg1292 = primCons(makeNumber(1), _35reg1291);
Obj _35reg1293 = primCons(intern("integer?"), _35reg1292);
Obj _35reg1294 = primCons(intern("primIsString"), Nil);
Obj _35reg1295 = primCons(makeNumber(1), _35reg1294);
Obj _35reg1296 = primCons(intern("string?"), _35reg1295);
Obj _35reg1297 = primCons(_35reg1296, Nil);
Obj _35reg1298 = primCons(_35reg1293, _35reg1297);
Obj _35reg1299 = primCons(_35reg1290, _35reg1298);
Obj _35reg1300 = primCons(_35reg1287, _35reg1299);
Obj _35reg1301 = primCons(_35reg1284, _35reg1300);
Obj _35reg1302 = primCons(_35reg1281, _35reg1301);
Obj _35reg1303 = primCons(_35reg1278, _35reg1302);
Obj _35reg1304 = primCons(_35reg1275, _35reg1303);
Obj _35reg1305 = primCons(_35reg1272, _35reg1304);
Obj _35reg1306 = primCons(_35reg1269, _35reg1305);
Obj _35reg1307 = primCons(_35reg1266, _35reg1306);
Obj _35reg1308 = primCons(_35reg1263, _35reg1307);
Obj _35reg1309 = primCons(_35reg1260, _35reg1308);
Obj _35reg1310 = primCons(_35reg1257, _35reg1309);
Obj _35reg1311 = primCons(_35reg1254, _35reg1310);
Obj _35reg1312 = primCons(_35reg1251, _35reg1311);
Obj _35reg1313 = primCons(_35reg1248, _35reg1312);
Obj _35reg1314 = primSet(intern("cora/lib/toc.*builtin-prims*"), _35reg1313);
Obj _35reg1318 = primSet(intern("builtin?"), makeNative(19, _35clofun2921, 1, 0));
Obj _35reg1321 = primSet(intern("cora/lib/toc.builtin->name"), makeNative(1, _35clofun2922, 1, 0));
Obj _35reg1324 = primSet(intern("cora/lib/toc.builtin->args"), makeNative(4, _35clofun2922, 1, 0));
Obj _35reg1329 = primSet(intern("cora/lib/toc.temp-list"), makeNative(7, _35clofun2922, 2, 0));
Obj _35reg1465 = primSet(intern("cora/lib/toc.parse"), makeNative(16, _35clofun2923, 2, 0));
Obj _35reg1476 = primSet(intern("cora/lib/toc.union"), makeNative(1, _35clofun2924, 2, 0));
Obj _35reg1487 = primSet(intern("cora/lib/toc.diff"), makeNative(7, _35clofun2924, 2, 0));
Obj _35reg1538 = primSet(intern("cora/lib/toc.convert-protect?"), makeNative(14, _35clofun2924, 1, 0));
Obj _35reg1713 = primSet(intern("cora/lib/toc.free-vars"), makeNative(16, _35clofun2925, 1, 0));
Obj _35reg1786 = primSet(intern("cora/lib/toc.closure-convert"), makeNative(10, _35clofun2926, 2, 0));
Obj _35reg1789 = primSet(intern("cora/lib/toc.id"), makeNative(11, _35clofun2926, 1, 0));
Obj _35reg1926 = primSet(intern("cora/lib/toc.tailify"), makeNative(8, _35clofun2927, 2, 0));
Obj _35reg1973 = primSet(intern("cora/lib/toc.tailify-list"), makeNative(18, _35clofun2927, 3, 0));
Obj _35reg2052 = primSet(intern("cora/lib/toc.explicit-stack"), makeNative(15, _35clofun2928, 2, 0));
Obj _35reg2228 = primSet(intern("cora/lib/toc.collect-lambda"), makeNative(8, _35clofun2930, 2, 0));
Obj _35reg2241 = primSet(intern("cora/lib/toc.append-result"), makeNative(14, _35clofun2930, 5, 0));
Obj _35reg2248 = primSet(intern("cora/lib/toc.wrap-var"), makeNative(16, _35clofun2930, 2, 0));
Obj _35reg2268 = primSet(intern("cora/lib/toc.generate-call-list"), makeNative(9, _35clofun2931, 4, 0));
Obj _35reg2535 = primSet(intern("cora/lib/toc.generate-inst"), makeNative(10, _35clofun2935, 4, 0));
Obj _35reg2558 = primSet(intern("cora/lib/toc.generate-cont"), makeNative(2, _35clofun2936, 3, 0));
Obj _35reg2567 = primSet(intern("cora/lib/toc.generate-inst-list-h"), makeNative(8, _35clofun2936, 5, 0));
Obj _35reg2568 = primSet(intern("cora/lib/toc.generate-inst-list"), makeNative(9, _35clofun2936, 4, 0));
Obj _35reg2573 = primSet(intern("cora/lib/toc.code-gen-func-declare"), makeNative(13, _35clofun2936, 2, 0));
Obj _35reg2581 = primSet(intern("cora/lib/toc.local-from-params"), makeNative(20, _35clofun2936, 3, 0));
Obj _35reg2586 = primSet(intern("cora/lib/toc.local-from-cont"), makeNative(4, _35clofun2937, 3, 0));
Obj _35reg2593 = primSet(intern("cora/lib/toc.generate-call-args-reverse"), makeNative(8, _35clofun2937, 4, 0));
Obj _35reg2655 = primSet(intern("cora/lib/toc.code-gen-toplevel"), makeNative(19, _35clofun2937, 2, 0));
Obj _35reg2656 = primSet(intern("cora/lib/toc.parse-pass"), makeNative(20, _35clofun2937, 1, 0));
Obj _35reg2657 = primSet(intern("cora/lib/toc.closure-convert-pass"), makeNative(0, _35clofun2938, 1, 0));
Obj _35reg2658 = primSet(intern("cora/lib/toc.tailify-pass"), makeNative(1, _35clofun2938, 1, 0));
Obj _35reg2659 = primSet(intern("cora/lib/toc.explicit-stack-pass"), makeNative(2, _35clofun2938, 1, 0));
Obj _35reg2689 = primSet(intern("cora/lib/toc.collect-lambda-pass"), makeNative(13, _35clofun2938, 1, 0));
Obj _35reg2696 = primSet(intern("cora/lib/toc.rewrite-->macro"), makeNative(16, _35clofun2938, 2, 0));
pushCont(co, 6, _35clofun2944, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("->");
__arg2 = makeNative(19, _35clofun2938, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val1205 = __arg1;
pushCont(co, 7, _35clofun2944, 0);
__nargs = 2;
__arg0 = globalRef(intern("import"));
__arg1 = makeString1("cora/lib/io");
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
Obj _35tmp1184 = __arg1;
Obj _35tmp1183 = __arg2;
Obj _35reg2854 = primCons(_35tmp1184, _35tmp1183);
__nargs = 2;
__arg1 = _35reg2854;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35tmp1186 = __arg1;
Obj _35tmp1185 = __arg2;
Obj _35reg2856 = primCons(_35tmp1186, _35tmp1185);
__nargs = 2;
__arg1 = _35reg2856;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35tmp1188 = __arg1;
Obj _35tmp1187 = __arg2;
Obj _35reg2858 = primAdd(_35tmp1188, _35tmp1187);
__nargs = 2;
__arg1 = _35reg2858;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35tmp1190 = __arg1;
Obj _35tmp1189 = __arg2;
Obj _35reg2860 = primSub(_35tmp1190, _35tmp1189);
__nargs = 2;
__arg1 = _35reg2860;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35tmp1192 = __arg1;
Obj _35tmp1191 = __arg2;
Obj _35reg2862 = primMul(_35tmp1192, _35tmp1191);
__nargs = 2;
__arg1 = _35reg2862;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35tmp1194 = __arg1;
Obj _35tmp1193 = __arg2;
Obj _35reg2864 = primDiv(_35tmp1194, _35tmp1193);
__nargs = 2;
__arg1 = _35reg2864;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35tmp1196 = __arg1;
Obj _35tmp1195 = __arg2;
Obj _35reg2866 = primEQ(_35tmp1196, _35tmp1195);
__nargs = 2;
__arg1 = _35reg2866;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35tmp1198 = __arg1;
Obj _35tmp1197 = __arg2;
Obj _35reg2868 = primGT(_35tmp1198, _35tmp1197);
__nargs = 2;
__arg1 = _35reg2868;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35tmp1200 = __arg1;
Obj _35tmp1199 = __arg2;
Obj _35reg2870 = primLT(_35tmp1200, _35tmp1199);
__nargs = 2;
__arg1 = _35reg2870;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35tmp1201 = __arg1;
Obj _35reg2872 = primGenSym(_35tmp1201);
__nargs = 2;
__arg1 = _35reg2872;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35tmp1202 = __arg1;
Obj _35reg2874 = primIsSymbol(_35tmp1202);
__nargs = 2;
__arg1 = _35reg2874;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35tmp1203 = __arg1;
Obj _35reg2876 = primNot(_35tmp1203);
__nargs = 2;
__arg1 = _35reg2876;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35tmp1204 = __arg1;
Obj _35reg2878 = primIsString(_35tmp1204);
__nargs = 2;
__arg1 = _35reg2878;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val2888 = __arg1;
Obj _35val2886= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val2886;
__arg2 = _35val2888;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2886 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2887 = primCdr(exp);
pushCont(co, 13, _35clofun2943, 1, _35val2886);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg2887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2896 = __arg1;
Obj _35val2894= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val2894;
__arg2 = _35val2896;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2894 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2895 = primCdr(exp);
pushCont(co, 15, _35clofun2943, 1, _35val2894);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg2895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2904 = __arg1;
Obj _35val2902= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val2902;
__arg2 = _35val2904;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2902 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2903 = primCdr(exp);
pushCont(co, 17, _35clofun2943, 1, _35val2902);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg2903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2912 = __arg1;
Obj _35val2910= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val2910;
__arg2 = _35val2912;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2910 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2911 = primCdr(exp);
pushCont(co, 19, _35clofun2943, 1, _35val2910);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg2911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj _35val2827 = __arg1;
Obj _35reg2828 = primCons(intern("begin"), _35val2827);
__nargs = 2;
__arg1 = _35reg2828;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 0, _35clofun2942, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2829 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg2829;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label2:
{
Obj _35val2826 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(1, _35clofun2942, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2832 = __arg1;
Obj _35reg2833 = primCons(intern("begin"), _35val2832);
__nargs = 2;
__arg1 = _35reg2833;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 3, _35clofun2942, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2834 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg2834;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label5:
{
Obj _35val2831 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(4, _35clofun2942, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2837 = __arg1;
Obj _35reg2838 = primCons(intern("begin"), _35val2837);
__nargs = 2;
__arg1 = _35reg2838;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 6, _35clofun2942, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2839 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg2839;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label8:
{
Obj _35val2836 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(7, _35clofun2942, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2807 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2807) {
Obj _35reg2808 = primCar(sexp);
Obj _35reg2809 = primEQ(intern("begin"), _35reg2808);
if (True == _35reg2809) {
if (True == True) {
Obj _35reg2810 = primCdr(sexp);
Obj sexp1 = _35reg2810;
pushCont(co, 14, _35clofun2941, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2815 = primCons(sexp, Nil);
Obj sexp1 = _35reg2815;
pushCont(co, 17, _35clofun2941, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2820 = primCdr(sexp);
Obj sexp1 = _35reg2820;
pushCont(co, 20, _35clofun2941, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2825 = primCons(sexp, Nil);
Obj sexp1 = _35reg2825;
pushCont(co, 2, _35clofun2942, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg2830 = primCdr(sexp);
Obj sexp1 = _35reg2830;
pushCont(co, 5, _35clofun2942, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2835 = primCons(sexp, Nil);
Obj sexp1 = _35reg2835;
pushCont(co, 8, _35clofun2942, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label10:
{
Obj sexp = __arg1;
pushCont(co, 9, _35clofun2942, 1, sexp);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2846 = __arg1;
Obj stream= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.close-output-file"));
__arg1 = stream;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2845 = __arg1;
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stream = _35val2845;
pushCont(co, 11, _35clofun2942, 1, stream);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.generate-c"));
__arg1 = stream;
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2844 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc = _35val2844;
pushCont(co, 12, _35clofun2942, 1, bc);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.open-output-file"));
__arg1 = to;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2843 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj input = _35val2843;
pushCont(co, 13, _35clofun2942, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.compile"));
__arg1 = input;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2842 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj sexp1 = _35val2842;
pushCont(co, 14, _35clofun2942, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2841 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj sexp = _35val2841;
pushCont(co, 15, _35clofun2942, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.preprocess"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj from = __arg1;
Obj to = __arg2;
Obj pkg_45str = __arg3;
pushCont(co, 16, _35clofun2942, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("read-file-as-sexp"));
__arg1 = from;
__arg2 = pkg_45str;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35tmp1180 = __arg1;
Obj _35tmp1179 = __arg2;
Obj _35reg2848 = primSet(_35tmp1180, _35tmp1179);
__nargs = 2;
__arg1 = _35reg2848;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35tmp1181 = __arg1;
Obj _35reg2850 = primCar(_35tmp1181);
__nargs = 2;
__arg1 = _35reg2850;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35tmp1182 = __arg1;
Obj _35reg2852 = primCdr(_35tmp1182);
__nargs = 2;
__arg1 = _35reg2852;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
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
Obj to = __arg1;
Obj bc = __arg2;
pushCont(co, 20, _35clofun2940, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("#include \"types.h\"\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc1170 = makeNative(1, _35clofun2941, 0, 0);
Obj __ = closureRef(co, 0);
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2763 = __arg1;
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35p1168 = __arg1;
Obj _35cc1169 = makeNative(2, _35clofun2941, 0, 1, _35p1168);
Obj _35reg2746 = primIsCons(_35p1168);
if (True == _35reg2746) {
Obj _35reg2747 = primCar(_35p1168);
Obj _35reg2748 = primIsCons(_35reg2747);
if (True == _35reg2748) {
Obj _35reg2749 = primCar(_35p1168);
Obj _35reg2750 = primCar(_35reg2749);
Obj _35reg2751 = primEQ(intern("import"), _35reg2750);
if (True == _35reg2751) {
Obj _35reg2752 = primCar(_35p1168);
Obj _35reg2753 = primCdr(_35reg2752);
Obj _35reg2754 = primIsCons(_35reg2753);
if (True == _35reg2754) {
Obj _35reg2755 = primCar(_35p1168);
Obj _35reg2756 = primCdr(_35reg2755);
Obj _35reg2757 = primCar(_35reg2756);
Obj pkg = _35reg2757;
Obj _35reg2758 = primCar(_35p1168);
Obj _35reg2759 = primCdr(_35reg2758);
Obj _35reg2760 = primCdr(_35reg2759);
Obj _35reg2761 = primEQ(Nil, _35reg2760);
if (True == _35reg2761) {
Obj _35reg2762 = primCdr(_35p1168);
Obj remain = _35reg2762;
pushCont(co, 3, _35clofun2941, 1, remain);
__nargs = 2;
__arg0 = globalRef(intern("import"));
__arg1 = pkg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1169;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1169;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1169;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1169;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1169;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1178 = makeNative(5, _35clofun2941, 0, 0);
Obj _35reg2765 = primIsCons(closureRef(co, 0));
if (True == _35reg2765) {
Obj _35reg2766 = primCar(closureRef(co, 0));
Obj exp = _35reg2766;
Obj _35reg2767 = primCdr(closureRef(co, 0));
Obj more = _35reg2767;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg2768 = primCons(exp, Nil);
Obj _35reg2769 = primCons(intern("backquote"), _35reg2768);
Obj _35reg2770 = primCons(_35reg2769, Nil);
Obj _35reg2771 = primCons(intern("macroexpand"), _35reg2770);
Obj _35reg2772 = primCons(intern("tvar"), Nil);
Obj _35reg2773 = primCons(Nil, Nil);
Obj _35reg2774 = primCons(Nil, _35reg2773);
Obj _35reg2775 = primCons(_35reg2772, _35reg2774);
Obj _35reg2776 = primCons(_35reg2771, _35reg2775);
Obj _35reg2777 = primCons(intern("cora/lib/infer.check-type"), _35reg2776);
Obj _35reg2778 = primCons(_35reg2777, type);
Obj _35reg2779 = primCons(exp, code);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = more;
__arg2 = _35reg2778;
__arg3 = _35reg2779;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1178;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc1177 = makeNative(6, _35clofun2941, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg2780 = primIsCons(closureRef(co, 0));
if (True == _35reg2780) {
Obj _35reg2781 = primCar(closureRef(co, 0));
Obj _35reg2782 = primIsCons(_35reg2781);
if (True == _35reg2782) {
Obj _35reg2783 = primCar(closureRef(co, 0));
Obj _35reg2784 = primCar(_35reg2783);
Obj _35reg2785 = primEQ(intern(":declare"), _35reg2784);
if (True == _35reg2785) {
Obj _35reg2786 = primCar(closureRef(co, 0));
Obj _35reg2787 = primCdr(_35reg2786);
Obj exp = _35reg2787;
Obj _35reg2788 = primCdr(closureRef(co, 0));
Obj more = _35reg2788;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg2789 = primCons(intern("declare"), exp);
Obj _35reg2790 = primCons(_35reg2789, type);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = more;
__arg2 = _35reg2790;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1177;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1177;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1177;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35cc1176 = makeNative(7, _35clofun2941, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg2791 = primIsCons(closureRef(co, 0));
if (True == _35reg2791) {
Obj _35reg2792 = primCar(closureRef(co, 0));
Obj _35reg2793 = primIsCons(_35reg2792);
if (True == _35reg2793) {
Obj _35reg2794 = primCar(closureRef(co, 0));
Obj _35reg2795 = primCar(_35reg2794);
Obj _35reg2796 = primEQ(intern(":type"), _35reg2795);
if (True == _35reg2796) {
Obj _35reg2797 = primCar(closureRef(co, 0));
Obj _35reg2798 = primCdr(_35reg2797);
Obj exp = _35reg2798;
Obj _35reg2799 = primCdr(closureRef(co, 0));
Obj more = _35reg2799;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg2800 = primCons(intern("begin"), exp);
Obj _35reg2801 = primCons(_35reg2800, type);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = more;
__arg2 = _35reg2801;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1176;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1176;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1176;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val2804 = __arg1;
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2803= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = k;
__arg1 = _35val2803;
__arg2 = _35val2804;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2803 = __arg1;
Obj code= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun2941, 2, k, _35val2803);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35p1171 = __arg1;
Obj _35p1172 = __arg2;
Obj _35p1173 = __arg3;
Obj _35p1174 = co->args[4];
Obj _35cc1175 = makeNative(8, _35clofun2941, 0, 4, _35p1171, _35p1172, _35p1173, _35p1174);
Obj _35reg2802 = primEQ(Nil, _35p1171);
if (True == _35reg2802) {
Obj type = _35p1172;
Obj code = _35p1173;
Obj k = _35p1174;
pushCont(co, 10, _35clofun2941, 2, code, k);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = type;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val2812 = __arg1;
Obj _35reg2813 = primCons(intern("begin"), _35val2812);
__nargs = 2;
__arg1 = _35reg2813;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 12, _35clofun2941, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2814 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg2814;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label14:
{
Obj _35val2811 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(13, _35clofun2941, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2817 = __arg1;
Obj _35reg2818 = primCons(intern("begin"), _35val2817);
__nargs = 2;
__arg1 = _35reg2818;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 15, _35clofun2941, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2819 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg2819;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label17:
{
Obj _35val2816 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(16, _35clofun2941, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2822 = __arg1;
Obj _35reg2823 = primCons(intern("begin"), _35val2822);
__nargs = 2;
__arg1 = _35reg2823;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 18, _35clofun2941, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2824 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg2824;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label20:
{
Obj _35val2821 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(19, _35clofun2941, 2, 0);
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
Obj _35val2729 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 20, _35clofun2939, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("goto *jumpTable[co->ctx.pc.label];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2728 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun2940, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("};\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2727 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun2940, 2, group, to);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.generate-jumptable"));
__arg1 = to;
__arg2 = makeNumber(0);
__arg3 = _35val2727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2726 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun2940, 2, group, to);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2725 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 3, _35clofun2940, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("static void* jumpTable[] = {");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2724 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun2940, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("Obj __arg3 = co->args[3];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2723 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun2940, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("Obj __arg2 = co->args[2];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2722 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun2940, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("Obj __arg1 = co->args[1];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2721 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun2940, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("Obj __arg0 = co->args[0];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2720 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun2940, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("int __nargs = co->nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2719 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun2940, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2718 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun2940, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.code-gen-func-declare"));
__arg1 = to;
__arg2 = _35val2718;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj to = __arg1;
Obj group = __arg2;
pushCont(co, 11, _35clofun2940, 2, group, to);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2742 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = closureRef(co, 0);
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2741 = __arg1;
pushCont(co, 13, _35clofun2940, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.code-gen-func-declare"));
__arg1 = closureRef(co, 0);
__arg2 = _35val2741;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj group = __arg1;
pushCont(co, 14, _35clofun2940, 0);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj group = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.generate-toplevel-group"));
__arg1 = closureRef(co, 0);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2744 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(16, _35clofun2940, 1, 1, to);
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2743 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun2940, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2740 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 18, _35clofun2940, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(15, _35clofun2940, 1, 1, to);
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2739 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun2940, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("#include \"runtime.h\"\n\n");
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
Obj _35val2702 = __arg1;
pushCont(co, 20, _35clofun2938, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack-pass"));
__arg1 = _35val2702;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2701 = __arg1;
pushCont(co, 0, _35clofun2939, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.tailify-pass"));
__arg1 = _35val2701;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2700 = __arg1;
pushCont(co, 1, _35clofun2939, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert-pass"));
__arg1 = _35val2700;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp = __arg1;
pushCont(co, 2, _35clofun2939, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.parse-pass"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2708 = __arg1;
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = fn;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1167 = makeNative(4, _35clofun2939, 0, 0);
Obj fn = closureRef(co, 0);
Obj _35reg2705 = primIsCons(closureRef(co, 1));
if (True == _35reg2705) {
Obj _35reg2706 = primCar(closureRef(co, 1));
Obj x = _35reg2706;
Obj _35reg2707 = primCdr(closureRef(co, 1));
Obj y = _35reg2707;
pushCont(co, 5, _35clofun2939, 2, fn, y);
__nargs = 2;
__arg0 = fn;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p1164 = __arg1;
Obj _35p1165 = __arg2;
Obj _35cc1166 = makeNative(6, _35clofun2939, 0, 2, _35p1164, _35p1165);
Obj fn = _35p1164;
Obj _35reg2709 = primEQ(Nil, _35p1165);
if (True == _35reg2709) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1166;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val2712 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.generate-jumptable"));
__arg1 = to;
__arg2 = makeNumber(1);
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2715 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2716 = primAdd(i, makeNumber(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.generate-jumptable"));
__arg1 = to;
__arg2 = _35reg2716;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2714 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 9, _35clofun2939, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = to;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj to = __arg1;
Obj i = __arg2;
Obj n = __arg3;
Obj _35reg2711 = primEQ(i, makeNumber(0));
if (True == _35reg2711) {
pushCont(co, 8, _35clofun2939, 2, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("&&label0");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2713 = primLT(i, n);
if (True == _35reg2713) {
pushCont(co, 10, _35clofun2939, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1(", &&label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label12:
{
Obj x = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.code-gen-toplevel"));
__arg1 = closureRef(co, 0);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2737 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("\n}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2736 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 13, _35clofun2939, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->args[3] = __arg3;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2735 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 14, _35clofun2939, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->args[2] = __arg2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2734 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 15, _35clofun2939, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->args[1] = __arg1;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2733 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 16, _35clofun2939, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->args[0] = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2732 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 17, _35clofun2939, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->nargs = __nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2731 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun2939, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("fail:\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2730 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun2939, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(12, _35clofun2939, 1, 1, to);
__arg2 = group;
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
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = exp;
__arg2 = globalRef(intern("cora/lib/toc.id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2667 = __arg1;
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res = _35val2667;
Obj _35reg2668 = primCons(intern("entry"), makeNumber(0));
Obj _35reg2669 = primCons(e1, Nil);
Obj _35reg2670 = primCons(Nil, _35reg2669);
Obj _35reg2671 = primCons(Nil, _35reg2670);
Obj _35reg2672 = primCons(intern("lambda"), _35reg2671);
Obj _35reg2673 = primCons(_35reg2672, Nil);
Obj _35reg2674 = primCons(_35reg2668, _35reg2673);
Obj _35reg2675 = primCons(_35reg2674, Nil);
Obj _35reg2676 = primCons(_35reg2675, res);
__nargs = 2;
__arg1 = _35reg2676;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val2678 = __arg1;
Obj _35val2677= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2679 = primCons(_35val2677, _35val2678);
Obj res = _35reg2679;
Obj _35reg2680 = primCons(intern("entry"), makeNumber(0));
Obj _35reg2681 = primCons(e1, Nil);
Obj _35reg2682 = primCons(Nil, _35reg2681);
Obj _35reg2683 = primCons(Nil, _35reg2682);
Obj _35reg2684 = primCons(intern("lambda"), _35reg2683);
Obj _35reg2685 = primCons(_35reg2684, Nil);
Obj _35reg2686 = primCons(_35reg2680, _35reg2685);
Obj _35reg2687 = primCons(_35reg2686, Nil);
Obj _35reg2688 = primCons(_35reg2687, res);
__nargs = 2;
__arg1 = _35reg2688;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val2677 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun2938, 2, _35val2677, e1);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2666 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2666) {
pushCont(co, 3, _35clofun2938, 1, e1);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 5, _35clofun2938, 2, v, e1);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2665 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur = _35val2665;
pushCont(co, 6, _35clofun2938, 3, cur, v, e1);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2664 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1 = _35val2664;
pushCont(co, 7, _35clofun2938, 2, v, e1);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2663 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun2938, 1, v);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = v;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2662 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun2938, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(2);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2661 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun2938, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2660 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v = _35val2660;
pushCont(co, 11, _35clofun2938, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj exp = __arg1;
pushCont(co, 12, _35clofun2938, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("vector"));
__arg1 = makeNumber(3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc1163 = makeNative(14, _35clofun2938, 0, 0);
Obj obj = closureRef(co, 0);
Obj _35reg2690 = primIsCons(closureRef(co, 1));
if (True == _35reg2690) {
Obj _35reg2691 = primCar(closureRef(co, 1));
Obj hd = _35reg2691;
Obj _35reg2692 = primCdr(closureRef(co, 1));
Obj more = _35reg2692;
Obj _35reg2693 = primCons(obj, Nil);
Obj _35reg2694 = primCons(hd, _35reg2693);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.rewrite-->macro"));
__arg1 = _35reg2694;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1163;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35p1160 = __arg1;
Obj _35p1161 = __arg2;
Obj _35cc1162 = makeNative(15, _35clofun2938, 0, 2, _35p1160, _35p1161);
Obj obj = _35p1160;
Obj _35reg2695 = primEQ(Nil, _35p1161);
if (True == _35reg2695) {
__nargs = 2;
__arg1 = obj;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1162;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2698 = __arg1;
Obj obj= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fns = _35val2698;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.rewrite-->macro"));
__arg1 = obj;
__arg2 = fns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2697 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj obj = _35val2697;
pushCont(co, 17, _35clofun2938, 1, obj);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj exp = __arg1;
pushCont(co, 18, _35clofun2938, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2703 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda-pass"));
__arg1 = _35val2703;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2937(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2585 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2584 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun2937, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2583 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun2937, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("= co->ctx.stk.stack[co->ctx.stk.base + ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2582 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 2, _35clofun2937, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 3, _35clofun2937, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2590 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2591 = primAdd(idx, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-args-reverse"));
__arg1 = fn;
__arg2 = w;
__arg3 = _35reg2591;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc1155 = makeNative(5, _35clofun2937, 0, 0);
Obj fn = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj idx = closureRef(co, 2);
Obj _35reg2587 = primIsCons(closureRef(co, 3));
if (True == _35reg2587) {
Obj _35reg2588 = primCar(closureRef(co, 3));
Obj a = _35reg2588;
Obj _35reg2589 = primCdr(closureRef(co, 3));
Obj b = _35reg2589;
pushCont(co, 6, _35clofun2937, 4, idx, fn, w, b);
__nargs = 4;
__arg0 = fn;
__arg1 = w;
__arg2 = idx;
__arg3 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1155;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35p1150 = __arg1;
Obj _35p1151 = __arg2;
Obj _35p1152 = __arg3;
Obj _35p1153 = co->args[4];
Obj _35cc1154 = makeNative(7, _35clofun2937, 0, 4, _35p1150, _35p1151, _35p1152, _35p1153);
Obj fn = _35p1150;
Obj w = _35p1151;
Obj idx = _35p1152;
Obj _35reg2592 = primEQ(Nil, _35p1153);
if (True == _35reg2592) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2937) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1154;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2595 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.display"));
__arg1 = makeString1("\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2594 = __arg1;
Obj other= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 10, _35clofun2937, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.display"));
__arg1 = other;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc1159 = makeNative(9, _35clofun2937, 0, 0);
Obj w = closureRef(co, 0);
Obj other = closureRef(co, 1);
pushCont(co, 11, _35clofun2937, 1, other);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.display"));
__arg1 = makeString1("wrong format of toplevel\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2654 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2652 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2653 = primCar(label);
pushCont(co, 13, _35clofun2937, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = _35reg2653;
__arg2 = params;
__arg3 = w;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2651 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 14, _35clofun2937, 4, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc.local-from-cont"));
__arg2 = w;
__arg3 = makeNumber(0);
co->args[4] = actives;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2650 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 15, _35clofun2937, 5, actives, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc.local-from-params"));
__arg2 = w;
__arg3 = makeNumber(1);
co->args[4] = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2649 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 16, _35clofun2937, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2647 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2648 = primCdr(label);
pushCont(co, 17, _35clofun2937, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35reg2648;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35p1156 = __arg1;
Obj _35p1157 = __arg2;
Obj _35cc1158 = makeNative(12, _35clofun2937, 0, 2, _35p1156, _35p1157);
Obj w = _35p1156;
Obj _35reg2596 = primIsCons(_35p1157);
if (True == _35reg2596) {
Obj _35reg2597 = primCar(_35p1157);
Obj label = _35reg2597;
Obj _35reg2598 = primCdr(_35p1157);
Obj _35reg2599 = primIsCons(_35reg2598);
if (True == _35reg2599) {
Obj _35reg2600 = primCdr(_35p1157);
Obj _35reg2601 = primCar(_35reg2600);
Obj _35reg2602 = primIsCons(_35reg2601);
if (True == _35reg2602) {
Obj _35reg2603 = primCdr(_35p1157);
Obj _35reg2604 = primCar(_35reg2603);
Obj _35reg2605 = primCar(_35reg2604);
Obj _35reg2606 = primEQ(intern("lambda"), _35reg2605);
if (True == _35reg2606) {
Obj _35reg2607 = primCdr(_35p1157);
Obj _35reg2608 = primCar(_35reg2607);
Obj _35reg2609 = primCdr(_35reg2608);
Obj _35reg2610 = primIsCons(_35reg2609);
if (True == _35reg2610) {
Obj _35reg2611 = primCdr(_35p1157);
Obj _35reg2612 = primCar(_35reg2611);
Obj _35reg2613 = primCdr(_35reg2612);
Obj _35reg2614 = primCar(_35reg2613);
Obj params = _35reg2614;
Obj _35reg2615 = primCdr(_35p1157);
Obj _35reg2616 = primCar(_35reg2615);
Obj _35reg2617 = primCdr(_35reg2616);
Obj _35reg2618 = primCdr(_35reg2617);
Obj _35reg2619 = primIsCons(_35reg2618);
if (True == _35reg2619) {
Obj _35reg2620 = primCdr(_35p1157);
Obj _35reg2621 = primCar(_35reg2620);
Obj _35reg2622 = primCdr(_35reg2621);
Obj _35reg2623 = primCdr(_35reg2622);
Obj _35reg2624 = primCar(_35reg2623);
Obj actives = _35reg2624;
Obj _35reg2625 = primCdr(_35p1157);
Obj _35reg2626 = primCar(_35reg2625);
Obj _35reg2627 = primCdr(_35reg2626);
Obj _35reg2628 = primCdr(_35reg2627);
Obj _35reg2629 = primCdr(_35reg2628);
Obj _35reg2630 = primIsCons(_35reg2629);
if (True == _35reg2630) {
Obj _35reg2631 = primCdr(_35p1157);
Obj _35reg2632 = primCar(_35reg2631);
Obj _35reg2633 = primCdr(_35reg2632);
Obj _35reg2634 = primCdr(_35reg2633);
Obj _35reg2635 = primCdr(_35reg2634);
Obj _35reg2636 = primCar(_35reg2635);
Obj body = _35reg2636;
Obj _35reg2637 = primCdr(_35p1157);
Obj _35reg2638 = primCar(_35reg2637);
Obj _35reg2639 = primCdr(_35reg2638);
Obj _35reg2640 = primCdr(_35reg2639);
Obj _35reg2641 = primCdr(_35reg2640);
Obj _35reg2642 = primCdr(_35reg2641);
Obj _35reg2643 = primEQ(Nil, _35reg2642);
if (True == _35reg2643) {
Obj _35reg2644 = primCdr(_35p1157);
Obj _35reg2645 = primCdr(_35reg2644);
Obj _35reg2646 = primEQ(Nil, _35reg2645);
if (True == _35reg2646) {
pushCont(co, 18, _35clofun2937, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1158;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1158;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1158;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1158;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1158;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1158;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1158;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1158;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1158;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2937) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2936(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2547 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 20, _35clofun2935, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2545 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2546 = primCdr(label);
pushCont(co, 0, _35clofun2936, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35reg2546;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35p1139 = __arg1;
Obj _35p1140 = __arg2;
Obj _35p1141 = __arg3;
Obj _35cc1142 = makeNative(11, _35clofun2935, 0, 0);
Obj self = _35p1139;
Obj w = _35p1140;
Obj _35reg2536 = primIsCons(_35p1141);
if (True == _35reg2536) {
Obj _35reg2537 = primCar(_35p1141);
Obj _35reg2538 = primEQ(intern("%continuation"), _35reg2537);
if (True == _35reg2538) {
Obj _35reg2539 = primCdr(_35p1141);
Obj _35reg2540 = primIsCons(_35reg2539);
if (True == _35reg2540) {
Obj _35reg2541 = primCdr(_35p1141);
Obj _35reg2542 = primCar(_35reg2541);
Obj label = _35reg2542;
Obj _35reg2543 = primCdr(_35p1141);
Obj _35reg2544 = primCdr(_35reg2543);
Obj stacks = _35reg2544;
pushCont(co, 1, _35clofun2936, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("pushCont(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2565 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst-list-h"));
__arg1 = self;
__arg2 = env;
__arg3 = fn;
co->args[4] = w;
co->args[5] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2563 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2564 = primNot(_35val2563);
if (True == _35reg2564) {
pushCont(co, 4, _35clofun2936, 5, self, env, fn, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst-list-h"));
__arg1 = self;
__arg2 = env;
__arg3 = fn;
co->args[4] = w;
co->args[5] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2562 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 5, _35clofun2936, 5, self, env, fn, w, b);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc1149 = makeNative(3, _35clofun2936, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj fn = closureRef(co, 2);
Obj w = closureRef(co, 3);
Obj _35reg2559 = primIsCons(closureRef(co, 4));
if (True == _35reg2559) {
Obj _35reg2560 = primCar(closureRef(co, 4));
Obj a = _35reg2560;
Obj _35reg2561 = primCdr(closureRef(co, 4));
Obj b = _35reg2561;
pushCont(co, 6, _35clofun2936, 5, self, env, fn, w, b);
__nargs = 5;
__arg0 = fn;
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1149;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35p1143 = __arg1;
Obj _35p1144 = __arg2;
Obj _35p1145 = __arg3;
Obj _35p1146 = co->args[4];
Obj _35p1147 = co->args[5];
Obj _35cc1148 = makeNative(7, _35clofun2936, 0, 5, _35p1143, _35p1144, _35p1145, _35p1146, _35p1147);
Obj self = _35p1143;
Obj env = _35p1144;
Obj fn = _35p1145;
Obj w = _35p1146;
Obj _35reg2566 = primEQ(Nil, _35p1147);
if (True == _35reg2566) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2936) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1148;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj self = __arg1;
Obj env = __arg2;
Obj w = __arg3;
Obj l = co->args[4];
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst-list-h"));
__arg1 = self;
__arg2 = env;
__arg3 = globalRef(intern("cora/lib/toc.generate-inst"));
co->args[4] = w;
co->args[5] = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2572 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2571 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 10, _35clofun2936, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("(struct Cora* co");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2569 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2570 = primCar(label);
pushCont(co, 11, _35clofun2936, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = _35reg2570;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj w = __arg1;
Obj label = __arg2;
pushCont(co, 12, _35clofun2936, 2, label, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("void ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2578 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2577 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun2936, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2580 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2579 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun2936, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2575 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2576 = primLT(i, makeNumber(4));
if (True == _35reg2576) {
pushCont(co, 15, _35clofun2936, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = __arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 17, _35clofun2936, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val2574 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 18, _35clofun2936, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 19, _35clofun2936, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2936) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2935(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2508 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2507 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun2935, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc1128 = makeNative(20, _35clofun2934, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2497 = primIsCons(closureRef(co, 3));
if (True == _35reg2497) {
Obj _35reg2498 = primCar(closureRef(co, 3));
Obj _35reg2499 = primEQ(intern("%stack-ref"), _35reg2498);
if (True == _35reg2499) {
Obj _35reg2500 = primCdr(closureRef(co, 3));
Obj _35reg2501 = primIsCons(_35reg2500);
if (True == _35reg2501) {
Obj _35reg2502 = primCdr(closureRef(co, 3));
Obj _35reg2503 = primCar(_35reg2502);
Obj idx = _35reg2503;
Obj _35reg2504 = primCdr(closureRef(co, 3));
Obj _35reg2505 = primCdr(_35reg2504);
Obj _35reg2506 = primEQ(Nil, _35reg2505);
if (True == _35reg2506) {
pushCont(co, 1, _35clofun2935, 2, idx, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("stackRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1128;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1128;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1128;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1128;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val2520 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2519 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 3, _35clofun2935, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc1127 = makeNative(2, _35clofun2935, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2509 = primIsCons(closureRef(co, 3));
if (True == _35reg2509) {
Obj _35reg2510 = primCar(closureRef(co, 3));
Obj _35reg2511 = primEQ(intern("%closure-ref"), _35reg2510);
if (True == _35reg2511) {
Obj _35reg2512 = primCdr(closureRef(co, 3));
Obj _35reg2513 = primIsCons(_35reg2512);
if (True == _35reg2513) {
Obj _35reg2514 = primCdr(closureRef(co, 3));
Obj _35reg2515 = primCar(_35reg2514);
Obj idx = _35reg2515;
Obj _35reg2516 = primCdr(closureRef(co, 3));
Obj _35reg2517 = primCdr(_35reg2516);
Obj _35reg2518 = primEQ(Nil, _35reg2517);
if (True == _35reg2518) {
pushCont(co, 4, _35clofun2935, 2, idx, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("closureRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2533 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("\"))");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2532 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 6, _35clofun2935, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = _35val2532;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2531 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun2935, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1126 = makeNative(5, _35clofun2935, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2521 = primIsCons(closureRef(co, 3));
if (True == _35reg2521) {
Obj _35reg2522 = primCar(closureRef(co, 3));
Obj _35reg2523 = primEQ(intern("%global"), _35reg2522);
if (True == _35reg2523) {
Obj _35reg2524 = primCdr(closureRef(co, 3));
Obj _35reg2525 = primIsCons(_35reg2524);
if (True == _35reg2525) {
Obj _35reg2526 = primCdr(closureRef(co, 3));
Obj _35reg2527 = primCar(_35reg2526);
Obj x = _35reg2527;
Obj _35reg2528 = primCdr(closureRef(co, 3));
Obj _35reg2529 = primCdr(_35reg2528);
Obj _35reg2530 = primEQ(Nil, _35reg2529);
if (True == _35reg2530) {
pushCont(co, 8, _35clofun2935, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("globalRef(intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1126;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1126;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1126;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1126;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p1121 = __arg1;
Obj _35p1122 = __arg2;
Obj _35p1123 = __arg3;
Obj _35p1124 = co->args[4];
Obj _35cc1125 = makeNative(9, _35clofun2935, 0, 4, _35p1121, _35p1122, _35p1123, _35p1124);
Obj self = _35p1121;
Obj env = _35p1122;
Obj w = _35p1123;
Obj x = _35p1124;
Obj _35reg2534 = primIsSymbol(x);
if (True == _35reg2534) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1125;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2556 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = closureRef(co, 0);
__arg2 = Nil;
__arg3 = closureRef(co, 1);
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x = __arg1;
pushCont(co, 12, _35clofun2935, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = closureRef(co, 1);
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2557 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2554 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2555 = primNot(_35val2554);
if (True == _35reg2555) {
pushCont(co, 14, _35clofun2935, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(13, _35clofun2935, 1, 2, self, w);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2553 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 15, _35clofun2935, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2552 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 16, _35clofun2935, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35val2552;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2551 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 17, _35clofun2935, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2550 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 18, _35clofun2935, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2548 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2549 = primCar(label);
pushCont(co, 19, _35clofun2935, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = _35reg2549;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2935) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2934(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2466 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2467 = primCons(a, env);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = _35reg2467;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2465 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 0, _35clofun2934, 5, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2464 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 1, _35clofun2934, 5, a, env, self, w, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2463 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 2, _35clofun2934, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2462 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 3, _35clofun2934, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2471 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2472 = primCons(a, env);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = _35reg2472;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2470 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 5, _35clofun2934, 5, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2469 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 6, _35clofun2934, 5, a, env, self, w, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2468 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 7, _35clofun2934, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2460 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj idx = _35val2460;
Obj _35reg2461 = primLT(idx, makeNumber(0));
if (True == _35reg2461) {
pushCont(co, 4, _35clofun2934, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
pushCont(co, 8, _35clofun2934, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc1130 = makeNative(20, _35clofun2933, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2434 = primIsCons(closureRef(co, 3));
if (True == _35reg2434) {
Obj _35reg2435 = primCar(closureRef(co, 3));
Obj _35reg2436 = primEQ(intern("let"), _35reg2435);
if (True == _35reg2436) {
Obj _35reg2437 = primCdr(closureRef(co, 3));
Obj _35reg2438 = primIsCons(_35reg2437);
if (True == _35reg2438) {
Obj _35reg2439 = primCdr(closureRef(co, 3));
Obj _35reg2440 = primCar(_35reg2439);
Obj a = _35reg2440;
Obj _35reg2441 = primCdr(closureRef(co, 3));
Obj _35reg2442 = primCdr(_35reg2441);
Obj _35reg2443 = primIsCons(_35reg2442);
if (True == _35reg2443) {
Obj _35reg2444 = primCdr(closureRef(co, 3));
Obj _35reg2445 = primCdr(_35reg2444);
Obj _35reg2446 = primCar(_35reg2445);
Obj b = _35reg2446;
Obj _35reg2447 = primCdr(closureRef(co, 3));
Obj _35reg2448 = primCdr(_35reg2447);
Obj _35reg2449 = primCdr(_35reg2448);
Obj _35reg2450 = primIsCons(_35reg2449);
if (True == _35reg2450) {
Obj _35reg2451 = primCdr(closureRef(co, 3));
Obj _35reg2452 = primCdr(_35reg2451);
Obj _35reg2453 = primCdr(_35reg2452);
Obj _35reg2454 = primCar(_35reg2453);
Obj c = _35reg2454;
Obj _35reg2455 = primCdr(closureRef(co, 3));
Obj _35reg2456 = primCdr(_35reg2455);
Obj _35reg2457 = primCdr(_35reg2456);
Obj _35reg2458 = primCdr(_35reg2457);
Obj _35reg2459 = primEQ(Nil, _35reg2458);
if (True == _35reg2459) {
pushCont(co, 9, _35clofun2934, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.index"));
__arg1 = a;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1130;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1130;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1130;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1130;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1130;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1130;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val2486 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2485 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 11, _35clofun2934, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = _35val2485;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2484 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun2934, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2489 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2488 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun2934, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2493 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2492 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 16, _35clofun2934, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = _35val2492;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2491 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun2934, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc/internal.escape-str"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2487 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2487) {
pushCont(co, 15, _35clofun2934, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("makeNumber(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2490 = primIsString(x);
if (True == _35reg2490) {
pushCont(co, 18, _35clofun2934, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("makeString1(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2494 = primEQ(x, Nil);
if (True == _35reg2494) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("Nil");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2495 = primEQ(x, True);
if (True == _35reg2495) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("True");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2496 = primEQ(x, False);
if (True == _35reg2496) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("False");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}
}
}

label20:
{
Obj _35cc1129 = makeNative(10, _35clofun2934, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2473 = primIsCons(closureRef(co, 3));
if (True == _35reg2473) {
Obj _35reg2474 = primCar(closureRef(co, 3));
Obj _35reg2475 = primEQ(intern("%const"), _35reg2474);
if (True == _35reg2475) {
Obj _35reg2476 = primCdr(closureRef(co, 3));
Obj _35reg2477 = primIsCons(_35reg2476);
if (True == _35reg2477) {
Obj _35reg2478 = primCdr(closureRef(co, 3));
Obj _35reg2479 = primCar(_35reg2478);
Obj x = _35reg2479;
Obj _35reg2480 = primCdr(closureRef(co, 3));
Obj _35reg2481 = primCdr(_35reg2480);
Obj _35reg2482 = primEQ(Nil, _35reg2481);
if (True == _35reg2482) {
Obj _35reg2483 = primIsSymbol(x);
if (True == _35reg2483) {
pushCont(co, 13, _35clofun2934, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, _35clofun2934, 2, x, w);
__nargs = 2;
__arg0 = globalRef(intern("number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1129;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1129;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1129;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1129;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2934) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2933(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2375 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 20, _35clofun2932, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35val2375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2374 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 0, _35clofun2933, 4, self, env, frees, w);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2373 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 1, _35clofun2933, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2372 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 2, _35clofun2933, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2371 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 3, _35clofun2933, 5, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2369 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg2370 = primCar(label);
pushCont(co, 4, _35clofun2933, 5, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = _35reg2370;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2368 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 5, _35clofun2933, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2366 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg2367 = primCdr(label);
pushCont(co, 6, _35clofun2933, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35reg2367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc1133 = makeNative(16, _35clofun2932, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2350 = primIsCons(closureRef(co, 3));
if (True == _35reg2350) {
Obj _35reg2351 = primCar(closureRef(co, 3));
Obj _35reg2352 = primEQ(intern("%closure"), _35reg2351);
if (True == _35reg2352) {
Obj _35reg2353 = primCdr(closureRef(co, 3));
Obj _35reg2354 = primIsCons(_35reg2353);
if (True == _35reg2354) {
Obj _35reg2355 = primCdr(closureRef(co, 3));
Obj _35reg2356 = primCar(_35reg2355);
Obj label = _35reg2356;
Obj _35reg2357 = primCdr(closureRef(co, 3));
Obj _35reg2358 = primCdr(_35reg2357);
Obj _35reg2359 = primIsCons(_35reg2358);
if (True == _35reg2359) {
Obj _35reg2360 = primCdr(closureRef(co, 3));
Obj _35reg2361 = primCdr(_35reg2360);
Obj _35reg2362 = primCar(_35reg2361);
Obj nargs = _35reg2362;
Obj _35reg2363 = primCdr(closureRef(co, 3));
Obj _35reg2364 = primCdr(_35reg2363);
Obj _35reg2365 = primCdr(_35reg2364);
Obj frees = _35reg2365;
pushCont(co, 7, _35clofun2933, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("makeNative(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1133;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1133;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1133;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1133;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val2412 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2411 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 9, _35clofun2933, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2410 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 10, _35clofun2933, 4, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("} else {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2409 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 11, _35clofun2933, 4, self, env, c, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2408 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 12, _35clofun2933, 5, b, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(") {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2407 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 13, _35clofun2933, 5, b, self, env, c, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc1132 = makeNative(8, _35clofun2933, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2381 = primIsCons(closureRef(co, 3));
if (True == _35reg2381) {
Obj _35reg2382 = primCar(closureRef(co, 3));
Obj _35reg2383 = primEQ(intern("if"), _35reg2382);
if (True == _35reg2383) {
Obj _35reg2384 = primCdr(closureRef(co, 3));
Obj _35reg2385 = primIsCons(_35reg2384);
if (True == _35reg2385) {
Obj _35reg2386 = primCdr(closureRef(co, 3));
Obj _35reg2387 = primCar(_35reg2386);
Obj a = _35reg2387;
Obj _35reg2388 = primCdr(closureRef(co, 3));
Obj _35reg2389 = primCdr(_35reg2388);
Obj _35reg2390 = primIsCons(_35reg2389);
if (True == _35reg2390) {
Obj _35reg2391 = primCdr(closureRef(co, 3));
Obj _35reg2392 = primCdr(_35reg2391);
Obj _35reg2393 = primCar(_35reg2392);
Obj b = _35reg2393;
Obj _35reg2394 = primCdr(closureRef(co, 3));
Obj _35reg2395 = primCdr(_35reg2394);
Obj _35reg2396 = primCdr(_35reg2395);
Obj _35reg2397 = primIsCons(_35reg2396);
if (True == _35reg2397) {
Obj _35reg2398 = primCdr(closureRef(co, 3));
Obj _35reg2399 = primCdr(_35reg2398);
Obj _35reg2400 = primCdr(_35reg2399);
Obj _35reg2401 = primCar(_35reg2400);
Obj c = _35reg2401;
Obj _35reg2402 = primCdr(closureRef(co, 3));
Obj _35reg2403 = primCdr(_35reg2402);
Obj _35reg2404 = primCdr(_35reg2403);
Obj _35reg2405 = primCdr(_35reg2404);
Obj _35reg2406 = primEQ(Nil, _35reg2405);
if (True == _35reg2406) {
pushCont(co, 14, _35clofun2933, 6, a, b, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("if (True == ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1132;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1132;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1132;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1132;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1132;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1132;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2433 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2432 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 16, _35clofun2933, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2431 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 17, _35clofun2933, 4, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2430 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun2933, 4, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = _35val2430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc1131 = makeNative(15, _35clofun2933, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2413 = primIsCons(closureRef(co, 3));
if (True == _35reg2413) {
Obj _35reg2414 = primCar(closureRef(co, 3));
Obj _35reg2415 = primIsCons(_35reg2414);
if (True == _35reg2415) {
Obj _35reg2416 = primCar(closureRef(co, 3));
Obj _35reg2417 = primCar(_35reg2416);
Obj _35reg2418 = primEQ(intern("%builtin"), _35reg2417);
if (True == _35reg2418) {
Obj _35reg2419 = primCar(closureRef(co, 3));
Obj _35reg2420 = primCdr(_35reg2419);
Obj _35reg2421 = primIsCons(_35reg2420);
if (True == _35reg2421) {
Obj _35reg2422 = primCar(closureRef(co, 3));
Obj _35reg2423 = primCdr(_35reg2422);
Obj _35reg2424 = primCar(_35reg2423);
Obj f = _35reg2424;
Obj _35reg2425 = primCar(closureRef(co, 3));
Obj _35reg2426 = primCdr(_35reg2425);
Obj _35reg2427 = primCdr(_35reg2426);
Obj _35reg2428 = primEQ(Nil, _35reg2427);
if (True == _35reg2428) {
Obj _35reg2429 = primCdr(closureRef(co, 3));
Obj args = _35reg2429;
pushCont(co, 19, _35clofun2933, 4, self, env, args, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.builtin->name"));
__arg1 = f;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1131;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1131;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1131;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1131;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1131;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2933) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2932(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2272 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 20, _35clofun2931, 4, f, args, self, w);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1138 = makeNative(10, _35clofun2931, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2269 = primIsCons(closureRef(co, 3));
if (True == _35reg2269) {
Obj _35reg2270 = primCar(closureRef(co, 3));
Obj f = _35reg2270;
Obj _35reg2271 = primCdr(closureRef(co, 3));
Obj args = _35reg2271;
pushCont(co, 0, _35clofun2932, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("__nargs = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1138;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val2302 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 3];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1137 = makeNative(1, _35clofun2932, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2285 = primIsCons(closureRef(co, 3));
if (True == _35reg2285) {
Obj _35reg2286 = primCar(closureRef(co, 3));
Obj _35reg2287 = primEQ(intern("call"), _35reg2286);
if (True == _35reg2287) {
Obj _35reg2288 = primCdr(closureRef(co, 3));
Obj _35reg2289 = primIsCons(_35reg2288);
if (True == _35reg2289) {
Obj _35reg2290 = primCdr(closureRef(co, 3));
Obj _35reg2291 = primCar(_35reg2290);
Obj exp = _35reg2291;
Obj _35reg2292 = primCdr(closureRef(co, 3));
Obj _35reg2293 = primCdr(_35reg2292);
Obj _35reg2294 = primIsCons(_35reg2293);
if (True == _35reg2294) {
Obj _35reg2295 = primCdr(closureRef(co, 3));
Obj _35reg2296 = primCdr(_35reg2295);
Obj _35reg2297 = primCar(_35reg2296);
Obj cont = _35reg2297;
Obj _35reg2298 = primCdr(closureRef(co, 3));
Obj _35reg2299 = primCdr(_35reg2298);
Obj _35reg2300 = primCdr(_35reg2299);
Obj _35reg2301 = primEQ(Nil, _35reg2300);
if (True == _35reg2301) {
pushCont(co, 2, _35clofun2932, 4, self, env, w, exp);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.generate-cont"));
__arg1 = self;
__arg2 = w;
__arg3 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc1136 = makeNative(3, _35clofun2932, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2303 = primIsCons(closureRef(co, 3));
if (True == _35reg2303) {
Obj _35reg2304 = primCar(closureRef(co, 3));
Obj _35reg2305 = primEQ(intern("tailcall"), _35reg2304);
if (True == _35reg2305) {
Obj _35reg2306 = primCdr(closureRef(co, 3));
Obj _35reg2307 = primIsCons(_35reg2306);
if (True == _35reg2307) {
Obj _35reg2308 = primCdr(closureRef(co, 3));
Obj _35reg2309 = primCar(_35reg2308);
Obj exp = _35reg2309;
Obj _35reg2310 = primCdr(closureRef(co, 3));
Obj _35reg2311 = primCdr(_35reg2310);
Obj _35reg2312 = primEQ(Nil, _35reg2311);
if (True == _35reg2312) {
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1136;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1136;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1136;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1136;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2330 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("goto *jumpTable[co->ctx.pc.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2329 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 5, _35clofun2932, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(") { goto fail; }\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2328 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun2932, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = self;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2327 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun2932, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("if (co->ctx.pc.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2326 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun2932, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("co->ctx = co->callstack.data[--co->callstack.len];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2325 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun2932, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2324 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 10, _35clofun2932, 2, self, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2323 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 11, _35clofun2932, 4, env, x, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("__arg1 = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1135 = makeNative(4, _35clofun2932, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2313 = primIsCons(closureRef(co, 3));
if (True == _35reg2313) {
Obj _35reg2314 = primCar(closureRef(co, 3));
Obj _35reg2315 = primEQ(intern("return"), _35reg2314);
if (True == _35reg2315) {
Obj _35reg2316 = primCdr(closureRef(co, 3));
Obj _35reg2317 = primIsCons(_35reg2316);
if (True == _35reg2317) {
Obj _35reg2318 = primCdr(closureRef(co, 3));
Obj _35reg2319 = primCar(_35reg2318);
Obj x = _35reg2319;
Obj _35reg2320 = primCdr(closureRef(co, 3));
Obj _35reg2321 = primCdr(_35reg2320);
Obj _35reg2322 = primEQ(Nil, _35reg2321);
if (True == _35reg2322) {
pushCont(co, 12, _35clofun2932, 4, env, x, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("__nargs = 2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2349 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2348 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 14, _35clofun2932, 4, self, env, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35cc1134 = makeNative(13, _35clofun2932, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2331 = primIsCons(closureRef(co, 3));
if (True == _35reg2331) {
Obj _35reg2332 = primCar(closureRef(co, 3));
Obj _35reg2333 = primEQ(intern("do"), _35reg2332);
if (True == _35reg2333) {
Obj _35reg2334 = primCdr(closureRef(co, 3));
Obj _35reg2335 = primIsCons(_35reg2334);
if (True == _35reg2335) {
Obj _35reg2336 = primCdr(closureRef(co, 3));
Obj _35reg2337 = primCar(_35reg2336);
Obj a = _35reg2337;
Obj _35reg2338 = primCdr(closureRef(co, 3));
Obj _35reg2339 = primCdr(_35reg2338);
Obj _35reg2340 = primIsCons(_35reg2339);
if (True == _35reg2340) {
Obj _35reg2341 = primCdr(closureRef(co, 3));
Obj _35reg2342 = primCdr(_35reg2341);
Obj _35reg2343 = primCar(_35reg2342);
Obj b = _35reg2343;
Obj _35reg2344 = primCdr(closureRef(co, 3));
Obj _35reg2345 = primCdr(_35reg2344);
Obj _35reg2346 = primCdr(_35reg2345);
Obj _35reg2347 = primEQ(Nil, _35reg2346);
if (True == _35reg2347) {
pushCont(co, 15, _35clofun2932, 4, self, env, w, b);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2380 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2379 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 17, _35clofun2932, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2377 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2378 = primNot(_35val2377);
if (True == _35reg2378) {
pushCont(co, 18, _35clofun2932, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val2376 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun2932, 4, self, env, frees, w);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2932) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2931(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2255 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 20, _35clofun2930, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2254 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 0, _35clofun2931, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2265 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2266 = primAdd(i, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg2266;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2264 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 2, _35clofun2931, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2263 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 3, _35clofun2931, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2262 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 4, _35clofun2931, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2261 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 5, _35clofun2931, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2260 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 6, _35clofun2931, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc1120 = makeNative(17, _35clofun2930, 0, 0);
Obj self = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj i = closureRef(co, 2);
Obj _35reg2249 = primIsCons(closureRef(co, 3));
if (True == _35reg2249) {
Obj _35reg2250 = primCar(closureRef(co, 3));
Obj x = _35reg2250;
Obj _35reg2251 = primCdr(closureRef(co, 3));
Obj more = _35reg2251;
Obj _35reg2252 = primGT(i, makeNumber(3));
Obj _35reg2253 = primNot(_35reg2252);
if (True == _35reg2253) {
pushCont(co, 1, _35clofun2931, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 7, _35clofun2931, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1120;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35p1115 = __arg1;
Obj _35p1116 = __arg2;
Obj _35p1117 = __arg3;
Obj _35p1118 = co->args[4];
Obj _35cc1119 = makeNative(8, _35clofun2931, 0, 4, _35p1115, _35p1116, _35p1117, _35p1118);
Obj self = _35p1115;
Obj w = _35p1116;
Obj i = _35p1117;
Obj _35reg2267 = primEQ(Nil, _35p1118);
if (True == _35reg2267) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2931) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2284 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("goto *jumpTable[ps.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2283 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 11, _35clofun2931, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(") { co->ctx.pc = ps; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2282 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun2931, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = self;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2281 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 13, _35clofun2931, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("if (ps.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2280 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun2931, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2279 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 15, _35clofun2931, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2278 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun2931, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("co->ctx.frees = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2276 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2277 = primCons(f, args);
pushCont(co, 17, _35clofun2931, 2, self, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = makeNumber(0);
co->args[4] = _35reg2277;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2275 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun2931, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2273 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2274 = primAdd(makeNumber(1), _35val2273);
pushCont(co, 19, _35clofun2931, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35reg2274;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2931) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2930(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2203 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2204 = primCons(name, idx);
Obj _35reg2205 = primCons(_35reg2204, fvs);
Obj _35reg2206 = primCons(clo_45or_45cont, _35reg2205);
__nargs = 2;
__arg1 = _35reg2206;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2930) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val2216 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2215= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2217 = primCons(_35val2216, fvs);
Obj _35reg2218 = primCons(_35reg2215, _35reg2217);
Obj _35reg2219 = primCons(clo_45or_45cont, _35reg2218);
__nargs = 2;
__arg1 = _35reg2219;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2930) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2214 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2215 = primCons(name, idx);
pushCont(co, 1, _35clofun2930, 3, fvs, _35reg2215, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2224 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2225 = primCons(name, idx);
Obj _35reg2226 = primCons(_35reg2225, fvs);
Obj _35reg2227 = primCons(clo_45or_45cont, _35reg2226);
__nargs = 2;
__arg1 = _35reg2227;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2930) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val2207 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg2208 = primCar(_35val2207);
Obj name = _35reg2208;
Obj _35reg2209 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2209) {
Obj _35reg2210 = primCons(body1, Nil);
Obj _35reg2211 = primCons(Nil, _35reg2210);
Obj _35reg2212 = primCons(params, _35reg2211);
Obj _35reg2213 = primCons(intern("lambda"), _35reg2212);
pushCont(co, 2, _35clofun2930, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2213;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2220 = primCons(body1, Nil);
Obj _35reg2221 = primCons(fvs, _35reg2220);
Obj _35reg2222 = primCons(params, _35reg2221);
Obj _35reg2223 = primCons(intern("lambda"), _35reg2222);
pushCont(co, 3, _35clofun2930, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2185 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val2185;
Obj _35reg2186 = primEQ(idx, makeNumber(0));
if (True == _35reg2186) {
Obj _35reg2187 = primGenSym(intern("clofun"));
Obj name = _35reg2187;
Obj _35reg2188 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2188) {
Obj _35reg2189 = primCons(body1, Nil);
Obj _35reg2190 = primCons(Nil, _35reg2189);
Obj _35reg2191 = primCons(params, _35reg2190);
Obj _35reg2192 = primCons(intern("lambda"), _35reg2191);
pushCont(co, 20, _35clofun2929, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2192;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2199 = primCons(body1, Nil);
Obj _35reg2200 = primCons(fvs, _35reg2199);
Obj _35reg2201 = primCons(params, _35reg2200);
Obj _35reg2202 = primCons(intern("lambda"), _35reg2201);
pushCont(co, 0, _35clofun2930, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2202;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 4, _35clofun2930, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2184 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val2184;
pushCont(co, 5, _35clofun2930, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2183 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2183;
pushCont(co, 6, _35clofun2930, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35p1110 = __arg1;
Obj _35p1111 = __arg2;
Obj _35cc1112 = makeNative(19, _35clofun2928, 0, 2, _35p1110, _35p1111);
Obj v = _35p1110;
Obj _35reg2054 = primIsCons(_35p1111);
if (True == _35reg2054) {
Obj _35reg2055 = primCar(_35p1111);
Obj clo_45or_45cont = _35reg2055;
Obj _35reg2056 = primCdr(_35p1111);
Obj _35reg2057 = primIsCons(_35reg2056);
if (True == _35reg2057) {
Obj _35reg2058 = primCdr(_35p1111);
Obj _35reg2059 = primCar(_35reg2058);
Obj _35reg2060 = primIsCons(_35reg2059);
if (True == _35reg2060) {
Obj _35reg2061 = primCdr(_35p1111);
Obj _35reg2062 = primCar(_35reg2061);
Obj _35reg2063 = primCar(_35reg2062);
Obj _35reg2064 = primEQ(intern("lambda"), _35reg2063);
if (True == _35reg2064) {
Obj _35reg2065 = primCdr(_35p1111);
Obj _35reg2066 = primCar(_35reg2065);
Obj _35reg2067 = primCdr(_35reg2066);
Obj _35reg2068 = primIsCons(_35reg2067);
if (True == _35reg2068) {
Obj _35reg2069 = primCdr(_35p1111);
Obj _35reg2070 = primCar(_35reg2069);
Obj _35reg2071 = primCdr(_35reg2070);
Obj _35reg2072 = primCar(_35reg2071);
Obj params = _35reg2072;
Obj _35reg2073 = primCdr(_35p1111);
Obj _35reg2074 = primCar(_35reg2073);
Obj _35reg2075 = primCdr(_35reg2074);
Obj _35reg2076 = primCdr(_35reg2075);
Obj _35reg2077 = primIsCons(_35reg2076);
if (True == _35reg2077) {
Obj _35reg2078 = primCdr(_35p1111);
Obj _35reg2079 = primCar(_35reg2078);
Obj _35reg2080 = primCdr(_35reg2079);
Obj _35reg2081 = primCdr(_35reg2080);
Obj _35reg2082 = primCar(_35reg2081);
Obj body = _35reg2082;
Obj _35reg2083 = primCdr(_35p1111);
Obj _35reg2084 = primCar(_35reg2083);
Obj _35reg2085 = primCdr(_35reg2084);
Obj _35reg2086 = primCdr(_35reg2085);
Obj _35reg2087 = primCdr(_35reg2086);
Obj _35reg2088 = primEQ(Nil, _35reg2087);
if (True == _35reg2088) {
Obj _35reg2089 = primCdr(_35p1111);
Obj _35reg2090 = primCdr(_35reg2089);
Obj fvs = _35reg2090;
Obj _35reg2091 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2091) {
if (True == True) {
pushCont(co, 8, _35clofun2929, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg2137 = primEQ(clo_45or_45cont, intern("%continuation"));
if (True == _35reg2137) {
if (True == True) {
pushCont(co, 18, _35clofun2929, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 7, _35clofun2930, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val2235 = __arg1;
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
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2239 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2240 = primCons(_35val2239, res);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(2);
__arg3 = _35reg2240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2238 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj res = _35val2238;
pushCont(co, 10, _35clofun2930, 2, res, v);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = cur1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2237 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun2930, 2, cur1, v);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2236 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun2930, 2, cur1, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj v = __arg1;
Obj idx = __arg2;
Obj cur = __arg3;
Obj name = co->args[4];
Obj val = co->args[5];
Obj _35reg2229 = primCons(name, idx);
Obj _35reg2230 = primCons(val, Nil);
Obj _35reg2231 = primCons(_35reg2229, _35reg2230);
Obj _35reg2232 = primCons(_35reg2231, cur);
Obj cur1 = _35reg2232;
Obj _35reg2233 = primLT(idx, makeNumber(20));
if (True == _35reg2233) {
Obj _35reg2234 = primAdd(idx, makeNumber(1));
pushCont(co, 9, _35clofun2930, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = _35reg2234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 13, _35clofun2930, 2, cur1, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2243 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2244 = primCons(_35val2243, Nil);
Obj _35reg2245 = primCons(x, _35reg2244);
Obj _35reg2246 = primCons(tmp, _35reg2245);
Obj _35reg2247 = primCons(intern("let"), _35reg2246);
__nargs = 2;
__arg1 = _35reg2247;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2930) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x = __arg1;
Obj k = __arg2;
Obj _35reg2242 = primGenSym(intern("reg"));
Obj tmp = _35reg2242;
pushCont(co, 15, _35clofun2930, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2258 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2259 = primAdd(i, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg2259;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2257 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun2930, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2256 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 19, _35clofun2930, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2930) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2929(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2102 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2103 = primCons(name, idx);
pushCont(co, 20, _35clofun2928, 3, fvs, _35reg2103, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2112 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2113 = primCons(name, idx);
Obj _35reg2114 = primCons(_35reg2113, fvs);
Obj _35reg2115 = primCons(clo_45or_45cont, _35reg2114);
__nargs = 2;
__arg1 = _35reg2115;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2929) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2125 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2124= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2126 = primCons(_35val2125, fvs);
Obj _35reg2127 = primCons(_35reg2124, _35reg2126);
Obj _35reg2128 = primCons(clo_45or_45cont, _35reg2127);
__nargs = 2;
__arg1 = _35reg2128;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2929) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2123 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2124 = primCons(name, idx);
pushCont(co, 2, _35clofun2929, 3, fvs, _35reg2124, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2133 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2134 = primCons(name, idx);
Obj _35reg2135 = primCons(_35reg2134, fvs);
Obj _35reg2136 = primCons(clo_45or_45cont, _35reg2135);
__nargs = 2;
__arg1 = _35reg2136;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2929) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val2116 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg2117 = primCar(_35val2116);
Obj name = _35reg2117;
Obj _35reg2118 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2118) {
Obj _35reg2119 = primCons(body1, Nil);
Obj _35reg2120 = primCons(Nil, _35reg2119);
Obj _35reg2121 = primCons(params, _35reg2120);
Obj _35reg2122 = primCons(intern("lambda"), _35reg2121);
pushCont(co, 3, _35clofun2929, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2122;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2129 = primCons(body1, Nil);
Obj _35reg2130 = primCons(fvs, _35reg2129);
Obj _35reg2131 = primCons(params, _35reg2130);
Obj _35reg2132 = primCons(intern("lambda"), _35reg2131);
pushCont(co, 4, _35clofun2929, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2132;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2094 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val2094;
Obj _35reg2095 = primEQ(idx, makeNumber(0));
if (True == _35reg2095) {
Obj _35reg2096 = primGenSym(intern("clofun"));
Obj name = _35reg2096;
Obj _35reg2097 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2097) {
Obj _35reg2098 = primCons(body1, Nil);
Obj _35reg2099 = primCons(Nil, _35reg2098);
Obj _35reg2100 = primCons(params, _35reg2099);
Obj _35reg2101 = primCons(intern("lambda"), _35reg2100);
pushCont(co, 0, _35clofun2929, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2108 = primCons(body1, Nil);
Obj _35reg2109 = primCons(fvs, _35reg2108);
Obj _35reg2110 = primCons(params, _35reg2109);
Obj _35reg2111 = primCons(intern("lambda"), _35reg2110);
pushCont(co, 1, _35clofun2929, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 5, _35clofun2929, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2093 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val2093;
pushCont(co, 6, _35clofun2929, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2092 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2092;
pushCont(co, 7, _35clofun2929, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2150 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2149= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2151 = primCons(_35val2150, fvs);
Obj _35reg2152 = primCons(_35reg2149, _35reg2151);
Obj _35reg2153 = primCons(clo_45or_45cont, _35reg2152);
__nargs = 2;
__arg1 = _35reg2153;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2929) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val2148 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2149 = primCons(name, idx);
pushCont(co, 9, _35clofun2929, 3, fvs, _35reg2149, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2158 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2159 = primCons(name, idx);
Obj _35reg2160 = primCons(_35reg2159, fvs);
Obj _35reg2161 = primCons(clo_45or_45cont, _35reg2160);
__nargs = 2;
__arg1 = _35reg2161;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2929) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val2171 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2170= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2172 = primCons(_35val2171, fvs);
Obj _35reg2173 = primCons(_35reg2170, _35reg2172);
Obj _35reg2174 = primCons(clo_45or_45cont, _35reg2173);
__nargs = 2;
__arg1 = _35reg2174;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2929) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val2169 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2170 = primCons(name, idx);
pushCont(co, 12, _35clofun2929, 3, fvs, _35reg2170, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2179 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2180 = primCons(name, idx);
Obj _35reg2181 = primCons(_35reg2180, fvs);
Obj _35reg2182 = primCons(clo_45or_45cont, _35reg2181);
__nargs = 2;
__arg1 = _35reg2182;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2929) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val2162 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg2163 = primCar(_35val2162);
Obj name = _35reg2163;
Obj _35reg2164 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2164) {
Obj _35reg2165 = primCons(body1, Nil);
Obj _35reg2166 = primCons(Nil, _35reg2165);
Obj _35reg2167 = primCons(params, _35reg2166);
Obj _35reg2168 = primCons(intern("lambda"), _35reg2167);
pushCont(co, 13, _35clofun2929, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2168;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2175 = primCons(body1, Nil);
Obj _35reg2176 = primCons(fvs, _35reg2175);
Obj _35reg2177 = primCons(params, _35reg2176);
Obj _35reg2178 = primCons(intern("lambda"), _35reg2177);
pushCont(co, 14, _35clofun2929, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2178;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2140 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val2140;
Obj _35reg2141 = primEQ(idx, makeNumber(0));
if (True == _35reg2141) {
Obj _35reg2142 = primGenSym(intern("clofun"));
Obj name = _35reg2142;
Obj _35reg2143 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2143) {
Obj _35reg2144 = primCons(body1, Nil);
Obj _35reg2145 = primCons(Nil, _35reg2144);
Obj _35reg2146 = primCons(params, _35reg2145);
Obj _35reg2147 = primCons(intern("lambda"), _35reg2146);
pushCont(co, 10, _35clofun2929, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2147;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2154 = primCons(body1, Nil);
Obj _35reg2155 = primCons(fvs, _35reg2154);
Obj _35reg2156 = primCons(params, _35reg2155);
Obj _35reg2157 = primCons(intern("lambda"), _35reg2156);
pushCont(co, 11, _35clofun2929, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2157;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 15, _35clofun2929, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2139 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val2139;
pushCont(co, 16, _35clofun2929, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2138 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2138;
pushCont(co, 17, _35clofun2929, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2195 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2194= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2196 = primCons(_35val2195, fvs);
Obj _35reg2197 = primCons(_35reg2194, _35reg2196);
Obj _35reg2198 = primCons(clo_45or_45cont, _35reg2197);
__nargs = 2;
__arg1 = _35reg2198;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2929) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val2193 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2194 = primCons(name, idx);
pushCont(co, 19, _35clofun2929, 3, fvs, _35reg2194, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2929) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2928(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1109 = makeNative(19, _35clofun2927, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg1974 = primIsCons(closureRef(co, 1));
if (True == _35reg1974) {
Obj _35reg1975 = primCar(closureRef(co, 1));
Obj f = _35reg1975;
Obj _35reg1976 = primCdr(closureRef(co, 1));
Obj args = _35reg1976;
pushCont(co, 20, _35clofun2927, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val1998 = __arg1;
Obj _35val1997= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1999 = primCons(_35val1998, Nil);
Obj _35reg2000 = primCons(_35val1997, _35reg1999);
Obj _35reg2001 = primCons(intern("call"), _35reg2000);
__nargs = 2;
__arg1 = _35reg2001;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2928) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val1997 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun2928, 1, _35val1997);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
__arg2 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1996 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 2, _35clofun2928, 2, fvs, cont);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1996;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc1108 = makeNative(0, _35clofun2928, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1979 = primIsCons(closureRef(co, 1));
if (True == _35reg1979) {
Obj _35reg1980 = primCar(closureRef(co, 1));
Obj _35reg1981 = primEQ(intern("call"), _35reg1980);
if (True == _35reg1981) {
Obj _35reg1982 = primCdr(closureRef(co, 1));
Obj _35reg1983 = primIsCons(_35reg1982);
if (True == _35reg1983) {
Obj _35reg1984 = primCdr(closureRef(co, 1));
Obj _35reg1985 = primCar(_35reg1984);
Obj exp = _35reg1985;
Obj _35reg1986 = primCdr(closureRef(co, 1));
Obj _35reg1987 = primCdr(_35reg1986);
Obj _35reg1988 = primIsCons(_35reg1987);
if (True == _35reg1988) {
Obj _35reg1989 = primCdr(closureRef(co, 1));
Obj _35reg1990 = primCdr(_35reg1989);
Obj _35reg1991 = primCar(_35reg1990);
Obj cont = _35reg1991;
Obj _35reg1992 = primCdr(closureRef(co, 1));
Obj _35reg1993 = primCdr(_35reg1992);
Obj _35reg1994 = primCdr(_35reg1993);
Obj _35reg1995 = primEQ(Nil, _35reg1994);
if (True == _35reg1995) {
pushCont(co, 3, _35clofun2928, 3, exp, fvs, cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2023 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2024 = primCons(_35val2023, Nil);
Obj _35reg2025 = primCons(val, _35reg2024);
Obj _35reg2026 = primCons(intern("lambda"), _35reg2025);
Obj _35reg2027 = primCons(_35reg2026, fvs2);
Obj _35reg2028 = primCons(intern("%continuation"), _35reg2027);
__nargs = 2;
__arg1 = _35reg2028;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2928) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val2022 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs2 = _35val2022;
pushCont(co, 5, _35clofun2928, 2, val, fvs2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2021 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 6, _35clofun2928, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val2021;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2020 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val2020;
pushCont(co, 7, _35clofun2928, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2019 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 8, _35clofun2928, 3, fvs, body, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = _35val2019;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc1107 = makeNative(4, _35clofun2928, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2002 = primIsCons(closureRef(co, 1));
if (True == _35reg2002) {
Obj _35reg2003 = primCar(closureRef(co, 1));
Obj _35reg2004 = primEQ(intern("continuation"), _35reg2003);
if (True == _35reg2004) {
Obj _35reg2005 = primCdr(closureRef(co, 1));
Obj _35reg2006 = primIsCons(_35reg2005);
if (True == _35reg2006) {
Obj _35reg2007 = primCdr(closureRef(co, 1));
Obj _35reg2008 = primCar(_35reg2007);
Obj val = _35reg2008;
Obj _35reg2009 = primCdr(closureRef(co, 1));
Obj _35reg2010 = primCdr(_35reg2009);
Obj _35reg2011 = primIsCons(_35reg2010);
if (True == _35reg2011) {
Obj _35reg2012 = primCdr(closureRef(co, 1));
Obj _35reg2013 = primCdr(_35reg2012);
Obj _35reg2014 = primCar(_35reg2013);
Obj body = _35reg2014;
Obj _35reg2015 = primCdr(closureRef(co, 1));
Obj _35reg2016 = primCdr(_35reg2015);
Obj _35reg2017 = primCdr(_35reg2016);
Obj _35reg2018 = primEQ(Nil, _35reg2017);
if (True == _35reg2018) {
pushCont(co, 9, _35clofun2928, 3, fvs, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val2046 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2047 = primCons(_35val2046, Nil);
Obj _35reg2048 = primCons(args, _35reg2047);
Obj _35reg2049 = primCons(intern("lambda"), _35reg2048);
__nargs = 2;
__arg1 = _35reg2049;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2928) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35cc1106 = makeNative(10, _35clofun2928, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2029 = primIsCons(closureRef(co, 1));
if (True == _35reg2029) {
Obj _35reg2030 = primCar(closureRef(co, 1));
Obj _35reg2031 = primEQ(intern("lambda"), _35reg2030);
if (True == _35reg2031) {
Obj _35reg2032 = primCdr(closureRef(co, 1));
Obj _35reg2033 = primIsCons(_35reg2032);
if (True == _35reg2033) {
Obj _35reg2034 = primCdr(closureRef(co, 1));
Obj _35reg2035 = primCar(_35reg2034);
Obj args = _35reg2035;
Obj _35reg2036 = primCdr(closureRef(co, 1));
Obj _35reg2037 = primCdr(_35reg2036);
Obj _35reg2038 = primIsCons(_35reg2037);
if (True == _35reg2038) {
Obj _35reg2039 = primCdr(closureRef(co, 1));
Obj _35reg2040 = primCdr(_35reg2039);
Obj _35reg2041 = primCar(_35reg2040);
Obj body = _35reg2041;
Obj _35reg2042 = primCdr(closureRef(co, 1));
Obj _35reg2043 = primCdr(_35reg2042);
Obj _35reg2044 = primCdr(_35reg2043);
Obj _35reg2045 = primEQ(Nil, _35reg2044);
if (True == _35reg2045) {
pushCont(co, 11, _35clofun2928, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1106;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1106;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1106;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1106;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1106;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35cc1105 = makeNative(12, _35clofun2928, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg2050 = primIsSymbol(var);
if (True == _35reg2050) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2928) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1105;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2051 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1104= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2051) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2928) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1104;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35p1102 = __arg1;
Obj _35p1103 = __arg2;
Obj _35cc1104 = makeNative(13, _35clofun2928, 0, 2, _35p1102, _35p1103);
Obj __ = _35p1102;
Obj x = _35p1103;
pushCont(co, 14, _35clofun2928, 2, x, _35cc1104);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc1114 = makeNative(16, _35clofun2928, 0, 0);
Obj v = closureRef(co, 0);
Obj x = closureRef(co, 1);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2928) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj e = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = closureRef(co, 0);
__arg2 = e;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc1113 = makeNative(17, _35clofun2928, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v = closureRef(co, 0);
Obj f_45args = closureRef(co, 1);
Obj _35reg2053 = primIsCons(f_45args);
if (True == _35reg2053) {
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = makeNative(18, _35clofun2928, 1, 1, v);
__arg2 = f_45args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1113;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2928) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val2104 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2103= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2105 = primCons(_35val2104, fvs);
Obj _35reg2106 = primCons(_35reg2103, _35reg2105);
Obj _35reg2107 = primCons(clo_45or_45cont, _35reg2106);
__nargs = 2;
__arg1 = _35reg2107;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2928) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2927(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1093 = makeNative(18, _35clofun2926, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1869 = primIsCons(closureRef(co, 0));
if (True == _35reg1869) {
Obj _35reg1870 = primCar(closureRef(co, 0));
Obj _35reg1871 = primEQ(intern("do"), _35reg1870);
if (True == _35reg1871) {
Obj _35reg1872 = primCdr(closureRef(co, 0));
Obj _35reg1873 = primIsCons(_35reg1872);
if (True == _35reg1873) {
Obj _35reg1874 = primCdr(closureRef(co, 0));
Obj _35reg1875 = primCar(_35reg1874);
Obj a = _35reg1875;
Obj _35reg1876 = primCdr(closureRef(co, 0));
Obj _35reg1877 = primCdr(_35reg1876);
Obj _35reg1878 = primIsCons(_35reg1877);
if (True == _35reg1878) {
Obj _35reg1879 = primCdr(closureRef(co, 0));
Obj _35reg1880 = primCdr(_35reg1879);
Obj _35reg1881 = primCar(_35reg1880);
Obj b = _35reg1881;
Obj _35reg1882 = primCdr(closureRef(co, 0));
Obj _35reg1883 = primCdr(_35reg1882);
Obj _35reg1884 = primCdr(_35reg1883);
Obj _35reg1885 = primEQ(Nil, _35reg1884);
if (True == _35reg1885) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = a;
__arg2 = makeNative(20, _35clofun2926, 1, 2, b, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1093;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1093;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1093;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1093;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1093;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val1918 = __arg1;
Obj _35val1917= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1919 = primCons(_35val1918, Nil);
Obj _35reg1920 = primCons(_35val1917, _35reg1919);
Obj _35reg1921 = primCons(ra, _35reg1920);
Obj _35reg1922 = primCons(intern("if"), _35reg1921);
__nargs = 2;
__arg1 = _35reg1922;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2927) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val1917 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 1, _35clofun2927, 2, _35val1917, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj ra = __arg1;
pushCont(co, 2, _35clofun2927, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc1092 = makeNative(0, _35clofun2927, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1891 = primIsCons(closureRef(co, 0));
if (True == _35reg1891) {
Obj _35reg1892 = primCar(closureRef(co, 0));
Obj _35reg1893 = primEQ(intern("if"), _35reg1892);
if (True == _35reg1893) {
Obj _35reg1894 = primCdr(closureRef(co, 0));
Obj _35reg1895 = primIsCons(_35reg1894);
if (True == _35reg1895) {
Obj _35reg1896 = primCdr(closureRef(co, 0));
Obj _35reg1897 = primCar(_35reg1896);
Obj a = _35reg1897;
Obj _35reg1898 = primCdr(closureRef(co, 0));
Obj _35reg1899 = primCdr(_35reg1898);
Obj _35reg1900 = primIsCons(_35reg1899);
if (True == _35reg1900) {
Obj _35reg1901 = primCdr(closureRef(co, 0));
Obj _35reg1902 = primCdr(_35reg1901);
Obj _35reg1903 = primCar(_35reg1902);
Obj b = _35reg1903;
Obj _35reg1904 = primCdr(closureRef(co, 0));
Obj _35reg1905 = primCdr(_35reg1904);
Obj _35reg1906 = primCdr(_35reg1905);
Obj _35reg1907 = primIsCons(_35reg1906);
if (True == _35reg1907) {
Obj _35reg1908 = primCdr(closureRef(co, 0));
Obj _35reg1909 = primCdr(_35reg1908);
Obj _35reg1910 = primCdr(_35reg1909);
Obj _35reg1911 = primCar(_35reg1910);
Obj c = _35reg1911;
Obj _35reg1912 = primCdr(closureRef(co, 0));
Obj _35reg1913 = primCdr(_35reg1912);
Obj _35reg1914 = primCdr(_35reg1913);
Obj _35reg1915 = primCdr(_35reg1914);
Obj _35reg1916 = primEQ(Nil, _35reg1915);
if (True == _35reg1916) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = a;
__arg2 = makeNative(3, _35clofun2927, 1, 3, b, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val1923 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1091= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1923) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2927) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc1091 = makeNative(4, _35clofun2927, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x = closureRef(co, 0);
Obj __ = closureRef(co, 1);
pushCont(co, 5, _35clofun2927, 2, x, _35cc1091);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val1925 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1090= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1925) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label8:
{
Obj _35p1088 = __arg1;
Obj _35p1089 = __arg2;
Obj _35cc1090 = makeNative(6, _35clofun2927, 0, 2, _35p1088, _35p1089);
Obj x = _35p1088;
Obj next = _35p1089;
Obj _35reg1924 = primIsSymbol(x);
if (True == _35reg1924) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 7, _35clofun2927, 3, next, x, _35cc1090);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj hd1 = __arg1;
Obj _35reg1930 = primCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.tailify-list"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg1930;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc1101 = makeNative(9, _35clofun2927, 0, 0);
Obj _35reg1927 = primIsCons(closureRef(co, 0));
if (True == _35reg1927) {
Obj _35reg1928 = primCar(closureRef(co, 0));
Obj hd = _35reg1928;
Obj _35reg1929 = primCdr(closureRef(co, 0));
Obj tl = _35reg1929;
Obj ls = closureRef(co, 1);
Obj next = closureRef(co, 2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = hd;
__arg2 = makeNative(10, _35clofun2927, 1, 3, tl, ls, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val1942 = __arg1;
Obj _35reg1941= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1943 = primCons(_35val1942, Nil);
Obj _35reg1944 = primCons(_35reg1941, _35reg1943);
Obj _35reg1945 = primCons(intern("continuation"), _35reg1944);
Obj _35reg1946 = primCons(_35reg1945, Nil);
Obj _35reg1947 = primCons(exp, _35reg1946);
Obj _35reg1948 = primCons(intern("call"), _35reg1947);
__nargs = 2;
__arg1 = _35reg1948;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2927) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val1954 = __arg1;
Obj _35reg1953= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1955 = primCons(_35val1954, Nil);
Obj _35reg1956 = primCons(_35reg1953, _35reg1955);
Obj _35reg1957 = primCons(intern("continuation"), _35reg1956);
Obj _35reg1958 = primCons(_35reg1957, Nil);
Obj _35reg1959 = primCons(exp, _35reg1958);
Obj _35reg1960 = primCons(intern("call"), _35reg1959);
__nargs = 2;
__arg1 = _35reg1960;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2927) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35val1935 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1936 = primEQ(_35val1935, intern("%builtin"));
if (True == _35reg1936) {
if (True == True) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.wrap-var"));
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1937 = primEQ(next, globalRef(intern("cora/lib/toc.id")));
if (True == _35reg1937) {
Obj _35reg1938 = primCons(exp, Nil);
Obj _35reg1939 = primCons(intern("tailcall"), _35reg1938);
__nargs = 2;
__arg1 = _35reg1939;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2927) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1940 = primGenSym(intern("val"));
Obj val = _35reg1940;
Obj _35reg1941 = primCons(val, Nil);
pushCont(co, 12, _35clofun2927, 2, _35reg1941, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.wrap-var"));
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1949 = primEQ(next, globalRef(intern("cora/lib/toc.id")));
if (True == _35reg1949) {
Obj _35reg1950 = primCons(exp, Nil);
Obj _35reg1951 = primCons(intern("tailcall"), _35reg1950);
__nargs = 2;
__arg1 = _35reg1951;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2927) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1952 = primGenSym(intern("val"));
Obj val = _35reg1952;
Obj _35reg1953 = primCons(val, Nil);
pushCont(co, 13, _35clofun2927, 2, _35reg1953, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label15:
{
Obj _35val1966 = __arg1;
Obj _35reg1965= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1967 = primCons(_35val1966, Nil);
Obj _35reg1968 = primCons(_35reg1965, _35reg1967);
Obj _35reg1969 = primCons(intern("continuation"), _35reg1968);
Obj _35reg1970 = primCons(_35reg1969, Nil);
Obj _35reg1971 = primCons(exp, _35reg1970);
Obj _35reg1972 = primCons(intern("call"), _35reg1971);
__nargs = 2;
__arg1 = _35reg1972;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2927) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val1934 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1934) {
pushCont(co, 14, _35clofun2927, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.wrap-var"));
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1961 = primEQ(next, globalRef(intern("cora/lib/toc.id")));
if (True == _35reg1961) {
Obj _35reg1962 = primCons(exp, Nil);
Obj _35reg1963 = primCons(intern("tailcall"), _35reg1962);
__nargs = 2;
__arg1 = _35reg1963;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2927) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1964 = primGenSym(intern("val"));
Obj val = _35reg1964;
Obj _35reg1965 = primCons(val, Nil);
pushCont(co, 15, _35clofun2927, 2, _35reg1965, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label17:
{
Obj _35val1932 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp = _35val1932;
Obj _35reg1933 = primCar(exp);
pushCont(co, 16, _35clofun2927, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = _35reg1933;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35p1097 = __arg1;
Obj _35p1098 = __arg2;
Obj _35p1099 = __arg3;
Obj _35cc1100 = makeNative(11, _35clofun2927, 0, 3, _35p1097, _35p1098, _35p1099);
Obj _35reg1931 = primEQ(Nil, _35p1097);
if (True == _35reg1931) {
Obj ls = _35p1098;
Obj next = _35p1099;
pushCont(co, 17, _35clofun2927, 1, next);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1977 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1978 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1977;
__arg2 = _35reg1978;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2927) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2926(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1745 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 20, _35clofun2925, 2, _35val1745, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1086 = makeNative(19, _35clofun2925, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1719 = primIsCons(closureRef(co, 1));
if (True == _35reg1719) {
Obj _35reg1720 = primCar(closureRef(co, 1));
Obj _35reg1721 = primEQ(intern("let"), _35reg1720);
if (True == _35reg1721) {
Obj _35reg1722 = primCdr(closureRef(co, 1));
Obj _35reg1723 = primIsCons(_35reg1722);
if (True == _35reg1723) {
Obj _35reg1724 = primCdr(closureRef(co, 1));
Obj _35reg1725 = primCar(_35reg1724);
Obj a = _35reg1725;
Obj _35reg1726 = primCdr(closureRef(co, 1));
Obj _35reg1727 = primCdr(_35reg1726);
Obj _35reg1728 = primIsCons(_35reg1727);
if (True == _35reg1728) {
Obj _35reg1729 = primCdr(closureRef(co, 1));
Obj _35reg1730 = primCdr(_35reg1729);
Obj _35reg1731 = primCar(_35reg1730);
Obj b = _35reg1731;
Obj _35reg1732 = primCdr(closureRef(co, 1));
Obj _35reg1733 = primCdr(_35reg1732);
Obj _35reg1734 = primCdr(_35reg1733);
Obj _35reg1735 = primIsCons(_35reg1734);
if (True == _35reg1735) {
Obj _35reg1736 = primCdr(closureRef(co, 1));
Obj _35reg1737 = primCdr(_35reg1736);
Obj _35reg1738 = primCdr(_35reg1737);
Obj _35reg1739 = primCar(_35reg1738);
Obj c = _35reg1739;
Obj _35reg1740 = primCdr(closureRef(co, 1));
Obj _35reg1741 = primCdr(_35reg1740);
Obj _35reg1742 = primCdr(_35reg1741);
Obj _35reg1743 = primCdr(_35reg1742);
Obj _35reg1744 = primEQ(Nil, _35reg1743);
if (True == _35reg1744) {
pushCont(co, 0, _35clofun2926, 3, fvs, c, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1086;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1086;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1086;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1086;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1086;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1086;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val1777 = __arg1;
Obj _35reg1775= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1778 = primCons(_35reg1775, _35val1777);
Obj _35reg1779 = primCons(intern("%closure"), _35reg1778);
__nargs = 2;
__arg1 = _35reg1779;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2926) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val1776 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1775= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun2926, 1, _35reg1775);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1776;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val1772 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1773 = primCons(_35val1772, Nil);
Obj _35reg1774 = primCons(args, _35reg1773);
Obj _35reg1775 = primCons(intern("lambda"), _35reg1774);
pushCont(co, 3, _35clofun2926, 2, fvs1, _35reg1775);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1771 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val1771;
pushCont(co, 4, _35clofun2926, 3, args, fvs, fvs1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1085 = makeNative(1, _35clofun2926, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1751 = primIsCons(closureRef(co, 1));
if (True == _35reg1751) {
Obj _35reg1752 = primCar(closureRef(co, 1));
Obj _35reg1753 = primEQ(intern("lambda"), _35reg1752);
if (True == _35reg1753) {
Obj _35reg1754 = primCdr(closureRef(co, 1));
Obj _35reg1755 = primIsCons(_35reg1754);
if (True == _35reg1755) {
Obj _35reg1756 = primCdr(closureRef(co, 1));
Obj _35reg1757 = primCar(_35reg1756);
Obj args = _35reg1757;
Obj _35reg1758 = primCdr(closureRef(co, 1));
Obj _35reg1759 = primCdr(_35reg1758);
Obj _35reg1760 = primIsCons(_35reg1759);
if (True == _35reg1760) {
Obj _35reg1761 = primCdr(closureRef(co, 1));
Obj _35reg1762 = primCdr(_35reg1761);
Obj _35reg1763 = primCar(_35reg1762);
Obj body = _35reg1763;
Obj _35reg1764 = primCdr(closureRef(co, 1));
Obj _35reg1765 = primCdr(_35reg1764);
Obj _35reg1766 = primCdr(_35reg1765);
Obj _35reg1767 = primEQ(Nil, _35reg1766);
if (True == _35reg1767) {
Obj _35reg1768 = primCons(body, Nil);
Obj _35reg1769 = primCons(args, _35reg1768);
Obj _35reg1770 = primCons(intern("lambda"), _35reg1769);
pushCont(co, 5, _35clofun2926, 3, body, args, fvs);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = _35reg1770;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1085;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1085;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1085;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1085;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1085;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val1781 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pos = _35val1781;
Obj _35reg1782 = primEQ(makeNumber(-1), pos);
if (True == _35reg1782) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2926) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1783 = primCons(pos, Nil);
Obj _35reg1784 = primCons(intern("%closure-ref"), _35reg1783);
__nargs = 2;
__arg1 = _35reg1784;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2926) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label8:
{
Obj _35cc1084 = makeNative(6, _35clofun2926, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg1780 = primIsSymbol(var);
if (True == _35reg1780) {
pushCont(co, 7, _35clofun2926, 1, var);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.index"));
__arg1 = var;
__arg2 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1084;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val1785 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1083= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1785) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2926) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1083;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p1081 = __arg1;
Obj _35p1082 = __arg2;
Obj _35cc1083 = makeNative(8, _35clofun2926, 0, 2, _35p1081, _35p1082);
Obj __ = _35p1081;
Obj x = _35p1082;
pushCont(co, 9, _35clofun2926, 2, x, _35cc1083);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x = __arg1;
Obj _35reg1787 = primCons(x, Nil);
Obj _35reg1788 = primCons(intern("return"), _35reg1787);
__nargs = 2;
__arg1 = _35reg1788;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2926) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1096 = makeNative(12, _35clofun2926, 0, 0);
Obj _35reg1790 = primIsCons(closureRef(co, 0));
if (True == _35reg1790) {
Obj _35reg1791 = primCar(closureRef(co, 0));
Obj f = _35reg1791;
Obj _35reg1792 = primCdr(closureRef(co, 0));
Obj args = _35reg1792;
Obj next = closureRef(co, 1);
Obj _35reg1793 = primCons(f, args);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.tailify-list"));
__arg1 = _35reg1793;
__arg2 = Nil;
__arg3 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1096;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val1832 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1833 = primCons(_35val1832, Nil);
Obj _35reg1834 = primCons(args, _35reg1833);
Obj _35reg1835 = primCons(intern("lambda"), _35reg1834);
Obj _35reg1836 = primCons(_35reg1835, frees);
Obj _35reg1837 = primCons(intern("%closure"), _35reg1836);
__nargs = 2;
__arg0 = next;
__arg1 = _35reg1837;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc1095 = makeNative(13, _35clofun2926, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1794 = primIsCons(closureRef(co, 0));
if (True == _35reg1794) {
Obj _35reg1795 = primCar(closureRef(co, 0));
Obj _35reg1796 = primEQ(intern("%closure"), _35reg1795);
if (True == _35reg1796) {
Obj _35reg1797 = primCdr(closureRef(co, 0));
Obj _35reg1798 = primIsCons(_35reg1797);
if (True == _35reg1798) {
Obj _35reg1799 = primCdr(closureRef(co, 0));
Obj _35reg1800 = primCar(_35reg1799);
Obj _35reg1801 = primIsCons(_35reg1800);
if (True == _35reg1801) {
Obj _35reg1802 = primCdr(closureRef(co, 0));
Obj _35reg1803 = primCar(_35reg1802);
Obj _35reg1804 = primCar(_35reg1803);
Obj _35reg1805 = primEQ(intern("lambda"), _35reg1804);
if (True == _35reg1805) {
Obj _35reg1806 = primCdr(closureRef(co, 0));
Obj _35reg1807 = primCar(_35reg1806);
Obj _35reg1808 = primCdr(_35reg1807);
Obj _35reg1809 = primIsCons(_35reg1808);
if (True == _35reg1809) {
Obj _35reg1810 = primCdr(closureRef(co, 0));
Obj _35reg1811 = primCar(_35reg1810);
Obj _35reg1812 = primCdr(_35reg1811);
Obj _35reg1813 = primCar(_35reg1812);
Obj args = _35reg1813;
Obj _35reg1814 = primCdr(closureRef(co, 0));
Obj _35reg1815 = primCar(_35reg1814);
Obj _35reg1816 = primCdr(_35reg1815);
Obj _35reg1817 = primCdr(_35reg1816);
Obj _35reg1818 = primIsCons(_35reg1817);
if (True == _35reg1818) {
Obj _35reg1819 = primCdr(closureRef(co, 0));
Obj _35reg1820 = primCar(_35reg1819);
Obj _35reg1821 = primCdr(_35reg1820);
Obj _35reg1822 = primCdr(_35reg1821);
Obj _35reg1823 = primCar(_35reg1822);
Obj body = _35reg1823;
Obj _35reg1824 = primCdr(closureRef(co, 0));
Obj _35reg1825 = primCar(_35reg1824);
Obj _35reg1826 = primCdr(_35reg1825);
Obj _35reg1827 = primCdr(_35reg1826);
Obj _35reg1828 = primCdr(_35reg1827);
Obj _35reg1829 = primEQ(Nil, _35reg1828);
if (True == _35reg1829) {
Obj _35reg1830 = primCdr(closureRef(co, 0));
Obj _35reg1831 = primCdr(_35reg1830);
Obj frees = _35reg1831;
Obj next = closureRef(co, 1);
pushCont(co, 14, _35clofun2926, 3, args, frees, next);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = body;
__arg2 = globalRef(intern("cora/lib/toc.id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val1864 = __arg1;
Obj rb= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1865 = primCons(_35val1864, Nil);
Obj _35reg1866 = primCons(rb, _35reg1865);
Obj _35reg1867 = primCons(closureRef(co, 0), _35reg1866);
Obj _35reg1868 = primCons(intern("let"), _35reg1867);
__nargs = 2;
__arg1 = _35reg1868;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2926) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj rb = __arg1;
pushCont(co, 16, _35clofun2926, 1, rb);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc1094 = makeNative(15, _35clofun2926, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1838 = primIsCons(closureRef(co, 0));
if (True == _35reg1838) {
Obj _35reg1839 = primCar(closureRef(co, 0));
Obj _35reg1840 = primEQ(intern("let"), _35reg1839);
if (True == _35reg1840) {
Obj _35reg1841 = primCdr(closureRef(co, 0));
Obj _35reg1842 = primIsCons(_35reg1841);
if (True == _35reg1842) {
Obj _35reg1843 = primCdr(closureRef(co, 0));
Obj _35reg1844 = primCar(_35reg1843);
Obj a = _35reg1844;
Obj _35reg1845 = primCdr(closureRef(co, 0));
Obj _35reg1846 = primCdr(_35reg1845);
Obj _35reg1847 = primIsCons(_35reg1846);
if (True == _35reg1847) {
Obj _35reg1848 = primCdr(closureRef(co, 0));
Obj _35reg1849 = primCdr(_35reg1848);
Obj _35reg1850 = primCar(_35reg1849);
Obj b = _35reg1850;
Obj _35reg1851 = primCdr(closureRef(co, 0));
Obj _35reg1852 = primCdr(_35reg1851);
Obj _35reg1853 = primCdr(_35reg1852);
Obj _35reg1854 = primIsCons(_35reg1853);
if (True == _35reg1854) {
Obj _35reg1855 = primCdr(closureRef(co, 0));
Obj _35reg1856 = primCdr(_35reg1855);
Obj _35reg1857 = primCdr(_35reg1856);
Obj _35reg1858 = primCar(_35reg1857);
Obj c = _35reg1858;
Obj _35reg1859 = primCdr(closureRef(co, 0));
Obj _35reg1860 = primCdr(_35reg1859);
Obj _35reg1861 = primCdr(_35reg1860);
Obj _35reg1862 = primCdr(_35reg1861);
Obj _35reg1863 = primEQ(Nil, _35reg1862);
if (True == _35reg1863) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = b;
__arg2 = makeNative(17, _35clofun2926, 1, 3, a, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val1887 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1888 = primCons(_35val1887, Nil);
Obj _35reg1889 = primCons(ra, _35reg1888);
Obj _35reg1890 = primCons(intern("do"), _35reg1889);
__nargs = 2;
__arg1 = _35reg1890;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2926) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj ra = __arg1;
Obj _35reg1886 = primIsSymbol(ra);
if (True == _35reg1886) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, _35clofun2926, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2926) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2925(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1591 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = globalRef(intern("cora/lib/toc.union"));
__arg2 = Nil;
__arg3 = _35val1591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1077 = makeNative(20, _35clofun2924, 0, 1, closureRef(co, 0));
Obj _35reg1572 = primIsCons(closureRef(co, 0));
if (True == _35reg1572) {
Obj _35reg1573 = primCar(closureRef(co, 0));
Obj _35reg1574 = primEQ(intern("call"), _35reg1573);
if (True == _35reg1574) {
Obj _35reg1575 = primCdr(closureRef(co, 0));
Obj _35reg1576 = primIsCons(_35reg1575);
if (True == _35reg1576) {
Obj _35reg1577 = primCdr(closureRef(co, 0));
Obj _35reg1578 = primCar(_35reg1577);
Obj exp = _35reg1578;
Obj _35reg1579 = primCdr(closureRef(co, 0));
Obj _35reg1580 = primCdr(_35reg1579);
Obj _35reg1581 = primIsCons(_35reg1580);
if (True == _35reg1581) {
Obj _35reg1582 = primCdr(closureRef(co, 0));
Obj _35reg1583 = primCdr(_35reg1582);
Obj _35reg1584 = primCar(_35reg1583);
Obj cont = _35reg1584;
Obj _35reg1585 = primCdr(closureRef(co, 0));
Obj _35reg1586 = primCdr(_35reg1585);
Obj _35reg1587 = primCdr(_35reg1586);
Obj _35reg1588 = primEQ(Nil, _35reg1587);
if (True == _35reg1588) {
Obj _35reg1589 = primCons(cont, Nil);
Obj _35reg1590 = primCons(exp, _35reg1589);
pushCont(co, 0, _35clofun2925, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.free-vars"));
__arg2 = _35reg1590;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc1076 = makeNative(1, _35clofun2925, 0, 1, closureRef(co, 0));
Obj _35reg1592 = primIsCons(closureRef(co, 0));
if (True == _35reg1592) {
Obj _35reg1593 = primCar(closureRef(co, 0));
Obj _35reg1594 = primEQ(intern("return"), _35reg1593);
if (True == _35reg1594) {
Obj _35reg1595 = primCdr(closureRef(co, 0));
Obj _35reg1596 = primIsCons(_35reg1595);
if (True == _35reg1596) {
Obj _35reg1597 = primCdr(closureRef(co, 0));
Obj _35reg1598 = primCar(_35reg1597);
Obj x = _35reg1598;
Obj _35reg1599 = primCdr(closureRef(co, 0));
Obj _35reg1600 = primCdr(_35reg1599);
Obj _35reg1601 = primEQ(Nil, _35reg1600);
if (True == _35reg1601) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1076;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1076;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1076;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1076;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc1075 = makeNative(2, _35clofun2925, 0, 1, closureRef(co, 0));
Obj _35reg1602 = primIsCons(closureRef(co, 0));
if (True == _35reg1602) {
Obj _35reg1603 = primCar(closureRef(co, 0));
Obj _35reg1604 = primEQ(intern("%closure"), _35reg1603);
if (True == _35reg1604) {
Obj _35reg1605 = primCdr(closureRef(co, 0));
Obj _35reg1606 = primIsCons(_35reg1605);
if (True == _35reg1606) {
Obj _35reg1607 = primCdr(closureRef(co, 0));
Obj _35reg1608 = primCar(_35reg1607);
Obj lam = _35reg1608;
Obj _35reg1609 = primCdr(closureRef(co, 0));
Obj _35reg1610 = primCdr(_35reg1609);
Obj more = _35reg1610;
Obj _35reg1611 = primCons(lam, more);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = _35reg1611;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1075;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1075;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1075;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val1641 = __arg1;
Obj _35val1638= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.union"));
__arg1 = _35val1638;
__arg2 = _35val1641;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1639 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val1638= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1640 = primCons(a, Nil);
pushCont(co, 4, _35clofun2925, 1, _35val1638);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = _35val1639;
__arg2 = _35reg1640;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val1638 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun2925, 2, a, _35val1638);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc1074 = makeNative(3, _35clofun2925, 0, 1, closureRef(co, 0));
Obj _35reg1612 = primIsCons(closureRef(co, 0));
if (True == _35reg1612) {
Obj _35reg1613 = primCar(closureRef(co, 0));
Obj _35reg1614 = primEQ(intern("let"), _35reg1613);
if (True == _35reg1614) {
Obj _35reg1615 = primCdr(closureRef(co, 0));
Obj _35reg1616 = primIsCons(_35reg1615);
if (True == _35reg1616) {
Obj _35reg1617 = primCdr(closureRef(co, 0));
Obj _35reg1618 = primCar(_35reg1617);
Obj a = _35reg1618;
Obj _35reg1619 = primCdr(closureRef(co, 0));
Obj _35reg1620 = primCdr(_35reg1619);
Obj _35reg1621 = primIsCons(_35reg1620);
if (True == _35reg1621) {
Obj _35reg1622 = primCdr(closureRef(co, 0));
Obj _35reg1623 = primCdr(_35reg1622);
Obj _35reg1624 = primCar(_35reg1623);
Obj b = _35reg1624;
Obj _35reg1625 = primCdr(closureRef(co, 0));
Obj _35reg1626 = primCdr(_35reg1625);
Obj _35reg1627 = primCdr(_35reg1626);
Obj _35reg1628 = primIsCons(_35reg1627);
if (True == _35reg1628) {
Obj _35reg1629 = primCdr(closureRef(co, 0));
Obj _35reg1630 = primCdr(_35reg1629);
Obj _35reg1631 = primCdr(_35reg1630);
Obj _35reg1632 = primCar(_35reg1631);
Obj c = _35reg1632;
Obj _35reg1633 = primCdr(closureRef(co, 0));
Obj _35reg1634 = primCdr(_35reg1633);
Obj _35reg1635 = primCdr(_35reg1634);
Obj _35reg1636 = primCdr(_35reg1635);
Obj _35reg1637 = primEQ(Nil, _35reg1636);
if (True == _35reg1637) {
pushCont(co, 6, _35clofun2925, 2, c, a);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val1661 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = globalRef(intern("cora/lib/toc.union"));
__arg2 = Nil;
__arg3 = _35val1661;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1073 = makeNative(7, _35clofun2925, 0, 1, closureRef(co, 0));
Obj _35reg1642 = primIsCons(closureRef(co, 0));
if (True == _35reg1642) {
Obj _35reg1643 = primCar(closureRef(co, 0));
Obj _35reg1644 = primEQ(intern("do"), _35reg1643);
if (True == _35reg1644) {
Obj _35reg1645 = primCdr(closureRef(co, 0));
Obj _35reg1646 = primIsCons(_35reg1645);
if (True == _35reg1646) {
Obj _35reg1647 = primCdr(closureRef(co, 0));
Obj _35reg1648 = primCar(_35reg1647);
Obj x = _35reg1648;
Obj _35reg1649 = primCdr(closureRef(co, 0));
Obj _35reg1650 = primCdr(_35reg1649);
Obj _35reg1651 = primIsCons(_35reg1650);
if (True == _35reg1651) {
Obj _35reg1652 = primCdr(closureRef(co, 0));
Obj _35reg1653 = primCdr(_35reg1652);
Obj _35reg1654 = primCar(_35reg1653);
Obj y = _35reg1654;
Obj _35reg1655 = primCdr(closureRef(co, 0));
Obj _35reg1656 = primCdr(_35reg1655);
Obj _35reg1657 = primCdr(_35reg1656);
Obj _35reg1658 = primEQ(Nil, _35reg1657);
if (True == _35reg1658) {
Obj _35reg1659 = primCons(y, Nil);
Obj _35reg1660 = primCons(x, _35reg1659);
pushCont(co, 8, _35clofun2925, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.free-vars"));
__arg2 = _35reg1660;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1073;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1073;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1073;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1073;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1073;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val1691 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = globalRef(intern("cora/lib/toc.union"));
__arg2 = Nil;
__arg3 = _35val1691;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc1072 = makeNative(9, _35clofun2925, 0, 1, closureRef(co, 0));
Obj _35reg1662 = primIsCons(closureRef(co, 0));
if (True == _35reg1662) {
Obj _35reg1663 = primCar(closureRef(co, 0));
Obj _35reg1664 = primEQ(intern("if"), _35reg1663);
if (True == _35reg1664) {
Obj _35reg1665 = primCdr(closureRef(co, 0));
Obj _35reg1666 = primIsCons(_35reg1665);
if (True == _35reg1666) {
Obj _35reg1667 = primCdr(closureRef(co, 0));
Obj _35reg1668 = primCar(_35reg1667);
Obj x = _35reg1668;
Obj _35reg1669 = primCdr(closureRef(co, 0));
Obj _35reg1670 = primCdr(_35reg1669);
Obj _35reg1671 = primIsCons(_35reg1670);
if (True == _35reg1671) {
Obj _35reg1672 = primCdr(closureRef(co, 0));
Obj _35reg1673 = primCdr(_35reg1672);
Obj _35reg1674 = primCar(_35reg1673);
Obj y = _35reg1674;
Obj _35reg1675 = primCdr(closureRef(co, 0));
Obj _35reg1676 = primCdr(_35reg1675);
Obj _35reg1677 = primCdr(_35reg1676);
Obj _35reg1678 = primIsCons(_35reg1677);
if (True == _35reg1678) {
Obj _35reg1679 = primCdr(closureRef(co, 0));
Obj _35reg1680 = primCdr(_35reg1679);
Obj _35reg1681 = primCdr(_35reg1680);
Obj _35reg1682 = primCar(_35reg1681);
Obj z = _35reg1682;
Obj _35reg1683 = primCdr(closureRef(co, 0));
Obj _35reg1684 = primCdr(_35reg1683);
Obj _35reg1685 = primCdr(_35reg1684);
Obj _35reg1686 = primCdr(_35reg1685);
Obj _35reg1687 = primEQ(Nil, _35reg1686);
if (True == _35reg1687) {
Obj _35reg1688 = primCons(z, Nil);
Obj _35reg1689 = primCons(y, _35reg1688);
Obj _35reg1690 = primCons(x, _35reg1689);
pushCont(co, 10, _35clofun2925, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.free-vars"));
__arg2 = _35reg1690;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1072;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1072;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1072;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1072;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1072;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1072;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val1709 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = _35val1709;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1071 = makeNative(11, _35clofun2925, 0, 1, closureRef(co, 0));
Obj _35reg1692 = primIsCons(closureRef(co, 0));
if (True == _35reg1692) {
Obj _35reg1693 = primCar(closureRef(co, 0));
Obj _35reg1694 = primEQ(intern("lambda"), _35reg1693);
if (True == _35reg1694) {
Obj _35reg1695 = primCdr(closureRef(co, 0));
Obj _35reg1696 = primIsCons(_35reg1695);
if (True == _35reg1696) {
Obj _35reg1697 = primCdr(closureRef(co, 0));
Obj _35reg1698 = primCar(_35reg1697);
Obj args = _35reg1698;
Obj _35reg1699 = primCdr(closureRef(co, 0));
Obj _35reg1700 = primCdr(_35reg1699);
Obj _35reg1701 = primIsCons(_35reg1700);
if (True == _35reg1701) {
Obj _35reg1702 = primCdr(closureRef(co, 0));
Obj _35reg1703 = primCdr(_35reg1702);
Obj _35reg1704 = primCar(_35reg1703);
Obj body = _35reg1704;
Obj _35reg1705 = primCdr(closureRef(co, 0));
Obj _35reg1706 = primCdr(_35reg1705);
Obj _35reg1707 = primCdr(_35reg1706);
Obj _35reg1708 = primEQ(Nil, _35reg1707);
if (True == _35reg1708) {
pushCont(co, 12, _35clofun2925, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35cc1070 = makeNative(13, _35clofun2925, 0, 1, closureRef(co, 0));
Obj x = closureRef(co, 0);
Obj _35reg1710 = primIsSymbol(x);
if (True == _35reg1710) {
Obj _35reg1711 = primCons(x, Nil);
__nargs = 2;
__arg1 = _35reg1711;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2925) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1070;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val1712 = __arg1;
Obj _35cc1069= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1712) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2925) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1069;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35p1068 = __arg1;
Obj _35cc1069 = makeNative(14, _35clofun2925, 0, 1, _35p1068);
Obj x = _35p1068;
pushCont(co, 15, _35clofun2925, 1, _35cc1069);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1717 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1718 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1717;
__arg2 = _35reg1718;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc1087 = makeNative(17, _35clofun2925, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg1714 = primIsCons(closureRef(co, 1));
if (True == _35reg1714) {
Obj _35reg1715 = primCar(closureRef(co, 1));
Obj f = _35reg1715;
Obj _35reg1716 = primCdr(closureRef(co, 1));
Obj args = _35reg1716;
pushCont(co, 18, _35clofun2925, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2925) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val1746 = __arg1;
Obj _35val1745= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1747 = primCons(_35val1746, Nil);
Obj _35reg1748 = primCons(_35val1745, _35reg1747);
Obj _35reg1749 = primCons(a, _35reg1748);
Obj _35reg1750 = primCons(intern("let"), _35reg1749);
__nargs = 2;
__arg1 = _35reg1750;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2925) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2924(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1054 = makeNative(19, _35clofun2923, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1471 = primIsCons(closureRef(co, 0));
if (True == _35reg1471) {
Obj _35reg1472 = primCar(closureRef(co, 0));
Obj x = _35reg1472;
Obj _35reg1473 = primCdr(closureRef(co, 0));
Obj y = _35reg1473;
Obj s2 = closureRef(co, 1);
pushCont(co, 20, _35clofun2923, 3, y, s2, _35cc1054);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1054;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35p1051 = __arg1;
Obj _35p1052 = __arg2;
Obj _35cc1053 = makeNative(0, _35clofun2924, 0, 2, _35p1051, _35p1052);
Obj _35reg1475 = primEQ(Nil, _35p1051);
if (True == _35reg1475) {
Obj s2 = _35p1052;
__nargs = 2;
__arg1 = s2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2924) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1053;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1480 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1481 = primCons(x, _35val1480);
__nargs = 2;
__arg1 = _35reg1481;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2924) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35cc1060 = makeNative(2, _35clofun2924, 0, 0);
Obj _35reg1477 = primIsCons(closureRef(co, 0));
if (True == _35reg1477) {
Obj _35reg1478 = primCar(closureRef(co, 0));
Obj x = _35reg1478;
Obj _35reg1479 = primCdr(closureRef(co, 0));
Obj y = _35reg1479;
Obj s2 = closureRef(co, 1);
pushCont(co, 3, _35clofun2924, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val1485 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1059= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1485) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc1059 = makeNative(4, _35clofun2924, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1482 = primIsCons(closureRef(co, 0));
if (True == _35reg1482) {
Obj _35reg1483 = primCar(closureRef(co, 0));
Obj x = _35reg1483;
Obj _35reg1484 = primCdr(closureRef(co, 0));
Obj y = _35reg1484;
Obj s2 = closureRef(co, 1);
pushCont(co, 5, _35clofun2924, 3, y, s2, _35cc1059);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p1056 = __arg1;
Obj _35p1057 = __arg2;
Obj _35cc1058 = makeNative(6, _35clofun2924, 0, 2, _35p1056, _35p1057);
Obj _35reg1486 = primEQ(Nil, _35p1056);
if (True == _35reg1486) {
Obj __ = _35p1057;
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2924) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1058;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1067 = makeNative(8, _35clofun2924, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2924) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35cc1066 = makeNative(9, _35clofun2924, 0, 1, closureRef(co, 0));
Obj _35reg1488 = primIsCons(closureRef(co, 0));
if (True == _35reg1488) {
Obj _35reg1489 = primCar(closureRef(co, 0));
Obj _35reg1490 = primEQ(intern("%closure-ref"), _35reg1489);
if (True == _35reg1490) {
Obj _35reg1491 = primCdr(closureRef(co, 0));
Obj _35reg1492 = primIsCons(_35reg1491);
if (True == _35reg1492) {
Obj _35reg1493 = primCdr(closureRef(co, 0));
Obj _35reg1494 = primCar(_35reg1493);
Obj __ = _35reg1494;
Obj _35reg1495 = primCdr(closureRef(co, 0));
Obj _35reg1496 = primCdr(_35reg1495);
Obj _35reg1497 = primEQ(Nil, _35reg1496);
if (True == _35reg1497) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2924) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1066;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1066;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1066;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1066;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35cc1065 = makeNative(10, _35clofun2924, 0, 1, closureRef(co, 0));
Obj _35reg1498 = primIsCons(closureRef(co, 0));
if (True == _35reg1498) {
Obj _35reg1499 = primCar(closureRef(co, 0));
Obj _35reg1500 = primEQ(intern("quote"), _35reg1499);
if (True == _35reg1500) {
Obj _35reg1501 = primCdr(closureRef(co, 0));
Obj _35reg1502 = primIsCons(_35reg1501);
if (True == _35reg1502) {
Obj _35reg1503 = primCdr(closureRef(co, 0));
Obj _35reg1504 = primCar(_35reg1503);
Obj x = _35reg1504;
Obj _35reg1505 = primCdr(closureRef(co, 0));
Obj _35reg1506 = primCdr(_35reg1505);
Obj _35reg1507 = primEQ(Nil, _35reg1506);
if (True == _35reg1507) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2924) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1065;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1065;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1065;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1065;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc1064 = makeNative(11, _35clofun2924, 0, 1, closureRef(co, 0));
Obj _35reg1508 = primIsCons(closureRef(co, 0));
if (True == _35reg1508) {
Obj _35reg1509 = primCar(closureRef(co, 0));
Obj _35reg1510 = primEQ(intern("%builtin"), _35reg1509);
if (True == _35reg1510) {
Obj _35reg1511 = primCdr(closureRef(co, 0));
Obj _35reg1512 = primIsCons(_35reg1511);
if (True == _35reg1512) {
Obj _35reg1513 = primCdr(closureRef(co, 0));
Obj _35reg1514 = primCar(_35reg1513);
Obj op = _35reg1514;
Obj _35reg1515 = primCdr(closureRef(co, 0));
Obj _35reg1516 = primCdr(_35reg1515);
Obj _35reg1517 = primEQ(Nil, _35reg1516);
if (True == _35reg1517) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2924) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35cc1063 = makeNative(12, _35clofun2924, 0, 1, closureRef(co, 0));
Obj _35reg1518 = primIsCons(closureRef(co, 0));
if (True == _35reg1518) {
Obj _35reg1519 = primCar(closureRef(co, 0));
Obj _35reg1520 = primEQ(intern("%global"), _35reg1519);
if (True == _35reg1520) {
Obj _35reg1521 = primCdr(closureRef(co, 0));
Obj _35reg1522 = primIsCons(_35reg1521);
if (True == _35reg1522) {
Obj _35reg1523 = primCdr(closureRef(co, 0));
Obj _35reg1524 = primCar(_35reg1523);
Obj x = _35reg1524;
Obj _35reg1525 = primCdr(closureRef(co, 0));
Obj _35reg1526 = primCdr(_35reg1525);
Obj _35reg1527 = primEQ(Nil, _35reg1526);
if (True == _35reg1527) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2924) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35p1061 = __arg1;
Obj _35cc1062 = makeNative(13, _35clofun2924, 0, 1, _35p1061);
Obj _35reg1528 = primIsCons(_35p1061);
if (True == _35reg1528) {
Obj _35reg1529 = primCar(_35p1061);
Obj _35reg1530 = primEQ(intern("%const"), _35reg1529);
if (True == _35reg1530) {
Obj _35reg1531 = primCdr(_35p1061);
Obj _35reg1532 = primIsCons(_35reg1531);
if (True == _35reg1532) {
Obj _35reg1533 = primCdr(_35p1061);
Obj _35reg1534 = primCar(_35reg1533);
Obj x = _35reg1534;
Obj _35reg1535 = primCdr(_35p1061);
Obj _35reg1536 = primCdr(_35reg1535);
Obj _35reg1537 = primEQ(Nil, _35reg1536);
if (True == _35reg1537) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2924) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val1543 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = globalRef(intern("cora/lib/toc.union"));
__arg2 = Nil;
__arg3 = _35val1543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc1080 = makeNative(15, _35clofun2924, 0, 0);
Obj _35reg1539 = primIsCons(closureRef(co, 0));
if (True == _35reg1539) {
Obj _35reg1540 = primCar(closureRef(co, 0));
Obj f = _35reg1540;
Obj _35reg1541 = primCdr(closureRef(co, 0));
Obj args = _35reg1541;
Obj _35reg1542 = primCons(f, args);
pushCont(co, 16, _35clofun2924, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.free-vars"));
__arg2 = _35reg1542;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val1561 = __arg1;
Obj arg= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = _35val1561;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc1079 = makeNative(17, _35clofun2924, 0, 1, closureRef(co, 0));
Obj _35reg1544 = primIsCons(closureRef(co, 0));
if (True == _35reg1544) {
Obj _35reg1545 = primCar(closureRef(co, 0));
Obj _35reg1546 = primEQ(intern("continuation"), _35reg1545);
if (True == _35reg1546) {
Obj _35reg1547 = primCdr(closureRef(co, 0));
Obj _35reg1548 = primIsCons(_35reg1547);
if (True == _35reg1548) {
Obj _35reg1549 = primCdr(closureRef(co, 0));
Obj _35reg1550 = primCar(_35reg1549);
Obj arg = _35reg1550;
Obj _35reg1551 = primCdr(closureRef(co, 0));
Obj _35reg1552 = primCdr(_35reg1551);
Obj _35reg1553 = primIsCons(_35reg1552);
if (True == _35reg1553) {
Obj _35reg1554 = primCdr(closureRef(co, 0));
Obj _35reg1555 = primCdr(_35reg1554);
Obj _35reg1556 = primCar(_35reg1555);
Obj body = _35reg1556;
Obj _35reg1557 = primCdr(closureRef(co, 0));
Obj _35reg1558 = primCdr(_35reg1557);
Obj _35reg1559 = primCdr(_35reg1558);
Obj _35reg1560 = primEQ(Nil, _35reg1559);
if (True == _35reg1560) {
pushCont(co, 18, _35clofun2924, 1, arg);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc1078 = makeNative(19, _35clofun2924, 0, 1, closureRef(co, 0));
Obj _35reg1562 = primIsCons(closureRef(co, 0));
if (True == _35reg1562) {
Obj _35reg1563 = primCar(closureRef(co, 0));
Obj _35reg1564 = primEQ(intern("tailcall"), _35reg1563);
if (True == _35reg1564) {
Obj _35reg1565 = primCdr(closureRef(co, 0));
Obj _35reg1566 = primIsCons(_35reg1565);
if (True == _35reg1566) {
Obj _35reg1567 = primCdr(closureRef(co, 0));
Obj _35reg1568 = primCar(_35reg1567);
Obj exp = _35reg1568;
Obj _35reg1569 = primCdr(closureRef(co, 0));
Obj _35reg1570 = primCdr(_35reg1569);
Obj _35reg1571 = primEQ(Nil, _35reg1570);
if (True == _35reg1571) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2924) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2923(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1048 = makeNative(18, _35clofun2922, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg1351 = primIsCons(closureRef(co, 1));
if (True == _35reg1351) {
Obj _35reg1352 = primCar(closureRef(co, 1));
Obj _35reg1353 = primEQ(intern("let"), _35reg1352);
if (True == _35reg1353) {
Obj _35reg1354 = primCdr(closureRef(co, 1));
Obj _35reg1355 = primIsCons(_35reg1354);
if (True == _35reg1355) {
Obj _35reg1356 = primCdr(closureRef(co, 1));
Obj _35reg1357 = primCar(_35reg1356);
Obj a = _35reg1357;
Obj _35reg1358 = primCdr(closureRef(co, 1));
Obj _35reg1359 = primCdr(_35reg1358);
Obj _35reg1360 = primIsCons(_35reg1359);
if (True == _35reg1360) {
Obj _35reg1361 = primCdr(closureRef(co, 1));
Obj _35reg1362 = primCdr(_35reg1361);
Obj _35reg1363 = primCar(_35reg1362);
Obj b = _35reg1363;
Obj _35reg1364 = primCdr(closureRef(co, 1));
Obj _35reg1365 = primCdr(_35reg1364);
Obj _35reg1366 = primCdr(_35reg1365);
Obj _35reg1367 = primIsCons(_35reg1366);
if (True == _35reg1367) {
Obj _35reg1368 = primCdr(closureRef(co, 1));
Obj _35reg1369 = primCdr(_35reg1368);
Obj _35reg1370 = primCdr(_35reg1369);
Obj _35reg1371 = primCar(_35reg1370);
Obj c = _35reg1371;
Obj _35reg1372 = primCdr(closureRef(co, 1));
Obj _35reg1373 = primCdr(_35reg1372);
Obj _35reg1374 = primCdr(_35reg1373);
Obj _35reg1375 = primCdr(_35reg1374);
Obj _35reg1376 = primEQ(Nil, _35reg1375);
if (True == _35reg1376) {
pushCont(co, 20, _35clofun2922, 3, env, c, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val1402 = __arg1;
Obj _35val1401= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1403 = primCons(_35val1402, Nil);
Obj _35reg1404 = primCons(_35val1401, _35reg1403);
Obj _35reg1405 = primCons(intern("do"), _35reg1404);
__nargs = 2;
__arg1 = _35reg1405;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2923) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val1401 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun2923, 1, _35val1401);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1047 = makeNative(0, _35clofun2923, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg1384 = primIsCons(closureRef(co, 1));
if (True == _35reg1384) {
Obj _35reg1385 = primCar(closureRef(co, 1));
Obj _35reg1386 = primEQ(intern("do"), _35reg1385);
if (True == _35reg1386) {
Obj _35reg1387 = primCdr(closureRef(co, 1));
Obj _35reg1388 = primIsCons(_35reg1387);
if (True == _35reg1388) {
Obj _35reg1389 = primCdr(closureRef(co, 1));
Obj _35reg1390 = primCar(_35reg1389);
Obj x = _35reg1390;
Obj _35reg1391 = primCdr(closureRef(co, 1));
Obj _35reg1392 = primCdr(_35reg1391);
Obj _35reg1393 = primIsCons(_35reg1392);
if (True == _35reg1393) {
Obj _35reg1394 = primCdr(closureRef(co, 1));
Obj _35reg1395 = primCdr(_35reg1394);
Obj _35reg1396 = primCar(_35reg1395);
Obj y = _35reg1396;
Obj _35reg1397 = primCdr(closureRef(co, 1));
Obj _35reg1398 = primCdr(_35reg1397);
Obj _35reg1399 = primCdr(_35reg1398);
Obj _35reg1400 = primEQ(Nil, _35reg1399);
if (True == _35reg1400) {
pushCont(co, 2, _35clofun2923, 2, env, y);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val1411 = __arg1;
Obj _35reg1412 = primCons(intern("if"), _35val1411);
__nargs = 2;
__arg1 = _35reg1412;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2923) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val1410 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 4, _35clofun2923, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1410;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1046 = makeNative(3, _35clofun2923, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg1406 = primIsCons(closureRef(co, 1));
if (True == _35reg1406) {
Obj _35reg1407 = primCar(closureRef(co, 1));
Obj _35reg1408 = primEQ(intern("if"), _35reg1407);
if (True == _35reg1408) {
Obj _35reg1409 = primCdr(closureRef(co, 1));
Obj args = _35reg1409;
pushCont(co, 5, _35clofun2923, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1046;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1046;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val1431 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1432 = primCons(_35val1431, Nil);
Obj _35reg1433 = primCons(args, _35reg1432);
Obj _35reg1434 = primCons(intern("lambda"), _35reg1433);
__nargs = 2;
__arg1 = _35reg1434;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2923) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val1430 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun2923, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = _35val1430;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1045 = makeNative(6, _35clofun2923, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg1413 = primIsCons(closureRef(co, 1));
if (True == _35reg1413) {
Obj _35reg1414 = primCar(closureRef(co, 1));
Obj _35reg1415 = primEQ(intern("lambda"), _35reg1414);
if (True == _35reg1415) {
Obj _35reg1416 = primCdr(closureRef(co, 1));
Obj _35reg1417 = primIsCons(_35reg1416);
if (True == _35reg1417) {
Obj _35reg1418 = primCdr(closureRef(co, 1));
Obj _35reg1419 = primCar(_35reg1418);
Obj args = _35reg1419;
Obj _35reg1420 = primCdr(closureRef(co, 1));
Obj _35reg1421 = primCdr(_35reg1420);
Obj _35reg1422 = primIsCons(_35reg1421);
if (True == _35reg1422) {
Obj _35reg1423 = primCdr(closureRef(co, 1));
Obj _35reg1424 = primCdr(_35reg1423);
Obj _35reg1425 = primCar(_35reg1424);
Obj body = _35reg1425;
Obj _35reg1426 = primCdr(closureRef(co, 1));
Obj _35reg1427 = primCdr(_35reg1426);
Obj _35reg1428 = primCdr(_35reg1427);
Obj _35reg1429 = primEQ(Nil, _35reg1428);
if (True == _35reg1429) {
pushCont(co, 8, _35clofun2923, 2, body, args);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = args;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1045;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1045;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1045;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1045;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1045;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val1436 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1436) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2923) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1437 = primCons(x, Nil);
Obj _35reg1438 = primCons(intern("%global"), _35reg1437);
__nargs = 2;
__arg1 = _35reg1438;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2923) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label11:
{
Obj _35cc1044 = makeNative(9, _35clofun2923, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg1435 = primIsSymbol(x);
if (True == _35reg1435) {
pushCont(co, 10, _35clofun2923, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc1043 = makeNative(11, _35clofun2923, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj __ = closureRef(co, 0);
Obj _35reg1439 = primIsCons(closureRef(co, 1));
if (True == _35reg1439) {
Obj _35reg1440 = primCar(closureRef(co, 1));
Obj _35reg1441 = primEQ(intern("quote"), _35reg1440);
if (True == _35reg1441) {
Obj _35reg1442 = primCdr(closureRef(co, 1));
Obj _35reg1443 = primIsCons(_35reg1442);
if (True == _35reg1443) {
Obj _35reg1444 = primCdr(closureRef(co, 1));
Obj _35reg1445 = primCar(_35reg1444);
Obj x = _35reg1445;
Obj _35reg1446 = primCdr(closureRef(co, 1));
Obj _35reg1447 = primCdr(_35reg1446);
Obj _35reg1448 = primEQ(Nil, _35reg1447);
if (True == _35reg1448) {
Obj _35reg1449 = primCons(x, Nil);
Obj _35reg1450 = primCons(intern("%const"), _35reg1449);
__nargs = 2;
__arg1 = _35reg1450;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2923) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1043;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1043;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1043;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1043;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val1460 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1042= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1460) {
if (True == True) {
Obj _35reg1461 = primCons(x, Nil);
Obj _35reg1462 = primCons(intern("%const"), _35reg1461);
__nargs = 2;
__arg1 = _35reg1462;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2923) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1042;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg1463 = primCons(x, Nil);
Obj _35reg1464 = primCons(intern("%const"), _35reg1463);
__nargs = 2;
__arg1 = _35reg1464;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2923) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1042;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label14:
{
Obj _35val1457 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1042= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1457) {
if (True == True) {
Obj _35reg1458 = primCons(x, Nil);
Obj _35reg1459 = primCons(intern("%const"), _35reg1458);
__nargs = 2;
__arg1 = _35reg1459;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2923) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1042;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 13, _35clofun2923, 2, x, _35cc1042);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val1451 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1042= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1451) {
if (True == True) {
Obj _35reg1452 = primCons(x, Nil);
Obj _35reg1453 = primCons(intern("%const"), _35reg1452);
__nargs = 2;
__arg1 = _35reg1453;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2923) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1042;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg1454 = primIsString(x);
if (True == _35reg1454) {
if (True == True) {
Obj _35reg1455 = primCons(x, Nil);
Obj _35reg1456 = primCons(intern("%const"), _35reg1455);
__nargs = 2;
__arg1 = _35reg1456;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2923) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1042;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 14, _35clofun2923, 2, x, _35cc1042);
__nargs = 2;
__arg0 = globalRef(intern("boolean?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label16:
{
Obj _35p1040 = __arg1;
Obj _35p1041 = __arg2;
Obj _35cc1042 = makeNative(12, _35clofun2923, 0, 2, _35p1040, _35p1041);
Obj __ = _35p1040;
Obj x = _35p1041;
pushCont(co, 15, _35clofun2923, 2, x, _35cc1042);
__nargs = 2;
__arg0 = globalRef(intern("number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1469 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1470 = primCons(x, _35val1469);
__nargs = 2;
__arg1 = _35reg1470;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2923) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35cc1055 = makeNative(17, _35clofun2923, 0, 0);
Obj _35reg1466 = primIsCons(closureRef(co, 0));
if (True == _35reg1466) {
Obj _35reg1467 = primCar(closureRef(co, 0));
Obj x = _35reg1467;
Obj _35reg1468 = primCdr(closureRef(co, 0));
Obj y = _35reg1468;
Obj s2 = closureRef(co, 1);
pushCont(co, 18, _35clofun2923, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val1474 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1054= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1474) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1054;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2923) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2922(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1319 = __arg1;
Obj find = _35val1319;
pushCont(co, 20, _35clofun2921, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x = __arg1;
pushCont(co, 0, _35clofun2922, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc.*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1323 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1323) {
__nargs = 2;
__arg1 = makeString1("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2922) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val1322 = __arg1;
Obj find = _35val1322;
pushCont(co, 2, _35clofun2922, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x = __arg1;
pushCont(co, 3, _35clofun2922, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc.*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1039 = makeNative(5, _35clofun2922, 0, 0);
Obj n = closureRef(co, 0);
Obj res = closureRef(co, 1);
Obj _35reg1325 = primSub(n, makeNumber(1));
Obj _35reg1326 = primGenSym(intern("tmp"));
Obj _35reg1327 = primCons(_35reg1326, res);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.temp-list"));
__arg1 = _35reg1325;
__arg2 = _35reg1327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35p1036 = __arg1;
Obj _35p1037 = __arg2;
Obj _35cc1038 = makeNative(6, _35clofun2922, 0, 2, _35p1036, _35p1037);
Obj _35reg1328 = primEQ(makeNumber(0), _35p1036);
if (True == _35reg1328) {
Obj res = _35p1037;
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2922) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1330 = __arg1;
Obj ls= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1330;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc1050 = makeNative(8, _35clofun2922, 0, 0);
Obj env = closureRef(co, 0);
Obj ls = closureRef(co, 1);
pushCont(co, 9, _35clofun2922, 1, ls);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val1341 = __arg1;
Obj _35reg1339= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1342 = primCons(_35reg1339, _35val1341);
__nargs = 2;
__arg1 = _35reg1342;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2922) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val1340 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1339= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun2922, 1, _35reg1339);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1340;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val1347 = __arg1;
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1348 = primCons(_35val1347, Nil);
Obj _35reg1349 = primCons(tmp, _35reg1348);
Obj _35reg1350 = primCons(intern("lambda"), _35reg1349);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
__arg2 = _35reg1350;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1345 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj tmp = _35val1345;
Obj _35reg1346 = primCons(op, args);
pushCont(co, 13, _35clofun2922, 2, tmp, env);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35reg1346;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val1336 = __arg1;
Obj required= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj provided = _35val1336;
Obj _35reg1337 = primEQ(required, provided);
if (True == _35reg1337) {
Obj _35reg1338 = primCons(op, Nil);
Obj _35reg1339 = primCons(intern("%builtin"), _35reg1338);
pushCont(co, 12, _35clofun2922, 2, args, _35reg1339);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1343 = primGT(required, provided);
if (True == _35reg1343) {
Obj _35reg1344 = primSub(required, provided);
pushCont(co, 14, _35clofun2922, 3, op, args, env);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.temp-list"));
__arg1 = _35reg1344;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("primitive call mismatch");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label16:
{
Obj _35val1335 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj required = _35val1335;
pushCont(co, 15, _35clofun2922, 4, required, op, args, env);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1334 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35cc1049= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val1334) {
pushCont(co, 16, _35clofun2922, 3, op, args, env);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.builtin->args"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1049;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35cc1049 = makeNative(10, _35clofun2922, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg1331 = primIsCons(closureRef(co, 1));
if (True == _35reg1331) {
Obj _35reg1332 = primCar(closureRef(co, 1));
Obj op = _35reg1332;
Obj _35reg1333 = primCdr(closureRef(co, 1));
Obj args = _35reg1333;
pushCont(co, 17, _35clofun2922, 4, op, args, env, _35cc1049);
__nargs = 2;
__arg0 = globalRef(intern("builtin?"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1049;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val1379 = __arg1;
Obj _35val1377= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1380 = primCons(_35val1379, Nil);
Obj _35reg1381 = primCons(_35val1377, _35reg1380);
Obj _35reg1382 = primCons(a, _35reg1381);
Obj _35reg1383 = primCons(intern("let"), _35reg1382);
__nargs = 2;
__arg1 = _35reg1383;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2922) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val1377 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1378 = primCons(a, env);
pushCont(co, 19, _35clofun2922, 2, _35val1377, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = _35reg1378;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2922) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2921(struct Cora* co){
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
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1020 = makeNative(0, _35clofun2921, 0, 0);
Obj var = closureRef(co, 0);
Obj _35reg1207 = primIsCons(closureRef(co, 1));
if (True == _35reg1207) {
Obj _35reg1208 = primCar(closureRef(co, 1));
Obj __ = _35reg1208;
Obj _35reg1209 = primCdr(closureRef(co, 1));
Obj y = _35reg1209;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.assq"));
__arg1 = var;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1020;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc1019 = makeNative(1, _35clofun2921, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj _35reg1210 = primIsCons(closureRef(co, 1));
if (True == _35reg1210) {
Obj _35reg1211 = primCar(closureRef(co, 1));
Obj _35reg1212 = primIsCons(_35reg1211);
if (True == _35reg1212) {
Obj _35reg1213 = primCar(closureRef(co, 1));
Obj _35reg1214 = primCar(_35reg1213);
Obj x = _35reg1214;
Obj _35reg1215 = primCar(closureRef(co, 1));
Obj _35reg1216 = primCdr(_35reg1215);
Obj y = _35reg1216;
Obj _35reg1217 = primCdr(closureRef(co, 1));
Obj __ = _35reg1217;
Obj _35reg1218 = primEQ(var, x);
if (True == _35reg1218) {
Obj _35reg1219 = primCons(x, y);
__nargs = 2;
__arg1 = _35reg1219;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2921) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1019;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1019;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1019;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35p1016 = __arg1;
Obj _35p1017 = __arg2;
Obj _35cc1018 = makeNative(2, _35clofun2921, 0, 2, _35p1016, _35p1017);
Obj var = _35p1016;
Obj _35reg1220 = primEQ(Nil, _35p1017);
if (True == _35reg1220) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2921) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1225 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = f;
__arg2 = _35val1225;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1025 = makeNative(4, _35clofun2921, 0, 0);
Obj f = closureRef(co, 0);
Obj acc = closureRef(co, 1);
Obj _35reg1222 = primIsCons(closureRef(co, 2));
if (True == _35reg1222) {
Obj _35reg1223 = primCar(closureRef(co, 2));
Obj x = _35reg1223;
Obj _35reg1224 = primCdr(closureRef(co, 2));
Obj y = _35reg1224;
pushCont(co, 5, _35clofun2921, 2, f, y);
__nargs = 3;
__arg0 = f;
__arg1 = acc;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p1021 = __arg1;
Obj _35p1022 = __arg2;
Obj _35p1023 = __arg3;
Obj _35cc1024 = makeNative(6, _35clofun2921, 0, 3, _35p1021, _35p1022, _35p1023);
Obj f = _35p1021;
Obj acc = _35p1022;
Obj _35reg1226 = primEQ(Nil, _35p1023);
if (True == _35reg1226) {
__nargs = 2;
__arg1 = acc;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2921) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1031 = makeNative(8, _35clofun2921, 0, 0);
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg1228 = primIsCons(closureRef(co, 2));
if (True == _35reg1228) {
Obj _35reg1229 = primCar(closureRef(co, 2));
Obj a = _35reg1229;
Obj _35reg1230 = primCdr(closureRef(co, 2));
Obj b = _35reg1230;
Obj _35reg1231 = primAdd(pos, makeNumber(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.pos-in-list0"));
__arg1 = _35reg1231;
__arg2 = x;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc1030 = makeNative(9, _35clofun2921, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg1232 = primIsCons(closureRef(co, 2));
if (True == _35reg1232) {
Obj _35reg1233 = primCar(closureRef(co, 2));
Obj a = _35reg1233;
Obj _35reg1234 = primCdr(closureRef(co, 2));
Obj b = _35reg1234;
Obj _35reg1235 = primEQ(x, a);
if (True == _35reg1235) {
__nargs = 2;
__arg1 = pos;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2921) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35p1026 = __arg1;
Obj _35p1027 = __arg2;
Obj _35p1028 = __arg3;
Obj _35cc1029 = makeNative(10, _35clofun2921, 0, 3, _35p1026, _35p1027, _35p1028);
Obj __ = _35p1026;
Obj x = _35p1027;
Obj _35reg1236 = primEQ(Nil, _35p1028);
if (True == _35reg1236) {
__nargs = 2;
__arg1 = makeNumber(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2921) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj x = __arg1;
Obj l = __arg2;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.pos-in-list0"));
__arg1 = makeNumber(0);
__arg2 = x;
__arg3 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1242 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tl= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1243 = primLT(_35val1242, makeNumber(0));
if (True == _35reg1243) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.exist-in-env"));
__arg1 = x;
__arg2 = tl;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2921) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label15:
{
Obj _35cc1035 = makeNative(13, _35clofun2921, 0, 0);
Obj x = closureRef(co, 0);
Obj _35reg1239 = primIsCons(closureRef(co, 1));
if (True == _35reg1239) {
Obj _35reg1240 = primCar(closureRef(co, 1));
Obj hd = _35reg1240;
Obj _35reg1241 = primCdr(closureRef(co, 1));
Obj tl = _35reg1241;
pushCont(co, 14, _35clofun2921, 2, x, tl);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.index"));
__arg1 = x;
__arg2 = hd;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35p1032 = __arg1;
Obj _35p1033 = __arg2;
Obj _35cc1034 = makeNative(15, _35clofun2921, 0, 2, _35p1032, _35p1033);
Obj x = _35p1032;
Obj _35reg1244 = primEQ(Nil, _35p1033);
if (True == _35reg1244) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2921) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1034;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val1316 = __arg1;
Obj _35reg1317 = primNot(_35val1316);
__nargs = 2;
__arg1 = _35reg1317;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2921) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35val1315 = __arg1;
pushCont(co, 17, _35clofun2921, 0);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35val1315;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x = __arg1;
pushCont(co, 18, _35clofun2921, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc.*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1320 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1320) {
__nargs = 2;
__arg1 = makeString1("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2921) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2921) { co->ctx.pc = ps; goto fail; };
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

