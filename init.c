#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void clofun1(struct Cora* co);
void clofun2(struct Cora* co);
void clofun3(struct Cora* co);
void clofun4(struct Cora* co);
void clofun5(struct Cora* co);
void clofun6(struct Cora* co);
void clofun7(struct Cora* co);
void clofun8(struct Cora* co);
void clofun9(struct Cora* co);
void clofun10(struct Cora* co);
void clofun11(struct Cora* co);
void clofun12(struct Cora* co);
void clofun13(struct Cora* co);
void clofun14(struct Cora* co);
void clofun15(struct Cora* co);
void clofun16(struct Cora* co);
void clofun17(struct Cora* co);
void clofun18(struct Cora* co);
void clofun19(struct Cora* co);
void clofun20(struct Cora* co);
void clofun21(struct Cora* co);
void clofun22(struct Cora* co);
void clofun23(struct Cora* co);
void clofun24(struct Cora* co);
void clofun25(struct Cora* co);
void clofun26(struct Cora* co);
void clofun27(struct Cora* co);
void clofun28(struct Cora* co);
void clofun29(struct Cora* co);
void clofun30(struct Cora* co);
void clofun31(struct Cora* co);
void clofun32(struct Cora* co);
void clofun33(struct Cora* co);
void clofun34(struct Cora* co);
void clofun35(struct Cora* co);
void clofun36(struct Cora* co);
void clofun37(struct Cora* co);


