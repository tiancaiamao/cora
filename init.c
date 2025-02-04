#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun1365(struct Cora* co);
void _35clofun1364(struct Cora* co);
void _35clofun1363(struct Cora* co);
void _35clofun1362(struct Cora* co);
void _35clofun1361(struct Cora* co);
void _35clofun1360(struct Cora* co);
void _35clofun1359(struct Cora* co);
void _35clofun1358(struct Cora* co);
void _35clofun1357(struct Cora* co);
void _35clofun1356(struct Cora* co);
void _35clofun1355(struct Cora* co);


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
Obj _35reg266 = primSet(co, intern("null?"), makeNative(0, _35clofun1355, 1, 0));
Obj _35reg269 = primSet(co, intern("cadr"), makeNative(1, _35clofun1355, 1, 0));
Obj _35reg272 = primSet(co, intern("caar"), makeNative(2, _35clofun1355, 1, 0));
Obj _35reg275 = primSet(co, intern("cdar"), makeNative(3, _35clofun1355, 1, 0));
Obj _35reg278 = primSet(co, intern("cddr"), makeNative(4, _35clofun1355, 1, 0));
Obj _35reg282 = primSet(co, intern("caddr"), makeNative(5, _35clofun1355, 1, 0));
Obj _35reg287 = primSet(co, intern("cadddr"), makeNative(6, _35clofun1355, 1, 0));
Obj _35reg291 = primSet(co, intern("cdddr"), makeNative(7, _35clofun1355, 1, 0));
Obj _35reg299 = primSet(co, intern("rcons"), makeNative(9, _35clofun1355, 1, 0));
Obj _35reg301 = primSet(co, intern("pair?"), makeNative(10, _35clofun1355, 1, 0));
Obj _35reg306 = primSet(co, intern("cora/init#reverse-h"), makeNative(11, _35clofun1355, 2, 0));
pushCont(co, 14, _35clofun1365, 0);
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

