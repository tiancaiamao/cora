#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun2869(struct Cora* co);
void _35clofun2868(struct Cora* co);
void _35clofun2867(struct Cora* co);
void _35clofun2866(struct Cora* co);
void _35clofun2865(struct Cora* co);
void _35clofun2864(struct Cora* co);
void _35clofun2863(struct Cora* co);
void _35clofun2862(struct Cora* co);
void _35clofun2861(struct Cora* co);
void _35clofun2860(struct Cora* co);
void _35clofun2859(struct Cora* co);
void _35clofun2858(struct Cora* co);
void _35clofun2857(struct Cora* co);
void _35clofun2856(struct Cora* co);
void _35clofun2855(struct Cora* co);
void _35clofun2854(struct Cora* co);
void _35clofun2853(struct Cora* co);
void _35clofun2852(struct Cora* co);
void _35clofun2851(struct Cora* co);
void _35clofun2850(struct Cora* co);
void _35clofun2849(struct Cora* co);
void _35clofun2848(struct Cora* co);
void _35clofun2847(struct Cora* co);


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
pushCont(co, 3, _35clofun2869, 0);
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

void _35clofun2869(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj exp = __arg1;
Obj _35reg2806 = primIsSymbol(exp);
if (True == _35reg2806) {
__nargs = 2;
__arg0 = globalRef(intern("value"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 20, _35clofun2868, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("number?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val2697 = __arg1;
Obj _35reg2702 = primSet(intern("cora/lib/toc.compile"), makeNative(3, _35clofun2865, 1, 0));
Obj _35reg2708 = primSet(intern("for-each"), makeNative(7, _35clofun2865, 2, 0));
Obj _35reg2715 = primSet(intern("cora/lib/toc.generate-jumptable"), makeNative(11, _35clofun2865, 3, 0));
Obj _35reg2736 = primSet(intern("cora/lib/toc.generate-toplevel-group"), makeNative(12, _35clofun2866, 2, 0));
Obj _35reg2743 = primSet(intern("cora/lib/toc.generate-c"), makeNative(0, _35clofun2867, 2, 0));
Obj _35reg2766 = primSet(intern("cora/lib/toc.handle-import-eagerly"), makeNative(5, _35clofun2867, 1, 0));
Obj _35reg2773 = primSet(intern("cora/lib/toc.compile-to-c"), makeNative(12, _35clofun2867, 3, 0));
Obj _35reg2775 = primSet(intern("set"), makeNative(13, _35clofun2867, 2, 0));
Obj _35reg2777 = primSet(intern("car"), makeNative(14, _35clofun2867, 1, 0));
Obj _35reg2779 = primSet(intern("cdr"), makeNative(15, _35clofun2867, 1, 0));
Obj _35reg2781 = primSet(intern("cons"), makeNative(16, _35clofun2867, 2, 0));
Obj _35reg2783 = primSet(intern("cons"), makeNative(17, _35clofun2867, 2, 0));
Obj _35reg2785 = primSet(intern("+"), makeNative(18, _35clofun2867, 2, 0));
Obj _35reg2787 = primSet(intern("-"), makeNative(19, _35clofun2867, 2, 0));
Obj _35reg2789 = primSet(intern("*"), makeNative(20, _35clofun2867, 2, 0));
Obj _35reg2791 = primSet(intern("/"), makeNative(0, _35clofun2868, 2, 0));
Obj _35reg2793 = primSet(intern("="), makeNative(1, _35clofun2868, 2, 0));
Obj _35reg2795 = primSet(intern(">"), makeNative(2, _35clofun2868, 2, 0));
Obj _35reg2797 = primSet(intern("<"), makeNative(3, _35clofun2868, 2, 0));
Obj _35reg2799 = primSet(intern("gensym"), makeNative(4, _35clofun2868, 1, 0));
Obj _35reg2801 = primSet(intern("symbol?"), makeNative(5, _35clofun2868, 1, 0));
Obj _35reg2803 = primSet(intern("not"), makeNative(6, _35clofun2868, 1, 0));
Obj _35reg2805 = primSet(intern("string?"), makeNative(7, _35clofun2868, 1, 0));
Obj _35reg2846 = primSet(intern("cora/lib/toc.eval0"), makeNative(0, _35clofun2869, 1, 0));
__nargs = 2;
__arg1 = _35reg2846;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2869) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val1204 = __arg1;
Obj _35reg1219 = primSet(intern("cora/lib/toc.assq"), makeNative(3, _35clofun2847, 2, 0));
Obj _35reg1225 = primSet(intern("cora/lib/toc.foldl"), makeNative(7, _35clofun2847, 3, 0));
Obj _35reg1235 = primSet(intern("cora/lib/toc.pos-in-list0"), makeNative(11, _35clofun2847, 3, 0));
Obj _35reg1236 = primSet(intern("cora/lib/toc.index"), makeNative(12, _35clofun2847, 2, 0));
Obj _35reg1243 = primSet(intern("cora/lib/toc.exist-in-env"), makeNative(16, _35clofun2847, 2, 0));
Obj _35reg1244 = primCons(intern("primSet"), Nil);
Obj _35reg1245 = primCons(makeNumber(2), _35reg1244);
Obj _35reg1246 = primCons(intern("set"), _35reg1245);
Obj _35reg1247 = primCons(intern("primCar"), Nil);
Obj _35reg1248 = primCons(makeNumber(1), _35reg1247);
Obj _35reg1249 = primCons(intern("car"), _35reg1248);
Obj _35reg1250 = primCons(intern("primCdr"), Nil);
Obj _35reg1251 = primCons(makeNumber(1), _35reg1250);
Obj _35reg1252 = primCons(intern("cdr"), _35reg1251);
Obj _35reg1253 = primCons(intern("primCons"), Nil);
Obj _35reg1254 = primCons(makeNumber(2), _35reg1253);
Obj _35reg1255 = primCons(intern("cons"), _35reg1254);
Obj _35reg1256 = primCons(intern("primIsCons"), Nil);
Obj _35reg1257 = primCons(makeNumber(1), _35reg1256);
Obj _35reg1258 = primCons(intern("cons?"), _35reg1257);
Obj _35reg1259 = primCons(intern("primAdd"), Nil);
Obj _35reg1260 = primCons(makeNumber(2), _35reg1259);
Obj _35reg1261 = primCons(intern("+"), _35reg1260);
Obj _35reg1262 = primCons(intern("primSub"), Nil);
Obj _35reg1263 = primCons(makeNumber(2), _35reg1262);
Obj _35reg1264 = primCons(intern("-"), _35reg1263);
Obj _35reg1265 = primCons(intern("primMul"), Nil);
Obj _35reg1266 = primCons(makeNumber(2), _35reg1265);
Obj _35reg1267 = primCons(intern("*"), _35reg1266);
Obj _35reg1268 = primCons(intern("primDiv"), Nil);
Obj _35reg1269 = primCons(makeNumber(2), _35reg1268);
Obj _35reg1270 = primCons(intern("/"), _35reg1269);
Obj _35reg1271 = primCons(intern("primEQ"), Nil);
Obj _35reg1272 = primCons(makeNumber(2), _35reg1271);
Obj _35reg1273 = primCons(intern("="), _35reg1272);
Obj _35reg1274 = primCons(intern("primGT"), Nil);
Obj _35reg1275 = primCons(makeNumber(2), _35reg1274);
Obj _35reg1276 = primCons(intern(">"), _35reg1275);
Obj _35reg1277 = primCons(intern("primLT"), Nil);
Obj _35reg1278 = primCons(makeNumber(2), _35reg1277);
Obj _35reg1279 = primCons(intern("<"), _35reg1278);
Obj _35reg1280 = primCons(intern("primGenSym"), Nil);
Obj _35reg1281 = primCons(makeNumber(1), _35reg1280);
Obj _35reg1282 = primCons(intern("gensym"), _35reg1281);
Obj _35reg1283 = primCons(intern("primIsSymbol"), Nil);
Obj _35reg1284 = primCons(makeNumber(1), _35reg1283);
Obj _35reg1285 = primCons(intern("symbol?"), _35reg1284);
Obj _35reg1286 = primCons(intern("primNot"), Nil);
Obj _35reg1287 = primCons(makeNumber(1), _35reg1286);
Obj _35reg1288 = primCons(intern("not"), _35reg1287);
Obj _35reg1289 = primCons(intern("primIsNumber"), Nil);
Obj _35reg1290 = primCons(makeNumber(1), _35reg1289);
Obj _35reg1291 = primCons(intern("integer?"), _35reg1290);
Obj _35reg1292 = primCons(intern("primIsString"), Nil);
Obj _35reg1293 = primCons(makeNumber(1), _35reg1292);
Obj _35reg1294 = primCons(intern("string?"), _35reg1293);
Obj _35reg1295 = primCons(_35reg1294, Nil);
Obj _35reg1296 = primCons(_35reg1291, _35reg1295);
Obj _35reg1297 = primCons(_35reg1288, _35reg1296);
Obj _35reg1298 = primCons(_35reg1285, _35reg1297);
Obj _35reg1299 = primCons(_35reg1282, _35reg1298);
Obj _35reg1300 = primCons(_35reg1279, _35reg1299);
Obj _35reg1301 = primCons(_35reg1276, _35reg1300);
Obj _35reg1302 = primCons(_35reg1273, _35reg1301);
Obj _35reg1303 = primCons(_35reg1270, _35reg1302);
Obj _35reg1304 = primCons(_35reg1267, _35reg1303);
Obj _35reg1305 = primCons(_35reg1264, _35reg1304);
Obj _35reg1306 = primCons(_35reg1261, _35reg1305);
Obj _35reg1307 = primCons(_35reg1258, _35reg1306);
Obj _35reg1308 = primCons(_35reg1255, _35reg1307);
Obj _35reg1309 = primCons(_35reg1252, _35reg1308);
Obj _35reg1310 = primCons(_35reg1249, _35reg1309);
Obj _35reg1311 = primCons(_35reg1246, _35reg1310);
Obj _35reg1312 = primSet(intern("cora/lib/toc.*builtin-prims*"), _35reg1311);
Obj _35reg1316 = primSet(intern("builtin?"), makeNative(19, _35clofun2847, 1, 0));
Obj _35reg1319 = primSet(intern("cora/lib/toc.builtin->name"), makeNative(1, _35clofun2848, 1, 0));
Obj _35reg1322 = primSet(intern("cora/lib/toc.builtin->args"), makeNative(4, _35clofun2848, 1, 0));
Obj _35reg1327 = primSet(intern("cora/lib/toc.temp-list"), makeNative(7, _35clofun2848, 2, 0));
Obj _35reg1463 = primSet(intern("cora/lib/toc.parse"), makeNative(16, _35clofun2849, 2, 0));
Obj _35reg1474 = primSet(intern("cora/lib/toc.union"), makeNative(1, _35clofun2850, 2, 0));
Obj _35reg1485 = primSet(intern("cora/lib/toc.diff"), makeNative(7, _35clofun2850, 2, 0));
Obj _35reg1536 = primSet(intern("cora/lib/toc.convert-protect?"), makeNative(14, _35clofun2850, 1, 0));
Obj _35reg1711 = primSet(intern("cora/lib/toc.free-vars"), makeNative(16, _35clofun2851, 1, 0));
Obj _35reg1784 = primSet(intern("cora/lib/toc.closure-convert"), makeNative(10, _35clofun2852, 2, 0));
Obj _35reg1787 = primSet(intern("cora/lib/toc.id"), makeNative(11, _35clofun2852, 1, 0));
Obj _35reg1924 = primSet(intern("cora/lib/toc.tailify"), makeNative(8, _35clofun2853, 2, 0));
Obj _35reg1971 = primSet(intern("cora/lib/toc.tailify-list"), makeNative(18, _35clofun2853, 3, 0));
Obj _35reg2050 = primSet(intern("cora/lib/toc.explicit-stack"), makeNative(15, _35clofun2854, 2, 0));
Obj _35reg2226 = primSet(intern("cora/lib/toc.collect-lambda"), makeNative(8, _35clofun2856, 2, 0));
Obj _35reg2239 = primSet(intern("cora/lib/toc.append-result"), makeNative(14, _35clofun2856, 5, 0));
Obj _35reg2246 = primSet(intern("cora/lib/toc.wrap-var"), makeNative(16, _35clofun2856, 2, 0));
Obj _35reg2266 = primSet(intern("cora/lib/toc.generate-call-list"), makeNative(9, _35clofun2857, 4, 0));
Obj _35reg2533 = primSet(intern("cora/lib/toc.generate-inst"), makeNative(10, _35clofun2861, 4, 0));
Obj _35reg2556 = primSet(intern("cora/lib/toc.generate-cont"), makeNative(2, _35clofun2862, 3, 0));
Obj _35reg2565 = primSet(intern("cora/lib/toc.generate-inst-list-h"), makeNative(8, _35clofun2862, 5, 0));
Obj _35reg2566 = primSet(intern("cora/lib/toc.generate-inst-list"), makeNative(9, _35clofun2862, 4, 0));
Obj _35reg2571 = primSet(intern("cora/lib/toc.code-gen-func-declare"), makeNative(13, _35clofun2862, 2, 0));
Obj _35reg2579 = primSet(intern("cora/lib/toc.local-from-params"), makeNative(20, _35clofun2862, 3, 0));
Obj _35reg2584 = primSet(intern("cora/lib/toc.local-from-cont"), makeNative(4, _35clofun2863, 3, 0));
Obj _35reg2591 = primSet(intern("cora/lib/toc.generate-call-args-reverse"), makeNative(8, _35clofun2863, 4, 0));
Obj _35reg2653 = primSet(intern("cora/lib/toc.code-gen-toplevel"), makeNative(19, _35clofun2863, 2, 0));
Obj _35reg2654 = primSet(intern("cora/lib/toc.parse-pass"), makeNative(20, _35clofun2863, 1, 0));
Obj _35reg2655 = primSet(intern("cora/lib/toc.closure-convert-pass"), makeNative(0, _35clofun2864, 1, 0));
Obj _35reg2656 = primSet(intern("cora/lib/toc.tailify-pass"), makeNative(1, _35clofun2864, 1, 0));
Obj _35reg2657 = primSet(intern("cora/lib/toc.explicit-stack-pass"), makeNative(2, _35clofun2864, 1, 0));
Obj _35reg2687 = primSet(intern("cora/lib/toc.collect-lambda-pass"), makeNative(13, _35clofun2864, 1, 0));
Obj _35reg2694 = primSet(intern("cora/lib/toc.rewrite-->macro"), makeNative(16, _35clofun2864, 2, 0));
pushCont(co, 1, _35clofun2869, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("->");
__arg2 = makeNative(19, _35clofun2864, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1203 = __arg1;
pushCont(co, 2, _35clofun2869, 0);
__nargs = 2;
__arg0 = globalRef(intern("import"));
__arg1 = makeString1("cora/lib/io");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2868(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35tmp1192 = __arg1;
Obj _35tmp1191 = __arg2;
Obj _35reg2790 = primDiv(_35tmp1192, _35tmp1191);
__nargs = 2;
__arg1 = _35reg2790;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35tmp1194 = __arg1;
Obj _35tmp1193 = __arg2;
Obj _35reg2792 = primEQ(_35tmp1194, _35tmp1193);
__nargs = 2;
__arg1 = _35reg2792;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35tmp1196 = __arg1;
Obj _35tmp1195 = __arg2;
Obj _35reg2794 = primGT(_35tmp1196, _35tmp1195);
__nargs = 2;
__arg1 = _35reg2794;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35tmp1198 = __arg1;
Obj _35tmp1197 = __arg2;
Obj _35reg2796 = primLT(_35tmp1198, _35tmp1197);
__nargs = 2;
__arg1 = _35reg2796;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35tmp1199 = __arg1;
Obj _35reg2798 = primGenSym(_35tmp1199);
__nargs = 2;
__arg1 = _35reg2798;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35tmp1200 = __arg1;
Obj _35reg2800 = primIsSymbol(_35tmp1200);
__nargs = 2;
__arg1 = _35reg2800;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35tmp1201 = __arg1;
Obj _35reg2802 = primNot(_35tmp1201);
__nargs = 2;
__arg1 = _35reg2802;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35tmp1202 = __arg1;
Obj _35reg2804 = primIsString(_35tmp1202);
__nargs = 2;
__arg1 = _35reg2804;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val2814 = __arg1;
Obj _35val2812= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val2812;
__arg2 = _35val2814;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2812 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2813 = primCdr(exp);
pushCont(co, 8, _35clofun2868, 1, _35val2812);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg2813;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2822 = __arg1;
Obj _35val2820= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val2820;
__arg2 = _35val2822;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2820 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2821 = primCdr(exp);
pushCont(co, 10, _35clofun2868, 1, _35val2820);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg2821;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2830 = __arg1;
Obj _35val2828= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val2828;
__arg2 = _35val2830;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2828 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2829 = primCdr(exp);
pushCont(co, 12, _35clofun2868, 1, _35val2828);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg2829;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2838 = __arg1;
Obj _35val2836= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val2836;
__arg2 = _35val2838;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2836 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2837 = primCdr(exp);
pushCont(co, 14, _35clofun2868, 1, _35val2836);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg2837;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2845 = __arg1;
Obj _35val2843= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val2843;
__arg2 = _35val2845;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2843 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2844 = primCdr(exp);
pushCont(co, 16, _35clofun2868, 1, _35val2843);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg2844;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2831 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2831) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2832 = primIsCons(exp);
if (True == _35reg2832) {
Obj _35reg2833 = primCar(exp);
Obj _35reg2834 = primEQ(_35reg2833, intern("quote"));
if (True == _35reg2834) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2835 = primCar(exp);
pushCont(co, 15, _35clofun2868, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg2835;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2839 = primIsCons(exp);
if (True == _35reg2839) {
Obj _35reg2840 = primCar(exp);
Obj _35reg2841 = primEQ(_35reg2840, intern("quote"));
if (True == _35reg2841) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2842 = primCar(exp);
pushCont(co, 17, _35clofun2868, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg2842;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label19:
{
Obj _35val2823 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2823) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2824 = primIsCons(exp);
if (True == _35reg2824) {
Obj _35reg2825 = primCar(exp);
Obj _35reg2826 = primEQ(_35reg2825, intern("quote"));
if (True == _35reg2826) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2827 = primCar(exp);
pushCont(co, 13, _35clofun2868, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg2827;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 18, _35clofun2868, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val2807 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2807) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2808 = primIsCons(exp);
if (True == _35reg2808) {
Obj _35reg2809 = primCar(exp);
Obj _35reg2810 = primEQ(_35reg2809, intern("quote"));
if (True == _35reg2810) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2811 = primCar(exp);
pushCont(co, 9, _35clofun2868, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg2811;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
Obj _35reg2815 = primIsString(exp);
if (True == _35reg2815) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2868) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2816 = primIsCons(exp);
if (True == _35reg2816) {
Obj _35reg2817 = primCar(exp);
Obj _35reg2818 = primEQ(_35reg2817, intern("quote"));
if (True == _35reg2818) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2819 = primCar(exp);
pushCont(co, 11, _35clofun2868, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg2819;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 19, _35clofun2868, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("boolean?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2868) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2867(struct Cora* co){
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
pushCont(co, 20, _35clofun2866, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("#include \"types.h\"\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc1176 = makeNative(1, _35clofun2867, 0, 0);
Obj __ = closureRef(co, 0);
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2867) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2761 = __arg1;
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc1175 = makeNative(2, _35clofun2867, 0, 1, closureRef(co, 0));
Obj _35reg2744 = primIsCons(closureRef(co, 0));
if (True == _35reg2744) {
Obj _35reg2745 = primCar(closureRef(co, 0));
Obj _35reg2746 = primIsCons(_35reg2745);
if (True == _35reg2746) {
Obj _35reg2747 = primCar(closureRef(co, 0));
Obj _35reg2748 = primCar(_35reg2747);
Obj _35reg2749 = primEQ(intern("import"), _35reg2748);
if (True == _35reg2749) {
Obj _35reg2750 = primCar(closureRef(co, 0));
Obj _35reg2751 = primCdr(_35reg2750);
Obj _35reg2752 = primIsCons(_35reg2751);
if (True == _35reg2752) {
Obj _35reg2753 = primCar(closureRef(co, 0));
Obj _35reg2754 = primCdr(_35reg2753);
Obj _35reg2755 = primCar(_35reg2754);
Obj pkg = _35reg2755;
Obj _35reg2756 = primCar(closureRef(co, 0));
Obj _35reg2757 = primCdr(_35reg2756);
Obj _35reg2758 = primCdr(_35reg2757);
Obj _35reg2759 = primEQ(Nil, _35reg2758);
if (True == _35reg2759) {
Obj _35reg2760 = primCdr(closureRef(co, 0));
Obj remain = _35reg2760;
pushCont(co, 3, _35clofun2867, 1, remain);
__nargs = 2;
__arg0 = globalRef(intern("import"));
__arg1 = pkg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35p1173 = __arg1;
Obj _35cc1174 = makeNative(4, _35clofun2867, 0, 1, _35p1173);
Obj _35reg2762 = primIsCons(_35p1173);
if (True == _35reg2762) {
Obj _35reg2763 = primCar(_35p1173);
Obj _35reg2764 = primEQ(intern("begin"), _35reg2763);
if (True == _35reg2764) {
Obj _35reg2765 = primCdr(_35p1173);
Obj remain = _35reg2765;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1174;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1174;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2772 = __arg1;
Obj stream= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.close-output-file"));
__arg1 = stream;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2771 = __arg1;
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stream = _35val2771;
pushCont(co, 6, _35clofun2867, 1, stream);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.generate-c"));
__arg1 = stream;
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2770 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc = _35val2770;
pushCont(co, 7, _35clofun2867, 1, bc);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.open-output-file"));
__arg1 = to;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2769 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj input = _35val2769;
pushCont(co, 8, _35clofun2867, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.compile"));
__arg1 = input;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2768 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun2867, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2767 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj sexp = _35val2767;
pushCont(co, 10, _35clofun2867, 2, sexp, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj from = __arg1;
Obj to = __arg2;
Obj pkg_45str = __arg3;
pushCont(co, 11, _35clofun2867, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("read-file-as-sexp"));
__arg1 = from;
__arg2 = pkg_45str;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35tmp1178 = __arg1;
Obj _35tmp1177 = __arg2;
Obj _35reg2774 = primSet(_35tmp1178, _35tmp1177);
__nargs = 2;
__arg1 = _35reg2774;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2867) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35tmp1179 = __arg1;
Obj _35reg2776 = primCar(_35tmp1179);
__nargs = 2;
__arg1 = _35reg2776;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2867) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35tmp1180 = __arg1;
Obj _35reg2778 = primCdr(_35tmp1180);
__nargs = 2;
__arg1 = _35reg2778;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2867) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35tmp1182 = __arg1;
Obj _35tmp1181 = __arg2;
Obj _35reg2780 = primCons(_35tmp1182, _35tmp1181);
__nargs = 2;
__arg1 = _35reg2780;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2867) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35tmp1184 = __arg1;
Obj _35tmp1183 = __arg2;
Obj _35reg2782 = primCons(_35tmp1184, _35tmp1183);
__nargs = 2;
__arg1 = _35reg2782;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2867) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35tmp1186 = __arg1;
Obj _35tmp1185 = __arg2;
Obj _35reg2784 = primAdd(_35tmp1186, _35tmp1185);
__nargs = 2;
__arg1 = _35reg2784;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2867) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35tmp1188 = __arg1;
Obj _35tmp1187 = __arg2;
Obj _35reg2786 = primSub(_35tmp1188, _35tmp1187);
__nargs = 2;
__arg1 = _35reg2786;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2867) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35tmp1190 = __arg1;
Obj _35tmp1189 = __arg2;
Obj _35reg2788 = primMul(_35tmp1190, _35tmp1189);
__nargs = 2;
__arg1 = _35reg2788;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2867) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2866(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2727 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 20, _35clofun2865, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("goto *jumpTable[co->ctx.pc.label];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2726 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun2866, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("};\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2725 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun2866, 2, group, to);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.generate-jumptable"));
__arg1 = to;
__arg2 = makeNumber(0);
__arg3 = _35val2725;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2724 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun2866, 2, group, to);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2723 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 3, _35clofun2866, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("static void* jumpTable[] = {");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2722 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun2866, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("Obj __arg3 = co->args[3];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2721 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun2866, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("Obj __arg2 = co->args[2];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2720 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun2866, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("Obj __arg1 = co->args[1];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2719 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun2866, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("Obj __arg0 = co->args[0];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2718 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun2866, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("int __nargs = co->nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2717 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun2866, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2716 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun2866, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.code-gen-func-declare"));
__arg1 = to;
__arg2 = _35val2716;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj to = __arg1;
Obj group = __arg2;
pushCont(co, 11, _35clofun2866, 2, group, to);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2740 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = closureRef(co, 0);
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2739 = __arg1;
pushCont(co, 13, _35clofun2866, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.code-gen-func-declare"));
__arg1 = closureRef(co, 0);
__arg2 = _35val2739;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj group = __arg1;
pushCont(co, 14, _35clofun2866, 0);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2742 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(16, _35clofun2866, 1, 1, to);
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2741 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun2866, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2738 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 18, _35clofun2866, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(15, _35clofun2866, 1, 1, to);
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2737 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun2866, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("#include \"runtime.h\"\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2865(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2700 = __arg1;
pushCont(co, 20, _35clofun2864, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack-pass"));
__arg1 = _35val2700;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2699 = __arg1;
pushCont(co, 0, _35clofun2865, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.tailify-pass"));
__arg1 = _35val2699;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2698 = __arg1;
pushCont(co, 1, _35clofun2865, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert-pass"));
__arg1 = _35val2698;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp = __arg1;
pushCont(co, 2, _35clofun2865, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.parse-pass"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2706 = __arg1;
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = fn;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1172 = makeNative(4, _35clofun2865, 0, 0);
Obj fn = closureRef(co, 0);
Obj _35reg2703 = primIsCons(closureRef(co, 1));
if (True == _35reg2703) {
Obj _35reg2704 = primCar(closureRef(co, 1));
Obj x = _35reg2704;
Obj _35reg2705 = primCdr(closureRef(co, 1));
Obj y = _35reg2705;
pushCont(co, 5, _35clofun2865, 2, fn, y);
__nargs = 2;
__arg0 = fn;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1172;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p1169 = __arg1;
Obj _35p1170 = __arg2;
Obj _35cc1171 = makeNative(6, _35clofun2865, 0, 2, _35p1169, _35p1170);
Obj fn = _35p1169;
Obj _35reg2707 = primEQ(Nil, _35p1170);
if (True == _35reg2707) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2865) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1171;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val2710 = __arg1;
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
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2713 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2714 = primAdd(i, makeNumber(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.generate-jumptable"));
__arg1 = to;
__arg2 = _35reg2714;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2712 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 9, _35clofun2865, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = to;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj to = __arg1;
Obj i = __arg2;
Obj n = __arg3;
Obj _35reg2709 = primEQ(i, makeNumber(0));
if (True == _35reg2709) {
pushCont(co, 8, _35clofun2865, 2, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("&&label0");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2711 = primLT(i, n);
if (True == _35reg2711) {
pushCont(co, 10, _35clofun2865, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1(", &&label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2865) { goto fail; }
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
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2735 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("\n}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2734 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 13, _35clofun2865, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->args[3] = __arg3;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2733 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 14, _35clofun2865, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->args[2] = __arg2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2732 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 15, _35clofun2865, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->args[1] = __arg1;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2731 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 16, _35clofun2865, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->args[0] = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2730 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 17, _35clofun2865, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->nargs = __nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2729 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun2865, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("fail:\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2728 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun2865, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(12, _35clofun2865, 1, 1, to);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2864(struct Cora* co){
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
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2665 = __arg1;
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res = _35val2665;
Obj _35reg2666 = primCons(intern("entry"), makeNumber(0));
Obj _35reg2667 = primCons(e1, Nil);
Obj _35reg2668 = primCons(Nil, _35reg2667);
Obj _35reg2669 = primCons(Nil, _35reg2668);
Obj _35reg2670 = primCons(intern("lambda"), _35reg2669);
Obj _35reg2671 = primCons(_35reg2670, Nil);
Obj _35reg2672 = primCons(_35reg2666, _35reg2671);
Obj _35reg2673 = primCons(_35reg2672, Nil);
Obj _35reg2674 = primCons(_35reg2673, res);
__nargs = 2;
__arg1 = _35reg2674;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2864) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val2676 = __arg1;
Obj _35val2675= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2677 = primCons(_35val2675, _35val2676);
Obj res = _35reg2677;
Obj _35reg2678 = primCons(intern("entry"), makeNumber(0));
Obj _35reg2679 = primCons(e1, Nil);
Obj _35reg2680 = primCons(Nil, _35reg2679);
Obj _35reg2681 = primCons(Nil, _35reg2680);
Obj _35reg2682 = primCons(intern("lambda"), _35reg2681);
Obj _35reg2683 = primCons(_35reg2682, Nil);
Obj _35reg2684 = primCons(_35reg2678, _35reg2683);
Obj _35reg2685 = primCons(_35reg2684, Nil);
Obj _35reg2686 = primCons(_35reg2685, res);
__nargs = 2;
__arg1 = _35reg2686;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2864) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val2675 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun2864, 2, _35val2675, e1);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2664 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2664) {
pushCont(co, 3, _35clofun2864, 1, e1);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 5, _35clofun2864, 2, v, e1);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2663 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur = _35val2663;
pushCont(co, 6, _35clofun2864, 3, cur, v, e1);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2662 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1 = _35val2662;
pushCont(co, 7, _35clofun2864, 2, v, e1);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2661 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun2864, 1, v);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = v;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2660 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun2864, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(2);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2659 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun2864, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2658 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v = _35val2658;
pushCont(co, 11, _35clofun2864, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj exp = __arg1;
pushCont(co, 12, _35clofun2864, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("vector"));
__arg1 = makeNumber(3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc1168 = makeNative(14, _35clofun2864, 0, 0);
Obj obj = closureRef(co, 0);
Obj _35reg2688 = primIsCons(closureRef(co, 1));
if (True == _35reg2688) {
Obj _35reg2689 = primCar(closureRef(co, 1));
Obj hd = _35reg2689;
Obj _35reg2690 = primCdr(closureRef(co, 1));
Obj more = _35reg2690;
Obj _35reg2691 = primCons(obj, Nil);
Obj _35reg2692 = primCons(hd, _35reg2691);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.rewrite-->macro"));
__arg1 = _35reg2692;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1168;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35p1165 = __arg1;
Obj _35p1166 = __arg2;
Obj _35cc1167 = makeNative(15, _35clofun2864, 0, 2, _35p1165, _35p1166);
Obj obj = _35p1165;
Obj _35reg2693 = primEQ(Nil, _35p1166);
if (True == _35reg2693) {
__nargs = 2;
__arg1 = obj;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2864) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2696 = __arg1;
Obj obj= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fns = _35val2696;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.rewrite-->macro"));
__arg1 = obj;
__arg2 = fns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2695 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj obj = _35val2695;
pushCont(co, 17, _35clofun2864, 1, obj);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj exp = __arg1;
pushCont(co, 18, _35clofun2864, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2701 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda-pass"));
__arg1 = _35val2701;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2863(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2583 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2582 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun2863, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2581 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun2863, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("= co->ctx.stk.stack[co->ctx.stk.base + ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2580 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 2, _35clofun2863, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 3, _35clofun2863, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2588 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2589 = primAdd(idx, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-args-reverse"));
__arg1 = fn;
__arg2 = w;
__arg3 = _35reg2589;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc1160 = makeNative(5, _35clofun2863, 0, 0);
Obj fn = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj idx = closureRef(co, 2);
Obj _35reg2585 = primIsCons(closureRef(co, 3));
if (True == _35reg2585) {
Obj _35reg2586 = primCar(closureRef(co, 3));
Obj a = _35reg2586;
Obj _35reg2587 = primCdr(closureRef(co, 3));
Obj b = _35reg2587;
pushCont(co, 6, _35clofun2863, 4, idx, fn, w, b);
__nargs = 4;
__arg0 = fn;
__arg1 = w;
__arg2 = idx;
__arg3 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1160;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35p1155 = __arg1;
Obj _35p1156 = __arg2;
Obj _35p1157 = __arg3;
Obj _35p1158 = co->args[4];
Obj _35cc1159 = makeNative(7, _35clofun2863, 0, 4, _35p1155, _35p1156, _35p1157, _35p1158);
Obj fn = _35p1155;
Obj w = _35p1156;
Obj idx = _35p1157;
Obj _35reg2590 = primEQ(Nil, _35p1158);
if (True == _35reg2590) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2863) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2593 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.display"));
__arg1 = makeString1("\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2592 = __arg1;
Obj other= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 10, _35clofun2863, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.display"));
__arg1 = other;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc1164 = makeNative(9, _35clofun2863, 0, 0);
Obj w = closureRef(co, 0);
Obj other = closureRef(co, 1);
pushCont(co, 11, _35clofun2863, 1, other);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.display"));
__arg1 = makeString1("wrong format of toplevel\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2652 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2650 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2651 = primCar(label);
pushCont(co, 13, _35clofun2863, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = _35reg2651;
__arg2 = params;
__arg3 = w;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2649 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 14, _35clofun2863, 4, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc.local-from-cont"));
__arg2 = w;
__arg3 = makeNumber(0);
co->args[4] = actives;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2648 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 15, _35clofun2863, 5, actives, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc.local-from-params"));
__arg2 = w;
__arg3 = makeNumber(1);
co->args[4] = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2647 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 16, _35clofun2863, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2645 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2646 = primCdr(label);
pushCont(co, 17, _35clofun2863, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35reg2646;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35p1161 = __arg1;
Obj _35p1162 = __arg2;
Obj _35cc1163 = makeNative(12, _35clofun2863, 0, 2, _35p1161, _35p1162);
Obj w = _35p1161;
Obj _35reg2594 = primIsCons(_35p1162);
if (True == _35reg2594) {
Obj _35reg2595 = primCar(_35p1162);
Obj label = _35reg2595;
Obj _35reg2596 = primCdr(_35p1162);
Obj _35reg2597 = primIsCons(_35reg2596);
if (True == _35reg2597) {
Obj _35reg2598 = primCdr(_35p1162);
Obj _35reg2599 = primCar(_35reg2598);
Obj _35reg2600 = primIsCons(_35reg2599);
if (True == _35reg2600) {
Obj _35reg2601 = primCdr(_35p1162);
Obj _35reg2602 = primCar(_35reg2601);
Obj _35reg2603 = primCar(_35reg2602);
Obj _35reg2604 = primEQ(intern("lambda"), _35reg2603);
if (True == _35reg2604) {
Obj _35reg2605 = primCdr(_35p1162);
Obj _35reg2606 = primCar(_35reg2605);
Obj _35reg2607 = primCdr(_35reg2606);
Obj _35reg2608 = primIsCons(_35reg2607);
if (True == _35reg2608) {
Obj _35reg2609 = primCdr(_35p1162);
Obj _35reg2610 = primCar(_35reg2609);
Obj _35reg2611 = primCdr(_35reg2610);
Obj _35reg2612 = primCar(_35reg2611);
Obj params = _35reg2612;
Obj _35reg2613 = primCdr(_35p1162);
Obj _35reg2614 = primCar(_35reg2613);
Obj _35reg2615 = primCdr(_35reg2614);
Obj _35reg2616 = primCdr(_35reg2615);
Obj _35reg2617 = primIsCons(_35reg2616);
if (True == _35reg2617) {
Obj _35reg2618 = primCdr(_35p1162);
Obj _35reg2619 = primCar(_35reg2618);
Obj _35reg2620 = primCdr(_35reg2619);
Obj _35reg2621 = primCdr(_35reg2620);
Obj _35reg2622 = primCar(_35reg2621);
Obj actives = _35reg2622;
Obj _35reg2623 = primCdr(_35p1162);
Obj _35reg2624 = primCar(_35reg2623);
Obj _35reg2625 = primCdr(_35reg2624);
Obj _35reg2626 = primCdr(_35reg2625);
Obj _35reg2627 = primCdr(_35reg2626);
Obj _35reg2628 = primIsCons(_35reg2627);
if (True == _35reg2628) {
Obj _35reg2629 = primCdr(_35p1162);
Obj _35reg2630 = primCar(_35reg2629);
Obj _35reg2631 = primCdr(_35reg2630);
Obj _35reg2632 = primCdr(_35reg2631);
Obj _35reg2633 = primCdr(_35reg2632);
Obj _35reg2634 = primCar(_35reg2633);
Obj body = _35reg2634;
Obj _35reg2635 = primCdr(_35p1162);
Obj _35reg2636 = primCar(_35reg2635);
Obj _35reg2637 = primCdr(_35reg2636);
Obj _35reg2638 = primCdr(_35reg2637);
Obj _35reg2639 = primCdr(_35reg2638);
Obj _35reg2640 = primCdr(_35reg2639);
Obj _35reg2641 = primEQ(Nil, _35reg2640);
if (True == _35reg2641) {
Obj _35reg2642 = primCdr(_35p1162);
Obj _35reg2643 = primCdr(_35reg2642);
Obj _35reg2644 = primEQ(Nil, _35reg2643);
if (True == _35reg2644) {
pushCont(co, 18, _35clofun2863, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1163;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1163;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1163;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1163;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1163;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1163;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1163;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1163;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1163;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2862(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2545 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 20, _35clofun2861, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2543 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2544 = primCdr(label);
pushCont(co, 0, _35clofun2862, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35reg2544;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35p1144 = __arg1;
Obj _35p1145 = __arg2;
Obj _35p1146 = __arg3;
Obj _35cc1147 = makeNative(11, _35clofun2861, 0, 0);
Obj self = _35p1144;
Obj w = _35p1145;
Obj _35reg2534 = primIsCons(_35p1146);
if (True == _35reg2534) {
Obj _35reg2535 = primCar(_35p1146);
Obj _35reg2536 = primEQ(intern("%continuation"), _35reg2535);
if (True == _35reg2536) {
Obj _35reg2537 = primCdr(_35p1146);
Obj _35reg2538 = primIsCons(_35reg2537);
if (True == _35reg2538) {
Obj _35reg2539 = primCdr(_35p1146);
Obj _35reg2540 = primCar(_35reg2539);
Obj label = _35reg2540;
Obj _35reg2541 = primCdr(_35p1146);
Obj _35reg2542 = primCdr(_35reg2541);
Obj stacks = _35reg2542;
pushCont(co, 1, _35clofun2862, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("pushCont(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1147;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1147;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1147;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2563 = __arg1;
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
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2561 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2562 = primNot(_35val2561);
if (True == _35reg2562) {
pushCont(co, 4, _35clofun2862, 5, self, env, fn, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2560 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 5, _35clofun2862, 5, self, env, fn, w, b);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc1154 = makeNative(3, _35clofun2862, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj fn = closureRef(co, 2);
Obj w = closureRef(co, 3);
Obj _35reg2557 = primIsCons(closureRef(co, 4));
if (True == _35reg2557) {
Obj _35reg2558 = primCar(closureRef(co, 4));
Obj a = _35reg2558;
Obj _35reg2559 = primCdr(closureRef(co, 4));
Obj b = _35reg2559;
pushCont(co, 6, _35clofun2862, 5, self, env, fn, w, b);
__nargs = 5;
__arg0 = fn;
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1154;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35p1148 = __arg1;
Obj _35p1149 = __arg2;
Obj _35p1150 = __arg3;
Obj _35p1151 = co->args[4];
Obj _35p1152 = co->args[5];
Obj _35cc1153 = makeNative(7, _35clofun2862, 0, 5, _35p1148, _35p1149, _35p1150, _35p1151, _35p1152);
Obj self = _35p1148;
Obj env = _35p1149;
Obj fn = _35p1150;
Obj w = _35p1151;
Obj _35reg2564 = primEQ(Nil, _35p1152);
if (True == _35reg2564) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2862) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1153;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2570 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2569 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 10, _35clofun2862, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("(struct Cora* co");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2567 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2568 = primCar(label);
pushCont(co, 11, _35clofun2862, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = _35reg2568;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj w = __arg1;
Obj label = __arg2;
pushCont(co, 12, _35clofun2862, 2, label, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("void ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2576 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2575 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun2862, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2578 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2577 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun2862, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2573 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2574 = primLT(i, makeNumber(4));
if (True == _35reg2574) {
pushCont(co, 15, _35clofun2862, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = __arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 17, _35clofun2862, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val2572 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 18, _35clofun2862, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 19, _35clofun2862, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2861(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2506 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2505 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun2861, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc1133 = makeNative(20, _35clofun2860, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2495 = primIsCons(closureRef(co, 3));
if (True == _35reg2495) {
Obj _35reg2496 = primCar(closureRef(co, 3));
Obj _35reg2497 = primEQ(intern("%stack-ref"), _35reg2496);
if (True == _35reg2497) {
Obj _35reg2498 = primCdr(closureRef(co, 3));
Obj _35reg2499 = primIsCons(_35reg2498);
if (True == _35reg2499) {
Obj _35reg2500 = primCdr(closureRef(co, 3));
Obj _35reg2501 = primCar(_35reg2500);
Obj idx = _35reg2501;
Obj _35reg2502 = primCdr(closureRef(co, 3));
Obj _35reg2503 = primCdr(_35reg2502);
Obj _35reg2504 = primEQ(Nil, _35reg2503);
if (True == _35reg2504) {
pushCont(co, 1, _35clofun2861, 2, idx, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("stackRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1133;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1133;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1133;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1133;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val2518 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2517 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 3, _35clofun2861, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc1132 = makeNative(2, _35clofun2861, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2507 = primIsCons(closureRef(co, 3));
if (True == _35reg2507) {
Obj _35reg2508 = primCar(closureRef(co, 3));
Obj _35reg2509 = primEQ(intern("%closure-ref"), _35reg2508);
if (True == _35reg2509) {
Obj _35reg2510 = primCdr(closureRef(co, 3));
Obj _35reg2511 = primIsCons(_35reg2510);
if (True == _35reg2511) {
Obj _35reg2512 = primCdr(closureRef(co, 3));
Obj _35reg2513 = primCar(_35reg2512);
Obj idx = _35reg2513;
Obj _35reg2514 = primCdr(closureRef(co, 3));
Obj _35reg2515 = primCdr(_35reg2514);
Obj _35reg2516 = primEQ(Nil, _35reg2515);
if (True == _35reg2516) {
pushCont(co, 4, _35clofun2861, 2, idx, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("closureRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1132;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1132;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1132;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1132;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2531 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("\"))");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2530 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 6, _35clofun2861, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = _35val2530;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2529 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun2861, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1131 = makeNative(5, _35clofun2861, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2519 = primIsCons(closureRef(co, 3));
if (True == _35reg2519) {
Obj _35reg2520 = primCar(closureRef(co, 3));
Obj _35reg2521 = primEQ(intern("%global"), _35reg2520);
if (True == _35reg2521) {
Obj _35reg2522 = primCdr(closureRef(co, 3));
Obj _35reg2523 = primIsCons(_35reg2522);
if (True == _35reg2523) {
Obj _35reg2524 = primCdr(closureRef(co, 3));
Obj _35reg2525 = primCar(_35reg2524);
Obj x = _35reg2525;
Obj _35reg2526 = primCdr(closureRef(co, 3));
Obj _35reg2527 = primCdr(_35reg2526);
Obj _35reg2528 = primEQ(Nil, _35reg2527);
if (True == _35reg2528) {
pushCont(co, 8, _35clofun2861, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("globalRef(intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1131;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1131;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1131;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1131;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p1126 = __arg1;
Obj _35p1127 = __arg2;
Obj _35p1128 = __arg3;
Obj _35p1129 = co->args[4];
Obj _35cc1130 = makeNative(9, _35clofun2861, 0, 4, _35p1126, _35p1127, _35p1128, _35p1129);
Obj self = _35p1126;
Obj env = _35p1127;
Obj w = _35p1128;
Obj x = _35p1129;
Obj _35reg2532 = primIsSymbol(x);
if (True == _35reg2532) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1130;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2554 = __arg1;
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
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x = __arg1;
pushCont(co, 12, _35clofun2861, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = closureRef(co, 1);
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2555 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2552 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2553 = primNot(_35val2552);
if (True == _35reg2553) {
pushCont(co, 14, _35clofun2861, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(13, _35clofun2861, 1, 2, self, w);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2551 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 15, _35clofun2861, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2550 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 16, _35clofun2861, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35val2550;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2549 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 17, _35clofun2861, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2548 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 18, _35clofun2861, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2546 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2547 = primCar(label);
pushCont(co, 19, _35clofun2861, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = _35reg2547;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2860(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2464 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2465 = primCons(a, env);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = _35reg2465;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2463 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 0, _35clofun2860, 5, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2462 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 1, _35clofun2860, 5, a, env, self, w, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2461 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 2, _35clofun2860, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2460 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 3, _35clofun2860, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2469 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2470 = primCons(a, env);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = _35reg2470;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2468 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 5, _35clofun2860, 5, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2467 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 6, _35clofun2860, 5, a, env, self, w, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2466 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 7, _35clofun2860, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2458 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj idx = _35val2458;
Obj _35reg2459 = primLT(idx, makeNumber(0));
if (True == _35reg2459) {
pushCont(co, 4, _35clofun2860, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
pushCont(co, 8, _35clofun2860, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc1135 = makeNative(20, _35clofun2859, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2432 = primIsCons(closureRef(co, 3));
if (True == _35reg2432) {
Obj _35reg2433 = primCar(closureRef(co, 3));
Obj _35reg2434 = primEQ(intern("let"), _35reg2433);
if (True == _35reg2434) {
Obj _35reg2435 = primCdr(closureRef(co, 3));
Obj _35reg2436 = primIsCons(_35reg2435);
if (True == _35reg2436) {
Obj _35reg2437 = primCdr(closureRef(co, 3));
Obj _35reg2438 = primCar(_35reg2437);
Obj a = _35reg2438;
Obj _35reg2439 = primCdr(closureRef(co, 3));
Obj _35reg2440 = primCdr(_35reg2439);
Obj _35reg2441 = primIsCons(_35reg2440);
if (True == _35reg2441) {
Obj _35reg2442 = primCdr(closureRef(co, 3));
Obj _35reg2443 = primCdr(_35reg2442);
Obj _35reg2444 = primCar(_35reg2443);
Obj b = _35reg2444;
Obj _35reg2445 = primCdr(closureRef(co, 3));
Obj _35reg2446 = primCdr(_35reg2445);
Obj _35reg2447 = primCdr(_35reg2446);
Obj _35reg2448 = primIsCons(_35reg2447);
if (True == _35reg2448) {
Obj _35reg2449 = primCdr(closureRef(co, 3));
Obj _35reg2450 = primCdr(_35reg2449);
Obj _35reg2451 = primCdr(_35reg2450);
Obj _35reg2452 = primCar(_35reg2451);
Obj c = _35reg2452;
Obj _35reg2453 = primCdr(closureRef(co, 3));
Obj _35reg2454 = primCdr(_35reg2453);
Obj _35reg2455 = primCdr(_35reg2454);
Obj _35reg2456 = primCdr(_35reg2455);
Obj _35reg2457 = primEQ(Nil, _35reg2456);
if (True == _35reg2457) {
pushCont(co, 9, _35clofun2860, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.index"));
__arg1 = a;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val2484 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2483 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 11, _35clofun2860, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = _35val2483;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2482 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun2860, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2487 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2486 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun2860, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2491 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2490 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 16, _35clofun2860, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = _35val2490;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2489 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun2860, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc/internal.escape-str"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2485 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2485) {
pushCont(co, 15, _35clofun2860, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("makeNumber(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2488 = primIsString(x);
if (True == _35reg2488) {
pushCont(co, 18, _35clofun2860, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("makeString1(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2492 = primEQ(x, Nil);
if (True == _35reg2492) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("Nil");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2493 = primEQ(x, True);
if (True == _35reg2493) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("True");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2494 = primEQ(x, False);
if (True == _35reg2494) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("False");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}
}
}

label20:
{
Obj _35cc1134 = makeNative(10, _35clofun2860, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2471 = primIsCons(closureRef(co, 3));
if (True == _35reg2471) {
Obj _35reg2472 = primCar(closureRef(co, 3));
Obj _35reg2473 = primEQ(intern("%const"), _35reg2472);
if (True == _35reg2473) {
Obj _35reg2474 = primCdr(closureRef(co, 3));
Obj _35reg2475 = primIsCons(_35reg2474);
if (True == _35reg2475) {
Obj _35reg2476 = primCdr(closureRef(co, 3));
Obj _35reg2477 = primCar(_35reg2476);
Obj x = _35reg2477;
Obj _35reg2478 = primCdr(closureRef(co, 3));
Obj _35reg2479 = primCdr(_35reg2478);
Obj _35reg2480 = primEQ(Nil, _35reg2479);
if (True == _35reg2480) {
Obj _35reg2481 = primIsSymbol(x);
if (True == _35reg2481) {
pushCont(co, 13, _35clofun2860, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, _35clofun2860, 2, x, w);
__nargs = 2;
__arg0 = globalRef(intern("number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2860) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2859(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2373 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 20, _35clofun2858, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35val2373;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2372 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 0, _35clofun2859, 4, self, env, frees, w);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2371 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 1, _35clofun2859, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2370 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 2, _35clofun2859, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2369 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 3, _35clofun2859, 5, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2367 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg2368 = primCar(label);
pushCont(co, 4, _35clofun2859, 5, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = _35reg2368;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2366 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 5, _35clofun2859, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2364 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg2365 = primCdr(label);
pushCont(co, 6, _35clofun2859, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35reg2365;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc1138 = makeNative(16, _35clofun2858, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2348 = primIsCons(closureRef(co, 3));
if (True == _35reg2348) {
Obj _35reg2349 = primCar(closureRef(co, 3));
Obj _35reg2350 = primEQ(intern("%closure"), _35reg2349);
if (True == _35reg2350) {
Obj _35reg2351 = primCdr(closureRef(co, 3));
Obj _35reg2352 = primIsCons(_35reg2351);
if (True == _35reg2352) {
Obj _35reg2353 = primCdr(closureRef(co, 3));
Obj _35reg2354 = primCar(_35reg2353);
Obj label = _35reg2354;
Obj _35reg2355 = primCdr(closureRef(co, 3));
Obj _35reg2356 = primCdr(_35reg2355);
Obj _35reg2357 = primIsCons(_35reg2356);
if (True == _35reg2357) {
Obj _35reg2358 = primCdr(closureRef(co, 3));
Obj _35reg2359 = primCdr(_35reg2358);
Obj _35reg2360 = primCar(_35reg2359);
Obj nargs = _35reg2360;
Obj _35reg2361 = primCdr(closureRef(co, 3));
Obj _35reg2362 = primCdr(_35reg2361);
Obj _35reg2363 = primCdr(_35reg2362);
Obj frees = _35reg2363;
pushCont(co, 7, _35clofun2859, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("makeNative(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1138;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1138;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1138;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1138;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val2410 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2409 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 9, _35clofun2859, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2408 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 10, _35clofun2859, 4, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("} else {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2407 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 11, _35clofun2859, 4, self, env, c, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2406 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 12, _35clofun2859, 5, b, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(") {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2405 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 13, _35clofun2859, 5, b, self, env, c, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc1137 = makeNative(8, _35clofun2859, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2379 = primIsCons(closureRef(co, 3));
if (True == _35reg2379) {
Obj _35reg2380 = primCar(closureRef(co, 3));
Obj _35reg2381 = primEQ(intern("if"), _35reg2380);
if (True == _35reg2381) {
Obj _35reg2382 = primCdr(closureRef(co, 3));
Obj _35reg2383 = primIsCons(_35reg2382);
if (True == _35reg2383) {
Obj _35reg2384 = primCdr(closureRef(co, 3));
Obj _35reg2385 = primCar(_35reg2384);
Obj a = _35reg2385;
Obj _35reg2386 = primCdr(closureRef(co, 3));
Obj _35reg2387 = primCdr(_35reg2386);
Obj _35reg2388 = primIsCons(_35reg2387);
if (True == _35reg2388) {
Obj _35reg2389 = primCdr(closureRef(co, 3));
Obj _35reg2390 = primCdr(_35reg2389);
Obj _35reg2391 = primCar(_35reg2390);
Obj b = _35reg2391;
Obj _35reg2392 = primCdr(closureRef(co, 3));
Obj _35reg2393 = primCdr(_35reg2392);
Obj _35reg2394 = primCdr(_35reg2393);
Obj _35reg2395 = primIsCons(_35reg2394);
if (True == _35reg2395) {
Obj _35reg2396 = primCdr(closureRef(co, 3));
Obj _35reg2397 = primCdr(_35reg2396);
Obj _35reg2398 = primCdr(_35reg2397);
Obj _35reg2399 = primCar(_35reg2398);
Obj c = _35reg2399;
Obj _35reg2400 = primCdr(closureRef(co, 3));
Obj _35reg2401 = primCdr(_35reg2400);
Obj _35reg2402 = primCdr(_35reg2401);
Obj _35reg2403 = primCdr(_35reg2402);
Obj _35reg2404 = primEQ(Nil, _35reg2403);
if (True == _35reg2404) {
pushCont(co, 14, _35clofun2859, 6, a, b, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("if (True == ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2431 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2430 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 16, _35clofun2859, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2429 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 17, _35clofun2859, 4, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2428 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun2859, 4, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = _35val2428;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc1136 = makeNative(15, _35clofun2859, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2411 = primIsCons(closureRef(co, 3));
if (True == _35reg2411) {
Obj _35reg2412 = primCar(closureRef(co, 3));
Obj _35reg2413 = primIsCons(_35reg2412);
if (True == _35reg2413) {
Obj _35reg2414 = primCar(closureRef(co, 3));
Obj _35reg2415 = primCar(_35reg2414);
Obj _35reg2416 = primEQ(intern("%builtin"), _35reg2415);
if (True == _35reg2416) {
Obj _35reg2417 = primCar(closureRef(co, 3));
Obj _35reg2418 = primCdr(_35reg2417);
Obj _35reg2419 = primIsCons(_35reg2418);
if (True == _35reg2419) {
Obj _35reg2420 = primCar(closureRef(co, 3));
Obj _35reg2421 = primCdr(_35reg2420);
Obj _35reg2422 = primCar(_35reg2421);
Obj f = _35reg2422;
Obj _35reg2423 = primCar(closureRef(co, 3));
Obj _35reg2424 = primCdr(_35reg2423);
Obj _35reg2425 = primCdr(_35reg2424);
Obj _35reg2426 = primEQ(Nil, _35reg2425);
if (True == _35reg2426) {
Obj _35reg2427 = primCdr(closureRef(co, 3));
Obj args = _35reg2427;
pushCont(co, 19, _35clofun2859, 4, self, env, args, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.builtin->name"));
__arg1 = f;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1136;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1136;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1136;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1136;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1136;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2859) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2858(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2270 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 20, _35clofun2857, 4, f, args, self, w);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1143 = makeNative(10, _35clofun2857, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2267 = primIsCons(closureRef(co, 3));
if (True == _35reg2267) {
Obj _35reg2268 = primCar(closureRef(co, 3));
Obj f = _35reg2268;
Obj _35reg2269 = primCdr(closureRef(co, 3));
Obj args = _35reg2269;
pushCont(co, 0, _35clofun2858, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("__nargs = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val2300 = __arg1;
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
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1142 = makeNative(1, _35clofun2858, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2283 = primIsCons(closureRef(co, 3));
if (True == _35reg2283) {
Obj _35reg2284 = primCar(closureRef(co, 3));
Obj _35reg2285 = primEQ(intern("call"), _35reg2284);
if (True == _35reg2285) {
Obj _35reg2286 = primCdr(closureRef(co, 3));
Obj _35reg2287 = primIsCons(_35reg2286);
if (True == _35reg2287) {
Obj _35reg2288 = primCdr(closureRef(co, 3));
Obj _35reg2289 = primCar(_35reg2288);
Obj exp = _35reg2289;
Obj _35reg2290 = primCdr(closureRef(co, 3));
Obj _35reg2291 = primCdr(_35reg2290);
Obj _35reg2292 = primIsCons(_35reg2291);
if (True == _35reg2292) {
Obj _35reg2293 = primCdr(closureRef(co, 3));
Obj _35reg2294 = primCdr(_35reg2293);
Obj _35reg2295 = primCar(_35reg2294);
Obj cont = _35reg2295;
Obj _35reg2296 = primCdr(closureRef(co, 3));
Obj _35reg2297 = primCdr(_35reg2296);
Obj _35reg2298 = primCdr(_35reg2297);
Obj _35reg2299 = primEQ(Nil, _35reg2298);
if (True == _35reg2299) {
pushCont(co, 2, _35clofun2858, 4, self, env, w, exp);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.generate-cont"));
__arg1 = self;
__arg2 = w;
__arg3 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc1141 = makeNative(3, _35clofun2858, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2301 = primIsCons(closureRef(co, 3));
if (True == _35reg2301) {
Obj _35reg2302 = primCar(closureRef(co, 3));
Obj _35reg2303 = primEQ(intern("tailcall"), _35reg2302);
if (True == _35reg2303) {
Obj _35reg2304 = primCdr(closureRef(co, 3));
Obj _35reg2305 = primIsCons(_35reg2304);
if (True == _35reg2305) {
Obj _35reg2306 = primCdr(closureRef(co, 3));
Obj _35reg2307 = primCar(_35reg2306);
Obj exp = _35reg2307;
Obj _35reg2308 = primCdr(closureRef(co, 3));
Obj _35reg2309 = primCdr(_35reg2308);
Obj _35reg2310 = primEQ(Nil, _35reg2309);
if (True == _35reg2310) {
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1141;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1141;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1141;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1141;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2328 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("goto *jumpTable[co->ctx.pc.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2327 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 5, _35clofun2858, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(") { goto fail; }\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2326 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun2858, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = self;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2325 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun2858, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("if (co->ctx.pc.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2324 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun2858, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("co->ctx = co->callstack.data[--co->callstack.len];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2323 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun2858, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2322 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 10, _35clofun2858, 2, self, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2321 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 11, _35clofun2858, 4, env, x, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("__arg1 = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1140 = makeNative(4, _35clofun2858, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2311 = primIsCons(closureRef(co, 3));
if (True == _35reg2311) {
Obj _35reg2312 = primCar(closureRef(co, 3));
Obj _35reg2313 = primEQ(intern("return"), _35reg2312);
if (True == _35reg2313) {
Obj _35reg2314 = primCdr(closureRef(co, 3));
Obj _35reg2315 = primIsCons(_35reg2314);
if (True == _35reg2315) {
Obj _35reg2316 = primCdr(closureRef(co, 3));
Obj _35reg2317 = primCar(_35reg2316);
Obj x = _35reg2317;
Obj _35reg2318 = primCdr(closureRef(co, 3));
Obj _35reg2319 = primCdr(_35reg2318);
Obj _35reg2320 = primEQ(Nil, _35reg2319);
if (True == _35reg2320) {
pushCont(co, 12, _35clofun2858, 4, env, x, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("__nargs = 2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1140;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1140;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1140;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1140;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2347 = __arg1;
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
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2346 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 14, _35clofun2858, 4, self, env, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35cc1139 = makeNative(13, _35clofun2858, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2329 = primIsCons(closureRef(co, 3));
if (True == _35reg2329) {
Obj _35reg2330 = primCar(closureRef(co, 3));
Obj _35reg2331 = primEQ(intern("do"), _35reg2330);
if (True == _35reg2331) {
Obj _35reg2332 = primCdr(closureRef(co, 3));
Obj _35reg2333 = primIsCons(_35reg2332);
if (True == _35reg2333) {
Obj _35reg2334 = primCdr(closureRef(co, 3));
Obj _35reg2335 = primCar(_35reg2334);
Obj a = _35reg2335;
Obj _35reg2336 = primCdr(closureRef(co, 3));
Obj _35reg2337 = primCdr(_35reg2336);
Obj _35reg2338 = primIsCons(_35reg2337);
if (True == _35reg2338) {
Obj _35reg2339 = primCdr(closureRef(co, 3));
Obj _35reg2340 = primCdr(_35reg2339);
Obj _35reg2341 = primCar(_35reg2340);
Obj b = _35reg2341;
Obj _35reg2342 = primCdr(closureRef(co, 3));
Obj _35reg2343 = primCdr(_35reg2342);
Obj _35reg2344 = primCdr(_35reg2343);
Obj _35reg2345 = primEQ(Nil, _35reg2344);
if (True == _35reg2345) {
pushCont(co, 15, _35clofun2858, 4, self, env, w, b);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1139;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1139;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1139;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1139;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1139;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2378 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2377 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 17, _35clofun2858, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2375 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2376 = primNot(_35val2375);
if (True == _35reg2376) {
pushCont(co, 18, _35clofun2858, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val2374 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun2858, 4, self, env, frees, w);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2857(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2253 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 20, _35clofun2856, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2252 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 0, _35clofun2857, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2263 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2264 = primAdd(i, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg2264;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2262 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 2, _35clofun2857, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2261 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 3, _35clofun2857, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2260 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 4, _35clofun2857, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2259 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 5, _35clofun2857, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2258 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 6, _35clofun2857, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc1125 = makeNative(17, _35clofun2856, 0, 0);
Obj self = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj i = closureRef(co, 2);
Obj _35reg2247 = primIsCons(closureRef(co, 3));
if (True == _35reg2247) {
Obj _35reg2248 = primCar(closureRef(co, 3));
Obj x = _35reg2248;
Obj _35reg2249 = primCdr(closureRef(co, 3));
Obj more = _35reg2249;
Obj _35reg2250 = primGT(i, makeNumber(3));
Obj _35reg2251 = primNot(_35reg2250);
if (True == _35reg2251) {
pushCont(co, 1, _35clofun2857, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 7, _35clofun2857, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1125;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35p1120 = __arg1;
Obj _35p1121 = __arg2;
Obj _35p1122 = __arg3;
Obj _35p1123 = co->args[4];
Obj _35cc1124 = makeNative(8, _35clofun2857, 0, 4, _35p1120, _35p1121, _35p1122, _35p1123);
Obj self = _35p1120;
Obj w = _35p1121;
Obj i = _35p1122;
Obj _35reg2265 = primEQ(Nil, _35p1123);
if (True == _35reg2265) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2857) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1124;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2282 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("goto *jumpTable[ps.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2281 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 11, _35clofun2857, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(") { co->ctx.pc = ps; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2280 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun2857, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = self;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2279 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 13, _35clofun2857, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("if (ps.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2278 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun2857, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2277 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 15, _35clofun2857, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2276 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun2857, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("co->ctx.frees = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2274 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2275 = primCons(f, args);
pushCont(co, 17, _35clofun2857, 2, self, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = makeNumber(0);
co->args[4] = _35reg2275;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2273 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun2857, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2271 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2272 = primAdd(makeNumber(1), _35val2271);
pushCont(co, 19, _35clofun2857, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35reg2272;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2856(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2201 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2202 = primCons(name, idx);
Obj _35reg2203 = primCons(_35reg2202, fvs);
Obj _35reg2204 = primCons(clo_45or_45cont, _35reg2203);
__nargs = 2;
__arg1 = _35reg2204;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val2214 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2213= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2215 = primCons(_35val2214, fvs);
Obj _35reg2216 = primCons(_35reg2213, _35reg2215);
Obj _35reg2217 = primCons(clo_45or_45cont, _35reg2216);
__nargs = 2;
__arg1 = _35reg2217;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2212 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2213 = primCons(name, idx);
pushCont(co, 1, _35clofun2856, 3, fvs, _35reg2213, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2222 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2223 = primCons(name, idx);
Obj _35reg2224 = primCons(_35reg2223, fvs);
Obj _35reg2225 = primCons(clo_45or_45cont, _35reg2224);
__nargs = 2;
__arg1 = _35reg2225;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val2205 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg2206 = primCar(_35val2205);
Obj name = _35reg2206;
Obj _35reg2207 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2207) {
Obj _35reg2208 = primCons(body1, Nil);
Obj _35reg2209 = primCons(Nil, _35reg2208);
Obj _35reg2210 = primCons(params, _35reg2209);
Obj _35reg2211 = primCons(intern("lambda"), _35reg2210);
pushCont(co, 2, _35clofun2856, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2211;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2218 = primCons(body1, Nil);
Obj _35reg2219 = primCons(fvs, _35reg2218);
Obj _35reg2220 = primCons(params, _35reg2219);
Obj _35reg2221 = primCons(intern("lambda"), _35reg2220);
pushCont(co, 3, _35clofun2856, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2183 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val2183;
Obj _35reg2184 = primEQ(idx, makeNumber(0));
if (True == _35reg2184) {
Obj _35reg2185 = primGenSym(intern("clofun"));
Obj name = _35reg2185;
Obj _35reg2186 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2186) {
Obj _35reg2187 = primCons(body1, Nil);
Obj _35reg2188 = primCons(Nil, _35reg2187);
Obj _35reg2189 = primCons(params, _35reg2188);
Obj _35reg2190 = primCons(intern("lambda"), _35reg2189);
pushCont(co, 20, _35clofun2855, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2190;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2197 = primCons(body1, Nil);
Obj _35reg2198 = primCons(fvs, _35reg2197);
Obj _35reg2199 = primCons(params, _35reg2198);
Obj _35reg2200 = primCons(intern("lambda"), _35reg2199);
pushCont(co, 0, _35clofun2856, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2200;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 4, _35clofun2856, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2182 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val2182;
pushCont(co, 5, _35clofun2856, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2181 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2181;
pushCont(co, 6, _35clofun2856, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35p1115 = __arg1;
Obj _35p1116 = __arg2;
Obj _35cc1117 = makeNative(19, _35clofun2854, 0, 2, _35p1115, _35p1116);
Obj v = _35p1115;
Obj _35reg2052 = primIsCons(_35p1116);
if (True == _35reg2052) {
Obj _35reg2053 = primCar(_35p1116);
Obj clo_45or_45cont = _35reg2053;
Obj _35reg2054 = primCdr(_35p1116);
Obj _35reg2055 = primIsCons(_35reg2054);
if (True == _35reg2055) {
Obj _35reg2056 = primCdr(_35p1116);
Obj _35reg2057 = primCar(_35reg2056);
Obj _35reg2058 = primIsCons(_35reg2057);
if (True == _35reg2058) {
Obj _35reg2059 = primCdr(_35p1116);
Obj _35reg2060 = primCar(_35reg2059);
Obj _35reg2061 = primCar(_35reg2060);
Obj _35reg2062 = primEQ(intern("lambda"), _35reg2061);
if (True == _35reg2062) {
Obj _35reg2063 = primCdr(_35p1116);
Obj _35reg2064 = primCar(_35reg2063);
Obj _35reg2065 = primCdr(_35reg2064);
Obj _35reg2066 = primIsCons(_35reg2065);
if (True == _35reg2066) {
Obj _35reg2067 = primCdr(_35p1116);
Obj _35reg2068 = primCar(_35reg2067);
Obj _35reg2069 = primCdr(_35reg2068);
Obj _35reg2070 = primCar(_35reg2069);
Obj params = _35reg2070;
Obj _35reg2071 = primCdr(_35p1116);
Obj _35reg2072 = primCar(_35reg2071);
Obj _35reg2073 = primCdr(_35reg2072);
Obj _35reg2074 = primCdr(_35reg2073);
Obj _35reg2075 = primIsCons(_35reg2074);
if (True == _35reg2075) {
Obj _35reg2076 = primCdr(_35p1116);
Obj _35reg2077 = primCar(_35reg2076);
Obj _35reg2078 = primCdr(_35reg2077);
Obj _35reg2079 = primCdr(_35reg2078);
Obj _35reg2080 = primCar(_35reg2079);
Obj body = _35reg2080;
Obj _35reg2081 = primCdr(_35p1116);
Obj _35reg2082 = primCar(_35reg2081);
Obj _35reg2083 = primCdr(_35reg2082);
Obj _35reg2084 = primCdr(_35reg2083);
Obj _35reg2085 = primCdr(_35reg2084);
Obj _35reg2086 = primEQ(Nil, _35reg2085);
if (True == _35reg2086) {
Obj _35reg2087 = primCdr(_35p1116);
Obj _35reg2088 = primCdr(_35reg2087);
Obj fvs = _35reg2088;
Obj _35reg2089 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2089) {
if (True == True) {
pushCont(co, 8, _35clofun2855, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1117;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg2135 = primEQ(clo_45or_45cont, intern("%continuation"));
if (True == _35reg2135) {
if (True == True) {
pushCont(co, 18, _35clofun2855, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1117;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 7, _35clofun2856, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1117;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 1;
__arg0 = _35cc1117;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1117;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1117;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1117;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1117;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1117;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1117;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val2233 = __arg1;
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
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2237 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2238 = primCons(_35val2237, res);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(2);
__arg3 = _35reg2238;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2236 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj res = _35val2236;
pushCont(co, 10, _35clofun2856, 2, res, v);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = cur1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2235 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun2856, 2, cur1, v);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2234 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun2856, 2, cur1, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj v = __arg1;
Obj idx = __arg2;
Obj cur = __arg3;
Obj name = co->args[4];
Obj val = co->args[5];
Obj _35reg2227 = primCons(name, idx);
Obj _35reg2228 = primCons(val, Nil);
Obj _35reg2229 = primCons(_35reg2227, _35reg2228);
Obj _35reg2230 = primCons(_35reg2229, cur);
Obj cur1 = _35reg2230;
Obj _35reg2231 = primLT(idx, makeNumber(20));
if (True == _35reg2231) {
Obj _35reg2232 = primAdd(idx, makeNumber(1));
pushCont(co, 9, _35clofun2856, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = _35reg2232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 13, _35clofun2856, 2, cur1, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2241 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2242 = primCons(_35val2241, Nil);
Obj _35reg2243 = primCons(x, _35reg2242);
Obj _35reg2244 = primCons(tmp, _35reg2243);
Obj _35reg2245 = primCons(intern("let"), _35reg2244);
__nargs = 2;
__arg1 = _35reg2245;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x = __arg1;
Obj k = __arg2;
Obj _35reg2240 = primGenSym(intern("reg"));
Obj tmp = _35reg2240;
pushCont(co, 15, _35clofun2856, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2256 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2257 = primAdd(i, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg2257;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2255 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun2856, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2254 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 19, _35clofun2856, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2855(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2100 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2101 = primCons(name, idx);
pushCont(co, 20, _35clofun2854, 3, fvs, _35reg2101, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2110 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2111 = primCons(name, idx);
Obj _35reg2112 = primCons(_35reg2111, fvs);
Obj _35reg2113 = primCons(clo_45or_45cont, _35reg2112);
__nargs = 2;
__arg1 = _35reg2113;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2855) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2123 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2122= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2124 = primCons(_35val2123, fvs);
Obj _35reg2125 = primCons(_35reg2122, _35reg2124);
Obj _35reg2126 = primCons(clo_45or_45cont, _35reg2125);
__nargs = 2;
__arg1 = _35reg2126;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2855) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2121 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2122 = primCons(name, idx);
pushCont(co, 2, _35clofun2855, 3, fvs, _35reg2122, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2131 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2132 = primCons(name, idx);
Obj _35reg2133 = primCons(_35reg2132, fvs);
Obj _35reg2134 = primCons(clo_45or_45cont, _35reg2133);
__nargs = 2;
__arg1 = _35reg2134;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2855) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val2114 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg2115 = primCar(_35val2114);
Obj name = _35reg2115;
Obj _35reg2116 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2116) {
Obj _35reg2117 = primCons(body1, Nil);
Obj _35reg2118 = primCons(Nil, _35reg2117);
Obj _35reg2119 = primCons(params, _35reg2118);
Obj _35reg2120 = primCons(intern("lambda"), _35reg2119);
pushCont(co, 3, _35clofun2855, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2120;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2127 = primCons(body1, Nil);
Obj _35reg2128 = primCons(fvs, _35reg2127);
Obj _35reg2129 = primCons(params, _35reg2128);
Obj _35reg2130 = primCons(intern("lambda"), _35reg2129);
pushCont(co, 4, _35clofun2855, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2130;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2092 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val2092;
Obj _35reg2093 = primEQ(idx, makeNumber(0));
if (True == _35reg2093) {
Obj _35reg2094 = primGenSym(intern("clofun"));
Obj name = _35reg2094;
Obj _35reg2095 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2095) {
Obj _35reg2096 = primCons(body1, Nil);
Obj _35reg2097 = primCons(Nil, _35reg2096);
Obj _35reg2098 = primCons(params, _35reg2097);
Obj _35reg2099 = primCons(intern("lambda"), _35reg2098);
pushCont(co, 0, _35clofun2855, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2099;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2106 = primCons(body1, Nil);
Obj _35reg2107 = primCons(fvs, _35reg2106);
Obj _35reg2108 = primCons(params, _35reg2107);
Obj _35reg2109 = primCons(intern("lambda"), _35reg2108);
pushCont(co, 1, _35clofun2855, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 5, _35clofun2855, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2091 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val2091;
pushCont(co, 6, _35clofun2855, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2090 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2090;
pushCont(co, 7, _35clofun2855, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2148 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2147= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2149 = primCons(_35val2148, fvs);
Obj _35reg2150 = primCons(_35reg2147, _35reg2149);
Obj _35reg2151 = primCons(clo_45or_45cont, _35reg2150);
__nargs = 2;
__arg1 = _35reg2151;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2855) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val2146 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2147 = primCons(name, idx);
pushCont(co, 9, _35clofun2855, 3, fvs, _35reg2147, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2156 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2157 = primCons(name, idx);
Obj _35reg2158 = primCons(_35reg2157, fvs);
Obj _35reg2159 = primCons(clo_45or_45cont, _35reg2158);
__nargs = 2;
__arg1 = _35reg2159;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2855) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val2169 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2168= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2170 = primCons(_35val2169, fvs);
Obj _35reg2171 = primCons(_35reg2168, _35reg2170);
Obj _35reg2172 = primCons(clo_45or_45cont, _35reg2171);
__nargs = 2;
__arg1 = _35reg2172;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2855) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val2167 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2168 = primCons(name, idx);
pushCont(co, 12, _35clofun2855, 3, fvs, _35reg2168, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2177 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2178 = primCons(name, idx);
Obj _35reg2179 = primCons(_35reg2178, fvs);
Obj _35reg2180 = primCons(clo_45or_45cont, _35reg2179);
__nargs = 2;
__arg1 = _35reg2180;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2855) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val2160 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg2161 = primCar(_35val2160);
Obj name = _35reg2161;
Obj _35reg2162 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2162) {
Obj _35reg2163 = primCons(body1, Nil);
Obj _35reg2164 = primCons(Nil, _35reg2163);
Obj _35reg2165 = primCons(params, _35reg2164);
Obj _35reg2166 = primCons(intern("lambda"), _35reg2165);
pushCont(co, 13, _35clofun2855, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2166;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2173 = primCons(body1, Nil);
Obj _35reg2174 = primCons(fvs, _35reg2173);
Obj _35reg2175 = primCons(params, _35reg2174);
Obj _35reg2176 = primCons(intern("lambda"), _35reg2175);
pushCont(co, 14, _35clofun2855, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2176;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2138 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val2138;
Obj _35reg2139 = primEQ(idx, makeNumber(0));
if (True == _35reg2139) {
Obj _35reg2140 = primGenSym(intern("clofun"));
Obj name = _35reg2140;
Obj _35reg2141 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2141) {
Obj _35reg2142 = primCons(body1, Nil);
Obj _35reg2143 = primCons(Nil, _35reg2142);
Obj _35reg2144 = primCons(params, _35reg2143);
Obj _35reg2145 = primCons(intern("lambda"), _35reg2144);
pushCont(co, 10, _35clofun2855, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2145;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2152 = primCons(body1, Nil);
Obj _35reg2153 = primCons(fvs, _35reg2152);
Obj _35reg2154 = primCons(params, _35reg2153);
Obj _35reg2155 = primCons(intern("lambda"), _35reg2154);
pushCont(co, 11, _35clofun2855, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2155;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 15, _35clofun2855, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2137 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val2137;
pushCont(co, 16, _35clofun2855, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2136 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2136;
pushCont(co, 17, _35clofun2855, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2193 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2192= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2194 = primCons(_35val2193, fvs);
Obj _35reg2195 = primCons(_35reg2192, _35reg2194);
Obj _35reg2196 = primCons(clo_45or_45cont, _35reg2195);
__nargs = 2;
__arg1 = _35reg2196;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2855) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val2191 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2192 = primCons(name, idx);
pushCont(co, 19, _35clofun2855, 3, fvs, _35reg2192, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2855) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2854(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1114 = makeNative(19, _35clofun2853, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg1972 = primIsCons(closureRef(co, 1));
if (True == _35reg1972) {
Obj _35reg1973 = primCar(closureRef(co, 1));
Obj f = _35reg1973;
Obj _35reg1974 = primCdr(closureRef(co, 1));
Obj args = _35reg1974;
pushCont(co, 20, _35clofun2853, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1114;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val1996 = __arg1;
Obj _35val1995= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1997 = primCons(_35val1996, Nil);
Obj _35reg1998 = primCons(_35val1995, _35reg1997);
Obj _35reg1999 = primCons(intern("call"), _35reg1998);
__nargs = 2;
__arg1 = _35reg1999;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2854) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val1995 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun2854, 1, _35val1995);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
__arg2 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1994 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 2, _35clofun2854, 2, fvs, cont);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1994;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc1113 = makeNative(0, _35clofun2854, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1977 = primIsCons(closureRef(co, 1));
if (True == _35reg1977) {
Obj _35reg1978 = primCar(closureRef(co, 1));
Obj _35reg1979 = primEQ(intern("call"), _35reg1978);
if (True == _35reg1979) {
Obj _35reg1980 = primCdr(closureRef(co, 1));
Obj _35reg1981 = primIsCons(_35reg1980);
if (True == _35reg1981) {
Obj _35reg1982 = primCdr(closureRef(co, 1));
Obj _35reg1983 = primCar(_35reg1982);
Obj exp = _35reg1983;
Obj _35reg1984 = primCdr(closureRef(co, 1));
Obj _35reg1985 = primCdr(_35reg1984);
Obj _35reg1986 = primIsCons(_35reg1985);
if (True == _35reg1986) {
Obj _35reg1987 = primCdr(closureRef(co, 1));
Obj _35reg1988 = primCdr(_35reg1987);
Obj _35reg1989 = primCar(_35reg1988);
Obj cont = _35reg1989;
Obj _35reg1990 = primCdr(closureRef(co, 1));
Obj _35reg1991 = primCdr(_35reg1990);
Obj _35reg1992 = primCdr(_35reg1991);
Obj _35reg1993 = primEQ(Nil, _35reg1992);
if (True == _35reg1993) {
pushCont(co, 3, _35clofun2854, 3, exp, fvs, cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1113;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1113;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1113;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1113;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1113;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2021 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2022 = primCons(_35val2021, Nil);
Obj _35reg2023 = primCons(val, _35reg2022);
Obj _35reg2024 = primCons(intern("lambda"), _35reg2023);
Obj _35reg2025 = primCons(_35reg2024, fvs2);
Obj _35reg2026 = primCons(intern("%continuation"), _35reg2025);
__nargs = 2;
__arg1 = _35reg2026;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2854) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val2020 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs2 = _35val2020;
pushCont(co, 5, _35clofun2854, 2, val, fvs2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2019 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 6, _35clofun2854, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val2019;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2018 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val2018;
pushCont(co, 7, _35clofun2854, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2017 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 8, _35clofun2854, 3, fvs, body, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = _35val2017;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc1112 = makeNative(4, _35clofun2854, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2000 = primIsCons(closureRef(co, 1));
if (True == _35reg2000) {
Obj _35reg2001 = primCar(closureRef(co, 1));
Obj _35reg2002 = primEQ(intern("continuation"), _35reg2001);
if (True == _35reg2002) {
Obj _35reg2003 = primCdr(closureRef(co, 1));
Obj _35reg2004 = primIsCons(_35reg2003);
if (True == _35reg2004) {
Obj _35reg2005 = primCdr(closureRef(co, 1));
Obj _35reg2006 = primCar(_35reg2005);
Obj val = _35reg2006;
Obj _35reg2007 = primCdr(closureRef(co, 1));
Obj _35reg2008 = primCdr(_35reg2007);
Obj _35reg2009 = primIsCons(_35reg2008);
if (True == _35reg2009) {
Obj _35reg2010 = primCdr(closureRef(co, 1));
Obj _35reg2011 = primCdr(_35reg2010);
Obj _35reg2012 = primCar(_35reg2011);
Obj body = _35reg2012;
Obj _35reg2013 = primCdr(closureRef(co, 1));
Obj _35reg2014 = primCdr(_35reg2013);
Obj _35reg2015 = primCdr(_35reg2014);
Obj _35reg2016 = primEQ(Nil, _35reg2015);
if (True == _35reg2016) {
pushCont(co, 9, _35clofun2854, 3, fvs, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val2044 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2045 = primCons(_35val2044, Nil);
Obj _35reg2046 = primCons(args, _35reg2045);
Obj _35reg2047 = primCons(intern("lambda"), _35reg2046);
__nargs = 2;
__arg1 = _35reg2047;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2854) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35cc1111 = makeNative(10, _35clofun2854, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2027 = primIsCons(closureRef(co, 1));
if (True == _35reg2027) {
Obj _35reg2028 = primCar(closureRef(co, 1));
Obj _35reg2029 = primEQ(intern("lambda"), _35reg2028);
if (True == _35reg2029) {
Obj _35reg2030 = primCdr(closureRef(co, 1));
Obj _35reg2031 = primIsCons(_35reg2030);
if (True == _35reg2031) {
Obj _35reg2032 = primCdr(closureRef(co, 1));
Obj _35reg2033 = primCar(_35reg2032);
Obj args = _35reg2033;
Obj _35reg2034 = primCdr(closureRef(co, 1));
Obj _35reg2035 = primCdr(_35reg2034);
Obj _35reg2036 = primIsCons(_35reg2035);
if (True == _35reg2036) {
Obj _35reg2037 = primCdr(closureRef(co, 1));
Obj _35reg2038 = primCdr(_35reg2037);
Obj _35reg2039 = primCar(_35reg2038);
Obj body = _35reg2039;
Obj _35reg2040 = primCdr(closureRef(co, 1));
Obj _35reg2041 = primCdr(_35reg2040);
Obj _35reg2042 = primCdr(_35reg2041);
Obj _35reg2043 = primEQ(Nil, _35reg2042);
if (True == _35reg2043) {
pushCont(co, 11, _35clofun2854, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35cc1110 = makeNative(12, _35clofun2854, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg2048 = primIsSymbol(var);
if (True == _35reg2048) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2854) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2049 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1109= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2049) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2854) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35p1107 = __arg1;
Obj _35p1108 = __arg2;
Obj _35cc1109 = makeNative(13, _35clofun2854, 0, 2, _35p1107, _35p1108);
Obj __ = _35p1107;
Obj x = _35p1108;
pushCont(co, 14, _35clofun2854, 2, x, _35cc1109);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc1119 = makeNative(16, _35clofun2854, 0, 0);
Obj v = closureRef(co, 0);
Obj x = closureRef(co, 1);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2854) { goto fail; }
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
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc1118 = makeNative(17, _35clofun2854, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v = closureRef(co, 0);
Obj f_45args = closureRef(co, 1);
Obj _35reg2051 = primIsCons(f_45args);
if (True == _35reg2051) {
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = makeNative(18, _35clofun2854, 1, 1, v);
__arg2 = f_45args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1118;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2854) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val2102 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2101= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2103 = primCons(_35val2102, fvs);
Obj _35reg2104 = primCons(_35reg2101, _35reg2103);
Obj _35reg2105 = primCons(clo_45or_45cont, _35reg2104);
__nargs = 2;
__arg1 = _35reg2105;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2854) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2853(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1098 = makeNative(18, _35clofun2852, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1867 = primIsCons(closureRef(co, 0));
if (True == _35reg1867) {
Obj _35reg1868 = primCar(closureRef(co, 0));
Obj _35reg1869 = primEQ(intern("do"), _35reg1868);
if (True == _35reg1869) {
Obj _35reg1870 = primCdr(closureRef(co, 0));
Obj _35reg1871 = primIsCons(_35reg1870);
if (True == _35reg1871) {
Obj _35reg1872 = primCdr(closureRef(co, 0));
Obj _35reg1873 = primCar(_35reg1872);
Obj a = _35reg1873;
Obj _35reg1874 = primCdr(closureRef(co, 0));
Obj _35reg1875 = primCdr(_35reg1874);
Obj _35reg1876 = primIsCons(_35reg1875);
if (True == _35reg1876) {
Obj _35reg1877 = primCdr(closureRef(co, 0));
Obj _35reg1878 = primCdr(_35reg1877);
Obj _35reg1879 = primCar(_35reg1878);
Obj b = _35reg1879;
Obj _35reg1880 = primCdr(closureRef(co, 0));
Obj _35reg1881 = primCdr(_35reg1880);
Obj _35reg1882 = primCdr(_35reg1881);
Obj _35reg1883 = primEQ(Nil, _35reg1882);
if (True == _35reg1883) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = a;
__arg2 = makeNative(20, _35clofun2852, 1, 2, b, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1098;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1098;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1098;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1098;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1098;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val1916 = __arg1;
Obj _35val1915= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1917 = primCons(_35val1916, Nil);
Obj _35reg1918 = primCons(_35val1915, _35reg1917);
Obj _35reg1919 = primCons(ra, _35reg1918);
Obj _35reg1920 = primCons(intern("if"), _35reg1919);
__nargs = 2;
__arg1 = _35reg1920;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2853) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val1915 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 1, _35clofun2853, 2, _35val1915, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj ra = __arg1;
pushCont(co, 2, _35clofun2853, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc1097 = makeNative(0, _35clofun2853, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1889 = primIsCons(closureRef(co, 0));
if (True == _35reg1889) {
Obj _35reg1890 = primCar(closureRef(co, 0));
Obj _35reg1891 = primEQ(intern("if"), _35reg1890);
if (True == _35reg1891) {
Obj _35reg1892 = primCdr(closureRef(co, 0));
Obj _35reg1893 = primIsCons(_35reg1892);
if (True == _35reg1893) {
Obj _35reg1894 = primCdr(closureRef(co, 0));
Obj _35reg1895 = primCar(_35reg1894);
Obj a = _35reg1895;
Obj _35reg1896 = primCdr(closureRef(co, 0));
Obj _35reg1897 = primCdr(_35reg1896);
Obj _35reg1898 = primIsCons(_35reg1897);
if (True == _35reg1898) {
Obj _35reg1899 = primCdr(closureRef(co, 0));
Obj _35reg1900 = primCdr(_35reg1899);
Obj _35reg1901 = primCar(_35reg1900);
Obj b = _35reg1901;
Obj _35reg1902 = primCdr(closureRef(co, 0));
Obj _35reg1903 = primCdr(_35reg1902);
Obj _35reg1904 = primCdr(_35reg1903);
Obj _35reg1905 = primIsCons(_35reg1904);
if (True == _35reg1905) {
Obj _35reg1906 = primCdr(closureRef(co, 0));
Obj _35reg1907 = primCdr(_35reg1906);
Obj _35reg1908 = primCdr(_35reg1907);
Obj _35reg1909 = primCar(_35reg1908);
Obj c = _35reg1909;
Obj _35reg1910 = primCdr(closureRef(co, 0));
Obj _35reg1911 = primCdr(_35reg1910);
Obj _35reg1912 = primCdr(_35reg1911);
Obj _35reg1913 = primCdr(_35reg1912);
Obj _35reg1914 = primEQ(Nil, _35reg1913);
if (True == _35reg1914) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = a;
__arg2 = makeNative(3, _35clofun2853, 1, 3, b, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1097;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1097;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1097;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1097;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1097;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1097;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val1921 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1096= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1921) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2853) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1096;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc1096 = makeNative(4, _35clofun2853, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x = closureRef(co, 0);
Obj __ = closureRef(co, 1);
pushCont(co, 5, _35clofun2853, 2, x, _35cc1096);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val1923 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1095= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1923) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label8:
{
Obj _35p1093 = __arg1;
Obj _35p1094 = __arg2;
Obj _35cc1095 = makeNative(6, _35clofun2853, 0, 2, _35p1093, _35p1094);
Obj x = _35p1093;
Obj next = _35p1094;
Obj _35reg1922 = primIsSymbol(x);
if (True == _35reg1922) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 7, _35clofun2853, 3, next, x, _35cc1095);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj hd1 = __arg1;
Obj _35reg1928 = primCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.tailify-list"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg1928;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc1106 = makeNative(9, _35clofun2853, 0, 0);
Obj _35reg1925 = primIsCons(closureRef(co, 0));
if (True == _35reg1925) {
Obj _35reg1926 = primCar(closureRef(co, 0));
Obj hd = _35reg1926;
Obj _35reg1927 = primCdr(closureRef(co, 0));
Obj tl = _35reg1927;
Obj ls = closureRef(co, 1);
Obj next = closureRef(co, 2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = hd;
__arg2 = makeNative(10, _35clofun2853, 1, 3, tl, ls, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1106;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val1940 = __arg1;
Obj _35reg1939= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1941 = primCons(_35val1940, Nil);
Obj _35reg1942 = primCons(_35reg1939, _35reg1941);
Obj _35reg1943 = primCons(intern("continuation"), _35reg1942);
Obj _35reg1944 = primCons(_35reg1943, Nil);
Obj _35reg1945 = primCons(exp, _35reg1944);
Obj _35reg1946 = primCons(intern("call"), _35reg1945);
__nargs = 2;
__arg1 = _35reg1946;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2853) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val1952 = __arg1;
Obj _35reg1951= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1953 = primCons(_35val1952, Nil);
Obj _35reg1954 = primCons(_35reg1951, _35reg1953);
Obj _35reg1955 = primCons(intern("continuation"), _35reg1954);
Obj _35reg1956 = primCons(_35reg1955, Nil);
Obj _35reg1957 = primCons(exp, _35reg1956);
Obj _35reg1958 = primCons(intern("call"), _35reg1957);
__nargs = 2;
__arg1 = _35reg1958;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2853) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35val1933 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1934 = primEQ(_35val1933, intern("%builtin"));
if (True == _35reg1934) {
if (True == True) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.wrap-var"));
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1935 = primEQ(next, globalRef(intern("cora/lib/toc.id")));
if (True == _35reg1935) {
Obj _35reg1936 = primCons(exp, Nil);
Obj _35reg1937 = primCons(intern("tailcall"), _35reg1936);
__nargs = 2;
__arg1 = _35reg1937;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2853) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1938 = primGenSym(intern("val"));
Obj val = _35reg1938;
Obj _35reg1939 = primCons(val, Nil);
pushCont(co, 12, _35clofun2853, 2, _35reg1939, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1947 = primEQ(next, globalRef(intern("cora/lib/toc.id")));
if (True == _35reg1947) {
Obj _35reg1948 = primCons(exp, Nil);
Obj _35reg1949 = primCons(intern("tailcall"), _35reg1948);
__nargs = 2;
__arg1 = _35reg1949;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2853) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1950 = primGenSym(intern("val"));
Obj val = _35reg1950;
Obj _35reg1951 = primCons(val, Nil);
pushCont(co, 13, _35clofun2853, 2, _35reg1951, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label15:
{
Obj _35val1964 = __arg1;
Obj _35reg1963= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1965 = primCons(_35val1964, Nil);
Obj _35reg1966 = primCons(_35reg1963, _35reg1965);
Obj _35reg1967 = primCons(intern("continuation"), _35reg1966);
Obj _35reg1968 = primCons(_35reg1967, Nil);
Obj _35reg1969 = primCons(exp, _35reg1968);
Obj _35reg1970 = primCons(intern("call"), _35reg1969);
__nargs = 2;
__arg1 = _35reg1970;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2853) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val1932 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1932) {
pushCont(co, 14, _35clofun2853, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1959 = primEQ(next, globalRef(intern("cora/lib/toc.id")));
if (True == _35reg1959) {
Obj _35reg1960 = primCons(exp, Nil);
Obj _35reg1961 = primCons(intern("tailcall"), _35reg1960);
__nargs = 2;
__arg1 = _35reg1961;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2853) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1962 = primGenSym(intern("val"));
Obj val = _35reg1962;
Obj _35reg1963 = primCons(val, Nil);
pushCont(co, 15, _35clofun2853, 2, _35reg1963, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label17:
{
Obj _35val1930 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp = _35val1930;
Obj _35reg1931 = primCar(exp);
pushCont(co, 16, _35clofun2853, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = _35reg1931;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35p1102 = __arg1;
Obj _35p1103 = __arg2;
Obj _35p1104 = __arg3;
Obj _35cc1105 = makeNative(11, _35clofun2853, 0, 3, _35p1102, _35p1103, _35p1104);
Obj _35reg1929 = primEQ(Nil, _35p1102);
if (True == _35reg1929) {
Obj ls = _35p1103;
Obj next = _35p1104;
pushCont(co, 17, _35clofun2853, 1, next);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1105;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1975 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1976 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1975;
__arg2 = _35reg1976;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2853) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2852(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1743 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 20, _35clofun2851, 2, _35val1743, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1091 = makeNative(19, _35clofun2851, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1717 = primIsCons(closureRef(co, 1));
if (True == _35reg1717) {
Obj _35reg1718 = primCar(closureRef(co, 1));
Obj _35reg1719 = primEQ(intern("let"), _35reg1718);
if (True == _35reg1719) {
Obj _35reg1720 = primCdr(closureRef(co, 1));
Obj _35reg1721 = primIsCons(_35reg1720);
if (True == _35reg1721) {
Obj _35reg1722 = primCdr(closureRef(co, 1));
Obj _35reg1723 = primCar(_35reg1722);
Obj a = _35reg1723;
Obj _35reg1724 = primCdr(closureRef(co, 1));
Obj _35reg1725 = primCdr(_35reg1724);
Obj _35reg1726 = primIsCons(_35reg1725);
if (True == _35reg1726) {
Obj _35reg1727 = primCdr(closureRef(co, 1));
Obj _35reg1728 = primCdr(_35reg1727);
Obj _35reg1729 = primCar(_35reg1728);
Obj b = _35reg1729;
Obj _35reg1730 = primCdr(closureRef(co, 1));
Obj _35reg1731 = primCdr(_35reg1730);
Obj _35reg1732 = primCdr(_35reg1731);
Obj _35reg1733 = primIsCons(_35reg1732);
if (True == _35reg1733) {
Obj _35reg1734 = primCdr(closureRef(co, 1));
Obj _35reg1735 = primCdr(_35reg1734);
Obj _35reg1736 = primCdr(_35reg1735);
Obj _35reg1737 = primCar(_35reg1736);
Obj c = _35reg1737;
Obj _35reg1738 = primCdr(closureRef(co, 1));
Obj _35reg1739 = primCdr(_35reg1738);
Obj _35reg1740 = primCdr(_35reg1739);
Obj _35reg1741 = primCdr(_35reg1740);
Obj _35reg1742 = primEQ(Nil, _35reg1741);
if (True == _35reg1742) {
pushCont(co, 0, _35clofun2852, 3, fvs, c, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val1775 = __arg1;
Obj _35reg1773= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1776 = primCons(_35reg1773, _35val1775);
Obj _35reg1777 = primCons(intern("%closure"), _35reg1776);
__nargs = 2;
__arg1 = _35reg1777;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2852) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val1774 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1773= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun2852, 1, _35reg1773);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1774;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val1770 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1771 = primCons(_35val1770, Nil);
Obj _35reg1772 = primCons(args, _35reg1771);
Obj _35reg1773 = primCons(intern("lambda"), _35reg1772);
pushCont(co, 3, _35clofun2852, 2, fvs1, _35reg1773);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1769 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val1769;
pushCont(co, 4, _35clofun2852, 3, args, fvs, fvs1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1090 = makeNative(1, _35clofun2852, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1749 = primIsCons(closureRef(co, 1));
if (True == _35reg1749) {
Obj _35reg1750 = primCar(closureRef(co, 1));
Obj _35reg1751 = primEQ(intern("lambda"), _35reg1750);
if (True == _35reg1751) {
Obj _35reg1752 = primCdr(closureRef(co, 1));
Obj _35reg1753 = primIsCons(_35reg1752);
if (True == _35reg1753) {
Obj _35reg1754 = primCdr(closureRef(co, 1));
Obj _35reg1755 = primCar(_35reg1754);
Obj args = _35reg1755;
Obj _35reg1756 = primCdr(closureRef(co, 1));
Obj _35reg1757 = primCdr(_35reg1756);
Obj _35reg1758 = primIsCons(_35reg1757);
if (True == _35reg1758) {
Obj _35reg1759 = primCdr(closureRef(co, 1));
Obj _35reg1760 = primCdr(_35reg1759);
Obj _35reg1761 = primCar(_35reg1760);
Obj body = _35reg1761;
Obj _35reg1762 = primCdr(closureRef(co, 1));
Obj _35reg1763 = primCdr(_35reg1762);
Obj _35reg1764 = primCdr(_35reg1763);
Obj _35reg1765 = primEQ(Nil, _35reg1764);
if (True == _35reg1765) {
Obj _35reg1766 = primCons(body, Nil);
Obj _35reg1767 = primCons(args, _35reg1766);
Obj _35reg1768 = primCons(intern("lambda"), _35reg1767);
pushCont(co, 5, _35clofun2852, 3, body, args, fvs);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = _35reg1768;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val1779 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pos = _35val1779;
Obj _35reg1780 = primEQ(makeNumber(-1), pos);
if (True == _35reg1780) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2852) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1781 = primCons(pos, Nil);
Obj _35reg1782 = primCons(intern("%closure-ref"), _35reg1781);
__nargs = 2;
__arg1 = _35reg1782;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2852) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label8:
{
Obj _35cc1089 = makeNative(6, _35clofun2852, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg1778 = primIsSymbol(var);
if (True == _35reg1778) {
pushCont(co, 7, _35clofun2852, 1, var);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.index"));
__arg1 = var;
__arg2 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1089;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val1783 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1088= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1783) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2852) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1088;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p1086 = __arg1;
Obj _35p1087 = __arg2;
Obj _35cc1088 = makeNative(8, _35clofun2852, 0, 2, _35p1086, _35p1087);
Obj __ = _35p1086;
Obj x = _35p1087;
pushCont(co, 9, _35clofun2852, 2, x, _35cc1088);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x = __arg1;
Obj _35reg1785 = primCons(x, Nil);
Obj _35reg1786 = primCons(intern("return"), _35reg1785);
__nargs = 2;
__arg1 = _35reg1786;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2852) { goto fail; }
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
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1101 = makeNative(12, _35clofun2852, 0, 0);
Obj _35reg1788 = primIsCons(closureRef(co, 0));
if (True == _35reg1788) {
Obj _35reg1789 = primCar(closureRef(co, 0));
Obj f = _35reg1789;
Obj _35reg1790 = primCdr(closureRef(co, 0));
Obj args = _35reg1790;
Obj next = closureRef(co, 1);
Obj _35reg1791 = primCons(f, args);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.tailify-list"));
__arg1 = _35reg1791;
__arg2 = Nil;
__arg3 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val1830 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1831 = primCons(_35val1830, Nil);
Obj _35reg1832 = primCons(args, _35reg1831);
Obj _35reg1833 = primCons(intern("lambda"), _35reg1832);
Obj _35reg1834 = primCons(_35reg1833, frees);
Obj _35reg1835 = primCons(intern("%closure"), _35reg1834);
__nargs = 2;
__arg0 = next;
__arg1 = _35reg1835;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc1100 = makeNative(13, _35clofun2852, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1792 = primIsCons(closureRef(co, 0));
if (True == _35reg1792) {
Obj _35reg1793 = primCar(closureRef(co, 0));
Obj _35reg1794 = primEQ(intern("%closure"), _35reg1793);
if (True == _35reg1794) {
Obj _35reg1795 = primCdr(closureRef(co, 0));
Obj _35reg1796 = primIsCons(_35reg1795);
if (True == _35reg1796) {
Obj _35reg1797 = primCdr(closureRef(co, 0));
Obj _35reg1798 = primCar(_35reg1797);
Obj _35reg1799 = primIsCons(_35reg1798);
if (True == _35reg1799) {
Obj _35reg1800 = primCdr(closureRef(co, 0));
Obj _35reg1801 = primCar(_35reg1800);
Obj _35reg1802 = primCar(_35reg1801);
Obj _35reg1803 = primEQ(intern("lambda"), _35reg1802);
if (True == _35reg1803) {
Obj _35reg1804 = primCdr(closureRef(co, 0));
Obj _35reg1805 = primCar(_35reg1804);
Obj _35reg1806 = primCdr(_35reg1805);
Obj _35reg1807 = primIsCons(_35reg1806);
if (True == _35reg1807) {
Obj _35reg1808 = primCdr(closureRef(co, 0));
Obj _35reg1809 = primCar(_35reg1808);
Obj _35reg1810 = primCdr(_35reg1809);
Obj _35reg1811 = primCar(_35reg1810);
Obj args = _35reg1811;
Obj _35reg1812 = primCdr(closureRef(co, 0));
Obj _35reg1813 = primCar(_35reg1812);
Obj _35reg1814 = primCdr(_35reg1813);
Obj _35reg1815 = primCdr(_35reg1814);
Obj _35reg1816 = primIsCons(_35reg1815);
if (True == _35reg1816) {
Obj _35reg1817 = primCdr(closureRef(co, 0));
Obj _35reg1818 = primCar(_35reg1817);
Obj _35reg1819 = primCdr(_35reg1818);
Obj _35reg1820 = primCdr(_35reg1819);
Obj _35reg1821 = primCar(_35reg1820);
Obj body = _35reg1821;
Obj _35reg1822 = primCdr(closureRef(co, 0));
Obj _35reg1823 = primCar(_35reg1822);
Obj _35reg1824 = primCdr(_35reg1823);
Obj _35reg1825 = primCdr(_35reg1824);
Obj _35reg1826 = primCdr(_35reg1825);
Obj _35reg1827 = primEQ(Nil, _35reg1826);
if (True == _35reg1827) {
Obj _35reg1828 = primCdr(closureRef(co, 0));
Obj _35reg1829 = primCdr(_35reg1828);
Obj frees = _35reg1829;
Obj next = closureRef(co, 1);
pushCont(co, 14, _35clofun2852, 3, args, frees, next);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = body;
__arg2 = globalRef(intern("cora/lib/toc.id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val1862 = __arg1;
Obj rb= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1863 = primCons(_35val1862, Nil);
Obj _35reg1864 = primCons(rb, _35reg1863);
Obj _35reg1865 = primCons(closureRef(co, 0), _35reg1864);
Obj _35reg1866 = primCons(intern("let"), _35reg1865);
__nargs = 2;
__arg1 = _35reg1866;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2852) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj rb = __arg1;
pushCont(co, 16, _35clofun2852, 1, rb);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc1099 = makeNative(15, _35clofun2852, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1836 = primIsCons(closureRef(co, 0));
if (True == _35reg1836) {
Obj _35reg1837 = primCar(closureRef(co, 0));
Obj _35reg1838 = primEQ(intern("let"), _35reg1837);
if (True == _35reg1838) {
Obj _35reg1839 = primCdr(closureRef(co, 0));
Obj _35reg1840 = primIsCons(_35reg1839);
if (True == _35reg1840) {
Obj _35reg1841 = primCdr(closureRef(co, 0));
Obj _35reg1842 = primCar(_35reg1841);
Obj a = _35reg1842;
Obj _35reg1843 = primCdr(closureRef(co, 0));
Obj _35reg1844 = primCdr(_35reg1843);
Obj _35reg1845 = primIsCons(_35reg1844);
if (True == _35reg1845) {
Obj _35reg1846 = primCdr(closureRef(co, 0));
Obj _35reg1847 = primCdr(_35reg1846);
Obj _35reg1848 = primCar(_35reg1847);
Obj b = _35reg1848;
Obj _35reg1849 = primCdr(closureRef(co, 0));
Obj _35reg1850 = primCdr(_35reg1849);
Obj _35reg1851 = primCdr(_35reg1850);
Obj _35reg1852 = primIsCons(_35reg1851);
if (True == _35reg1852) {
Obj _35reg1853 = primCdr(closureRef(co, 0));
Obj _35reg1854 = primCdr(_35reg1853);
Obj _35reg1855 = primCdr(_35reg1854);
Obj _35reg1856 = primCar(_35reg1855);
Obj c = _35reg1856;
Obj _35reg1857 = primCdr(closureRef(co, 0));
Obj _35reg1858 = primCdr(_35reg1857);
Obj _35reg1859 = primCdr(_35reg1858);
Obj _35reg1860 = primCdr(_35reg1859);
Obj _35reg1861 = primEQ(Nil, _35reg1860);
if (True == _35reg1861) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = b;
__arg2 = makeNative(17, _35clofun2852, 1, 3, a, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1099;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1099;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1099;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1099;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1099;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1099;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val1885 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1886 = primCons(_35val1885, Nil);
Obj _35reg1887 = primCons(ra, _35reg1886);
Obj _35reg1888 = primCons(intern("do"), _35reg1887);
__nargs = 2;
__arg1 = _35reg1888;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2852) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj ra = __arg1;
Obj _35reg1884 = primIsSymbol(ra);
if (True == _35reg1884) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, _35clofun2852, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2852) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2851(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1589 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = globalRef(intern("cora/lib/toc.union"));
__arg2 = Nil;
__arg3 = _35val1589;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1082 = makeNative(20, _35clofun2850, 0, 1, closureRef(co, 0));
Obj _35reg1570 = primIsCons(closureRef(co, 0));
if (True == _35reg1570) {
Obj _35reg1571 = primCar(closureRef(co, 0));
Obj _35reg1572 = primEQ(intern("call"), _35reg1571);
if (True == _35reg1572) {
Obj _35reg1573 = primCdr(closureRef(co, 0));
Obj _35reg1574 = primIsCons(_35reg1573);
if (True == _35reg1574) {
Obj _35reg1575 = primCdr(closureRef(co, 0));
Obj _35reg1576 = primCar(_35reg1575);
Obj exp = _35reg1576;
Obj _35reg1577 = primCdr(closureRef(co, 0));
Obj _35reg1578 = primCdr(_35reg1577);
Obj _35reg1579 = primIsCons(_35reg1578);
if (True == _35reg1579) {
Obj _35reg1580 = primCdr(closureRef(co, 0));
Obj _35reg1581 = primCdr(_35reg1580);
Obj _35reg1582 = primCar(_35reg1581);
Obj cont = _35reg1582;
Obj _35reg1583 = primCdr(closureRef(co, 0));
Obj _35reg1584 = primCdr(_35reg1583);
Obj _35reg1585 = primCdr(_35reg1584);
Obj _35reg1586 = primEQ(Nil, _35reg1585);
if (True == _35reg1586) {
Obj _35reg1587 = primCons(cont, Nil);
Obj _35reg1588 = primCons(exp, _35reg1587);
pushCont(co, 0, _35clofun2851, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.free-vars"));
__arg2 = _35reg1588;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1082;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1082;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1082;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1082;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1082;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc1081 = makeNative(1, _35clofun2851, 0, 1, closureRef(co, 0));
Obj _35reg1590 = primIsCons(closureRef(co, 0));
if (True == _35reg1590) {
Obj _35reg1591 = primCar(closureRef(co, 0));
Obj _35reg1592 = primEQ(intern("return"), _35reg1591);
if (True == _35reg1592) {
Obj _35reg1593 = primCdr(closureRef(co, 0));
Obj _35reg1594 = primIsCons(_35reg1593);
if (True == _35reg1594) {
Obj _35reg1595 = primCdr(closureRef(co, 0));
Obj _35reg1596 = primCar(_35reg1595);
Obj x = _35reg1596;
Obj _35reg1597 = primCdr(closureRef(co, 0));
Obj _35reg1598 = primCdr(_35reg1597);
Obj _35reg1599 = primEQ(Nil, _35reg1598);
if (True == _35reg1599) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1081;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1081;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1081;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1081;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc1080 = makeNative(2, _35clofun2851, 0, 1, closureRef(co, 0));
Obj _35reg1600 = primIsCons(closureRef(co, 0));
if (True == _35reg1600) {
Obj _35reg1601 = primCar(closureRef(co, 0));
Obj _35reg1602 = primEQ(intern("%closure"), _35reg1601);
if (True == _35reg1602) {
Obj _35reg1603 = primCdr(closureRef(co, 0));
Obj _35reg1604 = primIsCons(_35reg1603);
if (True == _35reg1604) {
Obj _35reg1605 = primCdr(closureRef(co, 0));
Obj _35reg1606 = primCar(_35reg1605);
Obj lam = _35reg1606;
Obj _35reg1607 = primCdr(closureRef(co, 0));
Obj _35reg1608 = primCdr(_35reg1607);
Obj more = _35reg1608;
Obj _35reg1609 = primCons(lam, more);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = _35reg1609;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val1639 = __arg1;
Obj _35val1636= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.union"));
__arg1 = _35val1636;
__arg2 = _35val1639;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1637 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val1636= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1638 = primCons(a, Nil);
pushCont(co, 4, _35clofun2851, 1, _35val1636);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = _35val1637;
__arg2 = _35reg1638;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val1636 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun2851, 2, a, _35val1636);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc1079 = makeNative(3, _35clofun2851, 0, 1, closureRef(co, 0));
Obj _35reg1610 = primIsCons(closureRef(co, 0));
if (True == _35reg1610) {
Obj _35reg1611 = primCar(closureRef(co, 0));
Obj _35reg1612 = primEQ(intern("let"), _35reg1611);
if (True == _35reg1612) {
Obj _35reg1613 = primCdr(closureRef(co, 0));
Obj _35reg1614 = primIsCons(_35reg1613);
if (True == _35reg1614) {
Obj _35reg1615 = primCdr(closureRef(co, 0));
Obj _35reg1616 = primCar(_35reg1615);
Obj a = _35reg1616;
Obj _35reg1617 = primCdr(closureRef(co, 0));
Obj _35reg1618 = primCdr(_35reg1617);
Obj _35reg1619 = primIsCons(_35reg1618);
if (True == _35reg1619) {
Obj _35reg1620 = primCdr(closureRef(co, 0));
Obj _35reg1621 = primCdr(_35reg1620);
Obj _35reg1622 = primCar(_35reg1621);
Obj b = _35reg1622;
Obj _35reg1623 = primCdr(closureRef(co, 0));
Obj _35reg1624 = primCdr(_35reg1623);
Obj _35reg1625 = primCdr(_35reg1624);
Obj _35reg1626 = primIsCons(_35reg1625);
if (True == _35reg1626) {
Obj _35reg1627 = primCdr(closureRef(co, 0));
Obj _35reg1628 = primCdr(_35reg1627);
Obj _35reg1629 = primCdr(_35reg1628);
Obj _35reg1630 = primCar(_35reg1629);
Obj c = _35reg1630;
Obj _35reg1631 = primCdr(closureRef(co, 0));
Obj _35reg1632 = primCdr(_35reg1631);
Obj _35reg1633 = primCdr(_35reg1632);
Obj _35reg1634 = primCdr(_35reg1633);
Obj _35reg1635 = primEQ(Nil, _35reg1634);
if (True == _35reg1635) {
pushCont(co, 6, _35clofun2851, 2, c, a);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val1659 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = globalRef(intern("cora/lib/toc.union"));
__arg2 = Nil;
__arg3 = _35val1659;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1078 = makeNative(7, _35clofun2851, 0, 1, closureRef(co, 0));
Obj _35reg1640 = primIsCons(closureRef(co, 0));
if (True == _35reg1640) {
Obj _35reg1641 = primCar(closureRef(co, 0));
Obj _35reg1642 = primEQ(intern("do"), _35reg1641);
if (True == _35reg1642) {
Obj _35reg1643 = primCdr(closureRef(co, 0));
Obj _35reg1644 = primIsCons(_35reg1643);
if (True == _35reg1644) {
Obj _35reg1645 = primCdr(closureRef(co, 0));
Obj _35reg1646 = primCar(_35reg1645);
Obj x = _35reg1646;
Obj _35reg1647 = primCdr(closureRef(co, 0));
Obj _35reg1648 = primCdr(_35reg1647);
Obj _35reg1649 = primIsCons(_35reg1648);
if (True == _35reg1649) {
Obj _35reg1650 = primCdr(closureRef(co, 0));
Obj _35reg1651 = primCdr(_35reg1650);
Obj _35reg1652 = primCar(_35reg1651);
Obj y = _35reg1652;
Obj _35reg1653 = primCdr(closureRef(co, 0));
Obj _35reg1654 = primCdr(_35reg1653);
Obj _35reg1655 = primCdr(_35reg1654);
Obj _35reg1656 = primEQ(Nil, _35reg1655);
if (True == _35reg1656) {
Obj _35reg1657 = primCons(y, Nil);
Obj _35reg1658 = primCons(x, _35reg1657);
pushCont(co, 8, _35clofun2851, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.free-vars"));
__arg2 = _35reg1658;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val1689 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = globalRef(intern("cora/lib/toc.union"));
__arg2 = Nil;
__arg3 = _35val1689;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc1077 = makeNative(9, _35clofun2851, 0, 1, closureRef(co, 0));
Obj _35reg1660 = primIsCons(closureRef(co, 0));
if (True == _35reg1660) {
Obj _35reg1661 = primCar(closureRef(co, 0));
Obj _35reg1662 = primEQ(intern("if"), _35reg1661);
if (True == _35reg1662) {
Obj _35reg1663 = primCdr(closureRef(co, 0));
Obj _35reg1664 = primIsCons(_35reg1663);
if (True == _35reg1664) {
Obj _35reg1665 = primCdr(closureRef(co, 0));
Obj _35reg1666 = primCar(_35reg1665);
Obj x = _35reg1666;
Obj _35reg1667 = primCdr(closureRef(co, 0));
Obj _35reg1668 = primCdr(_35reg1667);
Obj _35reg1669 = primIsCons(_35reg1668);
if (True == _35reg1669) {
Obj _35reg1670 = primCdr(closureRef(co, 0));
Obj _35reg1671 = primCdr(_35reg1670);
Obj _35reg1672 = primCar(_35reg1671);
Obj y = _35reg1672;
Obj _35reg1673 = primCdr(closureRef(co, 0));
Obj _35reg1674 = primCdr(_35reg1673);
Obj _35reg1675 = primCdr(_35reg1674);
Obj _35reg1676 = primIsCons(_35reg1675);
if (True == _35reg1676) {
Obj _35reg1677 = primCdr(closureRef(co, 0));
Obj _35reg1678 = primCdr(_35reg1677);
Obj _35reg1679 = primCdr(_35reg1678);
Obj _35reg1680 = primCar(_35reg1679);
Obj z = _35reg1680;
Obj _35reg1681 = primCdr(closureRef(co, 0));
Obj _35reg1682 = primCdr(_35reg1681);
Obj _35reg1683 = primCdr(_35reg1682);
Obj _35reg1684 = primCdr(_35reg1683);
Obj _35reg1685 = primEQ(Nil, _35reg1684);
if (True == _35reg1685) {
Obj _35reg1686 = primCons(z, Nil);
Obj _35reg1687 = primCons(y, _35reg1686);
Obj _35reg1688 = primCons(x, _35reg1687);
pushCont(co, 10, _35clofun2851, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.free-vars"));
__arg2 = _35reg1688;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val1707 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = _35val1707;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1076 = makeNative(11, _35clofun2851, 0, 1, closureRef(co, 0));
Obj _35reg1690 = primIsCons(closureRef(co, 0));
if (True == _35reg1690) {
Obj _35reg1691 = primCar(closureRef(co, 0));
Obj _35reg1692 = primEQ(intern("lambda"), _35reg1691);
if (True == _35reg1692) {
Obj _35reg1693 = primCdr(closureRef(co, 0));
Obj _35reg1694 = primIsCons(_35reg1693);
if (True == _35reg1694) {
Obj _35reg1695 = primCdr(closureRef(co, 0));
Obj _35reg1696 = primCar(_35reg1695);
Obj args = _35reg1696;
Obj _35reg1697 = primCdr(closureRef(co, 0));
Obj _35reg1698 = primCdr(_35reg1697);
Obj _35reg1699 = primIsCons(_35reg1698);
if (True == _35reg1699) {
Obj _35reg1700 = primCdr(closureRef(co, 0));
Obj _35reg1701 = primCdr(_35reg1700);
Obj _35reg1702 = primCar(_35reg1701);
Obj body = _35reg1702;
Obj _35reg1703 = primCdr(closureRef(co, 0));
Obj _35reg1704 = primCdr(_35reg1703);
Obj _35reg1705 = primCdr(_35reg1704);
Obj _35reg1706 = primEQ(Nil, _35reg1705);
if (True == _35reg1706) {
pushCont(co, 12, _35clofun2851, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1076;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1076;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1076;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1076;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1076;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35cc1075 = makeNative(13, _35clofun2851, 0, 1, closureRef(co, 0));
Obj x = closureRef(co, 0);
Obj _35reg1708 = primIsSymbol(x);
if (True == _35reg1708) {
Obj _35reg1709 = primCons(x, Nil);
__nargs = 2;
__arg1 = _35reg1709;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2851) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1075;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val1710 = __arg1;
Obj _35cc1074= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1710) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2851) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35p1073 = __arg1;
Obj _35cc1074 = makeNative(14, _35clofun2851, 0, 1, _35p1073);
Obj x = _35p1073;
pushCont(co, 15, _35clofun2851, 1, _35cc1074);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1715 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1716 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1715;
__arg2 = _35reg1716;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc1092 = makeNative(17, _35clofun2851, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg1712 = primIsCons(closureRef(co, 1));
if (True == _35reg1712) {
Obj _35reg1713 = primCar(closureRef(co, 1));
Obj f = _35reg1713;
Obj _35reg1714 = primCdr(closureRef(co, 1));
Obj args = _35reg1714;
pushCont(co, 18, _35clofun2851, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2851) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val1744 = __arg1;
Obj _35val1743= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1745 = primCons(_35val1744, Nil);
Obj _35reg1746 = primCons(_35val1743, _35reg1745);
Obj _35reg1747 = primCons(a, _35reg1746);
Obj _35reg1748 = primCons(intern("let"), _35reg1747);
__nargs = 2;
__arg1 = _35reg1748;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2851) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2850(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1059 = makeNative(19, _35clofun2849, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1469 = primIsCons(closureRef(co, 0));
if (True == _35reg1469) {
Obj _35reg1470 = primCar(closureRef(co, 0));
Obj x = _35reg1470;
Obj _35reg1471 = primCdr(closureRef(co, 0));
Obj y = _35reg1471;
Obj s2 = closureRef(co, 1);
pushCont(co, 20, _35clofun2849, 3, y, s2, _35cc1059);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35p1056 = __arg1;
Obj _35p1057 = __arg2;
Obj _35cc1058 = makeNative(0, _35clofun2850, 0, 2, _35p1056, _35p1057);
Obj _35reg1473 = primEQ(Nil, _35p1056);
if (True == _35reg1473) {
Obj s2 = _35p1057;
__nargs = 2;
__arg1 = s2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2850) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1058;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1478 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1479 = primCons(x, _35val1478);
__nargs = 2;
__arg1 = _35reg1479;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2850) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35cc1065 = makeNative(2, _35clofun2850, 0, 0);
Obj _35reg1475 = primIsCons(closureRef(co, 0));
if (True == _35reg1475) {
Obj _35reg1476 = primCar(closureRef(co, 0));
Obj x = _35reg1476;
Obj _35reg1477 = primCdr(closureRef(co, 0));
Obj y = _35reg1477;
Obj s2 = closureRef(co, 1);
pushCont(co, 3, _35clofun2850, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1065;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val1483 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1064= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1483) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc1064 = makeNative(4, _35clofun2850, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1480 = primIsCons(closureRef(co, 0));
if (True == _35reg1480) {
Obj _35reg1481 = primCar(closureRef(co, 0));
Obj x = _35reg1481;
Obj _35reg1482 = primCdr(closureRef(co, 0));
Obj y = _35reg1482;
Obj s2 = closureRef(co, 1);
pushCont(co, 5, _35clofun2850, 3, y, s2, _35cc1064);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p1061 = __arg1;
Obj _35p1062 = __arg2;
Obj _35cc1063 = makeNative(6, _35clofun2850, 0, 2, _35p1061, _35p1062);
Obj _35reg1484 = primEQ(Nil, _35p1061);
if (True == _35reg1484) {
Obj __ = _35p1062;
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2850) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1072 = makeNative(8, _35clofun2850, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2850) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35cc1071 = makeNative(9, _35clofun2850, 0, 1, closureRef(co, 0));
Obj _35reg1486 = primIsCons(closureRef(co, 0));
if (True == _35reg1486) {
Obj _35reg1487 = primCar(closureRef(co, 0));
Obj _35reg1488 = primEQ(intern("%closure-ref"), _35reg1487);
if (True == _35reg1488) {
Obj _35reg1489 = primCdr(closureRef(co, 0));
Obj _35reg1490 = primIsCons(_35reg1489);
if (True == _35reg1490) {
Obj _35reg1491 = primCdr(closureRef(co, 0));
Obj _35reg1492 = primCar(_35reg1491);
Obj __ = _35reg1492;
Obj _35reg1493 = primCdr(closureRef(co, 0));
Obj _35reg1494 = primCdr(_35reg1493);
Obj _35reg1495 = primEQ(Nil, _35reg1494);
if (True == _35reg1495) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2850) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35cc1070 = makeNative(10, _35clofun2850, 0, 1, closureRef(co, 0));
Obj _35reg1496 = primIsCons(closureRef(co, 0));
if (True == _35reg1496) {
Obj _35reg1497 = primCar(closureRef(co, 0));
Obj _35reg1498 = primEQ(intern("quote"), _35reg1497);
if (True == _35reg1498) {
Obj _35reg1499 = primCdr(closureRef(co, 0));
Obj _35reg1500 = primIsCons(_35reg1499);
if (True == _35reg1500) {
Obj _35reg1501 = primCdr(closureRef(co, 0));
Obj _35reg1502 = primCar(_35reg1501);
Obj x = _35reg1502;
Obj _35reg1503 = primCdr(closureRef(co, 0));
Obj _35reg1504 = primCdr(_35reg1503);
Obj _35reg1505 = primEQ(Nil, _35reg1504);
if (True == _35reg1505) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2850) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1070;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1070;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1070;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1070;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc1069 = makeNative(11, _35clofun2850, 0, 1, closureRef(co, 0));
Obj _35reg1506 = primIsCons(closureRef(co, 0));
if (True == _35reg1506) {
Obj _35reg1507 = primCar(closureRef(co, 0));
Obj _35reg1508 = primEQ(intern("%builtin"), _35reg1507);
if (True == _35reg1508) {
Obj _35reg1509 = primCdr(closureRef(co, 0));
Obj _35reg1510 = primIsCons(_35reg1509);
if (True == _35reg1510) {
Obj _35reg1511 = primCdr(closureRef(co, 0));
Obj _35reg1512 = primCar(_35reg1511);
Obj op = _35reg1512;
Obj _35reg1513 = primCdr(closureRef(co, 0));
Obj _35reg1514 = primCdr(_35reg1513);
Obj _35reg1515 = primEQ(Nil, _35reg1514);
if (True == _35reg1515) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2850) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1069;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1069;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1069;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1069;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35cc1068 = makeNative(12, _35clofun2850, 0, 1, closureRef(co, 0));
Obj _35reg1516 = primIsCons(closureRef(co, 0));
if (True == _35reg1516) {
Obj _35reg1517 = primCar(closureRef(co, 0));
Obj _35reg1518 = primEQ(intern("%global"), _35reg1517);
if (True == _35reg1518) {
Obj _35reg1519 = primCdr(closureRef(co, 0));
Obj _35reg1520 = primIsCons(_35reg1519);
if (True == _35reg1520) {
Obj _35reg1521 = primCdr(closureRef(co, 0));
Obj _35reg1522 = primCar(_35reg1521);
Obj x = _35reg1522;
Obj _35reg1523 = primCdr(closureRef(co, 0));
Obj _35reg1524 = primCdr(_35reg1523);
Obj _35reg1525 = primEQ(Nil, _35reg1524);
if (True == _35reg1525) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2850) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1068;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1068;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1068;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1068;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35p1066 = __arg1;
Obj _35cc1067 = makeNative(13, _35clofun2850, 0, 1, _35p1066);
Obj _35reg1526 = primIsCons(_35p1066);
if (True == _35reg1526) {
Obj _35reg1527 = primCar(_35p1066);
Obj _35reg1528 = primEQ(intern("%const"), _35reg1527);
if (True == _35reg1528) {
Obj _35reg1529 = primCdr(_35p1066);
Obj _35reg1530 = primIsCons(_35reg1529);
if (True == _35reg1530) {
Obj _35reg1531 = primCdr(_35p1066);
Obj _35reg1532 = primCar(_35reg1531);
Obj x = _35reg1532;
Obj _35reg1533 = primCdr(_35p1066);
Obj _35reg1534 = primCdr(_35reg1533);
Obj _35reg1535 = primEQ(Nil, _35reg1534);
if (True == _35reg1535) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2850) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1067;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1067;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1067;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1067;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val1541 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = globalRef(intern("cora/lib/toc.union"));
__arg2 = Nil;
__arg3 = _35val1541;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc1085 = makeNative(15, _35clofun2850, 0, 0);
Obj _35reg1537 = primIsCons(closureRef(co, 0));
if (True == _35reg1537) {
Obj _35reg1538 = primCar(closureRef(co, 0));
Obj f = _35reg1538;
Obj _35reg1539 = primCdr(closureRef(co, 0));
Obj args = _35reg1539;
Obj _35reg1540 = primCons(f, args);
pushCont(co, 16, _35clofun2850, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.free-vars"));
__arg2 = _35reg1540;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1085;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val1559 = __arg1;
Obj arg= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = _35val1559;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc1084 = makeNative(17, _35clofun2850, 0, 1, closureRef(co, 0));
Obj _35reg1542 = primIsCons(closureRef(co, 0));
if (True == _35reg1542) {
Obj _35reg1543 = primCar(closureRef(co, 0));
Obj _35reg1544 = primEQ(intern("continuation"), _35reg1543);
if (True == _35reg1544) {
Obj _35reg1545 = primCdr(closureRef(co, 0));
Obj _35reg1546 = primIsCons(_35reg1545);
if (True == _35reg1546) {
Obj _35reg1547 = primCdr(closureRef(co, 0));
Obj _35reg1548 = primCar(_35reg1547);
Obj arg = _35reg1548;
Obj _35reg1549 = primCdr(closureRef(co, 0));
Obj _35reg1550 = primCdr(_35reg1549);
Obj _35reg1551 = primIsCons(_35reg1550);
if (True == _35reg1551) {
Obj _35reg1552 = primCdr(closureRef(co, 0));
Obj _35reg1553 = primCdr(_35reg1552);
Obj _35reg1554 = primCar(_35reg1553);
Obj body = _35reg1554;
Obj _35reg1555 = primCdr(closureRef(co, 0));
Obj _35reg1556 = primCdr(_35reg1555);
Obj _35reg1557 = primCdr(_35reg1556);
Obj _35reg1558 = primEQ(Nil, _35reg1557);
if (True == _35reg1558) {
pushCont(co, 18, _35clofun2850, 1, arg);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1084;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1084;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1084;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1084;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1084;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc1083 = makeNative(19, _35clofun2850, 0, 1, closureRef(co, 0));
Obj _35reg1560 = primIsCons(closureRef(co, 0));
if (True == _35reg1560) {
Obj _35reg1561 = primCar(closureRef(co, 0));
Obj _35reg1562 = primEQ(intern("tailcall"), _35reg1561);
if (True == _35reg1562) {
Obj _35reg1563 = primCdr(closureRef(co, 0));
Obj _35reg1564 = primIsCons(_35reg1563);
if (True == _35reg1564) {
Obj _35reg1565 = primCdr(closureRef(co, 0));
Obj _35reg1566 = primCar(_35reg1565);
Obj exp = _35reg1566;
Obj _35reg1567 = primCdr(closureRef(co, 0));
Obj _35reg1568 = primCdr(_35reg1567);
Obj _35reg1569 = primEQ(Nil, _35reg1568);
if (True == _35reg1569) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1083;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1083;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1083;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1083;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2850) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2849(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1053 = makeNative(18, _35clofun2848, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg1349 = primIsCons(closureRef(co, 1));
if (True == _35reg1349) {
Obj _35reg1350 = primCar(closureRef(co, 1));
Obj _35reg1351 = primEQ(intern("let"), _35reg1350);
if (True == _35reg1351) {
Obj _35reg1352 = primCdr(closureRef(co, 1));
Obj _35reg1353 = primIsCons(_35reg1352);
if (True == _35reg1353) {
Obj _35reg1354 = primCdr(closureRef(co, 1));
Obj _35reg1355 = primCar(_35reg1354);
Obj a = _35reg1355;
Obj _35reg1356 = primCdr(closureRef(co, 1));
Obj _35reg1357 = primCdr(_35reg1356);
Obj _35reg1358 = primIsCons(_35reg1357);
if (True == _35reg1358) {
Obj _35reg1359 = primCdr(closureRef(co, 1));
Obj _35reg1360 = primCdr(_35reg1359);
Obj _35reg1361 = primCar(_35reg1360);
Obj b = _35reg1361;
Obj _35reg1362 = primCdr(closureRef(co, 1));
Obj _35reg1363 = primCdr(_35reg1362);
Obj _35reg1364 = primCdr(_35reg1363);
Obj _35reg1365 = primIsCons(_35reg1364);
if (True == _35reg1365) {
Obj _35reg1366 = primCdr(closureRef(co, 1));
Obj _35reg1367 = primCdr(_35reg1366);
Obj _35reg1368 = primCdr(_35reg1367);
Obj _35reg1369 = primCar(_35reg1368);
Obj c = _35reg1369;
Obj _35reg1370 = primCdr(closureRef(co, 1));
Obj _35reg1371 = primCdr(_35reg1370);
Obj _35reg1372 = primCdr(_35reg1371);
Obj _35reg1373 = primCdr(_35reg1372);
Obj _35reg1374 = primEQ(Nil, _35reg1373);
if (True == _35reg1374) {
pushCont(co, 20, _35clofun2848, 3, env, c, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1053;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1053;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1053;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1053;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1053;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1053;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val1400 = __arg1;
Obj _35val1399= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1401 = primCons(_35val1400, Nil);
Obj _35reg1402 = primCons(_35val1399, _35reg1401);
Obj _35reg1403 = primCons(intern("do"), _35reg1402);
__nargs = 2;
__arg1 = _35reg1403;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2849) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val1399 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun2849, 1, _35val1399);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1052 = makeNative(0, _35clofun2849, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg1382 = primIsCons(closureRef(co, 1));
if (True == _35reg1382) {
Obj _35reg1383 = primCar(closureRef(co, 1));
Obj _35reg1384 = primEQ(intern("do"), _35reg1383);
if (True == _35reg1384) {
Obj _35reg1385 = primCdr(closureRef(co, 1));
Obj _35reg1386 = primIsCons(_35reg1385);
if (True == _35reg1386) {
Obj _35reg1387 = primCdr(closureRef(co, 1));
Obj _35reg1388 = primCar(_35reg1387);
Obj x = _35reg1388;
Obj _35reg1389 = primCdr(closureRef(co, 1));
Obj _35reg1390 = primCdr(_35reg1389);
Obj _35reg1391 = primIsCons(_35reg1390);
if (True == _35reg1391) {
Obj _35reg1392 = primCdr(closureRef(co, 1));
Obj _35reg1393 = primCdr(_35reg1392);
Obj _35reg1394 = primCar(_35reg1393);
Obj y = _35reg1394;
Obj _35reg1395 = primCdr(closureRef(co, 1));
Obj _35reg1396 = primCdr(_35reg1395);
Obj _35reg1397 = primCdr(_35reg1396);
Obj _35reg1398 = primEQ(Nil, _35reg1397);
if (True == _35reg1398) {
pushCont(co, 2, _35clofun2849, 2, env, y);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1052;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1052;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1052;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1052;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1052;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val1409 = __arg1;
Obj _35reg1410 = primCons(intern("if"), _35val1409);
__nargs = 2;
__arg1 = _35reg1410;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2849) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val1408 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 4, _35clofun2849, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1408;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1051 = makeNative(3, _35clofun2849, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg1404 = primIsCons(closureRef(co, 1));
if (True == _35reg1404) {
Obj _35reg1405 = primCar(closureRef(co, 1));
Obj _35reg1406 = primEQ(intern("if"), _35reg1405);
if (True == _35reg1406) {
Obj _35reg1407 = primCdr(closureRef(co, 1));
Obj args = _35reg1407;
pushCont(co, 5, _35clofun2849, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1051;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1051;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val1429 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1430 = primCons(_35val1429, Nil);
Obj _35reg1431 = primCons(args, _35reg1430);
Obj _35reg1432 = primCons(intern("lambda"), _35reg1431);
__nargs = 2;
__arg1 = _35reg1432;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2849) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val1428 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun2849, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = _35val1428;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1050 = makeNative(6, _35clofun2849, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg1411 = primIsCons(closureRef(co, 1));
if (True == _35reg1411) {
Obj _35reg1412 = primCar(closureRef(co, 1));
Obj _35reg1413 = primEQ(intern("lambda"), _35reg1412);
if (True == _35reg1413) {
Obj _35reg1414 = primCdr(closureRef(co, 1));
Obj _35reg1415 = primIsCons(_35reg1414);
if (True == _35reg1415) {
Obj _35reg1416 = primCdr(closureRef(co, 1));
Obj _35reg1417 = primCar(_35reg1416);
Obj args = _35reg1417;
Obj _35reg1418 = primCdr(closureRef(co, 1));
Obj _35reg1419 = primCdr(_35reg1418);
Obj _35reg1420 = primIsCons(_35reg1419);
if (True == _35reg1420) {
Obj _35reg1421 = primCdr(closureRef(co, 1));
Obj _35reg1422 = primCdr(_35reg1421);
Obj _35reg1423 = primCar(_35reg1422);
Obj body = _35reg1423;
Obj _35reg1424 = primCdr(closureRef(co, 1));
Obj _35reg1425 = primCdr(_35reg1424);
Obj _35reg1426 = primCdr(_35reg1425);
Obj _35reg1427 = primEQ(Nil, _35reg1426);
if (True == _35reg1427) {
pushCont(co, 8, _35clofun2849, 2, body, args);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = args;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1050;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1050;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1050;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1050;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1050;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val1434 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1434) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2849) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1435 = primCons(x, Nil);
Obj _35reg1436 = primCons(intern("%global"), _35reg1435);
__nargs = 2;
__arg1 = _35reg1436;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2849) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label11:
{
Obj _35cc1049 = makeNative(9, _35clofun2849, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg1433 = primIsSymbol(x);
if (True == _35reg1433) {
pushCont(co, 10, _35clofun2849, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1049;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc1048 = makeNative(11, _35clofun2849, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj __ = closureRef(co, 0);
Obj _35reg1437 = primIsCons(closureRef(co, 1));
if (True == _35reg1437) {
Obj _35reg1438 = primCar(closureRef(co, 1));
Obj _35reg1439 = primEQ(intern("quote"), _35reg1438);
if (True == _35reg1439) {
Obj _35reg1440 = primCdr(closureRef(co, 1));
Obj _35reg1441 = primIsCons(_35reg1440);
if (True == _35reg1441) {
Obj _35reg1442 = primCdr(closureRef(co, 1));
Obj _35reg1443 = primCar(_35reg1442);
Obj x = _35reg1443;
Obj _35reg1444 = primCdr(closureRef(co, 1));
Obj _35reg1445 = primCdr(_35reg1444);
Obj _35reg1446 = primEQ(Nil, _35reg1445);
if (True == _35reg1446) {
Obj _35reg1447 = primCons(x, Nil);
Obj _35reg1448 = primCons(intern("%const"), _35reg1447);
__nargs = 2;
__arg1 = _35reg1448;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2849) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val1458 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1047= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1458) {
if (True == True) {
Obj _35reg1459 = primCons(x, Nil);
Obj _35reg1460 = primCons(intern("%const"), _35reg1459);
__nargs = 2;
__arg1 = _35reg1460;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2849) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg1461 = primCons(x, Nil);
Obj _35reg1462 = primCons(intern("%const"), _35reg1461);
__nargs = 2;
__arg1 = _35reg1462;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2849) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label14:
{
Obj _35val1455 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1047= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1455) {
if (True == True) {
Obj _35reg1456 = primCons(x, Nil);
Obj _35reg1457 = primCons(intern("%const"), _35reg1456);
__nargs = 2;
__arg1 = _35reg1457;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2849) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 13, _35clofun2849, 2, x, _35cc1047);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val1449 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1047= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1449) {
if (True == True) {
Obj _35reg1450 = primCons(x, Nil);
Obj _35reg1451 = primCons(intern("%const"), _35reg1450);
__nargs = 2;
__arg1 = _35reg1451;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2849) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg1452 = primIsString(x);
if (True == _35reg1452) {
if (True == True) {
Obj _35reg1453 = primCons(x, Nil);
Obj _35reg1454 = primCons(intern("%const"), _35reg1453);
__nargs = 2;
__arg1 = _35reg1454;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2849) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 14, _35clofun2849, 2, x, _35cc1047);
__nargs = 2;
__arg0 = globalRef(intern("boolean?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label16:
{
Obj _35p1045 = __arg1;
Obj _35p1046 = __arg2;
Obj _35cc1047 = makeNative(12, _35clofun2849, 0, 2, _35p1045, _35p1046);
Obj __ = _35p1045;
Obj x = _35p1046;
pushCont(co, 15, _35clofun2849, 2, x, _35cc1047);
__nargs = 2;
__arg0 = globalRef(intern("number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1467 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1468 = primCons(x, _35val1467);
__nargs = 2;
__arg1 = _35reg1468;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2849) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35cc1060 = makeNative(17, _35clofun2849, 0, 0);
Obj _35reg1464 = primIsCons(closureRef(co, 0));
if (True == _35reg1464) {
Obj _35reg1465 = primCar(closureRef(co, 0));
Obj x = _35reg1465;
Obj _35reg1466 = primCdr(closureRef(co, 0));
Obj y = _35reg1466;
Obj s2 = closureRef(co, 1);
pushCont(co, 18, _35clofun2849, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val1472 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1059= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1472) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2849) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2848(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1317 = __arg1;
Obj find = _35val1317;
pushCont(co, 20, _35clofun2847, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x = __arg1;
pushCont(co, 0, _35clofun2848, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc.*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1321 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1321) {
__nargs = 2;
__arg1 = makeString1("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2848) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val1320 = __arg1;
Obj find = _35val1320;
pushCont(co, 2, _35clofun2848, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x = __arg1;
pushCont(co, 3, _35clofun2848, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc.*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1044 = makeNative(5, _35clofun2848, 0, 0);
Obj n = closureRef(co, 0);
Obj res = closureRef(co, 1);
Obj _35reg1323 = primSub(n, makeNumber(1));
Obj _35reg1324 = primGenSym(intern("tmp"));
Obj _35reg1325 = primCons(_35reg1324, res);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.temp-list"));
__arg1 = _35reg1323;
__arg2 = _35reg1325;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35p1041 = __arg1;
Obj _35p1042 = __arg2;
Obj _35cc1043 = makeNative(6, _35clofun2848, 0, 2, _35p1041, _35p1042);
Obj _35reg1326 = primEQ(makeNumber(0), _35p1041);
if (True == _35reg1326) {
Obj res = _35p1042;
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2848) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1043;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1328 = __arg1;
Obj ls= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1328;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc1055 = makeNative(8, _35clofun2848, 0, 0);
Obj env = closureRef(co, 0);
Obj ls = closureRef(co, 1);
pushCont(co, 9, _35clofun2848, 1, ls);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val1339 = __arg1;
Obj _35reg1337= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1340 = primCons(_35reg1337, _35val1339);
__nargs = 2;
__arg1 = _35reg1340;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2848) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val1338 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1337= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun2848, 1, _35reg1337);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val1338;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val1345 = __arg1;
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1346 = primCons(_35val1345, Nil);
Obj _35reg1347 = primCons(tmp, _35reg1346);
Obj _35reg1348 = primCons(intern("lambda"), _35reg1347);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
__arg2 = _35reg1348;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1343 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj tmp = _35val1343;
Obj _35reg1344 = primCons(op, args);
pushCont(co, 13, _35clofun2848, 2, tmp, env);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35reg1344;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val1334 = __arg1;
Obj required= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj provided = _35val1334;
Obj _35reg1335 = primEQ(required, provided);
if (True == _35reg1335) {
Obj _35reg1336 = primCons(op, Nil);
Obj _35reg1337 = primCons(intern("%builtin"), _35reg1336);
pushCont(co, 12, _35clofun2848, 2, args, _35reg1337);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1341 = primGT(required, provided);
if (True == _35reg1341) {
Obj _35reg1342 = primSub(required, provided);
pushCont(co, 14, _35clofun2848, 3, op, args, env);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.temp-list"));
__arg1 = _35reg1342;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("primitive call mismatch");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label16:
{
Obj _35val1333 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj required = _35val1333;
pushCont(co, 15, _35clofun2848, 4, required, op, args, env);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1332 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35cc1054= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val1332) {
pushCont(co, 16, _35clofun2848, 3, op, args, env);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.builtin->args"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1054;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35cc1054 = makeNative(10, _35clofun2848, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg1329 = primIsCons(closureRef(co, 1));
if (True == _35reg1329) {
Obj _35reg1330 = primCar(closureRef(co, 1));
Obj op = _35reg1330;
Obj _35reg1331 = primCdr(closureRef(co, 1));
Obj args = _35reg1331;
pushCont(co, 17, _35clofun2848, 4, op, args, env, _35cc1054);
__nargs = 2;
__arg0 = globalRef(intern("builtin?"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1054;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val1377 = __arg1;
Obj _35val1375= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1378 = primCons(_35val1377, Nil);
Obj _35reg1379 = primCons(_35val1375, _35reg1378);
Obj _35reg1380 = primCons(a, _35reg1379);
Obj _35reg1381 = primCons(intern("let"), _35reg1380);
__nargs = 2;
__arg1 = _35reg1381;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2848) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val1375 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1376 = primCons(a, env);
pushCont(co, 19, _35clofun2848, 2, _35val1375, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = _35reg1376;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2848) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2847(struct Cora* co){
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
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1025 = makeNative(0, _35clofun2847, 0, 0);
Obj var = closureRef(co, 0);
Obj _35reg1205 = primIsCons(closureRef(co, 1));
if (True == _35reg1205) {
Obj _35reg1206 = primCar(closureRef(co, 1));
Obj __ = _35reg1206;
Obj _35reg1207 = primCdr(closureRef(co, 1));
Obj y = _35reg1207;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.assq"));
__arg1 = var;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc1024 = makeNative(1, _35clofun2847, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj _35reg1208 = primIsCons(closureRef(co, 1));
if (True == _35reg1208) {
Obj _35reg1209 = primCar(closureRef(co, 1));
Obj _35reg1210 = primIsCons(_35reg1209);
if (True == _35reg1210) {
Obj _35reg1211 = primCar(closureRef(co, 1));
Obj _35reg1212 = primCar(_35reg1211);
Obj x = _35reg1212;
Obj _35reg1213 = primCar(closureRef(co, 1));
Obj _35reg1214 = primCdr(_35reg1213);
Obj y = _35reg1214;
Obj _35reg1215 = primCdr(closureRef(co, 1));
Obj __ = _35reg1215;
Obj _35reg1216 = primEQ(var, x);
if (True == _35reg1216) {
Obj _35reg1217 = primCons(x, y);
__nargs = 2;
__arg1 = _35reg1217;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2847) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35p1021 = __arg1;
Obj _35p1022 = __arg2;
Obj _35cc1023 = makeNative(2, _35clofun2847, 0, 2, _35p1021, _35p1022);
Obj var = _35p1021;
Obj _35reg1218 = primEQ(Nil, _35p1022);
if (True == _35reg1218) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2847) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1223 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = f;
__arg2 = _35val1223;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1030 = makeNative(4, _35clofun2847, 0, 0);
Obj f = closureRef(co, 0);
Obj acc = closureRef(co, 1);
Obj _35reg1220 = primIsCons(closureRef(co, 2));
if (True == _35reg1220) {
Obj _35reg1221 = primCar(closureRef(co, 2));
Obj x = _35reg1221;
Obj _35reg1222 = primCdr(closureRef(co, 2));
Obj y = _35reg1222;
pushCont(co, 5, _35clofun2847, 2, f, y);
__nargs = 3;
__arg0 = f;
__arg1 = acc;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p1026 = __arg1;
Obj _35p1027 = __arg2;
Obj _35p1028 = __arg3;
Obj _35cc1029 = makeNative(6, _35clofun2847, 0, 3, _35p1026, _35p1027, _35p1028);
Obj f = _35p1026;
Obj acc = _35p1027;
Obj _35reg1224 = primEQ(Nil, _35p1028);
if (True == _35reg1224) {
__nargs = 2;
__arg1 = acc;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2847) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1036 = makeNative(8, _35clofun2847, 0, 0);
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg1226 = primIsCons(closureRef(co, 2));
if (True == _35reg1226) {
Obj _35reg1227 = primCar(closureRef(co, 2));
Obj a = _35reg1227;
Obj _35reg1228 = primCdr(closureRef(co, 2));
Obj b = _35reg1228;
Obj _35reg1229 = primAdd(pos, makeNumber(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.pos-in-list0"));
__arg1 = _35reg1229;
__arg2 = x;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1036;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc1035 = makeNative(9, _35clofun2847, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg1230 = primIsCons(closureRef(co, 2));
if (True == _35reg1230) {
Obj _35reg1231 = primCar(closureRef(co, 2));
Obj a = _35reg1231;
Obj _35reg1232 = primCdr(closureRef(co, 2));
Obj b = _35reg1232;
Obj _35reg1233 = primEQ(x, a);
if (True == _35reg1233) {
__nargs = 2;
__arg1 = pos;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2847) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35p1031 = __arg1;
Obj _35p1032 = __arg2;
Obj _35p1033 = __arg3;
Obj _35cc1034 = makeNative(10, _35clofun2847, 0, 3, _35p1031, _35p1032, _35p1033);
Obj __ = _35p1031;
Obj x = _35p1032;
Obj _35reg1234 = primEQ(Nil, _35p1033);
if (True == _35reg1234) {
__nargs = 2;
__arg1 = makeNumber(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2847) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1034;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1240 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tl= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1241 = primLT(_35val1240, makeNumber(0));
if (True == _35reg1241) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.exist-in-env"));
__arg1 = x;
__arg2 = tl;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2847) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label15:
{
Obj _35cc1040 = makeNative(13, _35clofun2847, 0, 0);
Obj x = closureRef(co, 0);
Obj _35reg1237 = primIsCons(closureRef(co, 1));
if (True == _35reg1237) {
Obj _35reg1238 = primCar(closureRef(co, 1));
Obj hd = _35reg1238;
Obj _35reg1239 = primCdr(closureRef(co, 1));
Obj tl = _35reg1239;
pushCont(co, 14, _35clofun2847, 2, x, tl);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.index"));
__arg1 = x;
__arg2 = hd;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35p1037 = __arg1;
Obj _35p1038 = __arg2;
Obj _35cc1039 = makeNative(15, _35clofun2847, 0, 2, _35p1037, _35p1038);
Obj x = _35p1037;
Obj _35reg1242 = primEQ(Nil, _35p1038);
if (True == _35reg1242) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2847) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val1314 = __arg1;
Obj _35reg1315 = primNot(_35val1314);
__nargs = 2;
__arg1 = _35reg1315;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2847) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35val1313 = __arg1;
pushCont(co, 17, _35clofun2847, 0);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35val1313;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x = __arg1;
pushCont(co, 18, _35clofun2847, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc.*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1318 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1318) {
__nargs = 2;
__arg1 = makeString1("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2847) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2847) { co->ctx.pc = ps; goto fail; };
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