void entry(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35reg370 = primSet(co, intern("null?"), makeNative(3, clofun37, 1, 0));
Obj _35reg373 = primSet(co, intern("cadr"), makeNative(2, clofun37, 1, 0));
Obj _35reg376 = primSet(co, intern("caar"), makeNative(1, clofun37, 1, 0));
Obj _35reg379 = primSet(co, intern("cdar"), makeNative(0, clofun37, 1, 0));
Obj _35reg382 = primSet(co, intern("cddr"), makeNative(5, clofun36, 1, 0));
Obj _35reg386 = primSet(co, intern("caddr"), makeNative(4, clofun36, 1, 0));
Obj _35reg391 = primSet(co, intern("cadddr"), makeNative(3, clofun36, 1, 0));
Obj _35reg395 = primSet(co, intern("cdddr"), makeNative(2, clofun36, 1, 0));
Obj _35reg403 = primSet(co, intern("rcons"), makeNative(0, clofun36, 1, 0));
Obj _35reg405 = primSet(co, intern("pair?"), makeNative(5, clofun35, 1, 0));
Obj _35reg410 = primSet(co, intern("cora/init#reverse-h"), makeNative(4, clofun35, 2, 0));
PUSH_CONT(co, 1, entry, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse-h"));
__arg1 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val411 = __arg1;
Obj _35reg412 = primSet(co, intern("reverse"), _35val411);
Obj _35reg418 = primSet(co, intern("map-h"), makeNative(2, clofun35, 3, 0));
Obj _35reg419 = primSet(co, intern("map"), makeNative(1, clofun35, 2, 0));
Obj _35reg420 = primSet(co, intern("*macros*"), Nil);
Obj _35reg421 = primGenSym(intern("protect"));
Obj _35reg422 = primSet(co, intern("*protect-symbol*"), _35reg421);
Obj _35reg426 = primSet(co, intern("cora/init#add-to-*macros*"), makeNative(0, clofun35, 2, 0));
Obj _35reg439 = primSet(co, intern("cora/init#macroexpand1-h"), makeNative(4, clofun34, 2, 0));
Obj _35reg440 = primSet(co, intern("cora/init#macroexpand1"), makeNative(3, clofun34, 1, 0));
Obj _35reg457 = primSet(co, intern("cora/init#macroexpand-boot"), makeNative(3, clofun33, 1, 0));
Obj _35reg458 = primSet(co, intern("macroexpand"), globalRef(intern("cora/init#macroexpand-boot")));
Obj _35reg469 = primSet(co, intern("defmacro-macro"), makeNative(5, clofun32, 1, 0));
PUSH_CONT(co, 2, entry, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("defmacro");
__arg2 = globalRef(intern("defmacro-macro"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val470 = __arg1;
PUSH_CONT(co, 3, entry, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("list");
__arg2 = makeNative(4, clofun32, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val472 = __arg1;
PUSH_CONT(co, 4, entry, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("defun");
__arg2 = makeNative(0, clofun32, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val482 = __arg1;
Obj _35reg487 = primSet(co, intern("elem?"), makeNative(5, clofun31, 2, 0));
Obj _35reg490 = primSet(co, intern("atom?"), makeNative(4, clofun31, 1, 0));
Obj _35reg502 = primSet(co, intern("cora/init#rewrite-let"), makeNative(5, clofun30, 1, 0));
PUSH_CONT(co, 5, entry, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("let");
__arg2 = makeNative(4, clofun30, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val504 = __arg1;
PUSH_CONT(co, 0, clofun1, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("cond");
__arg2 = makeNative(0, clofun30, 1, 0);
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

void clofun1(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val518 = __arg1;
Obj _35reg530 = primSet(co, intern("cora/init#rewrite-or"), makeNative(4, clofun29, 1, 0));
PUSH_CONT(co, 1, clofun1, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("or");
__arg2 = makeNative(3, clofun29, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val532 = __arg1;
Obj _35reg544 = primSet(co, intern("cora/init#rewrite-and"), makeNative(1, clofun29, 1, 0));
PUSH_CONT(co, 2, clofun1, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("and");
__arg2 = makeNative(0, clofun29, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val546 = __arg1;
Obj _35reg549 = primSet(co, intern("boolean?"), makeNative(5, clofun28, 1, 0));
Obj _35reg559 = primSet(co, intern("cora/init#rcons1"), makeNative(2, clofun28, 1, 0));
PUSH_CONT(co, 3, clofun1, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("list-rest");
__arg2 = makeNative(1, clofun28, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val561 = __arg1;
Obj _35reg615 = primSet(co, intern("cora/init#match-cons-expander"), makeNative(1, clofun25, 4, 0));
Obj _35reg648 = primSet(co, intern("cora/init#match1"), makeNative(1, clofun24, 4, 0));
Obj _35reg675 = primSet(co, intern("cora/init#extract-rule-action"), makeNative(5, clofun22, 2, 0));
Obj _35reg727 = primSet(co, intern("cora/init#match-helper"), makeNative(1, clofun20, 2, 0));
Obj _35reg753 = primSet(co, intern("cora/init#rewrite-match"), makeNative(0, clofun19, 1, 0));
PUSH_CONT(co, 4, clofun1, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("match");
__arg2 = makeNative(5, clofun18, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val754 = __arg1;
Obj _35reg806 = primSet(co, intern("cora/init#extract-rules1"), makeNative(4, clofun17, 3, 0));
Obj _35reg807 = primSet(co, intern("cora/init#extract-rules"), makeNative(3, clofun17, 1, 0));
Obj _35reg812 = primSet(co, intern("cora/init#rules-patterns"), makeNative(0, clofun17, 2, 0));
Obj _35reg816 = primSet(co, intern("cora/init#length-h"), makeNative(5, clofun16, 2, 0));
Obj _35reg817 = primSet(co, intern("length"), makeNative(4, clofun16, 1, 0));
Obj _35reg825 = primSet(co, intern("cora/init#filter-h"), makeNative(2, clofun16, 3, 0));
Obj _35reg826 = primSet(co, intern("filter"), makeNative(1, clofun16, 2, 0));
Obj _35reg832 = primSet(co, intern("append"), makeNative(5, clofun15, 2, 0));
Obj _35reg843 = primSet(co, intern("cora/init#rules-arg-count"), makeNative(4, clofun14, 1, 0));
Obj _35reg849 = primSet(co, intern("cora/init#gen-paramenters"), makeNative(2, clofun14, 1, 0));
PUSH_CONT(co, 5, clofun1, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("func");
__arg2 = makeNative(2, clofun13, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val862 = __arg1;
Obj _35reg1125 = primSet(co, intern("cora/init#propagate-boolean0"), makeNative(2, clofun11, 1, 0));
Obj _35reg1283 = primSet(co, intern("cora/init#propagate-boolean"), makeNative(3, clofun7, 1, 0));
Obj _35reg1285 = primSet(co, intern("macroexpand"), makeNative(1, clofun7, 1, 0));
Obj _35reg1309 = primSet(co, intern("cora/init#rewrite-begin"), makeNative(2, clofun6, 1, 0));
PUSH_CONT(co, 0, clofun2, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("begin");
__arg2 = makeNative(1, clofun6, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun2(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1311 = __arg1;
Obj _35reg1331 = primSet(co, intern("cora/init#rewrite-backquote"), makeNative(1, clofun5, 1, 0));
PUSH_CONT(co, 1, clofun2, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("backquote");
__arg2 = makeNative(5, clofun4, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1333 = __arg1;
Obj _35reg1362 = primSet(co, intern("cora/init#parse-define-library-h"), makeNative(0, clofun4, 4, 0));
Obj _35reg1363 = primSet(co, intern("cora/init#parse-define-library"), makeNative(5, clofun3, 2, 0));
PUSH_CONT(co, 2, clofun2, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("define-library");
__arg2 = makeNative(3, clofun2, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1383 = __arg1;
Obj _35reg1384 = primCons(intern("append"), Nil);
Obj _35reg1385 = primCons(intern("filter"), _35reg1384);
Obj _35reg1386 = primCons(intern("length"), _35reg1385);
Obj _35reg1387 = primCons(intern("elem?"), _35reg1386);
Obj _35reg1388 = primCons(intern("macroexpand"), _35reg1387);
Obj _35reg1389 = primCons(intern("map"), _35reg1388);
Obj _35reg1390 = primCons(intern("reverse"), _35reg1389);
Obj _35reg1391 = primCons(intern("throw"), _35reg1390);
Obj _35reg1392 = primCons(intern("try"), _35reg1391);
Obj _35reg1393 = primCons(intern("load"), _35reg1392);
Obj _35reg1394 = primCons(intern("import"), _35reg1393);
Obj _35reg1395 = primCons(intern("load-so"), _35reg1394);
Obj _35reg1396 = primCons(intern("apply"), _35reg1395);
Obj _35reg1397 = primCons(intern("value-or"), _35reg1396);
Obj _35reg1398 = primCons(intern("value"), _35reg1397);
Obj _35reg1399 = primCons(intern("read-file-as-sexp"), _35reg1398);
Obj _35reg1400 = primCons(intern("bytes-length"), _35reg1399);
Obj _35reg1401 = primCons(intern("bytes"), _35reg1400);
Obj _35reg1402 = primCons(intern("vector-length"), _35reg1401);
Obj _35reg1403 = primCons(intern("vector-ref"), _35reg1402);
Obj _35reg1404 = primCons(intern("vector-set!"), _35reg1403);
Obj _35reg1405 = primCons(intern("vector"), _35reg1404);
Obj _35reg1406 = primCons(intern("symbol->string"), _35reg1405);
Obj _35reg1407 = primCons(intern("intern"), _35reg1406);
Obj _35reg1408 = primCons(intern("string-append"), _35reg1407);
Obj _35reg1409 = primCons(intern("null?"), _35reg1408);
Obj _35reg1410 = primCons(intern("number?"), _35reg1409);
Obj _35reg1411 = primCons(intern("boolean?"), _35reg1410);
Obj _35reg1412 = primCons(intern("atom?"), _35reg1411);
Obj _35reg1413 = primCons(intern("pair?"), _35reg1412);
Obj _35reg1414 = primCons(intern("cdddr"), _35reg1413);
Obj _35reg1415 = primCons(intern("cadddr"), _35reg1414);
Obj _35reg1416 = primCons(intern("caddr"), _35reg1415);
Obj _35reg1417 = primCons(intern("cddr"), _35reg1416);
Obj _35reg1418 = primCons(intern("cdar"), _35reg1417);
Obj _35reg1419 = primCons(intern("caar"), _35reg1418);
Obj _35reg1420 = primCons(intern("cadr"), _35reg1419);
Obj _35reg1421 = primSet(co, intern("cora/init#*ns-export*"), _35reg1420);
Obj _35reg1422 = primSet(co, intern("cora/init#cadr"), globalRef(intern("cadr")));
Obj _35reg1423 = primSet(co, intern("cora/init#caar"), globalRef(intern("caar")));
Obj _35reg1424 = primSet(co, intern("cora/init#cdar"), globalRef(intern("cdar")));
Obj _35reg1425 = primSet(co, intern("cora/init#cddr"), globalRef(intern("cddr")));
Obj _35reg1426 = primSet(co, intern("cora/init#caddr"), globalRef(intern("caddr")));
Obj _35reg1427 = primSet(co, intern("cora/init#cadddr"), globalRef(intern("cadddr")));
Obj _35reg1428 = primSet(co, intern("cora/init#cdddr"), globalRef(intern("cdddr")));
Obj _35reg1429 = primSet(co, intern("cora/init#pair?"), globalRef(intern("pair?")));
Obj _35reg1430 = primSet(co, intern("cora/init#atom?"), globalRef(intern("atom?")));
Obj _35reg1431 = primSet(co, intern("cora/init#boolean?"), globalRef(intern("boolean?")));
Obj _35reg1432 = primSet(co, intern("cora/init#null?"), globalRef(intern("null?")));
Obj _35reg1433 = primSet(co, intern("cora/init#number?"), globalRef(intern("number?")));
Obj _35reg1434 = primSet(co, intern("cora/init#string-append"), globalRef(intern("string-append")));
Obj _35reg1435 = primSet(co, intern("cora/init#intern"), globalRef(intern("intern")));
Obj _35reg1436 = primSet(co, intern("cora/init#symbol->string"), globalRef(intern("symbol->string")));
Obj _35reg1437 = primSet(co, intern("cora/init#vector"), globalRef(intern("vector")));
Obj _35reg1438 = primSet(co, intern("cora/init#vector-set!"), globalRef(intern("vector-set!")));
Obj _35reg1439 = primSet(co, intern("cora/init#vector-ref"), globalRef(intern("vector-ref")));
Obj _35reg1440 = primSet(co, intern("cora/init#vector-length"), globalRef(intern("vector-length")));
Obj _35reg1441 = primSet(co, intern("cora/init#bytes"), globalRef(intern("bytes")));
Obj _35reg1442 = primSet(co, intern("cora/init#bytes-length"), globalRef(intern("bytes-length")));
Obj _35reg1443 = primSet(co, intern("cora/init#value"), globalRef(intern("value")));
Obj _35reg1444 = primSet(co, intern("cora/init#value-or"), globalRef(intern("value-or")));
Obj _35reg1445 = primSet(co, intern("cora/init#read-file-as-sexp"), globalRef(intern("read-file-as-sexp")));
Obj _35reg1446 = primSet(co, intern("cora/init#apply"), globalRef(intern("apply")));
Obj _35reg1447 = primSet(co, intern("cora/init#load"), globalRef(intern("load")));
Obj _35reg1448 = primSet(co, intern("cora/init#load-so"), globalRef(intern("load-so")));
Obj _35reg1449 = primSet(co, intern("cora/init#import"), globalRef(intern("import")));
Obj _35reg1450 = primSet(co, intern("cora/init#try"), globalRef(intern("try")));
Obj _35reg1451 = primSet(co, intern("cora/init#throw"), globalRef(intern("throw")));
Obj _35reg1452 = primSet(co, intern("cora/init#reverse"), globalRef(intern("reverse")));
Obj _35reg1453 = primSet(co, intern("cora/init#map"), globalRef(intern("map")));
Obj _35reg1454 = primSet(co, intern("cora/init#macroexpand"), globalRef(intern("macroexpand")));
Obj _35reg1455 = primSet(co, intern("cora/init#elem?"), globalRef(intern("elem?")));
Obj _35reg1456 = primSet(co, intern("cora/init#length"), globalRef(intern("length")));
Obj _35reg1457 = primSet(co, intern("cora/init#filter"), globalRef(intern("filter")));
Obj _35reg1458 = primSet(co, intern("cora/init#append"), globalRef(intern("append")));
__nargs = 2;
__arg1 = _35reg1458;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj sexp = __arg1;
PUSH_CONT(co, 4, clofun2, 1, sexp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val1364 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj path = _35val1364;
PUSH_CONT(co, 5, clofun2, 1, path);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1365 = __arg1;
Obj path= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 0, clofun3, 1, path);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#parse-define-library"));
__arg1 = _35val1365;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun3(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1366 = __arg1;
Obj path= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _35val1366;
__arg1 = makeNative(1, clofun3, 3, 1, path);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj import = __arg1;
Obj export = __arg2;
Obj body = __arg3;
Obj _35reg1367 = primCons(makeCString("cora/init"), import);
PUSH_CONT(co, 2, clofun3, 3, export, body, _35reg1367);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = makeNative(4, clofun3, 1, 0);
__arg2 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1370 = __arg1;
Obj export= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1367= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1371 = primCons(export, Nil);
Obj _35reg1372 = primCons(intern("backquote"), _35reg1371);
Obj _35reg1373 = primCons(_35reg1372, Nil);
Obj _35reg1374 = primCons(intern("*ns-export*"), _35reg1373);
Obj _35reg1375 = primCons(intern("def"), _35reg1374);
Obj _35reg1376 = primCons(_35reg1375, body);
PUSH_CONT(co, 3, clofun3, 1, _35reg1367);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35val1370;
__arg2 = _35reg1376;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1377 = __arg1;
Obj _35reg1367= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1378 = primCons(intern("begin"), _35val1377);
Obj _35reg1379 = primCons(_35reg1378, Nil);
Obj _35reg1380 = primCons(_35reg1367, _35reg1379);
Obj _35reg1381 = primCons(closureRef(co, 0), _35reg1380);
Obj _35reg1382 = primCons(intern("ns"), _35reg1381);
__nargs = 2;
__arg1 = _35reg1382;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj imp = __arg1;
Obj _35reg1368 = primCons(imp, Nil);
Obj _35reg1369 = primCons(intern("import"), _35reg1368);
__nargs = 2;
__arg1 = _35reg1369;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
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
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun4(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35p362 = __arg1;
Obj _35p363 = __arg2;
Obj _35p364 = __arg3;
Obj _35p365 = co->args[4];
Obj _35cc366 = makeNative(1, clofun4, 0, 4, _35p362, _35p363, _35p364, _35p365);
Obj _35reg1344 = primIsCons(_35p362);
if (True == _35reg1344) {
Obj _35reg1345 = PRIM_CAR(_35p362);
Obj _35reg1346 = primIsCons(_35reg1345);
if (True == _35reg1346) {
Obj _35reg1347 = PRIM_CAR(_35p362);
Obj _35reg1348 = PRIM_CAR(_35reg1347);
Obj _35reg1349 = primEQ(intern("import"), _35reg1348);
if (True == _35reg1349) {
Obj _35reg1350 = PRIM_CAR(_35p362);
Obj _35reg1351 = PRIM_CDR(_35reg1350);
Obj _35reg1352 = primIsCons(_35reg1351);
if (True == _35reg1352) {
Obj _35reg1353 = PRIM_CAR(_35p362);
Obj _35reg1354 = PRIM_CDR(_35reg1353);
Obj _35reg1355 = PRIM_CAR(_35reg1354);
Obj lib = _35reg1355;
Obj _35reg1356 = PRIM_CAR(_35p362);
Obj _35reg1357 = PRIM_CDR(_35reg1356);
Obj _35reg1358 = PRIM_CDR(_35reg1357);
Obj _35reg1359 = primEQ(Nil, _35reg1358);
if (True == _35reg1359) {
Obj _35reg1360 = PRIM_CDR(_35p362);
Obj rest = _35reg1360;
Obj imports = _35p363;
Obj exports = _35p364;
Obj k = _35p365;
Obj _35reg1361 = primCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#parse-define-library-h"));
__arg1 = rest;
__arg2 = _35reg1361;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc366;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc366;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc366;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc366;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc366;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35cc367 = makeNative(2, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg1335 = primIsCons(closureRef(co, 0));
if (True == _35reg1335) {
Obj _35reg1336 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1337 = primIsCons(_35reg1336);
if (True == _35reg1337) {
Obj _35reg1338 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1339 = PRIM_CAR(_35reg1338);
Obj _35reg1340 = primEQ(intern("export"), _35reg1339);
if (True == _35reg1340) {
Obj _35reg1341 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1342 = PRIM_CDR(_35reg1341);
Obj more = _35reg1342;
Obj _35reg1343 = PRIM_CDR(closureRef(co, 0));
Obj rest = _35reg1343;
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
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc368 = makeNative(4, clofun4, 0, 0);
Obj body = closureRef(co, 0);
Obj imports = closureRef(co, 1);
Obj exports = closureRef(co, 2);
Obj k = closureRef(co, 3);
PUSH_CONT(co, 3, clofun4, 3, k, exports, body);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = imports;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1334 = __arg1;
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exports= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = _35val1334;
__arg2 = exports;
__arg3 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj exp = __arg1;
PUSH_CONT(co, 0, clofun5, 0);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun5(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1332 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-backquote"));
__arg1 = _35val1332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35p357 = __arg1;
Obj _35cc358 = makeNative(2, clofun5, 0, 1, _35p357);
Obj x = _35p357;
Obj _35reg1328 = primIsSymbol(x);
if (True == _35reg1328) {
Obj _35reg1329 = primCons(x, Nil);
Obj _35reg1330 = primCons(intern("quote"), _35reg1329);
__nargs = 2;
__arg1 = _35reg1330;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc358;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc359 = makeNative(3, clofun5, 0, 1, closureRef(co, 0));
Obj _35reg1318 = primIsCons(closureRef(co, 0));
if (True == _35reg1318) {
Obj _35reg1319 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1320 = primEQ(intern("unquote"), _35reg1319);
if (True == _35reg1320) {
Obj _35reg1321 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1322 = primIsCons(_35reg1321);
if (True == _35reg1322) {
Obj _35reg1323 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1324 = PRIM_CAR(_35reg1323);
Obj x = _35reg1324;
Obj _35reg1325 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1326 = PRIM_CDR(_35reg1325);
Obj _35reg1327 = primEQ(Nil, _35reg1326);
if (True == _35reg1327) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc360 = makeNative(5, clofun5, 0, 1, closureRef(co, 0));
Obj _35reg1312 = primIsCons(closureRef(co, 0));
if (True == _35reg1312) {
Obj _35reg1313 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg1313;
Obj _35reg1314 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg1314;
Obj _35reg1315 = primCons(x, more);
PUSH_CONT(co, 4, clofun5, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#rewrite-backquote"));
__arg2 = _35reg1315;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val1316 = __arg1;
Obj _35reg1317 = primCons(intern("list"), _35val1316);
__nargs = 2;
__arg1 = _35reg1317;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35cc361 = makeNative(0, clofun6, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun6(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj exp = __arg1;
Obj _35reg1310 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-begin"));
__arg1 = _35reg1310;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35p353 = __arg1;
Obj _35cc354 = makeNative(3, clofun6, 0, 1, _35p353);
Obj _35reg1305 = primIsCons(_35p353);
if (True == _35reg1305) {
Obj _35reg1306 = PRIM_CAR(_35p353);
Obj x = _35reg1306;
Obj _35reg1307 = PRIM_CDR(_35p353);
Obj _35reg1308 = primEQ(Nil, _35reg1307);
if (True == _35reg1308) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc354;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc354;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc355 = makeNative(4, clofun6, 0, 1, closureRef(co, 0));
Obj _35reg1293 = primIsCons(closureRef(co, 0));
if (True == _35reg1293) {
Obj _35reg1294 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg1294;
Obj _35reg1295 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1296 = primIsCons(_35reg1295);
if (True == _35reg1296) {
Obj _35reg1297 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1298 = PRIM_CAR(_35reg1297);
Obj y = _35reg1298;
Obj _35reg1299 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1300 = PRIM_CDR(_35reg1299);
Obj _35reg1301 = primEQ(Nil, _35reg1300);
if (True == _35reg1301) {
Obj _35reg1302 = primCons(y, Nil);
Obj _35reg1303 = primCons(x, _35reg1302);
Obj _35reg1304 = primCons(intern("do"), _35reg1303);
__nargs = 2;
__arg1 = _35reg1304;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc355;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc355;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc355;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc356 = makeNative(0, clofun7, 0, 0);
Obj _35reg1286 = primIsCons(closureRef(co, 0));
if (True == _35reg1286) {
Obj _35reg1287 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg1287;
Obj _35reg1288 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg1288;
PUSH_CONT(co, 5, clofun6, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-begin"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc356;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val1289 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1290 = primCons(_35val1289, Nil);
Obj _35reg1291 = primCons(x, _35reg1290);
Obj _35reg1292 = primCons(intern("do"), _35reg1291);
__nargs = 2;
__arg1 = _35reg1292;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun7(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj exp = __arg1;
PUSH_CONT(co, 2, clofun7, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1284 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = _35val1284;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35p341 = __arg1;
Obj _35cc342 = makeNative(4, clofun7, 0, 1, _35p341);
Obj _35reg1271 = primIsCons(_35p341);
if (True == _35reg1271) {
Obj _35reg1272 = PRIM_CAR(_35p341);
Obj _35reg1273 = primEQ(intern("quote"), _35reg1272);
if (True == _35reg1273) {
Obj _35reg1274 = PRIM_CDR(_35p341);
Obj _35reg1275 = primIsCons(_35reg1274);
if (True == _35reg1275) {
Obj _35reg1276 = PRIM_CDR(_35p341);
Obj _35reg1277 = PRIM_CAR(_35reg1276);
Obj x = _35reg1277;
Obj _35reg1278 = PRIM_CDR(_35p341);
Obj _35reg1279 = PRIM_CDR(_35reg1278);
Obj _35reg1280 = primEQ(Nil, _35reg1279);
if (True == _35reg1280) {
Obj _35reg1281 = primCons(x, Nil);
Obj _35reg1282 = primCons(intern("quote"), _35reg1281);
__nargs = 2;
__arg1 = _35reg1282;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc342;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc342;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc342;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc342;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc343 = makeNative(0, clofun8, 0, 1, closureRef(co, 0));
Obj _35reg1258 = primIsCons(closureRef(co, 0));
if (True == _35reg1258) {
Obj _35reg1259 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1260 = primEQ(intern("cons?"), _35reg1259);
if (True == _35reg1260) {
Obj _35reg1261 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1262 = primIsCons(_35reg1261);
if (True == _35reg1262) {
Obj _35reg1263 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1264 = PRIM_CAR(_35reg1263);
Obj x = _35reg1264;
Obj _35reg1265 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1266 = PRIM_CDR(_35reg1265);
Obj _35reg1267 = primEQ(Nil, _35reg1266);
if (True == _35reg1267) {
PUSH_CONT(co, 5, clofun7, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val1268 = __arg1;
Obj x1 = _35val1268;
Obj _35reg1269 = primCons(x1, Nil);
Obj _35reg1270 = primCons(intern("cons?"), _35reg1269);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun8(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc344 = makeNative(2, clofun8, 0, 1, closureRef(co, 0));
Obj _35reg1245 = primIsCons(closureRef(co, 0));
if (True == _35reg1245) {
Obj _35reg1246 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1247 = primEQ(intern("car"), _35reg1246);
if (True == _35reg1247) {
Obj _35reg1248 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1249 = primIsCons(_35reg1248);
if (True == _35reg1249) {
Obj _35reg1250 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1251 = PRIM_CAR(_35reg1250);
Obj x = _35reg1251;
Obj _35reg1252 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1253 = PRIM_CDR(_35reg1252);
Obj _35reg1254 = primEQ(Nil, _35reg1253);
if (True == _35reg1254) {
PUSH_CONT(co, 1, clofun8, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc344;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc344;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc344;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc344;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val1255 = __arg1;
Obj x1 = _35val1255;
Obj _35reg1256 = primCons(x1, Nil);
Obj _35reg1257 = primCons(intern("car"), _35reg1256);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1257;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc345 = makeNative(4, clofun8, 0, 1, closureRef(co, 0));
Obj _35reg1232 = primIsCons(closureRef(co, 0));
if (True == _35reg1232) {
Obj _35reg1233 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1234 = primEQ(intern("cdr"), _35reg1233);
if (True == _35reg1234) {
Obj _35reg1235 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1236 = primIsCons(_35reg1235);
if (True == _35reg1236) {
Obj _35reg1237 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1238 = PRIM_CAR(_35reg1237);
Obj x = _35reg1238;
Obj _35reg1239 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1240 = PRIM_CDR(_35reg1239);
Obj _35reg1241 = primEQ(Nil, _35reg1240);
if (True == _35reg1241) {
PUSH_CONT(co, 3, clofun8, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc345;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc345;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc345;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc345;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val1242 = __arg1;
Obj x1 = _35val1242;
Obj _35reg1243 = primCons(x1, Nil);
Obj _35reg1244 = primCons(intern("cdr"), _35reg1243);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc346 = makeNative(1, clofun9, 0, 1, closureRef(co, 0));
Obj _35reg1210 = primIsCons(closureRef(co, 0));
if (True == _35reg1210) {
Obj _35reg1211 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1212 = primEQ(intern("and"), _35reg1211);
if (True == _35reg1212) {
Obj _35reg1213 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1214 = primIsCons(_35reg1213);
if (True == _35reg1214) {
Obj _35reg1215 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1216 = PRIM_CAR(_35reg1215);
Obj x = _35reg1216;
Obj _35reg1217 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1218 = PRIM_CDR(_35reg1217);
Obj _35reg1219 = primIsCons(_35reg1218);
if (True == _35reg1219) {
Obj _35reg1220 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1221 = PRIM_CDR(_35reg1220);
Obj _35reg1222 = PRIM_CAR(_35reg1221);
Obj y = _35reg1222;
Obj _35reg1223 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1224 = PRIM_CDR(_35reg1223);
Obj _35reg1225 = PRIM_CDR(_35reg1224);
Obj _35reg1226 = primEQ(Nil, _35reg1225);
if (True == _35reg1226) {
PUSH_CONT(co, 5, clofun8, 1, y);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc346;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc346;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc346;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc346;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc346;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val1227 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1 = _35val1227;
PUSH_CONT(co, 0, clofun9, 1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun9(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1228 = __arg1;
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y1 = _35val1228;
Obj _35reg1229 = primCons(y1, Nil);
Obj _35reg1230 = primCons(x1, _35reg1229);
Obj _35reg1231 = primCons(intern("and"), _35reg1230);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc347 = makeNative(3, clofun9, 0, 1, closureRef(co, 0));
Obj _35reg1197 = primIsCons(closureRef(co, 0));
if (True == _35reg1197) {
Obj _35reg1198 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1199 = primEQ(intern("null?"), _35reg1198);
if (True == _35reg1199) {
Obj _35reg1200 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1201 = primIsCons(_35reg1200);
if (True == _35reg1201) {
Obj _35reg1202 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1203 = PRIM_CAR(_35reg1202);
Obj x = _35reg1203;
Obj _35reg1204 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1205 = PRIM_CDR(_35reg1204);
Obj _35reg1206 = primEQ(Nil, _35reg1205);
if (True == _35reg1206) {
PUSH_CONT(co, 2, clofun9, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val1207 = __arg1;
Obj x1 = _35val1207;
Obj _35reg1208 = primCons(x1, Nil);
Obj _35reg1209 = primCons(intern("null?"), _35reg1208);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1209;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc348 = makeNative(5, clofun9, 0, 1, closureRef(co, 0));
Obj _35reg1184 = primIsCons(closureRef(co, 0));
if (True == _35reg1184) {
Obj _35reg1185 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1186 = primEQ(intern("not"), _35reg1185);
if (True == _35reg1186) {
Obj _35reg1187 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1188 = primIsCons(_35reg1187);
if (True == _35reg1188) {
Obj _35reg1189 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1190 = PRIM_CAR(_35reg1189);
Obj x = _35reg1190;
Obj _35reg1191 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1192 = PRIM_CDR(_35reg1191);
Obj _35reg1193 = primEQ(Nil, _35reg1192);
if (True == _35reg1193) {
PUSH_CONT(co, 4, clofun9, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc348;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc348;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc348;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc348;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val1194 = __arg1;
Obj x1 = _35val1194;
Obj _35reg1195 = primCons(x1, Nil);
Obj _35reg1196 = primCons(intern("not"), _35reg1195);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1196;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc349 = makeNative(3, clofun10, 0, 1, closureRef(co, 0));
Obj _35reg1151 = primIsCons(closureRef(co, 0));
if (True == _35reg1151) {
Obj _35reg1152 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1153 = primEQ(intern("if"), _35reg1152);
if (True == _35reg1153) {
Obj _35reg1154 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1155 = primIsCons(_35reg1154);
if (True == _35reg1155) {
Obj _35reg1156 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1157 = PRIM_CAR(_35reg1156);
Obj x = _35reg1157;
Obj _35reg1158 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1159 = PRIM_CDR(_35reg1158);
Obj _35reg1160 = primIsCons(_35reg1159);
if (True == _35reg1160) {
Obj _35reg1161 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1162 = PRIM_CDR(_35reg1161);
Obj _35reg1163 = PRIM_CAR(_35reg1162);
Obj y = _35reg1163;
Obj _35reg1164 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1165 = PRIM_CDR(_35reg1164);
Obj _35reg1166 = PRIM_CDR(_35reg1165);
Obj _35reg1167 = primIsCons(_35reg1166);
if (True == _35reg1167) {
Obj _35reg1168 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1169 = PRIM_CDR(_35reg1168);
Obj _35reg1170 = PRIM_CDR(_35reg1169);
Obj _35reg1171 = PRIM_CAR(_35reg1170);
Obj z = _35reg1171;
Obj _35reg1172 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1173 = PRIM_CDR(_35reg1172);
Obj _35reg1174 = PRIM_CDR(_35reg1173);
Obj _35reg1175 = PRIM_CDR(_35reg1174);
Obj _35reg1176 = primEQ(Nil, _35reg1175);
if (True == _35reg1176) {
PUSH_CONT(co, 0, clofun10, 2, y, z);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc349;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc349;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc349;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc349;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc349;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc349;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
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

void clofun10(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1177 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x1 = _35val1177;
PUSH_CONT(co, 1, clofun10, 2, z, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1178 = __arg1;
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj y1 = _35val1178;
PUSH_CONT(co, 2, clofun10, 2, y1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = z;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1179 = __arg1;
Obj y1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj z1 = _35val1179;
Obj _35reg1180 = primCons(z1, Nil);
Obj _35reg1181 = primCons(y1, _35reg1180);
Obj _35reg1182 = primCons(x1, _35reg1181);
Obj _35reg1183 = primCons(intern("if"), _35reg1182);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc350 = makeNative(5, clofun10, 0, 1, closureRef(co, 0));
Obj _35reg1130 = primIsCons(closureRef(co, 0));
if (True == _35reg1130) {
Obj _35reg1131 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1132 = primEQ(intern("lambda"), _35reg1131);
if (True == _35reg1132) {
Obj _35reg1133 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1134 = primIsCons(_35reg1133);
if (True == _35reg1134) {
Obj _35reg1135 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1136 = PRIM_CAR(_35reg1135);
Obj args = _35reg1136;
Obj _35reg1137 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1138 = PRIM_CDR(_35reg1137);
Obj _35reg1139 = primIsCons(_35reg1138);
if (True == _35reg1139) {
Obj _35reg1140 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1141 = PRIM_CDR(_35reg1140);
Obj _35reg1142 = PRIM_CAR(_35reg1141);
Obj body = _35reg1142;
Obj _35reg1143 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1144 = PRIM_CDR(_35reg1143);
Obj _35reg1145 = PRIM_CDR(_35reg1144);
Obj _35reg1146 = primEQ(Nil, _35reg1145);
if (True == _35reg1146) {
PUSH_CONT(co, 4, clofun10, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc350;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc350;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc350;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc350;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc350;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val1147 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1148 = primCons(_35val1147, Nil);
Obj _35reg1149 = primCons(args, _35reg1148);
Obj _35reg1150 = primCons(intern("lambda"), _35reg1149);
__nargs = 2;
__arg1 = _35reg1150;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35cc351 = makeNative(0, clofun11, 0, 1, closureRef(co, 0));
Obj _35reg1126 = primIsCons(closureRef(co, 0));
if (True == _35reg1126) {
Obj _35reg1127 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg1127;
Obj _35reg1128 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg1128;
Obj _35reg1129 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#propagate-boolean"));
__arg2 = _35reg1129;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
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

void clofun11(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc352 = makeNative(1, clofun11, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35p329 = __arg1;
Obj _35cc330 = makeNative(3, clofun11, 0, 1, _35p329);
Obj _35reg1086 = primIsCons(_35p329);
if (True == _35reg1086) {
Obj _35reg1087 = PRIM_CAR(_35p329);
Obj _35reg1088 = primEQ(intern("car"), _35reg1087);
if (True == _35reg1088) {
Obj _35reg1089 = PRIM_CDR(_35p329);
Obj _35reg1090 = primIsCons(_35reg1089);
if (True == _35reg1090) {
Obj _35reg1091 = PRIM_CDR(_35p329);
Obj _35reg1092 = PRIM_CAR(_35reg1091);
Obj _35reg1093 = primIsCons(_35reg1092);
if (True == _35reg1093) {
Obj _35reg1094 = PRIM_CDR(_35p329);
Obj _35reg1095 = PRIM_CAR(_35reg1094);
Obj _35reg1096 = PRIM_CAR(_35reg1095);
Obj _35reg1097 = primEQ(intern("cons"), _35reg1096);
if (True == _35reg1097) {
Obj _35reg1098 = PRIM_CDR(_35p329);
Obj _35reg1099 = PRIM_CAR(_35reg1098);
Obj _35reg1100 = PRIM_CDR(_35reg1099);
Obj _35reg1101 = primIsCons(_35reg1100);
if (True == _35reg1101) {
Obj _35reg1102 = PRIM_CDR(_35p329);
Obj _35reg1103 = PRIM_CAR(_35reg1102);
Obj _35reg1104 = PRIM_CDR(_35reg1103);
Obj _35reg1105 = PRIM_CAR(_35reg1104);
Obj x = _35reg1105;
Obj _35reg1106 = PRIM_CDR(_35p329);
Obj _35reg1107 = PRIM_CAR(_35reg1106);
Obj _35reg1108 = PRIM_CDR(_35reg1107);
Obj _35reg1109 = PRIM_CDR(_35reg1108);
Obj _35reg1110 = primIsCons(_35reg1109);
if (True == _35reg1110) {
Obj _35reg1111 = PRIM_CDR(_35p329);
Obj _35reg1112 = PRIM_CAR(_35reg1111);
Obj _35reg1113 = PRIM_CDR(_35reg1112);
Obj _35reg1114 = PRIM_CDR(_35reg1113);
Obj _35reg1115 = PRIM_CAR(_35reg1114);
Obj __ = _35reg1115;
Obj _35reg1116 = PRIM_CDR(_35p329);
Obj _35reg1117 = PRIM_CAR(_35reg1116);
Obj _35reg1118 = PRIM_CDR(_35reg1117);
Obj _35reg1119 = PRIM_CDR(_35reg1118);
Obj _35reg1120 = PRIM_CDR(_35reg1119);
Obj _35reg1121 = primEQ(Nil, _35reg1120);
if (True == _35reg1121) {
Obj _35reg1122 = PRIM_CDR(_35p329);
Obj _35reg1123 = PRIM_CDR(_35reg1122);
Obj _35reg1124 = primEQ(Nil, _35reg1123);
if (True == _35reg1124) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc330;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc330;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc330;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc330;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc330;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc330;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc330;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc330;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc330;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc331 = makeNative(4, clofun11, 0, 1, closureRef(co, 0));
Obj _35reg1047 = primIsCons(closureRef(co, 0));
if (True == _35reg1047) {
Obj _35reg1048 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1049 = primEQ(intern("cdr"), _35reg1048);
if (True == _35reg1049) {
Obj _35reg1050 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1051 = primIsCons(_35reg1050);
if (True == _35reg1051) {
Obj _35reg1052 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1053 = PRIM_CAR(_35reg1052);
Obj _35reg1054 = primIsCons(_35reg1053);
if (True == _35reg1054) {
Obj _35reg1055 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1056 = PRIM_CAR(_35reg1055);
Obj _35reg1057 = PRIM_CAR(_35reg1056);
Obj _35reg1058 = primEQ(intern("cons"), _35reg1057);
if (True == _35reg1058) {
Obj _35reg1059 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1060 = PRIM_CAR(_35reg1059);
Obj _35reg1061 = PRIM_CDR(_35reg1060);
Obj _35reg1062 = primIsCons(_35reg1061);
if (True == _35reg1062) {
Obj _35reg1063 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1064 = PRIM_CAR(_35reg1063);
Obj _35reg1065 = PRIM_CDR(_35reg1064);
Obj _35reg1066 = PRIM_CAR(_35reg1065);
Obj __ = _35reg1066;
Obj _35reg1067 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1068 = PRIM_CAR(_35reg1067);
Obj _35reg1069 = PRIM_CDR(_35reg1068);
Obj _35reg1070 = PRIM_CDR(_35reg1069);
Obj _35reg1071 = primIsCons(_35reg1070);
if (True == _35reg1071) {
Obj _35reg1072 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1073 = PRIM_CAR(_35reg1072);
Obj _35reg1074 = PRIM_CDR(_35reg1073);
Obj _35reg1075 = PRIM_CDR(_35reg1074);
Obj _35reg1076 = PRIM_CAR(_35reg1075);
Obj x = _35reg1076;
Obj _35reg1077 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1078 = PRIM_CAR(_35reg1077);
Obj _35reg1079 = PRIM_CDR(_35reg1078);
Obj _35reg1080 = PRIM_CDR(_35reg1079);
Obj _35reg1081 = PRIM_CDR(_35reg1080);
Obj _35reg1082 = primEQ(Nil, _35reg1081);
if (True == _35reg1082) {
Obj _35reg1083 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1084 = PRIM_CDR(_35reg1083);
Obj _35reg1085 = primEQ(Nil, _35reg1084);
if (True == _35reg1085) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc332 = makeNative(5, clofun11, 0, 1, closureRef(co, 0));
Obj _35reg1008 = primIsCons(closureRef(co, 0));
if (True == _35reg1008) {
Obj _35reg1009 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1010 = primEQ(intern("cons?"), _35reg1009);
if (True == _35reg1010) {
Obj _35reg1011 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1012 = primIsCons(_35reg1011);
if (True == _35reg1012) {
Obj _35reg1013 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1014 = PRIM_CAR(_35reg1013);
Obj _35reg1015 = primIsCons(_35reg1014);
if (True == _35reg1015) {
Obj _35reg1016 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1017 = PRIM_CAR(_35reg1016);
Obj _35reg1018 = PRIM_CAR(_35reg1017);
Obj _35reg1019 = primEQ(intern("cons"), _35reg1018);
if (True == _35reg1019) {
Obj _35reg1020 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1021 = PRIM_CAR(_35reg1020);
Obj _35reg1022 = PRIM_CDR(_35reg1021);
Obj _35reg1023 = primIsCons(_35reg1022);
if (True == _35reg1023) {
Obj _35reg1024 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1025 = PRIM_CAR(_35reg1024);
Obj _35reg1026 = PRIM_CDR(_35reg1025);
Obj _35reg1027 = PRIM_CAR(_35reg1026);
Obj __ = _35reg1027;
Obj _35reg1028 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1029 = PRIM_CAR(_35reg1028);
Obj _35reg1030 = PRIM_CDR(_35reg1029);
Obj _35reg1031 = PRIM_CDR(_35reg1030);
Obj _35reg1032 = primIsCons(_35reg1031);
if (True == _35reg1032) {
Obj _35reg1033 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1034 = PRIM_CAR(_35reg1033);
Obj _35reg1035 = PRIM_CDR(_35reg1034);
Obj _35reg1036 = PRIM_CDR(_35reg1035);
Obj _35reg1037 = PRIM_CAR(_35reg1036);
__ = _35reg1037;
Obj _35reg1038 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1039 = PRIM_CAR(_35reg1038);
Obj _35reg1040 = PRIM_CDR(_35reg1039);
Obj _35reg1041 = PRIM_CDR(_35reg1040);
Obj _35reg1042 = PRIM_CDR(_35reg1041);
Obj _35reg1043 = primEQ(Nil, _35reg1042);
if (True == _35reg1043) {
Obj _35reg1044 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1045 = PRIM_CDR(_35reg1044);
Obj _35reg1046 = primEQ(Nil, _35reg1045);
if (True == _35reg1046) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc333 = makeNative(0, clofun12, 0, 1, closureRef(co, 0));
Obj _35reg989 = primIsCons(closureRef(co, 0));
if (True == _35reg989) {
Obj _35reg990 = PRIM_CAR(closureRef(co, 0));
Obj _35reg991 = primEQ(intern("and"), _35reg990);
if (True == _35reg991) {
Obj _35reg992 = PRIM_CDR(closureRef(co, 0));
Obj _35reg993 = primIsCons(_35reg992);
if (True == _35reg993) {
Obj _35reg994 = PRIM_CDR(closureRef(co, 0));
Obj _35reg995 = PRIM_CAR(_35reg994);
Obj _35reg996 = primEQ(True, _35reg995);
if (True == _35reg996) {
Obj _35reg997 = PRIM_CDR(closureRef(co, 0));
Obj _35reg998 = PRIM_CDR(_35reg997);
Obj _35reg999 = primIsCons(_35reg998);
if (True == _35reg999) {
Obj _35reg1000 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1001 = PRIM_CDR(_35reg1000);
Obj _35reg1002 = PRIM_CAR(_35reg1001);
Obj _35reg1003 = primEQ(True, _35reg1002);
if (True == _35reg1003) {
Obj _35reg1004 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1005 = PRIM_CDR(_35reg1004);
Obj _35reg1006 = PRIM_CDR(_35reg1005);
Obj _35reg1007 = primEQ(Nil, _35reg1006);
if (True == _35reg1007) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
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

void clofun12(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc334 = makeNative(1, clofun12, 0, 1, closureRef(co, 0));
Obj _35reg978 = primIsCons(closureRef(co, 0));
if (True == _35reg978) {
Obj _35reg979 = PRIM_CAR(closureRef(co, 0));
Obj _35reg980 = primEQ(intern("null?"), _35reg979);
if (True == _35reg980) {
Obj _35reg981 = PRIM_CDR(closureRef(co, 0));
Obj _35reg982 = primIsCons(_35reg981);
if (True == _35reg982) {
Obj _35reg983 = PRIM_CDR(closureRef(co, 0));
Obj _35reg984 = PRIM_CAR(_35reg983);
Obj _35reg985 = primEQ(Nil, _35reg984);
if (True == _35reg985) {
Obj _35reg986 = PRIM_CDR(closureRef(co, 0));
Obj _35reg987 = PRIM_CDR(_35reg986);
Obj _35reg988 = primEQ(Nil, _35reg987);
if (True == _35reg988) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35cc335 = makeNative(2, clofun12, 0, 1, closureRef(co, 0));
Obj _35reg939 = primIsCons(closureRef(co, 0));
if (True == _35reg939) {
Obj _35reg940 = PRIM_CAR(closureRef(co, 0));
Obj _35reg941 = primEQ(intern("null?"), _35reg940);
if (True == _35reg941) {
Obj _35reg942 = PRIM_CDR(closureRef(co, 0));
Obj _35reg943 = primIsCons(_35reg942);
if (True == _35reg943) {
Obj _35reg944 = PRIM_CDR(closureRef(co, 0));
Obj _35reg945 = PRIM_CAR(_35reg944);
Obj _35reg946 = primIsCons(_35reg945);
if (True == _35reg946) {
Obj _35reg947 = PRIM_CDR(closureRef(co, 0));
Obj _35reg948 = PRIM_CAR(_35reg947);
Obj _35reg949 = PRIM_CAR(_35reg948);
Obj _35reg950 = primEQ(intern("cons"), _35reg949);
if (True == _35reg950) {
Obj _35reg951 = PRIM_CDR(closureRef(co, 0));
Obj _35reg952 = PRIM_CAR(_35reg951);
Obj _35reg953 = PRIM_CDR(_35reg952);
Obj _35reg954 = primIsCons(_35reg953);
if (True == _35reg954) {
Obj _35reg955 = PRIM_CDR(closureRef(co, 0));
Obj _35reg956 = PRIM_CAR(_35reg955);
Obj _35reg957 = PRIM_CDR(_35reg956);
Obj _35reg958 = PRIM_CAR(_35reg957);
Obj __ = _35reg958;
Obj _35reg959 = PRIM_CDR(closureRef(co, 0));
Obj _35reg960 = PRIM_CAR(_35reg959);
Obj _35reg961 = PRIM_CDR(_35reg960);
Obj _35reg962 = PRIM_CDR(_35reg961);
Obj _35reg963 = primIsCons(_35reg962);
if (True == _35reg963) {
Obj _35reg964 = PRIM_CDR(closureRef(co, 0));
Obj _35reg965 = PRIM_CAR(_35reg964);
Obj _35reg966 = PRIM_CDR(_35reg965);
Obj _35reg967 = PRIM_CDR(_35reg966);
Obj _35reg968 = PRIM_CAR(_35reg967);
__ = _35reg968;
Obj _35reg969 = PRIM_CDR(closureRef(co, 0));
Obj _35reg970 = PRIM_CAR(_35reg969);
Obj _35reg971 = PRIM_CDR(_35reg970);
Obj _35reg972 = PRIM_CDR(_35reg971);
Obj _35reg973 = PRIM_CDR(_35reg972);
Obj _35reg974 = primEQ(Nil, _35reg973);
if (True == _35reg974) {
Obj _35reg975 = PRIM_CDR(closureRef(co, 0));
Obj _35reg976 = PRIM_CDR(_35reg975);
Obj _35reg977 = primEQ(Nil, _35reg976);
if (True == _35reg977) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc336 = makeNative(3, clofun12, 0, 1, closureRef(co, 0));
Obj _35reg928 = primIsCons(closureRef(co, 0));
if (True == _35reg928) {
Obj _35reg929 = PRIM_CAR(closureRef(co, 0));
Obj _35reg930 = primEQ(intern("not"), _35reg929);
if (True == _35reg930) {
Obj _35reg931 = PRIM_CDR(closureRef(co, 0));
Obj _35reg932 = primIsCons(_35reg931);
if (True == _35reg932) {
Obj _35reg933 = PRIM_CDR(closureRef(co, 0));
Obj _35reg934 = PRIM_CAR(_35reg933);
Obj _35reg935 = primEQ(True, _35reg934);
if (True == _35reg935) {
Obj _35reg936 = PRIM_CDR(closureRef(co, 0));
Obj _35reg937 = PRIM_CDR(_35reg936);
Obj _35reg938 = primEQ(Nil, _35reg937);
if (True == _35reg938) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc336;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc336;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc336;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc336;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc336;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc337 = makeNative(4, clofun12, 0, 1, closureRef(co, 0));
Obj _35reg917 = primIsCons(closureRef(co, 0));
if (True == _35reg917) {
Obj _35reg918 = PRIM_CAR(closureRef(co, 0));
Obj _35reg919 = primEQ(intern("not"), _35reg918);
if (True == _35reg919) {
Obj _35reg920 = PRIM_CDR(closureRef(co, 0));
Obj _35reg921 = primIsCons(_35reg920);
if (True == _35reg921) {
Obj _35reg922 = PRIM_CDR(closureRef(co, 0));
Obj _35reg923 = PRIM_CAR(_35reg922);
Obj _35reg924 = primEQ(False, _35reg923);
if (True == _35reg924) {
Obj _35reg925 = PRIM_CDR(closureRef(co, 0));
Obj _35reg926 = PRIM_CDR(_35reg925);
Obj _35reg927 = primEQ(Nil, _35reg926);
if (True == _35reg927) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc338 = makeNative(5, clofun12, 0, 1, closureRef(co, 0));
Obj _35reg890 = primIsCons(closureRef(co, 0));
if (True == _35reg890) {
Obj _35reg891 = PRIM_CAR(closureRef(co, 0));
Obj _35reg892 = primEQ(intern("if"), _35reg891);
if (True == _35reg892) {
Obj _35reg893 = PRIM_CDR(closureRef(co, 0));
Obj _35reg894 = primIsCons(_35reg893);
if (True == _35reg894) {
Obj _35reg895 = PRIM_CDR(closureRef(co, 0));
Obj _35reg896 = PRIM_CAR(_35reg895);
Obj _35reg897 = primEQ(True, _35reg896);
if (True == _35reg897) {
Obj _35reg898 = PRIM_CDR(closureRef(co, 0));
Obj _35reg899 = PRIM_CDR(_35reg898);
Obj _35reg900 = primIsCons(_35reg899);
if (True == _35reg900) {
Obj _35reg901 = PRIM_CDR(closureRef(co, 0));
Obj _35reg902 = PRIM_CDR(_35reg901);
Obj _35reg903 = PRIM_CAR(_35reg902);
Obj y = _35reg903;
Obj _35reg904 = PRIM_CDR(closureRef(co, 0));
Obj _35reg905 = PRIM_CDR(_35reg904);
Obj _35reg906 = PRIM_CDR(_35reg905);
Obj _35reg907 = primIsCons(_35reg906);
if (True == _35reg907) {
Obj _35reg908 = PRIM_CDR(closureRef(co, 0));
Obj _35reg909 = PRIM_CDR(_35reg908);
Obj _35reg910 = PRIM_CDR(_35reg909);
Obj _35reg911 = PRIM_CAR(_35reg910);
Obj z = _35reg911;
Obj _35reg912 = PRIM_CDR(closureRef(co, 0));
Obj _35reg913 = PRIM_CDR(_35reg912);
Obj _35reg914 = PRIM_CDR(_35reg913);
Obj _35reg915 = PRIM_CDR(_35reg914);
Obj _35reg916 = primEQ(Nil, _35reg915);
if (True == _35reg916) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc339 = makeNative(0, clofun13, 0, 1, closureRef(co, 0));
Obj _35reg863 = primIsCons(closureRef(co, 0));
if (True == _35reg863) {
Obj _35reg864 = PRIM_CAR(closureRef(co, 0));
Obj _35reg865 = primEQ(intern("if"), _35reg864);
if (True == _35reg865) {
Obj _35reg866 = PRIM_CDR(closureRef(co, 0));
Obj _35reg867 = primIsCons(_35reg866);
if (True == _35reg867) {
Obj _35reg868 = PRIM_CDR(closureRef(co, 0));
Obj _35reg869 = PRIM_CAR(_35reg868);
Obj _35reg870 = primEQ(False, _35reg869);
if (True == _35reg870) {
Obj _35reg871 = PRIM_CDR(closureRef(co, 0));
Obj _35reg872 = PRIM_CDR(_35reg871);
Obj _35reg873 = primIsCons(_35reg872);
if (True == _35reg873) {
Obj _35reg874 = PRIM_CDR(closureRef(co, 0));
Obj _35reg875 = PRIM_CDR(_35reg874);
Obj _35reg876 = PRIM_CAR(_35reg875);
Obj y = _35reg876;
Obj _35reg877 = PRIM_CDR(closureRef(co, 0));
Obj _35reg878 = PRIM_CDR(_35reg877);
Obj _35reg879 = PRIM_CDR(_35reg878);
Obj _35reg880 = primIsCons(_35reg879);
if (True == _35reg880) {
Obj _35reg881 = PRIM_CDR(closureRef(co, 0));
Obj _35reg882 = PRIM_CDR(_35reg881);
Obj _35reg883 = PRIM_CDR(_35reg882);
Obj _35reg884 = PRIM_CAR(_35reg883);
Obj z = _35reg884;
Obj _35reg885 = PRIM_CDR(closureRef(co, 0));
Obj _35reg886 = PRIM_CDR(_35reg885);
Obj _35reg887 = PRIM_CDR(_35reg886);
Obj _35reg888 = PRIM_CDR(_35reg887);
Obj _35reg889 = primEQ(Nil, _35reg888);
if (True == _35reg889) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
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

void clofun13(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc340 = makeNative(1, clofun13, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun13) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj exp = __arg1;
PUSH_CONT(co, 3, clofun13, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val850 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 4, clofun13, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#extract-rules"));
__arg1 = _35val850;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val851 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body = _35val851;
PUSH_CONT(co, 5, clofun13, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rules-arg-count"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val852 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj nargs = _35val852;
PUSH_CONT(co, 0, clofun14, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#gen-paramenters"));
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun14(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val853 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args = _35val853;
PUSH_CONT(co, 1, clofun14, 2, body, args);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun14) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val854 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg855 = primCons(intern("list"), args);
Obj _35reg856 = primCons(_35reg855, body);
Obj _35reg857 = primCons(intern("match"), _35reg856);
Obj _35reg858 = primCons(_35reg857, Nil);
Obj _35reg859 = primCons(args, _35reg858);
Obj _35reg860 = primCons(_35val854, _35reg859);
Obj _35reg861 = primCons(intern("defun"), _35reg860);
__nargs = 2;
__arg1 = _35reg861;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun14) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj n = __arg1;
Obj _35reg844 = primEQ(n, makeNumber(0));
if (True == _35reg844) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun14) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg845 = primGenSym(intern("p"));
Obj _35reg846 = PRIM_SUB(n, makeNumber(1));
PUSH_CONT(co, 3, clofun14, 1, _35reg845);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#gen-paramenters"));
__arg1 = _35reg846;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun14) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val847 = __arg1;
Obj _35reg845= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg848 = primCons(_35reg845, _35val847);
__nargs = 2;
__arg1 = _35reg848;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun14) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj rules = __arg1;
PUSH_CONT(co, 5, clofun14, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#rules-patterns"));
__arg1 = Nil;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun14) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val833 = __arg1;
Obj pats = _35val833;
Obj len = makeNative(4, clofun15, 1, 0);
PUSH_CONT(co, 0, clofun15, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = len;
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun14) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun15(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val835 = __arg1;
Obj counts = _35val835;
Obj _35reg836 = PRIM_CAR(counts);
Obj n = _35reg836;
Obj dif = makeNative(3, clofun15, 1, 1, n);
Obj _35reg839 = PRIM_CDR(counts);
PUSH_CONT(co, 1, clofun15, 1, n);
__nargs = 3;
__arg0 = globalRef(intern("filter"));
__arg1 = dif;
__arg2 = _35reg839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun15) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val840 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 2, clofun15, 1, n);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35val840;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun15) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val841 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg842 = primNot(_35val841);
if (True == _35reg842) {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("inconsistent func rule args count");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun15) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = n;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun15) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label3:
{
Obj x = __arg1;
Obj _35reg837 = primEQ(closureRef(co, 0), x);
Obj _35reg838 = primNot(_35reg837);
__nargs = 2;
__arg1 = _35reg838;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun15) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x = __arg1;
Obj _35reg834 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = _35reg834;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun15) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj _35reg827 = primEQ(l1, Nil);
if (True == _35reg827) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun15) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg828 = PRIM_CAR(l1);
Obj _35reg829 = PRIM_CDR(l1);
PUSH_CONT(co, 0, clofun16, 1, _35reg828);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35reg829;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun15) { co->ctx.pc = ps; goto fail; };
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

void clofun16(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val830 = __arg1;
Obj _35reg828= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg831 = primCons(_35reg828, _35val830);
__nargs = 2;
__arg1 = _35reg831;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun16) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
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
if (ps.func != clofun16) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj _35reg818 = primIsCons(l);
if (True == _35reg818) {
Obj _35reg819 = PRIM_CAR(l);
PUSH_CONT(co, 3, clofun16, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = _35reg819;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun16) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun16) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val820 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val820) {
Obj _35reg821 = PRIM_CAR(l);
Obj _35reg822 = primCons(_35reg821, res);
Obj _35reg823 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#filter-h"));
__arg1 = _35reg822;
__arg2 = fn;
__arg3 = _35reg823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun16) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg824 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#filter-h"));
__arg1 = res;
__arg2 = fn;
__arg3 = _35reg824;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun16) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj l = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/init#length-h"));
__arg1 = makeNumber(0);
__arg2 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun16) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj i = __arg1;
Obj l = __arg2;
Obj _35reg813 = primEQ(l, Nil);
if (True == _35reg813) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun16) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg814 = PRIM_ADD(i, makeNumber(1));
Obj _35reg815 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#length-h"));
__arg1 = _35reg814;
__arg2 = _35reg815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun16) { co->ctx.pc = ps; goto fail; };
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

void clofun17(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj res = __arg1;
Obj rules = __arg2;
PUSH_CONT(co, 1, clofun17, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val808 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val808) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg809 = PRIM_CAR(rules);
Obj _35reg810 = primCons(_35reg809, res);
PUSH_CONT(co, 2, clofun17, 1, _35reg810);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val811 = __arg1;
Obj _35reg810= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#rules-patterns"));
__arg1 = _35reg810;
__arg2 = _35val811;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
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
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj _35cc325 = makeNative(5, clofun17, 0, 3, input, current, result);
Obj _35reg805 = primEQ(Nil, input);
if (True == _35reg805) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc325;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc326 = makeNative(1, clofun18, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg772 = primIsCons(closureRef(co, 0));
if (True == _35reg772) {
Obj _35reg773 = PRIM_CAR(closureRef(co, 0));
Obj _35reg774 = primEQ(intern("=>"), _35reg773);
if (True == _35reg774) {
Obj _35reg775 = PRIM_CDR(closureRef(co, 0));
Obj _35reg776 = primIsCons(_35reg775);
if (True == _35reg776) {
Obj _35reg777 = PRIM_CDR(closureRef(co, 0));
Obj _35reg778 = PRIM_CAR(_35reg777);
Obj act = _35reg778;
Obj _35reg779 = PRIM_CDR(closureRef(co, 0));
Obj _35reg780 = PRIM_CDR(_35reg779);
Obj _35reg781 = primIsCons(_35reg780);
if (True == _35reg781) {
Obj _35reg782 = PRIM_CDR(closureRef(co, 0));
Obj _35reg783 = PRIM_CDR(_35reg782);
Obj _35reg784 = PRIM_CAR(_35reg783);
Obj _35reg785 = primEQ(intern("where"), _35reg784);
if (True == _35reg785) {
Obj _35reg786 = PRIM_CDR(closureRef(co, 0));
Obj _35reg787 = PRIM_CDR(_35reg786);
Obj _35reg788 = PRIM_CDR(_35reg787);
Obj _35reg789 = primIsCons(_35reg788);
if (True == _35reg789) {
Obj _35reg790 = PRIM_CDR(closureRef(co, 0));
Obj _35reg791 = PRIM_CDR(_35reg790);
Obj _35reg792 = PRIM_CDR(_35reg791);
Obj _35reg793 = PRIM_CAR(_35reg792);
Obj pred = _35reg793;
Obj _35reg794 = PRIM_CDR(closureRef(co, 0));
Obj _35reg795 = PRIM_CDR(_35reg794);
Obj _35reg796 = PRIM_CDR(_35reg795);
Obj _35reg797 = PRIM_CDR(_35reg796);
Obj remain = _35reg797;
PUSH_CONT(co, 0, clofun18, 3, act, pred, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc326;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc326;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc326;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc326;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc326;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc326;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun17) { co->ctx.pc = ps; goto fail; };
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

void clofun18(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val798 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pred= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg799 = primCons(intern("list"), _35val798);
Obj pat = _35reg799;
Obj _35reg800 = primCons(act, Nil);
Obj _35reg801 = primCons(pred, _35reg800);
Obj _35reg802 = primCons(intern("where"), _35reg801);
Obj _35reg803 = primCons(pat, closureRef(co, 2));
Obj _35reg804 = primCons(_35reg802, _35reg803);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg804;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun18) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc327 = makeNative(3, clofun18, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg759 = primIsCons(closureRef(co, 0));
if (True == _35reg759) {
Obj _35reg760 = PRIM_CAR(closureRef(co, 0));
Obj _35reg761 = primEQ(intern("=>"), _35reg760);
if (True == _35reg761) {
Obj _35reg762 = PRIM_CDR(closureRef(co, 0));
Obj _35reg763 = primIsCons(_35reg762);
if (True == _35reg763) {
Obj _35reg764 = PRIM_CDR(closureRef(co, 0));
Obj _35reg765 = PRIM_CAR(_35reg764);
Obj act = _35reg765;
Obj _35reg766 = PRIM_CDR(closureRef(co, 0));
Obj _35reg767 = PRIM_CDR(_35reg766);
Obj remain = _35reg767;
PUSH_CONT(co, 2, clofun18, 2, act, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun18) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun18) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun18) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun18) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val768 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg769 = primCons(intern("list"), _35val768);
Obj pat = _35reg769;
Obj _35reg770 = primCons(pat, closureRef(co, 2));
Obj _35reg771 = primCons(act, _35reg770);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg771;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun18) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc328 = makeNative(4, clofun18, 0, 0);
Obj _35reg755 = primIsCons(closureRef(co, 0));
if (True == _35reg755) {
Obj _35reg756 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg756;
Obj _35reg757 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg757;
Obj _35reg758 = primCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = y;
__arg2 = _35reg758;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun18) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc328;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun18) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun18) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj exp = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-match"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun18) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun19(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj exp = __arg1;
PUSH_CONT(co, 1, clofun19, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun19) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val728 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 2, clofun19, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = _35val728;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun19) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val729 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value = _35val729;
PUSH_CONT(co, 3, clofun19, 1, value);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun19) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val730 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules = _35val730;
Obj _35reg731 = primIsCons(value);
if (True == _35reg731) {
Obj _35reg732 = PRIM_CAR(value);
Obj _35reg733 = primEQ(intern("cons"), _35reg732);
Obj _35reg734 = primNot(_35reg733);
if (True == _35reg734) {
if (True == True) {
Obj _35reg735 = primGenSym(intern("val"));
Obj val = _35reg735;
PUSH_CONT(co, 0, clofun20, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun19) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun19) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg741 = primGenSym(intern("val"));
Obj val = _35reg741;
PUSH_CONT(co, 5, clofun19, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun19) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun19) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg747 = primGenSym(intern("val"));
Obj val = _35reg747;
PUSH_CONT(co, 4, clofun19, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun19) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun19) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label4:
{
Obj _35val748 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg749 = primCons(_35val748, Nil);
Obj _35reg750 = primCons(value, _35reg749);
Obj _35reg751 = primCons(val, _35reg750);
Obj _35reg752 = primCons(intern("let"), _35reg751);
__nargs = 2;
__arg1 = _35reg752;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun19) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val742 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg743 = primCons(_35val742, Nil);
Obj _35reg744 = primCons(value, _35reg743);
Obj _35reg745 = primCons(val, _35reg744);
Obj _35reg746 = primCons(intern("let"), _35reg745);
__nargs = 2;
__arg1 = _35reg746;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun19) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun20(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val736 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg737 = primCons(_35val736, Nil);
Obj _35reg738 = primCons(value, _35reg737);
Obj _35reg739 = primCons(val, _35reg738);
Obj _35reg740 = primCons(intern("let"), _35reg739);
__nargs = 2;
__arg1 = _35reg740;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun20) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj value = __arg1;
Obj rules = __arg2;
PUSH_CONT(co, 2, clofun20, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun20) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val676 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val676) {
Obj _35reg677 = primCons(makeCString("no match-help found!"), Nil);
Obj _35reg678 = primCons(intern("error"), _35reg677);
__nargs = 2;
__arg1 = _35reg678;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun20) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 3, clofun20, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun20) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val679 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val679) {
Obj _35reg680 = PRIM_CDR(rules);
PUSH_CONT(co, 2, clofun21, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = _35reg680;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun20) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj _35reg712 = PRIM_CAR(rules);
Obj pat = _35reg712;
Obj _35reg713 = primGenSym(intern("cc"));
Obj cc = _35reg713;
PUSH_CONT(co, 4, clofun20, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun20) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun20) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label4:
{
Obj _35val714 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val714;
PUSH_CONT(co, 5, clofun20, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun20) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val715 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 0, clofun21, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val715;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun20) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun21(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val716 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val716;
Obj _35reg717 = PRIM_CDR(rules);
Obj _35reg718 = PRIM_CDR(_35reg717);
PUSH_CONT(co, 1, clofun21, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg718;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun21) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val719 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val719;
Obj _35reg720 = primCons(rest, Nil);
Obj _35reg721 = primCons(Nil, _35reg720);
Obj _35reg722 = primCons(intern("lambda"), _35reg721);
Obj _35reg723 = primCons(curr, Nil);
Obj _35reg724 = primCons(_35reg722, _35reg723);
Obj _35reg725 = primCons(cc, _35reg724);
Obj _35reg726 = primCons(intern("let"), _35reg725);
__nargs = 2;
__arg1 = _35reg726;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun21) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val681 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val681) {
if (True == True) {
Obj _35reg682 = PRIM_CAR(rules);
Obj pat = _35reg682;
Obj _35reg683 = primGenSym(intern("cc"));
Obj cc = _35reg683;
PUSH_CONT(co, 1, clofun22, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun21) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun21) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg697 = PRIM_CAR(rules);
Obj pat = _35reg697;
Obj _35reg698 = primGenSym(intern("cc"));
Obj cc = _35reg698;
PUSH_CONT(co, 3, clofun21, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun21) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun21) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label3:
{
Obj _35val699 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val699;
PUSH_CONT(co, 4, clofun21, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun21) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val700 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 5, clofun21, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val700;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun21) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val701 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val701;
Obj _35reg702 = PRIM_CDR(rules);
Obj _35reg703 = PRIM_CDR(_35reg702);
PUSH_CONT(co, 0, clofun22, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg703;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun21) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun22(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val704 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val704;
Obj _35reg705 = primCons(rest, Nil);
Obj _35reg706 = primCons(Nil, _35reg705);
Obj _35reg707 = primCons(intern("lambda"), _35reg706);
Obj _35reg708 = primCons(curr, Nil);
Obj _35reg709 = primCons(_35reg707, _35reg708);
Obj _35reg710 = primCons(cc, _35reg709);
Obj _35reg711 = primCons(intern("let"), _35reg710);
__nargs = 2;
__arg1 = _35reg711;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun22) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val684 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val684;
PUSH_CONT(co, 2, clofun22, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun22) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val685 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 3, clofun22, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val685;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun22) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val686 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val686;
Obj _35reg687 = PRIM_CDR(rules);
Obj _35reg688 = PRIM_CDR(_35reg687);
PUSH_CONT(co, 4, clofun22, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg688;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun22) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val689 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val689;
Obj _35reg690 = primCons(rest, Nil);
Obj _35reg691 = primCons(Nil, _35reg690);
Obj _35reg692 = primCons(intern("lambda"), _35reg691);
Obj _35reg693 = primCons(curr, Nil);
Obj _35reg694 = primCons(_35reg692, _35reg693);
Obj _35reg695 = primCons(cc, _35reg694);
Obj _35reg696 = primCons(intern("let"), _35reg695);
__nargs = 2;
__arg1 = _35reg696;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun22) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _35reg649 = PRIM_CDR(rules);
Obj _35reg650 = PRIM_CAR(_35reg649);
Obj action = _35reg650;
PUSH_CONT(co, 0, clofun23, 2, cc, action);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun22) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun23(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val651 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val651) {
Obj _35reg652 = PRIM_CAR(action);
Obj _35reg653 = primEQ(_35reg652, intern("where"));
if (True == _35reg653) {
if (True == True) {
PUSH_CONT(co, 5, clofun23, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun23) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun23) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
if (True == False) {
PUSH_CONT(co, 3, clofun23, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun23) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun23) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
} else {
if (True == False) {
PUSH_CONT(co, 1, clofun23, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun23) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun23) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label1:
{
Obj _35val668 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 2, clofun23, 2, cc, _35val668);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun23) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val669 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val668= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg670 = primCons(cc, Nil);
Obj _35reg671 = primCons(_35reg670, Nil);
Obj _35reg672 = primCons(_35val669, _35reg671);
Obj _35reg673 = primCons(_35val668, _35reg672);
Obj _35reg674 = primCons(intern("if"), _35reg673);
__nargs = 2;
__arg1 = _35reg674;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun23) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val661 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 4, clofun23, 2, cc, _35val661);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun23) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val662 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val661= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg663 = primCons(cc, Nil);
Obj _35reg664 = primCons(_35reg663, Nil);
Obj _35reg665 = primCons(_35val662, _35reg664);
Obj _35reg666 = primCons(_35val661, _35reg665);
Obj _35reg667 = primCons(intern("if"), _35reg666);
__nargs = 2;
__arg1 = _35reg667;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun23) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val654 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 0, clofun24, 2, cc, _35val654);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun23) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun24(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val655 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val654= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg656 = primCons(cc, Nil);
Obj _35reg657 = primCons(_35reg656, Nil);
Obj _35reg658 = primCons(_35val655, _35reg657);
Obj _35reg659 = primCons(_35val654, _35reg658);
Obj _35reg660 = primCons(intern("if"), _35reg659);
__nargs = 2;
__arg1 = _35reg660;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun24) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
Obj literal_63 = makeNative(5, clofun24, 1, 0);
PUSH_CONT(co, 2, clofun24, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = literal_63;
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun24) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val619 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val619) {
Obj _35reg620 = primEQ(pat, expr);
if (True == _35reg620) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun24) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg621 = primCons(expr, Nil);
Obj _35reg622 = primCons(pat, _35reg621);
Obj _35reg623 = primCons(intern("="), _35reg622);
Obj _35reg624 = primCons(cc, Nil);
Obj _35reg625 = primCons(_35reg624, Nil);
Obj _35reg626 = primCons(body, _35reg625);
Obj _35reg627 = primCons(_35reg623, _35reg626);
Obj _35reg628 = primCons(intern("if"), _35reg627);
__nargs = 2;
__arg1 = _35reg628;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun24) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj _35reg629 = primIsSymbol(pat);
if (True == _35reg629) {
Obj _35reg630 = primCons(body, Nil);
Obj _35reg631 = primCons(expr, _35reg630);
Obj _35reg632 = primCons(pat, _35reg631);
Obj _35reg633 = primCons(intern("let"), _35reg632);
__nargs = 2;
__arg1 = _35reg633;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun24) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 3, clofun24, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun24) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label3:
{
Obj _35val634 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val634) {
Obj _35reg635 = PRIM_CAR(pat);
Obj _35reg636 = primEQ(_35reg635, intern("quote"));
if (True == _35reg636) {
Obj _35reg637 = primCons(expr, Nil);
Obj _35reg638 = primCons(pat, _35reg637);
Obj _35reg639 = primCons(intern("="), _35reg638);
Obj _35reg640 = primCons(cc, Nil);
Obj _35reg641 = primCons(_35reg640, Nil);
Obj _35reg642 = primCons(body, _35reg641);
Obj _35reg643 = primCons(_35reg639, _35reg642);
Obj _35reg644 = primCons(intern("if"), _35reg643);
__nargs = 2;
__arg1 = _35reg644;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun24) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg645 = PRIM_CAR(pat);
Obj _35reg646 = primEQ(_35reg645, intern("cons"));
if (True == _35reg646) {
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match-cons-expander"));
__arg1 = pat;
__arg2 = expr;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun24) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun24) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
PUSH_CONT(co, 4, clofun24, 0);
__nargs = 3;
__arg0 = globalRef(intern("str"));
__arg1 = makeCString("match fail ");
__arg2 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun24) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val647 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = _35val647;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun24) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x = __arg1;
PUSH_CONT(co, 0, clofun25, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("atom?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun24) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun25(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val616 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val616) {
Obj _35reg617 = primIsSymbol(x);
Obj _35reg618 = primNot(_35reg617);
if (True == _35reg618) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun25) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun25) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun25) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label1:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
PUSH_CONT(co, 2, clofun25, 4, pat, expr, body, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun25) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val562 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj x = _35val562;
PUSH_CONT(co, 3, clofun25, 4, expr, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun25) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val563 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj y = _35val563;
Obj _35reg564 = primIsCons(expr);
if (True == _35reg564) {
Obj _35reg565 = PRIM_CAR(expr);
Obj _35reg566 = primEQ(_35reg565, intern("cons"));
if (True == _35reg566) {
if (True == True) {
PUSH_CONT(co, 4, clofun27, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun25) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg570 = primCons(expr, Nil);
Obj _35reg571 = primCons(intern("cons?"), _35reg570);
Obj _35reg572 = primCons(expr, Nil);
Obj _35reg573 = primCons(intern("car"), _35reg572);
Obj _35reg574 = primCons(expr, Nil);
Obj _35reg575 = primCons(intern("cdr"), _35reg574);
PUSH_CONT(co, 2, clofun27, 4, x, _35reg573, cc, _35reg571);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg575;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun25) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
PUSH_CONT(co, 5, clofun26, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun25) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg586 = primCons(expr, Nil);
Obj _35reg587 = primCons(intern("cons?"), _35reg586);
Obj _35reg588 = primCons(expr, Nil);
Obj _35reg589 = primCons(intern("car"), _35reg588);
Obj _35reg590 = primCons(expr, Nil);
Obj _35reg591 = primCons(intern("cdr"), _35reg590);
PUSH_CONT(co, 3, clofun26, 4, x, _35reg589, cc, _35reg587);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg591;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun25) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
PUSH_CONT(co, 0, clofun26, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun25) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg602 = primCons(expr, Nil);
Obj _35reg603 = primCons(intern("cons?"), _35reg602);
Obj _35reg604 = primCons(expr, Nil);
Obj _35reg605 = primCons(intern("car"), _35reg604);
Obj _35reg606 = primCons(expr, Nil);
Obj _35reg607 = primCons(intern("cdr"), _35reg606);
PUSH_CONT(co, 4, clofun25, 4, x, _35reg605, cc, _35reg603);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg607;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun25) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label4:
{
Obj _35val608 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg605= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg603= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 5, clofun25, 2, cc, _35reg603);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg605;
__arg3 = _35val608;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun25) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val609 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg603= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg610 = primCons(cc, Nil);
Obj _35reg611 = primCons(_35reg610, Nil);
Obj _35reg612 = primCons(_35val609, _35reg611);
Obj _35reg613 = primCons(_35reg603, _35reg612);
Obj _35reg614 = primCons(intern("if"), _35reg613);
__nargs = 2;
__arg1 = _35reg614;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun25) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun26(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val599 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val599;
PUSH_CONT(co, 1, clofun26, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun26) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val600 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val600;
PUSH_CONT(co, 2, clofun26, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun26) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val601 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val601;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun26) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val592 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg589= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg587= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 4, clofun26, 2, cc, _35reg587);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg589;
__arg3 = _35val592;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun26) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val593 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg587= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg594 = primCons(cc, Nil);
Obj _35reg595 = primCons(_35reg594, Nil);
Obj _35reg596 = primCons(_35val593, _35reg595);
Obj _35reg597 = primCons(_35reg587, _35reg596);
Obj _35reg598 = primCons(intern("if"), _35reg597);
__nargs = 2;
__arg1 = _35reg598;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun26) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val583 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val583;
PUSH_CONT(co, 0, clofun27, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun26) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun27(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val584 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val584;
PUSH_CONT(co, 1, clofun27, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun27) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val585 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val585;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun27) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val576 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg573= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg571= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 3, clofun27, 2, cc, _35reg571);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg573;
__arg3 = _35val576;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun27) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val577 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg571= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg578 = primCons(cc, Nil);
Obj _35reg579 = primCons(_35reg578, Nil);
Obj _35reg580 = primCons(_35val577, _35reg579);
Obj _35reg581 = primCons(_35reg571, _35reg580);
Obj _35reg582 = primCons(intern("if"), _35reg581);
__nargs = 2;
__arg1 = _35reg582;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun27) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val567 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val567;
PUSH_CONT(co, 5, clofun27, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun27) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val568 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val568;
PUSH_CONT(co, 0, clofun28, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun27) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun28(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val569 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val569;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun28) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj exp = __arg1;
Obj _35reg560 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rcons1"));
__arg1 = _35reg560;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun28) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj pat = __arg1;
Obj _35reg550 = PRIM_CDR(pat);
PUSH_CONT(co, 3, clofun28, 1, pat);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg550;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun28) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val551 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val551) {
Obj _35reg552 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = _35reg552;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun28) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg553 = PRIM_CAR(pat);
Obj _35reg554 = PRIM_CDR(pat);
PUSH_CONT(co, 4, clofun28, 1, _35reg553);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rcons1"));
__arg1 = _35reg554;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun28) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val555 = __arg1;
Obj _35reg553= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg556 = primCons(_35val555, Nil);
Obj _35reg557 = primCons(_35reg553, _35reg556);
Obj _35reg558 = primCons(intern("cons"), _35reg557);
__nargs = 2;
__arg1 = _35reg558;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun28) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x = __arg1;
Obj _35reg547 = primEQ(x, True);
if (True == _35reg547) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun28) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg548 = primEQ(x, False);
if (True == _35reg548) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun28) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun28) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
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

void clofun29(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj exp = __arg1;
Obj _35reg545 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-and"));
__arg1 = _35reg545;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun29) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj l = __arg1;
Obj _35reg533 = primEQ(Nil, l);
if (True == _35reg533) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun29) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg534 = PRIM_CAR(l);
Obj _35reg535 = primEQ(_35reg534, False);
if (True == _35reg535) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun29) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg536 = PRIM_CDR(l);
PUSH_CONT(co, 2, clofun29, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-and"));
__arg1 = _35reg536;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun29) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label2:
{
Obj _35val537 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val537;
Obj _35reg538 = primEQ(more, False);
if (True == _35reg538) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun29) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg539 = PRIM_CAR(l);
Obj _35reg540 = primCons(False, Nil);
Obj _35reg541 = primCons(more, _35reg540);
Obj _35reg542 = primCons(_35reg539, _35reg541);
Obj _35reg543 = primCons(intern("if"), _35reg542);
__nargs = 2;
__arg1 = _35reg543;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun29) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label3:
{
Obj exp = __arg1;
Obj _35reg531 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-or"));
__arg1 = _35reg531;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun29) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj l = __arg1;
Obj _35reg519 = primEQ(l, Nil);
if (True == _35reg519) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun29) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg520 = PRIM_CAR(l);
Obj _35reg521 = primEQ(_35reg520, True);
if (True == _35reg521) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun29) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg522 = PRIM_CDR(l);
PUSH_CONT(co, 5, clofun29, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-or"));
__arg1 = _35reg522;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun29) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label5:
{
Obj _35val523 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val523;
Obj _35reg524 = primEQ(more, True);
if (True == _35reg524) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun29) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg525 = PRIM_CAR(l);
Obj _35reg526 = primCons(more, Nil);
Obj _35reg527 = primCons(True, _35reg526);
Obj _35reg528 = primCons(_35reg525, _35reg527);
Obj _35reg529 = primCons(intern("if"), _35reg528);
__nargs = 2;
__arg1 = _35reg529;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun29) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun30(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj exp = __arg1;
Obj _35reg505 = PRIM_CDR(exp);
Obj _35reg506 = primEQ(Nil, _35reg505);
if (True == _35reg506) {
Obj _35reg507 = primCons(makeCString("no cond match"), Nil);
Obj _35reg508 = primCons(intern("error"), _35reg507);
__nargs = 2;
__arg1 = _35reg508;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun30) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 1, clofun30, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun30) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val509 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj curr = _35val509;
Obj _35reg510 = PRIM_CAR(curr);
PUSH_CONT(co, 2, clofun30, 2, exp, _35reg510);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun30) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val511 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg510= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 3, clofun30, 2, _35val511, _35reg510);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun30) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val512 = __arg1;
Obj _35val511= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg510= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg513 = primCons(intern("cond"), _35val512);
Obj _35reg514 = primCons(_35reg513, Nil);
Obj _35reg515 = primCons(_35val511, _35reg514);
Obj _35reg516 = primCons(_35reg510, _35reg515);
Obj _35reg517 = primCons(intern("if"), _35reg516);
__nargs = 2;
__arg1 = _35reg517;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun30) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj exp = __arg1;
Obj _35reg503 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-let"));
__arg1 = _35reg503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun30) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj exp = __arg1;
Obj _35reg491 = PRIM_CDR(exp);
PUSH_CONT(co, 0, clofun31, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun30) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun31(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val492 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val492) {
Obj _35reg493 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = _35reg493;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun31) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg494 = PRIM_CAR(exp);
PUSH_CONT(co, 1, clofun31, 2, exp, _35reg494);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun31) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val495 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg494= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 2, clofun31, 2, _35val495, _35reg494);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun31) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val496 = __arg1;
Obj _35val495= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg494= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 3, clofun31, 2, _35val495, _35reg494);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-let"));
__arg1 = _35val496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun31) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val497 = __arg1;
Obj _35val495= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg494= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg498 = primCons(_35val497, Nil);
Obj _35reg499 = primCons(_35val495, _35reg498);
Obj _35reg500 = primCons(_35reg494, _35reg499);
Obj _35reg501 = primCons(intern("let"), _35reg500);
__nargs = 2;
__arg1 = _35reg501;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun31) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x = __arg1;
Obj _35reg488 = primIsCons(x);
Obj _35reg489 = primNot(_35reg488);
__nargs = 2;
__arg1 = _35reg489;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun31) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _35reg483 = primIsCons(l);
if (True == _35reg483) {
Obj _35reg484 = PRIM_CAR(l);
Obj _35reg485 = primEQ(_35reg484, x);
if (True == _35reg485) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun31) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg486 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = _35reg486;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun31) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun31) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun32(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj exp = __arg1;
PUSH_CONT(co, 1, clofun32, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun32) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val473 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 2, clofun32, 2, exp, _35val473);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun32) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val474 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val473= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 3, clofun32, 2, _35val474, _35val473);
__nargs = 2;
__arg0 = globalRef(intern("cadddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun32) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val475 = __arg1;
Obj _35val474= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val473= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg476 = primCons(_35val475, Nil);
Obj _35reg477 = primCons(_35val474, _35reg476);
Obj _35reg478 = primCons(intern("lambda"), _35reg477);
Obj _35reg479 = primCons(_35reg478, Nil);
Obj _35reg480 = primCons(_35val473, _35reg479);
Obj _35reg481 = primCons(intern("def"), _35reg480);
__nargs = 2;
__arg1 = _35reg481;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun32) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj exp = __arg1;
Obj _35reg471 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun32) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj exp = __arg1;
PUSH_CONT(co, 0, clofun33, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun32) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun33(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val459 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg460 = primCons(_35val459, Nil);
Obj _35reg461 = primCons(intern("quote"), _35reg460);
PUSH_CONT(co, 1, clofun33, 2, exp, _35reg461);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun33) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val462 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg461= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 2, clofun33, 2, _35val462, _35reg461);
__nargs = 2;
__arg0 = globalRef(intern("cdddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun33) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val463 = __arg1;
Obj _35val462= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg461= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg464 = primCons(_35val462, _35val463);
Obj _35reg465 = primCons(intern("lambda"), _35reg464);
Obj _35reg466 = primCons(_35reg465, Nil);
Obj _35reg467 = primCons(_35reg461, _35reg466);
Obj _35reg468 = primCons(intern("cora/init#add-to-*macros*"), _35reg467);
__nargs = 2;
__arg1 = _35reg468;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun33) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj exp = __arg1;
Obj _35reg441 = primIsCons(exp);
if (True == _35reg441) {
Obj _35reg442 = PRIM_CAR(exp);
Obj _35reg443 = primEQ(_35reg442, globalRef(intern("*protect-symbol*")));
if (True == _35reg443) {
Obj _35reg444 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = _35reg444;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun33) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg445 = PRIM_CAR(exp);
Obj _35reg446 = primEQ(_35reg445, intern("lambda"));
if (True == _35reg446) {
PUSH_CONT(co, 0, clofun34, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun33) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg453 = PRIM_CAR(exp);
Obj _35reg454 = primEQ(_35reg453, intern("quote"));
if (True == _35reg454) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun33) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 4, clofun33, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand1"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun33) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun33) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label4:
{
Obj _35val456 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(5, clofun33, 1, 1, exp);
__arg1 = _35val456;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun33) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj exp1 = __arg1;
Obj _35reg455 = primEQ(exp1, closureRef(co, 0));
if (True == _35reg455) {
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#macroexpand-boot"));
__arg2 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun33) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun33) { co->ctx.pc = ps; goto fail; };
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

void clofun34(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val447 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 1, clofun34, 1, _35val447);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun34) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val448 = __arg1;
Obj _35val447= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 2, clofun34, 1, _35val447);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = _35val448;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun34) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val449 = __arg1;
Obj _35val447= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg450 = primCons(_35val449, Nil);
Obj _35reg451 = primCons(_35val447, _35reg450);
Obj _35reg452 = primCons(intern("lambda"), _35reg451);
__nargs = 2;
__arg1 = _35reg452;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun34) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = exp;
__arg2 = globalRef(intern("*macros*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun34) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj _35reg427 = primEQ(Nil, macros);
if (True == _35reg427) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun34) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg438 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(5, clofun34, 1, 2, exp, macros);
__arg1 = _35reg438;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun34) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj item = __arg1;
Obj _35reg428 = primIsCons(closureRef(co, 0));
if (True == _35reg428) {
Obj _35reg429 = PRIM_CAR(closureRef(co, 0));
Obj _35reg430 = PRIM_CAR(item);
Obj _35reg431 = primEQ(_35reg429, _35reg430);
if (True == _35reg431) {
if (True == True) {
Obj _35reg432 = PRIM_CDR(item);
__nargs = 2;
__arg0 = _35reg432;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun34) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg433 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun34) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg434 = PRIM_CDR(item);
__nargs = 2;
__arg0 = _35reg434;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun34) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg435 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg435;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun34) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg436 = PRIM_CDR(item);
__nargs = 2;
__arg0 = _35reg436;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun34) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg437 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg437;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun34) { co->ctx.pc = ps; goto fail; };
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

void clofun35(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj n = __arg1;
Obj v = __arg2;
Obj _35reg423 = primCons(n, v);
Obj _35reg424 = primCons(_35reg423, globalRef(intern("*macros*")));
Obj _35reg425 = primSet(co, intern("*macros*"), _35reg424);
__nargs = 2;
__arg1 = _35reg425;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun35) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
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
if (ps.func != clofun35) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj _35reg413 = primIsCons(l);
if (True == _35reg413) {
Obj _35reg414 = PRIM_CAR(l);
PUSH_CONT(co, 3, clofun35, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = _35reg414;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun35) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun35) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val415 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg416 = primCons(_35val415, res);
Obj _35reg417 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(intern("map-h"));
__arg1 = _35reg416;
__arg2 = f;
__arg3 = _35reg417;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun35) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj res = __arg1;
Obj l = __arg2;
Obj _35reg406 = primIsCons(l);
if (True == _35reg406) {
Obj _35reg407 = PRIM_CAR(l);
Obj _35reg408 = primCons(_35reg407, res);
Obj _35reg409 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#reverse-h"));
__arg1 = _35reg408;
__arg2 = _35reg409;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun35) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun35) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label5:
{
Obj x = __arg1;
Obj _35reg404 = primIsCons(x);
__nargs = 2;
__arg1 = _35reg404;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun35) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun36(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj exp = __arg1;
Obj _35reg396 = primIsCons(exp);
if (True == _35reg396) {
Obj _35reg397 = PRIM_CAR(exp);
Obj _35reg398 = PRIM_CDR(exp);
PUSH_CONT(co, 1, clofun36, 1, _35reg397);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg398;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun36) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun36) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label1:
{
Obj _35val399 = __arg1;
Obj _35reg397= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg400 = primCons(_35val399, Nil);
Obj _35reg401 = primCons(_35reg397, _35reg400);
Obj _35reg402 = primCons(intern("cons"), _35reg401);
__nargs = 2;
__arg1 = _35reg402;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun36) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj x = __arg1;
Obj _35reg392 = PRIM_CDR(x);
Obj _35reg393 = PRIM_CDR(_35reg392);
Obj _35reg394 = PRIM_CDR(_35reg393);
__nargs = 2;
__arg1 = _35reg394;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun36) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj x = __arg1;
Obj _35reg387 = PRIM_CDR(x);
Obj _35reg388 = PRIM_CDR(_35reg387);
Obj _35reg389 = PRIM_CDR(_35reg388);
Obj _35reg390 = PRIM_CAR(_35reg389);
__nargs = 2;
__arg1 = _35reg390;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun36) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x = __arg1;
Obj _35reg383 = PRIM_CDR(x);
Obj _35reg384 = PRIM_CDR(_35reg383);
Obj _35reg385 = PRIM_CAR(_35reg384);
__nargs = 2;
__arg1 = _35reg385;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun36) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x = __arg1;
Obj _35reg380 = PRIM_CDR(x);
Obj _35reg381 = PRIM_CDR(_35reg380);
__nargs = 2;
__arg1 = _35reg381;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun36) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun37(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x = __arg1;
Obj _35reg377 = PRIM_CAR(x);
Obj _35reg378 = PRIM_CDR(_35reg377);
__nargs = 2;
__arg1 = _35reg378;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun37) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x = __arg1;
Obj _35reg374 = PRIM_CAR(x);
Obj _35reg375 = PRIM_CAR(_35reg374);
__nargs = 2;
__arg1 = _35reg375;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun37) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj x = __arg1;
Obj _35reg371 = PRIM_CDR(x);
Obj _35reg372 = PRIM_CAR(_35reg371);
__nargs = 2;
__arg1 = _35reg372;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun37) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj x = __arg1;
Obj _35reg369 = primEQ(x, Nil);
__nargs = 2;
__arg1 = _35reg369;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun37) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