void _35clofun1365(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj sexp = __arg1;
pushCont(co, 20, _35clofun1364, 1, sexp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1279 = __arg1;
Obj _35reg1280 = primCons(intern("append"), Nil);
Obj _35reg1281 = primCons(intern("filter"), _35reg1280);
Obj _35reg1282 = primCons(intern("length"), _35reg1281);
Obj _35reg1283 = primCons(intern("elem?"), _35reg1282);
Obj _35reg1284 = primCons(intern("macroexpand"), _35reg1283);
Obj _35reg1285 = primCons(intern("map"), _35reg1284);
Obj _35reg1286 = primCons(intern("reverse"), _35reg1285);
Obj _35reg1287 = primCons(intern("throw"), _35reg1286);
Obj _35reg1288 = primCons(intern("try"), _35reg1287);
Obj _35reg1289 = primCons(intern("load"), _35reg1288);
Obj _35reg1290 = primCons(intern("import"), _35reg1289);
Obj _35reg1291 = primCons(intern("load-so"), _35reg1290);
Obj _35reg1292 = primCons(intern("apply"), _35reg1291);
Obj _35reg1293 = primCons(intern("value-or"), _35reg1292);
Obj _35reg1294 = primCons(intern("value"), _35reg1293);
Obj _35reg1295 = primCons(intern("read-file-as-sexp"), _35reg1294);
Obj _35reg1296 = primCons(intern("bytes-length"), _35reg1295);
Obj _35reg1297 = primCons(intern("bytes"), _35reg1296);
Obj _35reg1298 = primCons(intern("vector-length"), _35reg1297);
Obj _35reg1299 = primCons(intern("vector-ref"), _35reg1298);
Obj _35reg1300 = primCons(intern("vector-set!"), _35reg1299);
Obj _35reg1301 = primCons(intern("vector"), _35reg1300);
Obj _35reg1302 = primCons(intern("symbol->string"), _35reg1301);
Obj _35reg1303 = primCons(intern("intern"), _35reg1302);
Obj _35reg1304 = primCons(intern("string-append"), _35reg1303);
Obj _35reg1305 = primCons(intern("null?"), _35reg1304);
Obj _35reg1306 = primCons(intern("number?"), _35reg1305);
Obj _35reg1307 = primCons(intern("boolean?"), _35reg1306);
Obj _35reg1308 = primCons(intern("atom?"), _35reg1307);
Obj _35reg1309 = primCons(intern("pair?"), _35reg1308);
Obj _35reg1310 = primCons(intern("cdddr"), _35reg1309);
Obj _35reg1311 = primCons(intern("cadddr"), _35reg1310);
Obj _35reg1312 = primCons(intern("caddr"), _35reg1311);
Obj _35reg1313 = primCons(intern("cddr"), _35reg1312);
Obj _35reg1314 = primCons(intern("cdar"), _35reg1313);
Obj _35reg1315 = primCons(intern("caar"), _35reg1314);
Obj _35reg1316 = primCons(intern("cadr"), _35reg1315);
Obj _35reg1317 = primSet(co, intern("cora/init#*ns-export*"), _35reg1316);
Obj _35reg1318 = primSet(co, intern("cora/init#cadr"), globalRef(intern("cadr")));
Obj _35reg1319 = primSet(co, intern("cora/init#caar"), globalRef(intern("caar")));
Obj _35reg1320 = primSet(co, intern("cora/init#cdar"), globalRef(intern("cdar")));
Obj _35reg1321 = primSet(co, intern("cora/init#cddr"), globalRef(intern("cddr")));
Obj _35reg1322 = primSet(co, intern("cora/init#caddr"), globalRef(intern("caddr")));
Obj _35reg1323 = primSet(co, intern("cora/init#cadddr"), globalRef(intern("cadddr")));
Obj _35reg1324 = primSet(co, intern("cora/init#cdddr"), globalRef(intern("cdddr")));
Obj _35reg1325 = primSet(co, intern("cora/init#pair?"), globalRef(intern("pair?")));
Obj _35reg1326 = primSet(co, intern("cora/init#atom?"), globalRef(intern("atom?")));
Obj _35reg1327 = primSet(co, intern("cora/init#boolean?"), globalRef(intern("boolean?")));
Obj _35reg1328 = primSet(co, intern("cora/init#null?"), globalRef(intern("null?")));
Obj _35reg1329 = primSet(co, intern("cora/init#number?"), globalRef(intern("number?")));
Obj _35reg1330 = primSet(co, intern("cora/init#string-append"), globalRef(intern("string-append")));
Obj _35reg1331 = primSet(co, intern("cora/init#intern"), globalRef(intern("intern")));
Obj _35reg1332 = primSet(co, intern("cora/init#symbol->string"), globalRef(intern("symbol->string")));
Obj _35reg1333 = primSet(co, intern("cora/init#vector"), globalRef(intern("vector")));
Obj _35reg1334 = primSet(co, intern("cora/init#vector-set!"), globalRef(intern("vector-set!")));
Obj _35reg1335 = primSet(co, intern("cora/init#vector-ref"), globalRef(intern("vector-ref")));
Obj _35reg1336 = primSet(co, intern("cora/init#vector-length"), globalRef(intern("vector-length")));
Obj _35reg1337 = primSet(co, intern("cora/init#bytes"), globalRef(intern("bytes")));
Obj _35reg1338 = primSet(co, intern("cora/init#bytes-length"), globalRef(intern("bytes-length")));
Obj _35reg1339 = primSet(co, intern("cora/init#value"), globalRef(intern("value")));
Obj _35reg1340 = primSet(co, intern("cora/init#value-or"), globalRef(intern("value-or")));
Obj _35reg1341 = primSet(co, intern("cora/init#read-file-as-sexp"), globalRef(intern("read-file-as-sexp")));
Obj _35reg1342 = primSet(co, intern("cora/init#apply"), globalRef(intern("apply")));
Obj _35reg1343 = primSet(co, intern("cora/init#load"), globalRef(intern("load")));
Obj _35reg1344 = primSet(co, intern("cora/init#load-so"), globalRef(intern("load-so")));
Obj _35reg1345 = primSet(co, intern("cora/init#import"), globalRef(intern("import")));
Obj _35reg1346 = primSet(co, intern("cora/init#try"), globalRef(intern("try")));
Obj _35reg1347 = primSet(co, intern("cora/init#throw"), globalRef(intern("throw")));
Obj _35reg1348 = primSet(co, intern("cora/init#reverse"), globalRef(intern("reverse")));
Obj _35reg1349 = primSet(co, intern("cora/init#map"), globalRef(intern("map")));
Obj _35reg1350 = primSet(co, intern("cora/init#macroexpand"), globalRef(intern("macroexpand")));
Obj _35reg1351 = primSet(co, intern("cora/init#elem?"), globalRef(intern("elem?")));
Obj _35reg1352 = primSet(co, intern("cora/init#length"), globalRef(intern("length")));
Obj _35reg1353 = primSet(co, intern("cora/init#filter"), globalRef(intern("filter")));
Obj _35reg1354 = primSet(co, intern("cora/init#append"), globalRef(intern("append")));
__nargs = 2;
__arg1 = _35reg1354;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1365) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val1229 = __arg1;
Obj _35reg1258 = primSet(co, intern("cora/init#parse-define-library-h"), makeNative(12, _35clofun1364, 4, 0));
Obj _35reg1259 = primSet(co, intern("cora/init#parse-define-library"), makeNative(13, _35clofun1364, 2, 0));
pushCont(co, 1, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("define-library");
__arg2 = makeNative(0, _35clofun1365, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1207 = __arg1;
Obj _35reg1227 = primSet(co, intern("cora/init#rewrite-backquote"), makeNative(5, _35clofun1364, 1, 0));
pushCont(co, 2, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("backquote");
__arg2 = makeNative(7, _35clofun1364, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val758 = __arg1;
Obj _35reg1021 = primSet(co, intern("cora/init#propagate-boolean0"), makeNative(10, _35clofun1362, 1, 0));
Obj _35reg1179 = primSet(co, intern("cora/init#propagate-boolean"), makeNative(12, _35clofun1363, 1, 0));
Obj _35reg1181 = primSet(co, intern("macroexpand"), makeNative(14, _35clofun1363, 1, 0));
Obj _35reg1205 = primSet(co, intern("cora/init#rewrite-begin"), makeNative(19, _35clofun1363, 1, 0));
pushCont(co, 3, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("begin");
__arg2 = makeNative(20, _35clofun1363, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val650 = __arg1;
Obj _35reg702 = primSet(co, intern("cora/init#extract-rules1"), makeNative(14, _35clofun1360, 3, 0));
Obj _35reg703 = primSet(co, intern("cora/init#extract-rules"), makeNative(15, _35clofun1360, 1, 0));
Obj _35reg708 = primSet(co, intern("cora/init#rules-patterns"), makeNative(18, _35clofun1360, 2, 0));
Obj _35reg712 = primSet(co, intern("cora/init#length-h"), makeNative(19, _35clofun1360, 2, 0));
Obj _35reg713 = primSet(co, intern("length"), makeNative(20, _35clofun1360, 1, 0));
Obj _35reg721 = primSet(co, intern("cora/init#filter-h"), makeNative(1, _35clofun1361, 3, 0));
Obj _35reg722 = primSet(co, intern("filter"), makeNative(2, _35clofun1361, 2, 0));
Obj _35reg728 = primSet(co, intern("append"), makeNative(4, _35clofun1361, 2, 0));
Obj _35reg739 = primSet(co, intern("cora/init#rules-arg-count"), makeNative(11, _35clofun1361, 1, 0));
Obj _35reg745 = primSet(co, intern("cora/init#gen-paramenters"), makeNative(13, _35clofun1361, 1, 0));
pushCont(co, 4, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("func");
__arg2 = makeNative(19, _35clofun1361, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val457 = __arg1;
Obj _35reg511 = primSet(co, intern("cora/init#match-cons-expander"), makeNative(11, _35clofun1358, 4, 0));
Obj _35reg544 = primSet(co, intern("cora/init#match1"), makeNative(17, _35clofun1358, 4, 0));
Obj _35reg571 = primSet(co, intern("cora/init#extract-rule-action"), makeNative(4, _35clofun1359, 2, 0));
Obj _35reg623 = primSet(co, intern("cora/init#match-helper"), makeNative(20, _35clofun1359, 2, 0));
Obj _35reg649 = primSet(co, intern("cora/init#rewrite-match"), makeNative(6, _35clofun1360, 1, 0));
pushCont(co, 5, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("match");
__arg2 = makeNative(7, _35clofun1360, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val442 = __arg1;
Obj _35reg445 = primSet(co, intern("boolean?"), makeNative(10, _35clofun1357, 1, 0));
Obj _35reg455 = primSet(co, intern("cora/init#rcons1"), makeNative(13, _35clofun1357, 1, 0));
pushCont(co, 6, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("list-rest");
__arg2 = makeNative(14, _35clofun1357, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val428 = __arg1;
Obj _35reg440 = primSet(co, intern("cora/init#rewrite-and"), makeNative(8, _35clofun1357, 1, 0));
pushCont(co, 7, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("and");
__arg2 = makeNative(9, _35clofun1357, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val414 = __arg1;
Obj _35reg426 = primSet(co, intern("cora/init#rewrite-or"), makeNative(5, _35clofun1357, 1, 0));
pushCont(co, 8, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("or");
__arg2 = makeNative(6, _35clofun1357, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val400 = __arg1;
pushCont(co, 9, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("cond");
__arg2 = makeNative(3, _35clofun1357, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val378 = __arg1;
Obj _35reg383 = primSet(co, intern("elem?"), makeNative(13, _35clofun1356, 2, 0));
Obj _35reg386 = primSet(co, intern("atom?"), makeNative(14, _35clofun1356, 1, 0));
Obj _35reg398 = primSet(co, intern("cora/init#rewrite-let"), makeNative(19, _35clofun1356, 1, 0));
pushCont(co, 10, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("let");
__arg2 = makeNative(20, _35clofun1356, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val368 = __arg1;
pushCont(co, 11, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("defun");
__arg2 = makeNative(12, _35clofun1356, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val366 = __arg1;
pushCont(co, 12, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("list");
__arg2 = makeNative(8, _35clofun1356, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val307 = __arg1;
Obj _35reg308 = primSet(co, intern("reverse"), _35val307);
Obj _35reg314 = primSet(co, intern("map-h"), makeNative(13, _35clofun1355, 3, 0));
Obj _35reg315 = primSet(co, intern("map"), makeNative(14, _35clofun1355, 2, 0));
Obj _35reg316 = primSet(co, intern("*macros*"), Nil);
Obj _35reg317 = primGenSym(intern("protect"));
Obj _35reg318 = primSet(co, intern("*protect-symbol*"), _35reg317);
Obj _35reg322 = primSet(co, intern("cora/init#add-to-*macros*"), makeNative(15, _35clofun1355, 2, 0));
Obj _35reg335 = primSet(co, intern("cora/init#macroexpand1-h"), makeNative(17, _35clofun1355, 2, 0));
Obj _35reg336 = primSet(co, intern("cora/init#macroexpand1"), makeNative(18, _35clofun1355, 1, 0));
Obj _35reg353 = primSet(co, intern("cora/init#macroexpand-boot"), makeNative(3, _35clofun1356, 1, 0));
Obj _35reg354 = primSet(co, intern("macroexpand"), globalRef(intern("cora/init#macroexpand-boot")));
Obj _35reg365 = primSet(co, intern("defmacro-macro"), makeNative(7, _35clofun1356, 1, 0));
pushCont(co, 13, _35clofun1365, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("defmacro");
__arg2 = globalRef(intern("defmacro-macro"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1365) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1364(struct Cora* co){
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
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc257 = makeNative(0, _35clofun1364, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1364) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val1212 = __arg1;
Obj _35reg1213 = primCons(intern("list"), _35val1212);
__nargs = 2;
__arg1 = _35reg1213;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1364) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35cc256 = makeNative(1, _35clofun1364, 0, 1, closureRef(co, 0));
Obj _35reg1208 = primIsCons(closureRef(co, 0));
if (True == _35reg1208) {
Obj _35reg1209 = primCar(closureRef(co, 0));
Obj x = _35reg1209;
Obj _35reg1210 = primCdr(closureRef(co, 0));
Obj more = _35reg1210;
Obj _35reg1211 = primCons(x, more);
pushCont(co, 2, _35clofun1364, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#rewrite-backquote"));
__arg2 = _35reg1211;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc256;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc255 = makeNative(3, _35clofun1364, 0, 1, closureRef(co, 0));
Obj _35reg1214 = primIsCons(closureRef(co, 0));
if (True == _35reg1214) {
Obj _35reg1215 = primCar(closureRef(co, 0));
Obj _35reg1216 = primEQ(intern("unquote"), _35reg1215);
if (True == _35reg1216) {
Obj _35reg1217 = primCdr(closureRef(co, 0));
Obj _35reg1218 = primIsCons(_35reg1217);
if (True == _35reg1218) {
Obj _35reg1219 = primCdr(closureRef(co, 0));
Obj _35reg1220 = primCar(_35reg1219);
Obj x = _35reg1220;
Obj _35reg1221 = primCdr(closureRef(co, 0));
Obj _35reg1222 = primCdr(_35reg1221);
Obj _35reg1223 = primEQ(Nil, _35reg1222);
if (True == _35reg1223) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1364) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35p253 = __arg1;
Obj _35cc254 = makeNative(4, _35clofun1364, 0, 1, _35p253);
Obj x = _35p253;
Obj _35reg1224 = primIsSymbol(x);
if (True == _35reg1224) {
Obj _35reg1225 = primCons(x, Nil);
Obj _35reg1226 = primCons(intern("quote"), _35reg1225);
__nargs = 2;
__arg1 = _35reg1226;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1364) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc254;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val1228 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-backquote"));
__arg1 = _35val1228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj exp = __arg1;
pushCont(co, 6, _35clofun1364, 0);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1230 = __arg1;
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exports= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = _35val1230;
__arg2 = exports;
__arg3 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc264 = makeNative(8, _35clofun1364, 0, 0);
Obj body = closureRef(co, 0);
Obj imports = closureRef(co, 1);
Obj exports = closureRef(co, 2);
Obj k = closureRef(co, 3);
pushCont(co, 9, _35clofun1364, 3, k, exports, body);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = imports;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc263 = makeNative(10, _35clofun1364, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg1231 = primIsCons(closureRef(co, 0));
if (True == _35reg1231) {
Obj _35reg1232 = primCar(closureRef(co, 0));
Obj _35reg1233 = primIsCons(_35reg1232);
if (True == _35reg1233) {
Obj _35reg1234 = primCar(closureRef(co, 0));
Obj _35reg1235 = primCar(_35reg1234);
Obj _35reg1236 = primEQ(intern("export"), _35reg1235);
if (True == _35reg1236) {
Obj _35reg1237 = primCar(closureRef(co, 0));
Obj _35reg1238 = primCdr(_35reg1237);
Obj more = _35reg1238;
Obj _35reg1239 = primCdr(closureRef(co, 0));
Obj rest = _35reg1239;
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
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35p258 = __arg1;
Obj _35p259 = __arg2;
Obj _35p260 = __arg3;
Obj _35p261 = co->args[4];
Obj _35cc262 = makeNative(11, _35clofun1364, 0, 4, _35p258, _35p259, _35p260, _35p261);
Obj _35reg1240 = primIsCons(_35p258);
if (True == _35reg1240) {
Obj _35reg1241 = primCar(_35p258);
Obj _35reg1242 = primIsCons(_35reg1241);
if (True == _35reg1242) {
Obj _35reg1243 = primCar(_35p258);
Obj _35reg1244 = primCar(_35reg1243);
Obj _35reg1245 = primEQ(intern("import"), _35reg1244);
if (True == _35reg1245) {
Obj _35reg1246 = primCar(_35p258);
Obj _35reg1247 = primCdr(_35reg1246);
Obj _35reg1248 = primIsCons(_35reg1247);
if (True == _35reg1248) {
Obj _35reg1249 = primCar(_35p258);
Obj _35reg1250 = primCdr(_35reg1249);
Obj _35reg1251 = primCar(_35reg1250);
Obj lib = _35reg1251;
Obj _35reg1252 = primCar(_35p258);
Obj _35reg1253 = primCdr(_35reg1252);
Obj _35reg1254 = primCdr(_35reg1253);
Obj _35reg1255 = primEQ(Nil, _35reg1254);
if (True == _35reg1255) {
Obj _35reg1256 = primCdr(_35p258);
Obj rest = _35reg1256;
Obj imports = _35p259;
Obj exports = _35p260;
Obj k = _35p261;
Obj _35reg1257 = primCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#parse-define-library-h"));
__arg1 = rest;
__arg2 = _35reg1257;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc262;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc262;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc262;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc262;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc262;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj imp = __arg1;
Obj _35reg1264 = primCons(imp, Nil);
Obj _35reg1265 = primCons(intern("import"), _35reg1264);
__nargs = 2;
__arg1 = _35reg1265;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1364) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val1273 = __arg1;
Obj _35reg1263= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1274 = primCons(intern("begin"), _35val1273);
Obj _35reg1275 = primCons(_35reg1274, Nil);
Obj _35reg1276 = primCons(_35reg1263, _35reg1275);
Obj _35reg1277 = primCons(closureRef(co, 0), _35reg1276);
Obj _35reg1278 = primCons(intern("ns"), _35reg1277);
__nargs = 2;
__arg1 = _35reg1278;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1364) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val1266 = __arg1;
Obj export= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1263= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1267 = primCons(export, Nil);
Obj _35reg1268 = primCons(intern("backquote"), _35reg1267);
Obj _35reg1269 = primCons(_35reg1268, Nil);
Obj _35reg1270 = primCons(intern("*ns-export*"), _35reg1269);
Obj _35reg1271 = primCons(intern("def"), _35reg1270);
Obj _35reg1272 = primCons(_35reg1271, body);
pushCont(co, 15, _35clofun1364, 1, _35reg1263);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35val1266;
__arg2 = _35reg1272;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj import = __arg1;
Obj export = __arg2;
Obj body = __arg3;
Obj _35reg1263 = primCons(makeCString("cora/init"), import);
pushCont(co, 16, _35clofun1364, 3, export, body, _35reg1263);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = makeNative(14, _35clofun1364, 1, 0);
__arg2 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1262 = __arg1;
Obj path= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _35val1262;
__arg1 = makeNative(17, _35clofun1364, 3, 1, path);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1261 = __arg1;
Obj path= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun1364, 1, path);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#parse-define-library"));
__arg1 = _35val1261;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1260 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj path = _35val1260;
pushCont(co, 19, _35clofun1364, 1, path);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1364) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1363(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc244 = makeNative(19, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg1080 = primIsCons(closureRef(co, 0));
if (True == _35reg1080) {
Obj _35reg1081 = primCar(closureRef(co, 0));
Obj _35reg1082 = primEQ(intern("not"), _35reg1081);
if (True == _35reg1082) {
Obj _35reg1083 = primCdr(closureRef(co, 0));
Obj _35reg1084 = primIsCons(_35reg1083);
if (True == _35reg1084) {
Obj _35reg1085 = primCdr(closureRef(co, 0));
Obj _35reg1086 = primCar(_35reg1085);
Obj x = _35reg1086;
Obj _35reg1087 = primCdr(closureRef(co, 0));
Obj _35reg1088 = primCdr(_35reg1087);
Obj _35reg1089 = primEQ(Nil, _35reg1088);
if (True == _35reg1089) {
pushCont(co, 20, _35clofun1362, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val1103 = __arg1;
Obj x1 = _35val1103;
Obj _35reg1104 = primCons(x1, Nil);
Obj _35reg1105 = primCons(intern("null?"), _35reg1104);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1105;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc243 = makeNative(0, _35clofun1363, 0, 1, closureRef(co, 0));
Obj _35reg1093 = primIsCons(closureRef(co, 0));
if (True == _35reg1093) {
Obj _35reg1094 = primCar(closureRef(co, 0));
Obj _35reg1095 = primEQ(intern("null?"), _35reg1094);
if (True == _35reg1095) {
Obj _35reg1096 = primCdr(closureRef(co, 0));
Obj _35reg1097 = primIsCons(_35reg1096);
if (True == _35reg1097) {
Obj _35reg1098 = primCdr(closureRef(co, 0));
Obj _35reg1099 = primCar(_35reg1098);
Obj x = _35reg1099;
Obj _35reg1100 = primCdr(closureRef(co, 0));
Obj _35reg1101 = primCdr(_35reg1100);
Obj _35reg1102 = primEQ(Nil, _35reg1101);
if (True == _35reg1102) {
pushCont(co, 1, _35clofun1363, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val1124 = __arg1;
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y1 = _35val1124;
Obj _35reg1125 = primCons(y1, Nil);
Obj _35reg1126 = primCons(x1, _35reg1125);
Obj _35reg1127 = primCons(intern("and"), _35reg1126);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val1123 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1 = _35val1123;
pushCont(co, 3, _35clofun1363, 1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc242 = makeNative(2, _35clofun1363, 0, 1, closureRef(co, 0));
Obj _35reg1106 = primIsCons(closureRef(co, 0));
if (True == _35reg1106) {
Obj _35reg1107 = primCar(closureRef(co, 0));
Obj _35reg1108 = primEQ(intern("and"), _35reg1107);
if (True == _35reg1108) {
Obj _35reg1109 = primCdr(closureRef(co, 0));
Obj _35reg1110 = primIsCons(_35reg1109);
if (True == _35reg1110) {
Obj _35reg1111 = primCdr(closureRef(co, 0));
Obj _35reg1112 = primCar(_35reg1111);
Obj x = _35reg1112;
Obj _35reg1113 = primCdr(closureRef(co, 0));
Obj _35reg1114 = primCdr(_35reg1113);
Obj _35reg1115 = primIsCons(_35reg1114);
if (True == _35reg1115) {
Obj _35reg1116 = primCdr(closureRef(co, 0));
Obj _35reg1117 = primCdr(_35reg1116);
Obj _35reg1118 = primCar(_35reg1117);
Obj y = _35reg1118;
Obj _35reg1119 = primCdr(closureRef(co, 0));
Obj _35reg1120 = primCdr(_35reg1119);
Obj _35reg1121 = primCdr(_35reg1120);
Obj _35reg1122 = primEQ(Nil, _35reg1121);
if (True == _35reg1122) {
pushCont(co, 4, _35clofun1363, 1, y);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc242;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc242;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc242;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc242;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc242;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val1138 = __arg1;
Obj x1 = _35val1138;
Obj _35reg1139 = primCons(x1, Nil);
Obj _35reg1140 = primCons(intern("cdr"), _35reg1139);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1140;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc241 = makeNative(5, _35clofun1363, 0, 1, closureRef(co, 0));
Obj _35reg1128 = primIsCons(closureRef(co, 0));
if (True == _35reg1128) {
Obj _35reg1129 = primCar(closureRef(co, 0));
Obj _35reg1130 = primEQ(intern("cdr"), _35reg1129);
if (True == _35reg1130) {
Obj _35reg1131 = primCdr(closureRef(co, 0));
Obj _35reg1132 = primIsCons(_35reg1131);
if (True == _35reg1132) {
Obj _35reg1133 = primCdr(closureRef(co, 0));
Obj _35reg1134 = primCar(_35reg1133);
Obj x = _35reg1134;
Obj _35reg1135 = primCdr(closureRef(co, 0));
Obj _35reg1136 = primCdr(_35reg1135);
Obj _35reg1137 = primEQ(Nil, _35reg1136);
if (True == _35reg1137) {
pushCont(co, 6, _35clofun1363, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc241;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc241;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc241;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc241;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val1151 = __arg1;
Obj x1 = _35val1151;
Obj _35reg1152 = primCons(x1, Nil);
Obj _35reg1153 = primCons(intern("car"), _35reg1152);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1153;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc240 = makeNative(7, _35clofun1363, 0, 1, closureRef(co, 0));
Obj _35reg1141 = primIsCons(closureRef(co, 0));
if (True == _35reg1141) {
Obj _35reg1142 = primCar(closureRef(co, 0));
Obj _35reg1143 = primEQ(intern("car"), _35reg1142);
if (True == _35reg1143) {
Obj _35reg1144 = primCdr(closureRef(co, 0));
Obj _35reg1145 = primIsCons(_35reg1144);
if (True == _35reg1145) {
Obj _35reg1146 = primCdr(closureRef(co, 0));
Obj _35reg1147 = primCar(_35reg1146);
Obj x = _35reg1147;
Obj _35reg1148 = primCdr(closureRef(co, 0));
Obj _35reg1149 = primCdr(_35reg1148);
Obj _35reg1150 = primEQ(Nil, _35reg1149);
if (True == _35reg1150) {
pushCont(co, 8, _35clofun1363, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val1164 = __arg1;
Obj x1 = _35val1164;
Obj _35reg1165 = primCons(x1, Nil);
Obj _35reg1166 = primCons(intern("cons?"), _35reg1165);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1166;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc239 = makeNative(9, _35clofun1363, 0, 1, closureRef(co, 0));
Obj _35reg1154 = primIsCons(closureRef(co, 0));
if (True == _35reg1154) {
Obj _35reg1155 = primCar(closureRef(co, 0));
Obj _35reg1156 = primEQ(intern("cons?"), _35reg1155);
if (True == _35reg1156) {
Obj _35reg1157 = primCdr(closureRef(co, 0));
Obj _35reg1158 = primIsCons(_35reg1157);
if (True == _35reg1158) {
Obj _35reg1159 = primCdr(closureRef(co, 0));
Obj _35reg1160 = primCar(_35reg1159);
Obj x = _35reg1160;
Obj _35reg1161 = primCdr(closureRef(co, 0));
Obj _35reg1162 = primCdr(_35reg1161);
Obj _35reg1163 = primEQ(Nil, _35reg1162);
if (True == _35reg1163) {
pushCont(co, 10, _35clofun1363, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35p237 = __arg1;
Obj _35cc238 = makeNative(11, _35clofun1363, 0, 1, _35p237);
Obj _35reg1167 = primIsCons(_35p237);
if (True == _35reg1167) {
Obj _35reg1168 = primCar(_35p237);
Obj _35reg1169 = primEQ(intern("quote"), _35reg1168);
if (True == _35reg1169) {
Obj _35reg1170 = primCdr(_35p237);
Obj _35reg1171 = primIsCons(_35reg1170);
if (True == _35reg1171) {
Obj _35reg1172 = primCdr(_35p237);
Obj _35reg1173 = primCar(_35reg1172);
Obj x = _35reg1173;
Obj _35reg1174 = primCdr(_35p237);
Obj _35reg1175 = primCdr(_35reg1174);
Obj _35reg1176 = primEQ(Nil, _35reg1175);
if (True == _35reg1176) {
Obj _35reg1177 = primCons(x, Nil);
Obj _35reg1178 = primCons(intern("quote"), _35reg1177);
__nargs = 2;
__arg1 = _35reg1178;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1363) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc238;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc238;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc238;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc238;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val1180 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = _35val1180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj exp = __arg1;
pushCont(co, 13, _35clofun1363, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val1185 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1186 = primCons(_35val1185, Nil);
Obj _35reg1187 = primCons(x, _35reg1186);
Obj _35reg1188 = primCons(intern("do"), _35reg1187);
__nargs = 2;
__arg1 = _35reg1188;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1363) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35cc252 = makeNative(15, _35clofun1363, 0, 0);
Obj _35reg1182 = primIsCons(closureRef(co, 0));
if (True == _35reg1182) {
Obj _35reg1183 = primCar(closureRef(co, 0));
Obj x = _35reg1183;
Obj _35reg1184 = primCdr(closureRef(co, 0));
Obj y = _35reg1184;
pushCont(co, 16, _35clofun1363, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-begin"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc252;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35cc251 = makeNative(17, _35clofun1363, 0, 1, closureRef(co, 0));
Obj _35reg1189 = primIsCons(closureRef(co, 0));
if (True == _35reg1189) {
Obj _35reg1190 = primCar(closureRef(co, 0));
Obj x = _35reg1190;
Obj _35reg1191 = primCdr(closureRef(co, 0));
Obj _35reg1192 = primIsCons(_35reg1191);
if (True == _35reg1192) {
Obj _35reg1193 = primCdr(closureRef(co, 0));
Obj _35reg1194 = primCar(_35reg1193);
Obj y = _35reg1194;
Obj _35reg1195 = primCdr(closureRef(co, 0));
Obj _35reg1196 = primCdr(_35reg1195);
Obj _35reg1197 = primEQ(Nil, _35reg1196);
if (True == _35reg1197) {
Obj _35reg1198 = primCons(y, Nil);
Obj _35reg1199 = primCons(x, _35reg1198);
Obj _35reg1200 = primCons(intern("do"), _35reg1199);
__nargs = 2;
__arg1 = _35reg1200;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1363) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc251;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc251;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc251;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35p249 = __arg1;
Obj _35cc250 = makeNative(18, _35clofun1363, 0, 1, _35p249);
Obj _35reg1201 = primIsCons(_35p249);
if (True == _35reg1201) {
Obj _35reg1202 = primCar(_35p249);
Obj x = _35reg1202;
Obj _35reg1203 = primCdr(_35p249);
Obj _35reg1204 = primEQ(Nil, _35reg1203);
if (True == _35reg1204) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1363) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj exp = __arg1;
Obj _35reg1206 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-begin"));
__arg1 = _35reg1206;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1363) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1362(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc236 = makeNative(20, _35clofun1361, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35cc235 = makeNative(0, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg759 = primIsCons(closureRef(co, 0));
if (True == _35reg759) {
Obj _35reg760 = primCar(closureRef(co, 0));
Obj _35reg761 = primEQ(intern("if"), _35reg760);
if (True == _35reg761) {
Obj _35reg762 = primCdr(closureRef(co, 0));
Obj _35reg763 = primIsCons(_35reg762);
if (True == _35reg763) {
Obj _35reg764 = primCdr(closureRef(co, 0));
Obj _35reg765 = primCar(_35reg764);
Obj _35reg766 = primEQ(False, _35reg765);
if (True == _35reg766) {
Obj _35reg767 = primCdr(closureRef(co, 0));
Obj _35reg768 = primCdr(_35reg767);
Obj _35reg769 = primIsCons(_35reg768);
if (True == _35reg769) {
Obj _35reg770 = primCdr(closureRef(co, 0));
Obj _35reg771 = primCdr(_35reg770);
Obj _35reg772 = primCar(_35reg771);
Obj y = _35reg772;
Obj _35reg773 = primCdr(closureRef(co, 0));
Obj _35reg774 = primCdr(_35reg773);
Obj _35reg775 = primCdr(_35reg774);
Obj _35reg776 = primIsCons(_35reg775);
if (True == _35reg776) {
Obj _35reg777 = primCdr(closureRef(co, 0));
Obj _35reg778 = primCdr(_35reg777);
Obj _35reg779 = primCdr(_35reg778);
Obj _35reg780 = primCar(_35reg779);
Obj z = _35reg780;
Obj _35reg781 = primCdr(closureRef(co, 0));
Obj _35reg782 = primCdr(_35reg781);
Obj _35reg783 = primCdr(_35reg782);
Obj _35reg784 = primCdr(_35reg783);
Obj _35reg785 = primEQ(Nil, _35reg784);
if (True == _35reg785) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc234 = makeNative(1, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg786 = primIsCons(closureRef(co, 0));
if (True == _35reg786) {
Obj _35reg787 = primCar(closureRef(co, 0));
Obj _35reg788 = primEQ(intern("if"), _35reg787);
if (True == _35reg788) {
Obj _35reg789 = primCdr(closureRef(co, 0));
Obj _35reg790 = primIsCons(_35reg789);
if (True == _35reg790) {
Obj _35reg791 = primCdr(closureRef(co, 0));
Obj _35reg792 = primCar(_35reg791);
Obj _35reg793 = primEQ(True, _35reg792);
if (True == _35reg793) {
Obj _35reg794 = primCdr(closureRef(co, 0));
Obj _35reg795 = primCdr(_35reg794);
Obj _35reg796 = primIsCons(_35reg795);
if (True == _35reg796) {
Obj _35reg797 = primCdr(closureRef(co, 0));
Obj _35reg798 = primCdr(_35reg797);
Obj _35reg799 = primCar(_35reg798);
Obj y = _35reg799;
Obj _35reg800 = primCdr(closureRef(co, 0));
Obj _35reg801 = primCdr(_35reg800);
Obj _35reg802 = primCdr(_35reg801);
Obj _35reg803 = primIsCons(_35reg802);
if (True == _35reg803) {
Obj _35reg804 = primCdr(closureRef(co, 0));
Obj _35reg805 = primCdr(_35reg804);
Obj _35reg806 = primCdr(_35reg805);
Obj _35reg807 = primCar(_35reg806);
Obj z = _35reg807;
Obj _35reg808 = primCdr(closureRef(co, 0));
Obj _35reg809 = primCdr(_35reg808);
Obj _35reg810 = primCdr(_35reg809);
Obj _35reg811 = primCdr(_35reg810);
Obj _35reg812 = primEQ(Nil, _35reg811);
if (True == _35reg812) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc233 = makeNative(2, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg813 = primIsCons(closureRef(co, 0));
if (True == _35reg813) {
Obj _35reg814 = primCar(closureRef(co, 0));
Obj _35reg815 = primEQ(intern("not"), _35reg814);
if (True == _35reg815) {
Obj _35reg816 = primCdr(closureRef(co, 0));
Obj _35reg817 = primIsCons(_35reg816);
if (True == _35reg817) {
Obj _35reg818 = primCdr(closureRef(co, 0));
Obj _35reg819 = primCar(_35reg818);
Obj _35reg820 = primEQ(False, _35reg819);
if (True == _35reg820) {
Obj _35reg821 = primCdr(closureRef(co, 0));
Obj _35reg822 = primCdr(_35reg821);
Obj _35reg823 = primEQ(Nil, _35reg822);
if (True == _35reg823) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc232 = makeNative(3, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg824 = primIsCons(closureRef(co, 0));
if (True == _35reg824) {
Obj _35reg825 = primCar(closureRef(co, 0));
Obj _35reg826 = primEQ(intern("not"), _35reg825);
if (True == _35reg826) {
Obj _35reg827 = primCdr(closureRef(co, 0));
Obj _35reg828 = primIsCons(_35reg827);
if (True == _35reg828) {
Obj _35reg829 = primCdr(closureRef(co, 0));
Obj _35reg830 = primCar(_35reg829);
Obj _35reg831 = primEQ(True, _35reg830);
if (True == _35reg831) {
Obj _35reg832 = primCdr(closureRef(co, 0));
Obj _35reg833 = primCdr(_35reg832);
Obj _35reg834 = primEQ(Nil, _35reg833);
if (True == _35reg834) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc231 = makeNative(4, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg835 = primIsCons(closureRef(co, 0));
if (True == _35reg835) {
Obj _35reg836 = primCar(closureRef(co, 0));
Obj _35reg837 = primEQ(intern("null?"), _35reg836);
if (True == _35reg837) {
Obj _35reg838 = primCdr(closureRef(co, 0));
Obj _35reg839 = primIsCons(_35reg838);
if (True == _35reg839) {
Obj _35reg840 = primCdr(closureRef(co, 0));
Obj _35reg841 = primCar(_35reg840);
Obj _35reg842 = primIsCons(_35reg841);
if (True == _35reg842) {
Obj _35reg843 = primCdr(closureRef(co, 0));
Obj _35reg844 = primCar(_35reg843);
Obj _35reg845 = primCar(_35reg844);
Obj _35reg846 = primEQ(intern("cons"), _35reg845);
if (True == _35reg846) {
Obj _35reg847 = primCdr(closureRef(co, 0));
Obj _35reg848 = primCar(_35reg847);
Obj _35reg849 = primCdr(_35reg848);
Obj _35reg850 = primIsCons(_35reg849);
if (True == _35reg850) {
Obj _35reg851 = primCdr(closureRef(co, 0));
Obj _35reg852 = primCar(_35reg851);
Obj _35reg853 = primCdr(_35reg852);
Obj _35reg854 = primCar(_35reg853);
Obj __ = _35reg854;
Obj _35reg855 = primCdr(closureRef(co, 0));
Obj _35reg856 = primCar(_35reg855);
Obj _35reg857 = primCdr(_35reg856);
Obj _35reg858 = primCdr(_35reg857);
Obj _35reg859 = primIsCons(_35reg858);
if (True == _35reg859) {
Obj _35reg860 = primCdr(closureRef(co, 0));
Obj _35reg861 = primCar(_35reg860);
Obj _35reg862 = primCdr(_35reg861);
Obj _35reg863 = primCdr(_35reg862);
Obj _35reg864 = primCar(_35reg863);
__ = _35reg864;
Obj _35reg865 = primCdr(closureRef(co, 0));
Obj _35reg866 = primCar(_35reg865);
Obj _35reg867 = primCdr(_35reg866);
Obj _35reg868 = primCdr(_35reg867);
Obj _35reg869 = primCdr(_35reg868);
Obj _35reg870 = primEQ(Nil, _35reg869);
if (True == _35reg870) {
Obj _35reg871 = primCdr(closureRef(co, 0));
Obj _35reg872 = primCdr(_35reg871);
Obj _35reg873 = primEQ(Nil, _35reg872);
if (True == _35reg873) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc230 = makeNative(5, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg874 = primIsCons(closureRef(co, 0));
if (True == _35reg874) {
Obj _35reg875 = primCar(closureRef(co, 0));
Obj _35reg876 = primEQ(intern("null?"), _35reg875);
if (True == _35reg876) {
Obj _35reg877 = primCdr(closureRef(co, 0));
Obj _35reg878 = primIsCons(_35reg877);
if (True == _35reg878) {
Obj _35reg879 = primCdr(closureRef(co, 0));
Obj _35reg880 = primCar(_35reg879);
Obj _35reg881 = primEQ(Nil, _35reg880);
if (True == _35reg881) {
Obj _35reg882 = primCdr(closureRef(co, 0));
Obj _35reg883 = primCdr(_35reg882);
Obj _35reg884 = primEQ(Nil, _35reg883);
if (True == _35reg884) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc229 = makeNative(6, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg885 = primIsCons(closureRef(co, 0));
if (True == _35reg885) {
Obj _35reg886 = primCar(closureRef(co, 0));
Obj _35reg887 = primEQ(intern("and"), _35reg886);
if (True == _35reg887) {
Obj _35reg888 = primCdr(closureRef(co, 0));
Obj _35reg889 = primIsCons(_35reg888);
if (True == _35reg889) {
Obj _35reg890 = primCdr(closureRef(co, 0));
Obj _35reg891 = primCar(_35reg890);
Obj _35reg892 = primEQ(True, _35reg891);
if (True == _35reg892) {
Obj _35reg893 = primCdr(closureRef(co, 0));
Obj _35reg894 = primCdr(_35reg893);
Obj _35reg895 = primIsCons(_35reg894);
if (True == _35reg895) {
Obj _35reg896 = primCdr(closureRef(co, 0));
Obj _35reg897 = primCdr(_35reg896);
Obj _35reg898 = primCar(_35reg897);
Obj _35reg899 = primEQ(True, _35reg898);
if (True == _35reg899) {
Obj _35reg900 = primCdr(closureRef(co, 0));
Obj _35reg901 = primCdr(_35reg900);
Obj _35reg902 = primCdr(_35reg901);
Obj _35reg903 = primEQ(Nil, _35reg902);
if (True == _35reg903) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35cc228 = makeNative(7, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg904 = primIsCons(closureRef(co, 0));
if (True == _35reg904) {
Obj _35reg905 = primCar(closureRef(co, 0));
Obj _35reg906 = primEQ(intern("cons?"), _35reg905);
if (True == _35reg906) {
Obj _35reg907 = primCdr(closureRef(co, 0));
Obj _35reg908 = primIsCons(_35reg907);
if (True == _35reg908) {
Obj _35reg909 = primCdr(closureRef(co, 0));
Obj _35reg910 = primCar(_35reg909);
Obj _35reg911 = primIsCons(_35reg910);
if (True == _35reg911) {
Obj _35reg912 = primCdr(closureRef(co, 0));
Obj _35reg913 = primCar(_35reg912);
Obj _35reg914 = primCar(_35reg913);
Obj _35reg915 = primEQ(intern("cons"), _35reg914);
if (True == _35reg915) {
Obj _35reg916 = primCdr(closureRef(co, 0));
Obj _35reg917 = primCar(_35reg916);
Obj _35reg918 = primCdr(_35reg917);
Obj _35reg919 = primIsCons(_35reg918);
if (True == _35reg919) {
Obj _35reg920 = primCdr(closureRef(co, 0));
Obj _35reg921 = primCar(_35reg920);
Obj _35reg922 = primCdr(_35reg921);
Obj _35reg923 = primCar(_35reg922);
Obj __ = _35reg923;
Obj _35reg924 = primCdr(closureRef(co, 0));
Obj _35reg925 = primCar(_35reg924);
Obj _35reg926 = primCdr(_35reg925);
Obj _35reg927 = primCdr(_35reg926);
Obj _35reg928 = primIsCons(_35reg927);
if (True == _35reg928) {
Obj _35reg929 = primCdr(closureRef(co, 0));
Obj _35reg930 = primCar(_35reg929);
Obj _35reg931 = primCdr(_35reg930);
Obj _35reg932 = primCdr(_35reg931);
Obj _35reg933 = primCar(_35reg932);
__ = _35reg933;
Obj _35reg934 = primCdr(closureRef(co, 0));
Obj _35reg935 = primCar(_35reg934);
Obj _35reg936 = primCdr(_35reg935);
Obj _35reg937 = primCdr(_35reg936);
Obj _35reg938 = primCdr(_35reg937);
Obj _35reg939 = primEQ(Nil, _35reg938);
if (True == _35reg939) {
Obj _35reg940 = primCdr(closureRef(co, 0));
Obj _35reg941 = primCdr(_35reg940);
Obj _35reg942 = primEQ(Nil, _35reg941);
if (True == _35reg942) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc227 = makeNative(8, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg943 = primIsCons(closureRef(co, 0));
if (True == _35reg943) {
Obj _35reg944 = primCar(closureRef(co, 0));
Obj _35reg945 = primEQ(intern("cdr"), _35reg944);
if (True == _35reg945) {
Obj _35reg946 = primCdr(closureRef(co, 0));
Obj _35reg947 = primIsCons(_35reg946);
if (True == _35reg947) {
Obj _35reg948 = primCdr(closureRef(co, 0));
Obj _35reg949 = primCar(_35reg948);
Obj _35reg950 = primIsCons(_35reg949);
if (True == _35reg950) {
Obj _35reg951 = primCdr(closureRef(co, 0));
Obj _35reg952 = primCar(_35reg951);
Obj _35reg953 = primCar(_35reg952);
Obj _35reg954 = primEQ(intern("cons"), _35reg953);
if (True == _35reg954) {
Obj _35reg955 = primCdr(closureRef(co, 0));
Obj _35reg956 = primCar(_35reg955);
Obj _35reg957 = primCdr(_35reg956);
Obj _35reg958 = primIsCons(_35reg957);
if (True == _35reg958) {
Obj _35reg959 = primCdr(closureRef(co, 0));
Obj _35reg960 = primCar(_35reg959);
Obj _35reg961 = primCdr(_35reg960);
Obj _35reg962 = primCar(_35reg961);
Obj __ = _35reg962;
Obj _35reg963 = primCdr(closureRef(co, 0));
Obj _35reg964 = primCar(_35reg963);
Obj _35reg965 = primCdr(_35reg964);
Obj _35reg966 = primCdr(_35reg965);
Obj _35reg967 = primIsCons(_35reg966);
if (True == _35reg967) {
Obj _35reg968 = primCdr(closureRef(co, 0));
Obj _35reg969 = primCar(_35reg968);
Obj _35reg970 = primCdr(_35reg969);
Obj _35reg971 = primCdr(_35reg970);
Obj _35reg972 = primCar(_35reg971);
Obj x = _35reg972;
Obj _35reg973 = primCdr(closureRef(co, 0));
Obj _35reg974 = primCar(_35reg973);
Obj _35reg975 = primCdr(_35reg974);
Obj _35reg976 = primCdr(_35reg975);
Obj _35reg977 = primCdr(_35reg976);
Obj _35reg978 = primEQ(Nil, _35reg977);
if (True == _35reg978) {
Obj _35reg979 = primCdr(closureRef(co, 0));
Obj _35reg980 = primCdr(_35reg979);
Obj _35reg981 = primEQ(Nil, _35reg980);
if (True == _35reg981) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p225 = __arg1;
Obj _35cc226 = makeNative(9, _35clofun1362, 0, 1, _35p225);
Obj _35reg982 = primIsCons(_35p225);
if (True == _35reg982) {
Obj _35reg983 = primCar(_35p225);
Obj _35reg984 = primEQ(intern("car"), _35reg983);
if (True == _35reg984) {
Obj _35reg985 = primCdr(_35p225);
Obj _35reg986 = primIsCons(_35reg985);
if (True == _35reg986) {
Obj _35reg987 = primCdr(_35p225);
Obj _35reg988 = primCar(_35reg987);
Obj _35reg989 = primIsCons(_35reg988);
if (True == _35reg989) {
Obj _35reg990 = primCdr(_35p225);
Obj _35reg991 = primCar(_35reg990);
Obj _35reg992 = primCar(_35reg991);
Obj _35reg993 = primEQ(intern("cons"), _35reg992);
if (True == _35reg993) {
Obj _35reg994 = primCdr(_35p225);
Obj _35reg995 = primCar(_35reg994);
Obj _35reg996 = primCdr(_35reg995);
Obj _35reg997 = primIsCons(_35reg996);
if (True == _35reg997) {
Obj _35reg998 = primCdr(_35p225);
Obj _35reg999 = primCar(_35reg998);
Obj _35reg1000 = primCdr(_35reg999);
Obj _35reg1001 = primCar(_35reg1000);
Obj x = _35reg1001;
Obj _35reg1002 = primCdr(_35p225);
Obj _35reg1003 = primCar(_35reg1002);
Obj _35reg1004 = primCdr(_35reg1003);
Obj _35reg1005 = primCdr(_35reg1004);
Obj _35reg1006 = primIsCons(_35reg1005);
if (True == _35reg1006) {
Obj _35reg1007 = primCdr(_35p225);
Obj _35reg1008 = primCar(_35reg1007);
Obj _35reg1009 = primCdr(_35reg1008);
Obj _35reg1010 = primCdr(_35reg1009);
Obj _35reg1011 = primCar(_35reg1010);
Obj __ = _35reg1011;
Obj _35reg1012 = primCdr(_35p225);
Obj _35reg1013 = primCar(_35reg1012);
Obj _35reg1014 = primCdr(_35reg1013);
Obj _35reg1015 = primCdr(_35reg1014);
Obj _35reg1016 = primCdr(_35reg1015);
Obj _35reg1017 = primEQ(Nil, _35reg1016);
if (True == _35reg1017) {
Obj _35reg1018 = primCdr(_35p225);
Obj _35reg1019 = primCdr(_35reg1018);
Obj _35reg1020 = primEQ(Nil, _35reg1019);
if (True == _35reg1020) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc248 = makeNative(11, _35clofun1362, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35cc247 = makeNative(12, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg1022 = primIsCons(closureRef(co, 0));
if (True == _35reg1022) {
Obj _35reg1023 = primCar(closureRef(co, 0));
Obj f = _35reg1023;
Obj _35reg1024 = primCdr(closureRef(co, 0));
Obj args = _35reg1024;
Obj _35reg1025 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#propagate-boolean"));
__arg2 = _35reg1025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val1043 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1044 = primCons(_35val1043, Nil);
Obj _35reg1045 = primCons(args, _35reg1044);
Obj _35reg1046 = primCons(intern("lambda"), _35reg1045);
__nargs = 2;
__arg1 = _35reg1046;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1362) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35cc246 = makeNative(13, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg1026 = primIsCons(closureRef(co, 0));
if (True == _35reg1026) {
Obj _35reg1027 = primCar(closureRef(co, 0));
Obj _35reg1028 = primEQ(intern("lambda"), _35reg1027);
if (True == _35reg1028) {
Obj _35reg1029 = primCdr(closureRef(co, 0));
Obj _35reg1030 = primIsCons(_35reg1029);
if (True == _35reg1030) {
Obj _35reg1031 = primCdr(closureRef(co, 0));
Obj _35reg1032 = primCar(_35reg1031);
Obj args = _35reg1032;
Obj _35reg1033 = primCdr(closureRef(co, 0));
Obj _35reg1034 = primCdr(_35reg1033);
Obj _35reg1035 = primIsCons(_35reg1034);
if (True == _35reg1035) {
Obj _35reg1036 = primCdr(closureRef(co, 0));
Obj _35reg1037 = primCdr(_35reg1036);
Obj _35reg1038 = primCar(_35reg1037);
Obj body = _35reg1038;
Obj _35reg1039 = primCdr(closureRef(co, 0));
Obj _35reg1040 = primCdr(_35reg1039);
Obj _35reg1041 = primCdr(_35reg1040);
Obj _35reg1042 = primEQ(Nil, _35reg1041);
if (True == _35reg1042) {
pushCont(co, 14, _35clofun1362, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc246;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc246;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc246;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc246;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc246;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val1075 = __arg1;
Obj y1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj z1 = _35val1075;
Obj _35reg1076 = primCons(z1, Nil);
Obj _35reg1077 = primCons(y1, _35reg1076);
Obj _35reg1078 = primCons(x1, _35reg1077);
Obj _35reg1079 = primCons(intern("if"), _35reg1078);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1074 = __arg1;
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj y1 = _35val1074;
pushCont(co, 16, _35clofun1362, 2, y1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = z;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1073 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x1 = _35val1073;
pushCont(co, 17, _35clofun1362, 2, z, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc245 = makeNative(15, _35clofun1362, 0, 1, closureRef(co, 0));
Obj _35reg1047 = primIsCons(closureRef(co, 0));
if (True == _35reg1047) {
Obj _35reg1048 = primCar(closureRef(co, 0));
Obj _35reg1049 = primEQ(intern("if"), _35reg1048);
if (True == _35reg1049) {
Obj _35reg1050 = primCdr(closureRef(co, 0));
Obj _35reg1051 = primIsCons(_35reg1050);
if (True == _35reg1051) {
Obj _35reg1052 = primCdr(closureRef(co, 0));
Obj _35reg1053 = primCar(_35reg1052);
Obj x = _35reg1053;
Obj _35reg1054 = primCdr(closureRef(co, 0));
Obj _35reg1055 = primCdr(_35reg1054);
Obj _35reg1056 = primIsCons(_35reg1055);
if (True == _35reg1056) {
Obj _35reg1057 = primCdr(closureRef(co, 0));
Obj _35reg1058 = primCdr(_35reg1057);
Obj _35reg1059 = primCar(_35reg1058);
Obj y = _35reg1059;
Obj _35reg1060 = primCdr(closureRef(co, 0));
Obj _35reg1061 = primCdr(_35reg1060);
Obj _35reg1062 = primCdr(_35reg1061);
Obj _35reg1063 = primIsCons(_35reg1062);
if (True == _35reg1063) {
Obj _35reg1064 = primCdr(closureRef(co, 0));
Obj _35reg1065 = primCdr(_35reg1064);
Obj _35reg1066 = primCdr(_35reg1065);
Obj _35reg1067 = primCar(_35reg1066);
Obj z = _35reg1067;
Obj _35reg1068 = primCdr(closureRef(co, 0));
Obj _35reg1069 = primCdr(_35reg1068);
Obj _35reg1070 = primCdr(_35reg1069);
Obj _35reg1071 = primCdr(_35reg1070);
Obj _35reg1072 = primEQ(Nil, _35reg1071);
if (True == _35reg1072) {
pushCont(co, 18, _35clofun1362, 2, y, z);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc245;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc245;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc245;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc245;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc245;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc245;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val1090 = __arg1;
Obj x1 = _35val1090;
Obj _35reg1091 = primCons(x1, Nil);
Obj _35reg1092 = primCons(intern("not"), _35reg1091);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1362) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1361(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val716 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val716) {
Obj _35reg717 = primCar(l);
Obj _35reg718 = primCons(_35reg717, res);
Obj _35reg719 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#filter-h"));
__arg1 = _35reg718;
__arg2 = fn;
__arg3 = _35reg719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg720 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#filter-h"));
__arg1 = res;
__arg2 = fn;
__arg3 = _35reg720;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj _35reg714 = primIsCons(l);
if (True == _35reg714) {
Obj _35reg715 = primCar(l);
pushCont(co, 0, _35clofun1361, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = _35reg715;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val726 = __arg1;
Obj _35reg724= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg727 = primCons(_35reg724, _35val726);
__nargs = 2;
__arg1 = _35reg727;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1361) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj _35reg723 = primEQ(l1, Nil);
if (True == _35reg723) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1361) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg724 = primCar(l1);
Obj _35reg725 = primCdr(l1);
pushCont(co, 3, _35clofun1361, 1, _35reg724);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35reg725;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj x = __arg1;
Obj _35reg730 = primCdr(x);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = _35reg730;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x = __arg1;
Obj _35reg733 = primEQ(closureRef(co, 0), x);
Obj _35reg734 = primNot(_35reg733);
__nargs = 2;
__arg1 = _35reg734;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1361) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val737 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg738 = primNot(_35val737);
if (True == _35reg738) {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("inconsistent func rule args count");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = n;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1361) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label8:
{
Obj _35val736 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 7, _35clofun1361, 1, n);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35val736;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val731 = __arg1;
Obj counts = _35val731;
Obj _35reg732 = primCar(counts);
Obj n = _35reg732;
Obj dif = makeNative(6, _35clofun1361, 1, 1, n);
Obj _35reg735 = primCdr(counts);
pushCont(co, 8, _35clofun1361, 1, n);
__nargs = 3;
__arg0 = globalRef(intern("filter"));
__arg1 = dif;
__arg2 = _35reg735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val729 = __arg1;
Obj pats = _35val729;
Obj len = makeNative(5, _35clofun1361, 1, 0);
pushCont(co, 9, _35clofun1361, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = len;
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj rules = __arg1;
pushCont(co, 10, _35clofun1361, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#rules-patterns"));
__arg1 = Nil;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val743 = __arg1;
Obj _35reg741= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg744 = primCons(_35reg741, _35val743);
__nargs = 2;
__arg1 = _35reg744;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1361) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj n = __arg1;
Obj _35reg740 = primEQ(n, makeNumber(0));
if (True == _35reg740) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1361) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg741 = primGenSym(intern("p"));
Obj _35reg742 = primSub(n, makeNumber(1));
pushCont(co, 12, _35clofun1361, 1, _35reg741);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#gen-paramenters"));
__arg1 = _35reg742;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val750 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg751 = primCons(intern("list"), args);
Obj _35reg752 = primCons(_35reg751, body);
Obj _35reg753 = primCons(intern("match"), _35reg752);
Obj _35reg754 = primCons(_35reg753, Nil);
Obj _35reg755 = primCons(args, _35reg754);
Obj _35reg756 = primCons(_35val750, _35reg755);
Obj _35reg757 = primCons(intern("defun"), _35reg756);
__nargs = 2;
__arg1 = _35reg757;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1361) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val749 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args = _35val749;
pushCont(co, 14, _35clofun1361, 2, body, args);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val748 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj nargs = _35val748;
pushCont(co, 15, _35clofun1361, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#gen-paramenters"));
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val747 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body = _35val747;
pushCont(co, 16, _35clofun1361, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rules-arg-count"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val746 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 17, _35clofun1361, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#extract-rules"));
__arg1 = _35val746;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj exp = __arg1;
pushCont(co, 18, _35clofun1361, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1361) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1360(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val632 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg633 = primCons(_35val632, Nil);
Obj _35reg634 = primCons(value, _35reg633);
Obj _35reg635 = primCons(val, _35reg634);
Obj _35reg636 = primCons(intern("let"), _35reg635);
__nargs = 2;
__arg1 = _35reg636;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1360) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val638 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg639 = primCons(_35val638, Nil);
Obj _35reg640 = primCons(value, _35reg639);
Obj _35reg641 = primCons(val, _35reg640);
Obj _35reg642 = primCons(intern("let"), _35reg641);
__nargs = 2;
__arg1 = _35reg642;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1360) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val644 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg645 = primCons(_35val644, Nil);
Obj _35reg646 = primCons(value, _35reg645);
Obj _35reg647 = primCons(val, _35reg646);
Obj _35reg648 = primCons(intern("let"), _35reg647);
__nargs = 2;
__arg1 = _35reg648;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1360) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val626 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules = _35val626;
Obj _35reg627 = primIsCons(value);
if (True == _35reg627) {
Obj _35reg628 = primCar(value);
Obj _35reg629 = primEQ(intern("cons"), _35reg628);
Obj _35reg630 = primNot(_35reg629);
if (True == _35reg630) {
if (True == True) {
Obj _35reg631 = primGenSym(intern("val"));
Obj val = _35reg631;
pushCont(co, 0, _35clofun1360, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg637 = primGenSym(intern("val"));
Obj val = _35reg637;
pushCont(co, 1, _35clofun1360, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg643 = primGenSym(intern("val"));
Obj val = _35reg643;
pushCont(co, 2, _35clofun1360, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label4:
{
Obj _35val625 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value = _35val625;
pushCont(co, 3, _35clofun1360, 1, value);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val624 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 4, _35clofun1360, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = _35val624;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj exp = __arg1;
pushCont(co, 5, _35clofun1360, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc224 = makeNative(8, _35clofun1360, 0, 0);
Obj _35reg651 = primIsCons(closureRef(co, 0));
if (True == _35reg651) {
Obj _35reg652 = primCar(closureRef(co, 0));
Obj x = _35reg652;
Obj _35reg653 = primCdr(closureRef(co, 0));
Obj y = _35reg653;
Obj _35reg654 = primCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = y;
__arg2 = _35reg654;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc224;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val664 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg665 = primCons(intern("list"), _35val664);
Obj pat = _35reg665;
Obj _35reg666 = primCons(pat, closureRef(co, 2));
Obj _35reg667 = primCons(act, _35reg666);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg667;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc223 = makeNative(9, _35clofun1360, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg655 = primIsCons(closureRef(co, 0));
if (True == _35reg655) {
Obj _35reg656 = primCar(closureRef(co, 0));
Obj _35reg657 = primEQ(intern("=>"), _35reg656);
if (True == _35reg657) {
Obj _35reg658 = primCdr(closureRef(co, 0));
Obj _35reg659 = primIsCons(_35reg658);
if (True == _35reg659) {
Obj _35reg660 = primCdr(closureRef(co, 0));
Obj _35reg661 = primCar(_35reg660);
Obj act = _35reg661;
Obj _35reg662 = primCdr(closureRef(co, 0));
Obj _35reg663 = primCdr(_35reg662);
Obj remain = _35reg663;
pushCont(co, 10, _35clofun1360, 2, act, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val694 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pred= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg695 = primCons(intern("list"), _35val694);
Obj pat = _35reg695;
Obj _35reg696 = primCons(act, Nil);
Obj _35reg697 = primCons(pred, _35reg696);
Obj _35reg698 = primCons(intern("where"), _35reg697);
Obj _35reg699 = primCons(pat, closureRef(co, 2));
Obj _35reg700 = primCons(_35reg698, _35reg699);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg700;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc222 = makeNative(11, _35clofun1360, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg668 = primIsCons(closureRef(co, 0));
if (True == _35reg668) {
Obj _35reg669 = primCar(closureRef(co, 0));
Obj _35reg670 = primEQ(intern("=>"), _35reg669);
if (True == _35reg670) {
Obj _35reg671 = primCdr(closureRef(co, 0));
Obj _35reg672 = primIsCons(_35reg671);
if (True == _35reg672) {
Obj _35reg673 = primCdr(closureRef(co, 0));
Obj _35reg674 = primCar(_35reg673);
Obj act = _35reg674;
Obj _35reg675 = primCdr(closureRef(co, 0));
Obj _35reg676 = primCdr(_35reg675);
Obj _35reg677 = primIsCons(_35reg676);
if (True == _35reg677) {
Obj _35reg678 = primCdr(closureRef(co, 0));
Obj _35reg679 = primCdr(_35reg678);
Obj _35reg680 = primCar(_35reg679);
Obj _35reg681 = primEQ(intern("where"), _35reg680);
if (True == _35reg681) {
Obj _35reg682 = primCdr(closureRef(co, 0));
Obj _35reg683 = primCdr(_35reg682);
Obj _35reg684 = primCdr(_35reg683);
Obj _35reg685 = primIsCons(_35reg684);
if (True == _35reg685) {
Obj _35reg686 = primCdr(closureRef(co, 0));
Obj _35reg687 = primCdr(_35reg686);
Obj _35reg688 = primCdr(_35reg687);
Obj _35reg689 = primCar(_35reg688);
Obj pred = _35reg689;
Obj _35reg690 = primCdr(closureRef(co, 0));
Obj _35reg691 = primCdr(_35reg690);
Obj _35reg692 = primCdr(_35reg691);
Obj _35reg693 = primCdr(_35reg692);
Obj remain = _35reg693;
pushCont(co, 12, _35clofun1360, 3, act, pred, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj _35cc221 = makeNative(13, _35clofun1360, 0, 3, input, current, result);
Obj _35reg701 = primEQ(Nil, input);
if (True == _35reg701) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val707 = __arg1;
Obj _35reg706= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#rules-patterns"));
__arg1 = _35reg706;
__arg2 = _35val707;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val704 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val704) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg705 = primCar(rules);
Obj _35reg706 = primCons(_35reg705, res);
pushCont(co, 16, _35clofun1360, 1, _35reg706);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj res = __arg1;
Obj rules = __arg2;
pushCont(co, 17, _35clofun1360, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj i = __arg1;
Obj l = __arg2;
Obj _35reg709 = primEQ(l, Nil);
if (True == _35reg709) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1360) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg710 = primAdd(i, makeNumber(1));
Obj _35reg711 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#length-h"));
__arg1 = _35reg710;
__arg2 = _35reg711;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1360) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1359(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val557 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 20, _35clofun1358, 2, cc, _35val557);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val565 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val564= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg566 = primCons(cc, Nil);
Obj _35reg567 = primCons(_35reg566, Nil);
Obj _35reg568 = primCons(_35val565, _35reg567);
Obj _35reg569 = primCons(_35val564, _35reg568);
Obj _35reg570 = primCons(intern("if"), _35reg569);
__nargs = 2;
__arg1 = _35reg570;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1359) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val564 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun1359, 2, cc, _35val564);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val547 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val547) {
Obj _35reg548 = primCar(action);
Obj _35reg549 = primEQ(_35reg548, intern("where"));
if (True == _35reg549) {
if (True == True) {
pushCont(co, 19, _35clofun1358, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1359) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
if (True == False) {
pushCont(co, 0, _35clofun1359, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1359) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
} else {
if (True == False) {
pushCont(co, 2, _35clofun1359, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1359) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label4:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _35reg545 = primCdr(rules);
Obj _35reg546 = primCar(_35reg545);
Obj action = _35reg546;
pushCont(co, 3, _35clofun1359, 2, cc, action);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val585 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val585;
Obj _35reg586 = primCons(rest, Nil);
Obj _35reg587 = primCons(Nil, _35reg586);
Obj _35reg588 = primCons(intern("lambda"), _35reg587);
Obj _35reg589 = primCons(curr, Nil);
Obj _35reg590 = primCons(_35reg588, _35reg589);
Obj _35reg591 = primCons(cc, _35reg590);
Obj _35reg592 = primCons(intern("let"), _35reg591);
__nargs = 2;
__arg1 = _35reg592;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1359) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val582 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val582;
Obj _35reg583 = primCdr(rules);
Obj _35reg584 = primCdr(_35reg583);
pushCont(co, 5, _35clofun1359, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg584;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val581 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 6, _35clofun1359, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val581;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val580 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val580;
pushCont(co, 7, _35clofun1359, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val600 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val600;
Obj _35reg601 = primCons(rest, Nil);
Obj _35reg602 = primCons(Nil, _35reg601);
Obj _35reg603 = primCons(intern("lambda"), _35reg602);
Obj _35reg604 = primCons(curr, Nil);
Obj _35reg605 = primCons(_35reg603, _35reg604);
Obj _35reg606 = primCons(cc, _35reg605);
Obj _35reg607 = primCons(intern("let"), _35reg606);
__nargs = 2;
__arg1 = _35reg607;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1359) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val597 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val597;
Obj _35reg598 = primCdr(rules);
Obj _35reg599 = primCdr(_35reg598);
pushCont(co, 9, _35clofun1359, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val596 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 10, _35clofun1359, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val596;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val595 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val595;
pushCont(co, 11, _35clofun1359, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val577 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val577) {
if (True == True) {
Obj _35reg578 = primCar(rules);
Obj pat = _35reg578;
Obj _35reg579 = primGenSym(intern("cc"));
Obj cc = _35reg579;
pushCont(co, 8, _35clofun1359, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg593 = primCar(rules);
Obj pat = _35reg593;
Obj _35reg594 = primGenSym(intern("cc"));
Obj cc = _35reg594;
pushCont(co, 12, _35clofun1359, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label14:
{
Obj _35val615 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val615;
Obj _35reg616 = primCons(rest, Nil);
Obj _35reg617 = primCons(Nil, _35reg616);
Obj _35reg618 = primCons(intern("lambda"), _35reg617);
Obj _35reg619 = primCons(curr, Nil);
Obj _35reg620 = primCons(_35reg618, _35reg619);
Obj _35reg621 = primCons(cc, _35reg620);
Obj _35reg622 = primCons(intern("let"), _35reg621);
__nargs = 2;
__arg1 = _35reg622;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1359) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val612 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val612;
Obj _35reg613 = primCdr(rules);
Obj _35reg614 = primCdr(_35reg613);
pushCont(co, 14, _35clofun1359, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg614;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val611 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 15, _35clofun1359, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val611;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val610 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val610;
pushCont(co, 16, _35clofun1359, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val575 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val575) {
Obj _35reg576 = primCdr(rules);
pushCont(co, 13, _35clofun1359, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = _35reg576;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj _35reg608 = primCar(rules);
Obj pat = _35reg608;
Obj _35reg609 = primGenSym(intern("cc"));
Obj cc = _35reg609;
pushCont(co, 17, _35clofun1359, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label19:
{
Obj _35val572 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val572) {
Obj _35reg573 = primCons(makeCString("no match-help found!"), Nil);
Obj _35reg574 = primCons(intern("error"), _35reg573);
__nargs = 2;
__arg1 = _35reg574;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1359) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 18, _35clofun1359, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj value = __arg1;
Obj rules = __arg2;
pushCont(co, 19, _35clofun1359, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1359) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1358(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val480 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val480;
pushCont(co, 20, _35clofun1357, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val479 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val479;
pushCont(co, 0, _35clofun1358, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val489 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg483= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg490 = primCons(cc, Nil);
Obj _35reg491 = primCons(_35reg490, Nil);
Obj _35reg492 = primCons(_35val489, _35reg491);
Obj _35reg493 = primCons(_35reg483, _35reg492);
Obj _35reg494 = primCons(intern("if"), _35reg493);
__nargs = 2;
__arg1 = _35reg494;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1358) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val488 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg485= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg483= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 2, _35clofun1358, 2, cc, _35reg483);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg485;
__arg3 = _35val488;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val497 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val497;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val496 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val496;
pushCont(co, 4, _35clofun1358, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val495 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val495;
pushCont(co, 5, _35clofun1358, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val505 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg499= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg506 = primCons(cc, Nil);
Obj _35reg507 = primCons(_35reg506, Nil);
Obj _35reg508 = primCons(_35val505, _35reg507);
Obj _35reg509 = primCons(_35reg499, _35reg508);
Obj _35reg510 = primCons(intern("if"), _35reg509);
__nargs = 2;
__arg1 = _35reg510;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1358) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val504 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg501= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg499= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 7, _35clofun1358, 2, cc, _35reg499);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg501;
__arg3 = _35val504;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val459 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj y = _35val459;
Obj _35reg460 = primIsCons(expr);
if (True == _35reg460) {
Obj _35reg461 = primCar(expr);
Obj _35reg462 = primEQ(_35reg461, intern("cons"));
if (True == _35reg462) {
if (True == True) {
pushCont(co, 17, _35clofun1357, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg466 = primCons(expr, Nil);
Obj _35reg467 = primCons(intern("cons?"), _35reg466);
Obj _35reg468 = primCons(expr, Nil);
Obj _35reg469 = primCons(intern("car"), _35reg468);
Obj _35reg470 = primCons(expr, Nil);
Obj _35reg471 = primCons(intern("cdr"), _35reg470);
pushCont(co, 19, _35clofun1357, 4, x, _35reg469, cc, _35reg467);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg471;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 1, _35clofun1358, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg482 = primCons(expr, Nil);
Obj _35reg483 = primCons(intern("cons?"), _35reg482);
Obj _35reg484 = primCons(expr, Nil);
Obj _35reg485 = primCons(intern("car"), _35reg484);
Obj _35reg486 = primCons(expr, Nil);
Obj _35reg487 = primCons(intern("cdr"), _35reg486);
pushCont(co, 3, _35clofun1358, 4, x, _35reg485, cc, _35reg483);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg487;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
pushCont(co, 6, _35clofun1358, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg498 = primCons(expr, Nil);
Obj _35reg499 = primCons(intern("cons?"), _35reg498);
Obj _35reg500 = primCons(expr, Nil);
Obj _35reg501 = primCons(intern("car"), _35reg500);
Obj _35reg502 = primCons(expr, Nil);
Obj _35reg503 = primCons(intern("cdr"), _35reg502);
pushCont(co, 8, _35clofun1358, 4, x, _35reg501, cc, _35reg499);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg503;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label10:
{
Obj _35val458 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj x = _35val458;
pushCont(co, 9, _35clofun1358, 4, expr, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 10, _35clofun1358, 4, pat, expr, body, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val512 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val512) {
Obj _35reg513 = primIsSymbol(x);
Obj _35reg514 = primNot(_35reg513);
if (True == _35reg514) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1358) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1358) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1358) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label13:
{
Obj x = __arg1;
pushCont(co, 12, _35clofun1358, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("atom?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val543 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = _35val543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val530 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val530) {
Obj _35reg531 = primCar(pat);
Obj _35reg532 = primEQ(_35reg531, intern("quote"));
if (True == _35reg532) {
Obj _35reg533 = primCons(expr, Nil);
Obj _35reg534 = primCons(pat, _35reg533);
Obj _35reg535 = primCons(intern("="), _35reg534);
Obj _35reg536 = primCons(cc, Nil);
Obj _35reg537 = primCons(_35reg536, Nil);
Obj _35reg538 = primCons(body, _35reg537);
Obj _35reg539 = primCons(_35reg535, _35reg538);
Obj _35reg540 = primCons(intern("if"), _35reg539);
__nargs = 2;
__arg1 = _35reg540;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1358) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg541 = primCar(pat);
Obj _35reg542 = primEQ(_35reg541, intern("cons"));
if (True == _35reg542) {
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match-cons-expander"));
__arg1 = pat;
__arg2 = expr;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 14, _35clofun1358, 0);
__nargs = 3;
__arg0 = globalRef(intern("str"));
__arg1 = makeCString("match fail ");
__arg2 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val515 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val515) {
Obj _35reg516 = primEQ(pat, expr);
if (True == _35reg516) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1358) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg517 = primCons(expr, Nil);
Obj _35reg518 = primCons(pat, _35reg517);
Obj _35reg519 = primCons(intern("="), _35reg518);
Obj _35reg520 = primCons(cc, Nil);
Obj _35reg521 = primCons(_35reg520, Nil);
Obj _35reg522 = primCons(body, _35reg521);
Obj _35reg523 = primCons(_35reg519, _35reg522);
Obj _35reg524 = primCons(intern("if"), _35reg523);
__nargs = 2;
__arg1 = _35reg524;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1358) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj _35reg525 = primIsSymbol(pat);
if (True == _35reg525) {
Obj _35reg526 = primCons(body, Nil);
Obj _35reg527 = primCons(expr, _35reg526);
Obj _35reg528 = primCons(pat, _35reg527);
Obj _35reg529 = primCons(intern("let"), _35reg528);
__nargs = 2;
__arg1 = _35reg529;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1358) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 15, _35clofun1358, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
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
Obj literal_63 = makeNative(13, _35clofun1358, 1, 0);
pushCont(co, 16, _35clofun1358, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = literal_63;
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val551 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val550= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg552 = primCons(cc, Nil);
Obj _35reg553 = primCons(_35reg552, Nil);
Obj _35reg554 = primCons(_35val551, _35reg553);
Obj _35reg555 = primCons(_35val550, _35reg554);
Obj _35reg556 = primCons(intern("if"), _35reg555);
__nargs = 2;
__arg1 = _35reg556;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1358) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val550 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 18, _35clofun1358, 2, cc, _35val550);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1358) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val558 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val557= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg559 = primCons(cc, Nil);
Obj _35reg560 = primCons(_35reg559, Nil);
Obj _35reg561 = primCons(_35val558, _35reg560);
Obj _35reg562 = primCons(_35val557, _35reg561);
Obj _35reg563 = primCons(intern("if"), _35reg562);
__nargs = 2;
__arg1 = _35reg563;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1358) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1357(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val408 = __arg1;
Obj _35val407= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg406= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg409 = primCons(intern("cond"), _35val408);
Obj _35reg410 = primCons(_35reg409, Nil);
Obj _35reg411 = primCons(_35val407, _35reg410);
Obj _35reg412 = primCons(_35reg406, _35reg411);
Obj _35reg413 = primCons(intern("if"), _35reg412);
__nargs = 2;
__arg1 = _35reg413;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val407 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg406= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun1357, 2, _35val407, _35reg406);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val405 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj curr = _35val405;
Obj _35reg406 = primCar(curr);
pushCont(co, 1, _35clofun1357, 2, exp, _35reg406);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp = __arg1;
Obj _35reg401 = primCdr(exp);
Obj _35reg402 = primEQ(Nil, _35reg401);
if (True == _35reg402) {
Obj _35reg403 = primCons(makeCString("no cond match"), Nil);
Obj _35reg404 = primCons(intern("error"), _35reg403);
__nargs = 2;
__arg1 = _35reg404;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 2, _35clofun1357, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val419 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val419;
Obj _35reg420 = primEQ(more, True);
if (True == _35reg420) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg421 = primCar(l);
Obj _35reg422 = primCons(more, Nil);
Obj _35reg423 = primCons(True, _35reg422);
Obj _35reg424 = primCons(_35reg421, _35reg423);
Obj _35reg425 = primCons(intern("if"), _35reg424);
__nargs = 2;
__arg1 = _35reg425;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label5:
{
Obj l = __arg1;
Obj _35reg415 = primEQ(l, Nil);
if (True == _35reg415) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg416 = primCar(l);
Obj _35reg417 = primEQ(_35reg416, True);
if (True == _35reg417) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg418 = primCdr(l);
pushCont(co, 4, _35clofun1357, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-or"));
__arg1 = _35reg418;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label6:
{
Obj exp = __arg1;
Obj _35reg427 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-or"));
__arg1 = _35reg427;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val433 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val433;
Obj _35reg434 = primEQ(more, False);
if (True == _35reg434) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg435 = primCar(l);
Obj _35reg436 = primCons(False, Nil);
Obj _35reg437 = primCons(more, _35reg436);
Obj _35reg438 = primCons(_35reg435, _35reg437);
Obj _35reg439 = primCons(intern("if"), _35reg438);
__nargs = 2;
__arg1 = _35reg439;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label8:
{
Obj l = __arg1;
Obj _35reg429 = primEQ(Nil, l);
if (True == _35reg429) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg430 = primCar(l);
Obj _35reg431 = primEQ(_35reg430, False);
if (True == _35reg431) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg432 = primCdr(l);
pushCont(co, 7, _35clofun1357, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-and"));
__arg1 = _35reg432;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label9:
{
Obj exp = __arg1;
Obj _35reg441 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-and"));
__arg1 = _35reg441;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x = __arg1;
Obj _35reg443 = primEQ(x, True);
if (True == _35reg443) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg444 = primEQ(x, False);
if (True == _35reg444) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label11:
{
Obj _35val451 = __arg1;
Obj _35reg449= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg452 = primCons(_35val451, Nil);
Obj _35reg453 = primCons(_35reg449, _35reg452);
Obj _35reg454 = primCons(intern("cons"), _35reg453);
__nargs = 2;
__arg1 = _35reg454;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val447 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val447) {
Obj _35reg448 = primCar(pat);
__nargs = 2;
__arg1 = _35reg448;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg449 = primCar(pat);
Obj _35reg450 = primCdr(pat);
pushCont(co, 11, _35clofun1357, 1, _35reg449);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rcons1"));
__arg1 = _35reg450;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj pat = __arg1;
Obj _35reg446 = primCdr(pat);
pushCont(co, 12, _35clofun1357, 1, pat);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg446;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj exp = __arg1;
Obj _35reg456 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rcons1"));
__arg1 = _35reg456;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val465 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val465;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val464 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val464;
pushCont(co, 15, _35clofun1357, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val463 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val463;
pushCont(co, 16, _35clofun1357, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val473 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg467= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg474 = primCons(cc, Nil);
Obj _35reg475 = primCons(_35reg474, Nil);
Obj _35reg476 = primCons(_35val473, _35reg475);
Obj _35reg477 = primCons(_35reg467, _35reg476);
Obj _35reg478 = primCons(intern("if"), _35reg477);
__nargs = 2;
__arg1 = _35reg478;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1357) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val472 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg469= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg467= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun1357, 2, cc, _35reg467);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg469;
__arg3 = _35val472;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val481 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val481;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1357) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1356(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val343 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 20, _35clofun1355, 1, _35val343);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj exp1 = __arg1;
Obj _35reg351 = primEQ(exp1, closureRef(co, 0));
if (True == _35reg351) {
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#macroexpand-boot"));
__arg2 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val352 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(1, _35clofun1356, 1, 1, exp);
__arg1 = _35val352;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp = __arg1;
Obj _35reg337 = primIsCons(exp);
if (True == _35reg337) {
Obj _35reg338 = primCar(exp);
Obj _35reg339 = primEQ(_35reg338, globalRef(intern("*protect-symbol*")));
if (True == _35reg339) {
Obj _35reg340 = primCdr(exp);
__nargs = 2;
__arg1 = _35reg340;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1356) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg341 = primCar(exp);
Obj _35reg342 = primEQ(_35reg341, intern("lambda"));
if (True == _35reg342) {
pushCont(co, 0, _35clofun1356, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg349 = primCar(exp);
Obj _35reg350 = primEQ(_35reg349, intern("quote"));
if (True == _35reg350) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1356) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 2, _35clofun1356, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand1"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1356) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label4:
{
Obj _35val359 = __arg1;
Obj _35val358= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg357= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg360 = primCons(_35val358, _35val359);
Obj _35reg361 = primCons(intern("lambda"), _35reg360);
Obj _35reg362 = primCons(_35reg361, Nil);
Obj _35reg363 = primCons(_35reg357, _35reg362);
Obj _35reg364 = primCons(intern("cora/init#add-to-*macros*"), _35reg363);
__nargs = 2;
__arg1 = _35reg364;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1356) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val358 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg357= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun1356, 2, _35val358, _35reg357);
__nargs = 2;
__arg0 = globalRef(intern("cdddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val355 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg356 = primCons(_35val355, Nil);
Obj _35reg357 = primCons(intern("quote"), _35reg356);
pushCont(co, 5, _35clofun1356, 2, exp, _35reg357);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj exp = __arg1;
pushCont(co, 6, _35clofun1356, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
Obj _35reg367 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val371 = __arg1;
Obj _35val370= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val369= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg372 = primCons(_35val371, Nil);
Obj _35reg373 = primCons(_35val370, _35reg372);
Obj _35reg374 = primCons(intern("lambda"), _35reg373);
Obj _35reg375 = primCons(_35reg374, Nil);
Obj _35reg376 = primCons(_35val369, _35reg375);
Obj _35reg377 = primCons(intern("def"), _35reg376);
__nargs = 2;
__arg1 = _35reg377;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1356) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val370 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val369= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun1356, 2, _35val370, _35val369);
__nargs = 2;
__arg0 = globalRef(intern("cadddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val369 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 10, _35clofun1356, 2, exp, _35val369);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj exp = __arg1;
pushCont(co, 11, _35clofun1356, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _35reg379 = primIsCons(l);
if (True == _35reg379) {
Obj _35reg380 = primCar(l);
Obj _35reg381 = primEQ(_35reg380, x);
if (True == _35reg381) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1356) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg382 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = _35reg382;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1356) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label14:
{
Obj x = __arg1;
Obj _35reg384 = primIsCons(x);
Obj _35reg385 = primNot(_35reg384);
__nargs = 2;
__arg1 = _35reg385;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1356) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val393 = __arg1;
Obj _35val391= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg390= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg394 = primCons(_35val393, Nil);
Obj _35reg395 = primCons(_35val391, _35reg394);
Obj _35reg396 = primCons(_35reg390, _35reg395);
Obj _35reg397 = primCons(intern("let"), _35reg396);
__nargs = 2;
__arg1 = _35reg397;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1356) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val392 = __arg1;
Obj _35val391= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg390= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 15, _35clofun1356, 2, _35val391, _35reg390);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-let"));
__arg1 = _35val392;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val391 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg390= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun1356, 2, _35val391, _35reg390);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val388 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val388) {
Obj _35reg389 = primCar(exp);
__nargs = 2;
__arg1 = _35reg389;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1356) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg390 = primCar(exp);
pushCont(co, 17, _35clofun1356, 2, exp, _35reg390);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj exp = __arg1;
Obj _35reg387 = primCdr(exp);
pushCont(co, 18, _35clofun1356, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg387;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj exp = __arg1;
Obj _35reg399 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-let"));
__arg1 = _35reg399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1356) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1355(struct Cora* co){
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
Obj _35reg265 = primEQ(x, Nil);
__nargs = 2;
__arg1 = _35reg265;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x = __arg1;
Obj _35reg267 = primCdr(x);
Obj _35reg268 = primCar(_35reg267);
__nargs = 2;
__arg1 = _35reg268;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj x = __arg1;
Obj _35reg270 = primCar(x);
Obj _35reg271 = primCar(_35reg270);
__nargs = 2;
__arg1 = _35reg271;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj x = __arg1;
Obj _35reg273 = primCar(x);
Obj _35reg274 = primCdr(_35reg273);
__nargs = 2;
__arg1 = _35reg274;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x = __arg1;
Obj _35reg276 = primCdr(x);
Obj _35reg277 = primCdr(_35reg276);
__nargs = 2;
__arg1 = _35reg277;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x = __arg1;
Obj _35reg279 = primCdr(x);
Obj _35reg280 = primCdr(_35reg279);
Obj _35reg281 = primCar(_35reg280);
__nargs = 2;
__arg1 = _35reg281;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj x = __arg1;
Obj _35reg283 = primCdr(x);
Obj _35reg284 = primCdr(_35reg283);
Obj _35reg285 = primCdr(_35reg284);
Obj _35reg286 = primCar(_35reg285);
__nargs = 2;
__arg1 = _35reg286;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj x = __arg1;
Obj _35reg288 = primCdr(x);
Obj _35reg289 = primCdr(_35reg288);
Obj _35reg290 = primCdr(_35reg289);
__nargs = 2;
__arg1 = _35reg290;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val295 = __arg1;
Obj _35reg293= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg296 = primCons(_35val295, Nil);
Obj _35reg297 = primCons(_35reg293, _35reg296);
Obj _35reg298 = primCons(intern("cons"), _35reg297);
__nargs = 2;
__arg1 = _35reg298;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj exp = __arg1;
Obj _35reg292 = primIsCons(exp);
if (True == _35reg292) {
Obj _35reg293 = primCar(exp);
Obj _35reg294 = primCdr(exp);
pushCont(co, 8, _35clofun1355, 1, _35reg293);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg294;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label10:
{
Obj x = __arg1;
Obj _35reg300 = primIsCons(x);
__nargs = 2;
__arg1 = _35reg300;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj res = __arg1;
Obj l = __arg2;
Obj _35reg302 = primIsCons(l);
if (True == _35reg302) {
Obj _35reg303 = primCar(l);
Obj _35reg304 = primCons(_35reg303, res);
Obj _35reg305 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#reverse-h"));
__arg1 = _35reg304;
__arg2 = _35reg305;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label12:
{
Obj _35val311 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg312 = primCons(_35val311, res);
Obj _35reg313 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("map-h"));
__arg1 = _35reg312;
__arg2 = f;
__arg3 = _35reg313;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj _35reg309 = primIsCons(l);
if (True == _35reg309) {
Obj _35reg310 = primCar(l);
pushCont(co, 12, _35clofun1355, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = _35reg310;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj n = __arg1;
Obj v = __arg2;
Obj _35reg319 = primCons(n, v);
Obj _35reg320 = primCons(_35reg319, globalRef(intern("*macros*")));
Obj _35reg321 = primSet(co, intern("*macros*"), _35reg320);
__nargs = 2;
__arg1 = _35reg321;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj item = __arg1;
Obj _35reg324 = primIsCons(closureRef(co, 0));
if (True == _35reg324) {
Obj _35reg325 = primCar(closureRef(co, 0));
Obj _35reg326 = primCar(item);
Obj _35reg327 = primEQ(_35reg325, _35reg326);
if (True == _35reg327) {
if (True == True) {
Obj _35reg328 = primCdr(item);
__nargs = 2;
__arg0 = _35reg328;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg329 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg329;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg330 = primCdr(item);
__nargs = 2;
__arg0 = _35reg330;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg331 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg332 = primCdr(item);
__nargs = 2;
__arg0 = _35reg332;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg333 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label17:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj _35reg323 = primEQ(Nil, macros);
if (True == _35reg323) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg334 = primCar(macros);
__nargs = 2;
__arg0 = makeNative(16, _35clofun1355, 1, 2, exp, macros);
__arg1 = _35reg334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val345 = __arg1;
Obj _35val343= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg346 = primCons(_35val345, Nil);
Obj _35reg347 = primCons(_35val343, _35reg346);
Obj _35reg348 = primCons(intern("lambda"), _35reg347);
__nargs = 2;
__arg1 = _35reg348;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1355) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val344 = __arg1;
Obj _35val343= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 19, _35clofun1355, 1, _35val343);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = _35val344;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1355) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

