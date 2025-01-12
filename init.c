#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun2030(struct Cora* co);
void _35clofun2029(struct Cora* co);
void _35clofun2028(struct Cora* co);
void _35clofun2027(struct Cora* co);
void _35clofun2026(struct Cora* co);
void _35clofun2025(struct Cora* co);
void _35clofun2024(struct Cora* co);
void _35clofun2023(struct Cora* co);
void _35clofun2022(struct Cora* co);
void _35clofun2021(struct Cora* co);


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
Obj _35reg1054 = primSet(co, intern("null?"), makeNative(0, _35clofun2021, 1, 0));
Obj _35reg1057 = primSet(co, intern("cadr"), makeNative(1, _35clofun2021, 1, 0));
Obj _35reg1060 = primSet(co, intern("caar"), makeNative(2, _35clofun2021, 1, 0));
Obj _35reg1063 = primSet(co, intern("cdar"), makeNative(3, _35clofun2021, 1, 0));
Obj _35reg1066 = primSet(co, intern("cddr"), makeNative(4, _35clofun2021, 1, 0));
Obj _35reg1070 = primSet(co, intern("caddr"), makeNative(5, _35clofun2021, 1, 0));
Obj _35reg1075 = primSet(co, intern("cadddr"), makeNative(6, _35clofun2021, 1, 0));
Obj _35reg1079 = primSet(co, intern("cdddr"), makeNative(7, _35clofun2021, 1, 0));
Obj _35reg1087 = primSet(co, intern("rcons"), makeNative(9, _35clofun2021, 1, 0));
Obj _35reg1089 = primSet(co, intern("pair?"), makeNative(10, _35clofun2021, 1, 0));
Obj _35reg1094 = primSet(co, intern("cora/init#reverse-h"), makeNative(11, _35clofun2021, 2, 0));
pushCont(co, 20, _35clofun2030, 0);
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

void _35clofun2030(struct Cora* co){
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
Obj _35reg1998 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-begin"));
__arg1 = _35reg1998;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc1052 = makeNative(1, _35clofun2030, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2030) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2004 = __arg1;
Obj _35reg2005 = primCons(intern("list"), _35val2004);
__nargs = 2;
__arg1 = _35reg2005;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2030) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35cc1051 = makeNative(2, _35clofun2030, 0, 1, closureRef(co, 0));
Obj _35reg2000 = primIsCons(closureRef(co, 0));
if (True == _35reg2000) {
Obj _35reg2001 = primCar(closureRef(co, 0));
Obj x = _35reg2001;
Obj _35reg2002 = primCdr(closureRef(co, 0));
Obj more = _35reg2002;
Obj _35reg2003 = primCons(x, more);
pushCont(co, 3, _35clofun2030, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#rewrite-backquote"));
__arg2 = _35reg2003;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1051;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc1050 = makeNative(4, _35clofun2030, 0, 1, closureRef(co, 0));
Obj _35reg2006 = primIsCons(closureRef(co, 0));
if (True == _35reg2006) {
Obj _35reg2007 = primCar(closureRef(co, 0));
Obj _35reg2008 = primEQ(intern("unquote"), _35reg2007);
if (True == _35reg2008) {
Obj _35reg2009 = primCdr(closureRef(co, 0));
Obj _35reg2010 = primIsCons(_35reg2009);
if (True == _35reg2010) {
Obj _35reg2011 = primCdr(closureRef(co, 0));
Obj _35reg2012 = primCar(_35reg2011);
Obj x = _35reg2012;
Obj _35reg2013 = primCdr(closureRef(co, 0));
Obj _35reg2014 = primCdr(_35reg2013);
Obj _35reg2015 = primEQ(Nil, _35reg2014);
if (True == _35reg2015) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2030) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1050;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1050;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1050;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1050;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35p1048 = __arg1;
Obj _35cc1049 = makeNative(5, _35clofun2030, 0, 1, _35p1048);
Obj x = _35p1048;
Obj _35reg2016 = primIsSymbol(x);
if (True == _35reg2016) {
Obj _35reg2017 = primCons(x, Nil);
Obj _35reg2018 = primCons(intern("quote"), _35reg2017);
__nargs = 2;
__arg1 = _35reg2018;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2030) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1049;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2020 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-backquote"));
__arg1 = _35val2020;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
pushCont(co, 7, _35clofun2030, 0);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1999 = __arg1;
Obj _35reg2019 = primSet(co, intern("cora/init#rewrite-backquote"), makeNative(6, _35clofun2030, 1, 0));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("backquote");
__arg2 = makeNative(8, _35clofun2030, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val1550 = __arg1;
Obj _35reg1813 = primSet(co, intern("cora/init#propagate-boolean0"), makeNative(11, _35clofun2028, 1, 0));
Obj _35reg1971 = primSet(co, intern("cora/init#propagate-boolean"), makeNative(13, _35clofun2029, 1, 0));
Obj _35reg1973 = primSet(co, intern("macroexpand"), makeNative(15, _35clofun2029, 1, 0));
Obj _35reg1997 = primSet(co, intern("cora/init#rewrite-begin"), makeNative(20, _35clofun2029, 1, 0));
pushCont(co, 9, _35clofun2030, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("begin");
__arg2 = makeNative(0, _35clofun2030, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val1442 = __arg1;
Obj _35reg1494 = primSet(co, intern("cora/init#extract-rules1"), makeNative(15, _35clofun2026, 3, 0));
Obj _35reg1495 = primSet(co, intern("cora/init#extract-rules"), makeNative(16, _35clofun2026, 1, 0));
Obj _35reg1500 = primSet(co, intern("cora/init#rules-patterns"), makeNative(19, _35clofun2026, 2, 0));
Obj _35reg1504 = primSet(co, intern("cora/init#length-h"), makeNative(20, _35clofun2026, 2, 0));
Obj _35reg1505 = primSet(co, intern("length"), makeNative(0, _35clofun2027, 1, 0));
Obj _35reg1513 = primSet(co, intern("cora/init#filter-h"), makeNative(2, _35clofun2027, 3, 0));
Obj _35reg1514 = primSet(co, intern("filter"), makeNative(3, _35clofun2027, 2, 0));
Obj _35reg1520 = primSet(co, intern("append"), makeNative(5, _35clofun2027, 2, 0));
Obj _35reg1531 = primSet(co, intern("cora/init#rules-arg-count"), makeNative(12, _35clofun2027, 1, 0));
Obj _35reg1537 = primSet(co, intern("cora/init#gen-parameters"), makeNative(14, _35clofun2027, 1, 0));
pushCont(co, 10, _35clofun2030, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("func");
__arg2 = makeNative(20, _35clofun2027, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val1249 = __arg1;
Obj _35reg1303 = primSet(co, intern("cora/init#match-cons-expander"), makeNative(12, _35clofun2024, 4, 0));
Obj _35reg1336 = primSet(co, intern("cora/init#match1"), makeNative(18, _35clofun2024, 4, 0));
Obj _35reg1363 = primSet(co, intern("cora/init#extract-rule-action"), makeNative(5, _35clofun2025, 2, 0));
Obj _35reg1415 = primSet(co, intern("cora/init#match-helper"), makeNative(0, _35clofun2026, 2, 0));
Obj _35reg1441 = primSet(co, intern("cora/init#rewrite-match"), makeNative(7, _35clofun2026, 1, 0));
pushCont(co, 11, _35clofun2030, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("match");
__arg2 = makeNative(8, _35clofun2026, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val1234 = __arg1;
Obj _35reg1237 = primSet(co, intern("boolean?"), makeNative(11, _35clofun2023, 1, 0));
Obj _35reg1247 = primSet(co, intern("cora/init#rcons1"), makeNative(14, _35clofun2023, 1, 0));
pushCont(co, 12, _35clofun2030, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("list-rest");
__arg2 = makeNative(15, _35clofun2023, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1220 = __arg1;
Obj _35reg1232 = primSet(co, intern("cora/init#rewrite-and"), makeNative(9, _35clofun2023, 1, 0));
pushCont(co, 13, _35clofun2030, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("and");
__arg2 = makeNative(10, _35clofun2023, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val1206 = __arg1;
Obj _35reg1218 = primSet(co, intern("cora/init#rewrite-or"), makeNative(6, _35clofun2023, 1, 0));
pushCont(co, 14, _35clofun2030, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("or");
__arg2 = makeNative(7, _35clofun2023, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val1192 = __arg1;
pushCont(co, 15, _35clofun2030, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("cond");
__arg2 = makeNative(4, _35clofun2023, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1170 = __arg1;
Obj _35reg1175 = primSet(co, intern("elem?"), makeNative(14, _35clofun2022, 2, 0));
Obj _35reg1178 = primSet(co, intern("atom?"), makeNative(15, _35clofun2022, 1, 0));
Obj _35reg1190 = primSet(co, intern("cora/init#rewrite-let"), makeNative(20, _35clofun2022, 1, 0));
pushCont(co, 16, _35clofun2030, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("let");
__arg2 = makeNative(0, _35clofun2023, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1158 = __arg1;
pushCont(co, 17, _35clofun2030, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("defun");
__arg2 = makeNative(13, _35clofun2022, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1156 = __arg1;
pushCont(co, 18, _35clofun2030, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("list");
__arg2 = makeNative(9, _35clofun2022, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1095 = __arg1;
Obj _35reg1096 = primSet(co, intern("reverse"), _35val1095);
Obj _35reg1102 = primSet(co, intern("map-h"), makeNative(13, _35clofun2021, 3, 0));
Obj _35reg1103 = primSet(co, intern("map"), makeNative(14, _35clofun2021, 2, 0));
Obj _35reg1104 = primSet(co, intern("*macros*"), Nil);
Obj _35reg1105 = primGenSym(intern("protect"));
Obj _35reg1106 = primSet(co, intern("*protect-symbol*"), _35reg1105);
Obj _35reg1108 = primSet(co, intern("cora/init#protect"), makeNative(15, _35clofun2021, 1, 0));
Obj _35reg1112 = primSet(co, intern("cora/init#add-to-*macros*"), makeNative(16, _35clofun2021, 2, 0));
Obj _35reg1125 = primSet(co, intern("cora/init#macroexpand1-h"), makeNative(18, _35clofun2021, 2, 0));
Obj _35reg1126 = primSet(co, intern("cora/init#macroexpand1"), makeNative(19, _35clofun2021, 1, 0));
Obj _35reg1143 = primSet(co, intern("cora/init#macroexpand-boot"), makeNative(4, _35clofun2022, 1, 0));
Obj _35reg1144 = primSet(co, intern("macroexpand"), globalRef(intern("cora/init#macroexpand-boot")));
Obj _35reg1155 = primSet(co, intern("defmacro-macro"), makeNative(8, _35clofun2022, 1, 0));
pushCont(co, 19, _35clofun2030, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("defmacro");
__arg2 = globalRef(intern("defmacro-macro"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2030) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2029(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1882 = __arg1;
Obj x1 = _35val1882;
Obj _35reg1883 = primCons(x1, Nil);
Obj _35reg1884 = primCons(intern("not"), _35reg1883);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1884;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1039 = makeNative(20, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1872 = primIsCons(closureRef(co, 0));
if (True == _35reg1872) {
Obj _35reg1873 = primCar(closureRef(co, 0));
Obj _35reg1874 = primEQ(intern("not"), _35reg1873);
if (True == _35reg1874) {
Obj _35reg1875 = primCdr(closureRef(co, 0));
Obj _35reg1876 = primIsCons(_35reg1875);
if (True == _35reg1876) {
Obj _35reg1877 = primCdr(closureRef(co, 0));
Obj _35reg1878 = primCar(_35reg1877);
Obj x = _35reg1878;
Obj _35reg1879 = primCdr(closureRef(co, 0));
Obj _35reg1880 = primCdr(_35reg1879);
Obj _35reg1881 = primEQ(Nil, _35reg1880);
if (True == _35reg1881) {
pushCont(co, 0, _35clofun2029, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val1895 = __arg1;
Obj x1 = _35val1895;
Obj _35reg1896 = primCons(x1, Nil);
Obj _35reg1897 = primCons(intern("null?"), _35reg1896);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1897;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1038 = makeNative(1, _35clofun2029, 0, 1, closureRef(co, 0));
Obj _35reg1885 = primIsCons(closureRef(co, 0));
if (True == _35reg1885) {
Obj _35reg1886 = primCar(closureRef(co, 0));
Obj _35reg1887 = primEQ(intern("null?"), _35reg1886);
if (True == _35reg1887) {
Obj _35reg1888 = primCdr(closureRef(co, 0));
Obj _35reg1889 = primIsCons(_35reg1888);
if (True == _35reg1889) {
Obj _35reg1890 = primCdr(closureRef(co, 0));
Obj _35reg1891 = primCar(_35reg1890);
Obj x = _35reg1891;
Obj _35reg1892 = primCdr(closureRef(co, 0));
Obj _35reg1893 = primCdr(_35reg1892);
Obj _35reg1894 = primEQ(Nil, _35reg1893);
if (True == _35reg1894) {
pushCont(co, 2, _35clofun2029, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val1916 = __arg1;
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y1 = _35val1916;
Obj _35reg1917 = primCons(y1, Nil);
Obj _35reg1918 = primCons(x1, _35reg1917);
Obj _35reg1919 = primCons(intern("and"), _35reg1918);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1919;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1915 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1 = _35val1915;
pushCont(co, 4, _35clofun2029, 1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1037 = makeNative(3, _35clofun2029, 0, 1, closureRef(co, 0));
Obj _35reg1898 = primIsCons(closureRef(co, 0));
if (True == _35reg1898) {
Obj _35reg1899 = primCar(closureRef(co, 0));
Obj _35reg1900 = primEQ(intern("and"), _35reg1899);
if (True == _35reg1900) {
Obj _35reg1901 = primCdr(closureRef(co, 0));
Obj _35reg1902 = primIsCons(_35reg1901);
if (True == _35reg1902) {
Obj _35reg1903 = primCdr(closureRef(co, 0));
Obj _35reg1904 = primCar(_35reg1903);
Obj x = _35reg1904;
Obj _35reg1905 = primCdr(closureRef(co, 0));
Obj _35reg1906 = primCdr(_35reg1905);
Obj _35reg1907 = primIsCons(_35reg1906);
if (True == _35reg1907) {
Obj _35reg1908 = primCdr(closureRef(co, 0));
Obj _35reg1909 = primCdr(_35reg1908);
Obj _35reg1910 = primCar(_35reg1909);
Obj y = _35reg1910;
Obj _35reg1911 = primCdr(closureRef(co, 0));
Obj _35reg1912 = primCdr(_35reg1911);
Obj _35reg1913 = primCdr(_35reg1912);
Obj _35reg1914 = primEQ(Nil, _35reg1913);
if (True == _35reg1914) {
pushCont(co, 5, _35clofun2029, 1, y);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1037;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1037;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1037;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1037;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1037;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val1930 = __arg1;
Obj x1 = _35val1930;
Obj _35reg1931 = primCons(x1, Nil);
Obj _35reg1932 = primCons(intern("cdr"), _35reg1931);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1932;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc1036 = makeNative(6, _35clofun2029, 0, 1, closureRef(co, 0));
Obj _35reg1920 = primIsCons(closureRef(co, 0));
if (True == _35reg1920) {
Obj _35reg1921 = primCar(closureRef(co, 0));
Obj _35reg1922 = primEQ(intern("cdr"), _35reg1921);
if (True == _35reg1922) {
Obj _35reg1923 = primCdr(closureRef(co, 0));
Obj _35reg1924 = primIsCons(_35reg1923);
if (True == _35reg1924) {
Obj _35reg1925 = primCdr(closureRef(co, 0));
Obj _35reg1926 = primCar(_35reg1925);
Obj x = _35reg1926;
Obj _35reg1927 = primCdr(closureRef(co, 0));
Obj _35reg1928 = primCdr(_35reg1927);
Obj _35reg1929 = primEQ(Nil, _35reg1928);
if (True == _35reg1929) {
pushCont(co, 7, _35clofun2029, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1036;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1036;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1036;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1036;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val1943 = __arg1;
Obj x1 = _35val1943;
Obj _35reg1944 = primCons(x1, Nil);
Obj _35reg1945 = primCons(intern("car"), _35reg1944);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1945;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc1035 = makeNative(8, _35clofun2029, 0, 1, closureRef(co, 0));
Obj _35reg1933 = primIsCons(closureRef(co, 0));
if (True == _35reg1933) {
Obj _35reg1934 = primCar(closureRef(co, 0));
Obj _35reg1935 = primEQ(intern("car"), _35reg1934);
if (True == _35reg1935) {
Obj _35reg1936 = primCdr(closureRef(co, 0));
Obj _35reg1937 = primIsCons(_35reg1936);
if (True == _35reg1937) {
Obj _35reg1938 = primCdr(closureRef(co, 0));
Obj _35reg1939 = primCar(_35reg1938);
Obj x = _35reg1939;
Obj _35reg1940 = primCdr(closureRef(co, 0));
Obj _35reg1941 = primCdr(_35reg1940);
Obj _35reg1942 = primEQ(Nil, _35reg1941);
if (True == _35reg1942) {
pushCont(co, 9, _35clofun2029, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val1956 = __arg1;
Obj x1 = _35val1956;
Obj _35reg1957 = primCons(x1, Nil);
Obj _35reg1958 = primCons(intern("cons?"), _35reg1957);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1958;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc1034 = makeNative(10, _35clofun2029, 0, 1, closureRef(co, 0));
Obj _35reg1946 = primIsCons(closureRef(co, 0));
if (True == _35reg1946) {
Obj _35reg1947 = primCar(closureRef(co, 0));
Obj _35reg1948 = primEQ(intern("cons?"), _35reg1947);
if (True == _35reg1948) {
Obj _35reg1949 = primCdr(closureRef(co, 0));
Obj _35reg1950 = primIsCons(_35reg1949);
if (True == _35reg1950) {
Obj _35reg1951 = primCdr(closureRef(co, 0));
Obj _35reg1952 = primCar(_35reg1951);
Obj x = _35reg1952;
Obj _35reg1953 = primCdr(closureRef(co, 0));
Obj _35reg1954 = primCdr(_35reg1953);
Obj _35reg1955 = primEQ(Nil, _35reg1954);
if (True == _35reg1955) {
pushCont(co, 11, _35clofun2029, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1034;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1034;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1034;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1034;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35p1032 = __arg1;
Obj _35cc1033 = makeNative(12, _35clofun2029, 0, 1, _35p1032);
Obj _35reg1959 = primIsCons(_35p1032);
if (True == _35reg1959) {
Obj _35reg1960 = primCar(_35p1032);
Obj _35reg1961 = primEQ(intern("quote"), _35reg1960);
if (True == _35reg1961) {
Obj _35reg1962 = primCdr(_35p1032);
Obj _35reg1963 = primIsCons(_35reg1962);
if (True == _35reg1963) {
Obj _35reg1964 = primCdr(_35p1032);
Obj _35reg1965 = primCar(_35reg1964);
Obj x = _35reg1965;
Obj _35reg1966 = primCdr(_35p1032);
Obj _35reg1967 = primCdr(_35reg1966);
Obj _35reg1968 = primEQ(Nil, _35reg1967);
if (True == _35reg1968) {
Obj _35reg1969 = primCons(x, Nil);
Obj _35reg1970 = primCons(intern("quote"), _35reg1969);
__nargs = 2;
__arg1 = _35reg1970;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2029) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1033;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1033;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1033;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1033;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val1972 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = _35val1972;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj exp = __arg1;
pushCont(co, 14, _35clofun2029, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1977 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1978 = primCons(_35val1977, Nil);
Obj _35reg1979 = primCons(x, _35reg1978);
Obj _35reg1980 = primCons(intern("do"), _35reg1979);
__nargs = 2;
__arg1 = _35reg1980;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2029) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35cc1047 = makeNative(16, _35clofun2029, 0, 0);
Obj _35reg1974 = primIsCons(closureRef(co, 0));
if (True == _35reg1974) {
Obj _35reg1975 = primCar(closureRef(co, 0));
Obj x = _35reg1975;
Obj _35reg1976 = primCdr(closureRef(co, 0));
Obj y = _35reg1976;
pushCont(co, 17, _35clofun2029, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-begin"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc1046 = makeNative(18, _35clofun2029, 0, 1, closureRef(co, 0));
Obj _35reg1981 = primIsCons(closureRef(co, 0));
if (True == _35reg1981) {
Obj _35reg1982 = primCar(closureRef(co, 0));
Obj x = _35reg1982;
Obj _35reg1983 = primCdr(closureRef(co, 0));
Obj _35reg1984 = primIsCons(_35reg1983);
if (True == _35reg1984) {
Obj _35reg1985 = primCdr(closureRef(co, 0));
Obj _35reg1986 = primCar(_35reg1985);
Obj y = _35reg1986;
Obj _35reg1987 = primCdr(closureRef(co, 0));
Obj _35reg1988 = primCdr(_35reg1987);
Obj _35reg1989 = primEQ(Nil, _35reg1988);
if (True == _35reg1989) {
Obj _35reg1990 = primCons(y, Nil);
Obj _35reg1991 = primCons(x, _35reg1990);
Obj _35reg1992 = primCons(intern("do"), _35reg1991);
__nargs = 2;
__arg1 = _35reg1992;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2029) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1046;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1046;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1046;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35p1044 = __arg1;
Obj _35cc1045 = makeNative(19, _35clofun2029, 0, 1, _35p1044);
Obj _35reg1993 = primIsCons(_35p1044);
if (True == _35reg1993) {
Obj _35reg1994 = primCar(_35p1044);
Obj x = _35reg1994;
Obj _35reg1995 = primCdr(_35p1044);
Obj _35reg1996 = primEQ(Nil, _35reg1995);
if (True == _35reg1996) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2029) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1045;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1045;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2029) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2028(struct Cora* co){
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
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1031 = makeNative(0, _35clofun2028, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35cc1030 = makeNative(1, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1551 = primIsCons(closureRef(co, 0));
if (True == _35reg1551) {
Obj _35reg1552 = primCar(closureRef(co, 0));
Obj _35reg1553 = primEQ(intern("if"), _35reg1552);
if (True == _35reg1553) {
Obj _35reg1554 = primCdr(closureRef(co, 0));
Obj _35reg1555 = primIsCons(_35reg1554);
if (True == _35reg1555) {
Obj _35reg1556 = primCdr(closureRef(co, 0));
Obj _35reg1557 = primCar(_35reg1556);
Obj _35reg1558 = primEQ(False, _35reg1557);
if (True == _35reg1558) {
Obj _35reg1559 = primCdr(closureRef(co, 0));
Obj _35reg1560 = primCdr(_35reg1559);
Obj _35reg1561 = primIsCons(_35reg1560);
if (True == _35reg1561) {
Obj _35reg1562 = primCdr(closureRef(co, 0));
Obj _35reg1563 = primCdr(_35reg1562);
Obj _35reg1564 = primCar(_35reg1563);
Obj y = _35reg1564;
Obj _35reg1565 = primCdr(closureRef(co, 0));
Obj _35reg1566 = primCdr(_35reg1565);
Obj _35reg1567 = primCdr(_35reg1566);
Obj _35reg1568 = primIsCons(_35reg1567);
if (True == _35reg1568) {
Obj _35reg1569 = primCdr(closureRef(co, 0));
Obj _35reg1570 = primCdr(_35reg1569);
Obj _35reg1571 = primCdr(_35reg1570);
Obj _35reg1572 = primCar(_35reg1571);
Obj z = _35reg1572;
Obj _35reg1573 = primCdr(closureRef(co, 0));
Obj _35reg1574 = primCdr(_35reg1573);
Obj _35reg1575 = primCdr(_35reg1574);
Obj _35reg1576 = primCdr(_35reg1575);
Obj _35reg1577 = primEQ(Nil, _35reg1576);
if (True == _35reg1577) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc1029 = makeNative(2, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1578 = primIsCons(closureRef(co, 0));
if (True == _35reg1578) {
Obj _35reg1579 = primCar(closureRef(co, 0));
Obj _35reg1580 = primEQ(intern("if"), _35reg1579);
if (True == _35reg1580) {
Obj _35reg1581 = primCdr(closureRef(co, 0));
Obj _35reg1582 = primIsCons(_35reg1581);
if (True == _35reg1582) {
Obj _35reg1583 = primCdr(closureRef(co, 0));
Obj _35reg1584 = primCar(_35reg1583);
Obj _35reg1585 = primEQ(True, _35reg1584);
if (True == _35reg1585) {
Obj _35reg1586 = primCdr(closureRef(co, 0));
Obj _35reg1587 = primCdr(_35reg1586);
Obj _35reg1588 = primIsCons(_35reg1587);
if (True == _35reg1588) {
Obj _35reg1589 = primCdr(closureRef(co, 0));
Obj _35reg1590 = primCdr(_35reg1589);
Obj _35reg1591 = primCar(_35reg1590);
Obj y = _35reg1591;
Obj _35reg1592 = primCdr(closureRef(co, 0));
Obj _35reg1593 = primCdr(_35reg1592);
Obj _35reg1594 = primCdr(_35reg1593);
Obj _35reg1595 = primIsCons(_35reg1594);
if (True == _35reg1595) {
Obj _35reg1596 = primCdr(closureRef(co, 0));
Obj _35reg1597 = primCdr(_35reg1596);
Obj _35reg1598 = primCdr(_35reg1597);
Obj _35reg1599 = primCar(_35reg1598);
Obj z = _35reg1599;
Obj _35reg1600 = primCdr(closureRef(co, 0));
Obj _35reg1601 = primCdr(_35reg1600);
Obj _35reg1602 = primCdr(_35reg1601);
Obj _35reg1603 = primCdr(_35reg1602);
Obj _35reg1604 = primEQ(Nil, _35reg1603);
if (True == _35reg1604) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc1028 = makeNative(3, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1605 = primIsCons(closureRef(co, 0));
if (True == _35reg1605) {
Obj _35reg1606 = primCar(closureRef(co, 0));
Obj _35reg1607 = primEQ(intern("not"), _35reg1606);
if (True == _35reg1607) {
Obj _35reg1608 = primCdr(closureRef(co, 0));
Obj _35reg1609 = primIsCons(_35reg1608);
if (True == _35reg1609) {
Obj _35reg1610 = primCdr(closureRef(co, 0));
Obj _35reg1611 = primCar(_35reg1610);
Obj _35reg1612 = primEQ(False, _35reg1611);
if (True == _35reg1612) {
Obj _35reg1613 = primCdr(closureRef(co, 0));
Obj _35reg1614 = primCdr(_35reg1613);
Obj _35reg1615 = primEQ(Nil, _35reg1614);
if (True == _35reg1615) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc1027 = makeNative(4, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1616 = primIsCons(closureRef(co, 0));
if (True == _35reg1616) {
Obj _35reg1617 = primCar(closureRef(co, 0));
Obj _35reg1618 = primEQ(intern("not"), _35reg1617);
if (True == _35reg1618) {
Obj _35reg1619 = primCdr(closureRef(co, 0));
Obj _35reg1620 = primIsCons(_35reg1619);
if (True == _35reg1620) {
Obj _35reg1621 = primCdr(closureRef(co, 0));
Obj _35reg1622 = primCar(_35reg1621);
Obj _35reg1623 = primEQ(True, _35reg1622);
if (True == _35reg1623) {
Obj _35reg1624 = primCdr(closureRef(co, 0));
Obj _35reg1625 = primCdr(_35reg1624);
Obj _35reg1626 = primEQ(Nil, _35reg1625);
if (True == _35reg1626) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc1026 = makeNative(5, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1627 = primIsCons(closureRef(co, 0));
if (True == _35reg1627) {
Obj _35reg1628 = primCar(closureRef(co, 0));
Obj _35reg1629 = primEQ(intern("null?"), _35reg1628);
if (True == _35reg1629) {
Obj _35reg1630 = primCdr(closureRef(co, 0));
Obj _35reg1631 = primIsCons(_35reg1630);
if (True == _35reg1631) {
Obj _35reg1632 = primCdr(closureRef(co, 0));
Obj _35reg1633 = primCar(_35reg1632);
Obj _35reg1634 = primIsCons(_35reg1633);
if (True == _35reg1634) {
Obj _35reg1635 = primCdr(closureRef(co, 0));
Obj _35reg1636 = primCar(_35reg1635);
Obj _35reg1637 = primCar(_35reg1636);
Obj _35reg1638 = primEQ(intern("cons"), _35reg1637);
if (True == _35reg1638) {
Obj _35reg1639 = primCdr(closureRef(co, 0));
Obj _35reg1640 = primCar(_35reg1639);
Obj _35reg1641 = primCdr(_35reg1640);
Obj _35reg1642 = primIsCons(_35reg1641);
if (True == _35reg1642) {
Obj _35reg1643 = primCdr(closureRef(co, 0));
Obj _35reg1644 = primCar(_35reg1643);
Obj _35reg1645 = primCdr(_35reg1644);
Obj _35reg1646 = primCar(_35reg1645);
Obj __ = _35reg1646;
Obj _35reg1647 = primCdr(closureRef(co, 0));
Obj _35reg1648 = primCar(_35reg1647);
Obj _35reg1649 = primCdr(_35reg1648);
Obj _35reg1650 = primCdr(_35reg1649);
Obj _35reg1651 = primIsCons(_35reg1650);
if (True == _35reg1651) {
Obj _35reg1652 = primCdr(closureRef(co, 0));
Obj _35reg1653 = primCar(_35reg1652);
Obj _35reg1654 = primCdr(_35reg1653);
Obj _35reg1655 = primCdr(_35reg1654);
Obj _35reg1656 = primCar(_35reg1655);
__ = _35reg1656;
Obj _35reg1657 = primCdr(closureRef(co, 0));
Obj _35reg1658 = primCar(_35reg1657);
Obj _35reg1659 = primCdr(_35reg1658);
Obj _35reg1660 = primCdr(_35reg1659);
Obj _35reg1661 = primCdr(_35reg1660);
Obj _35reg1662 = primEQ(Nil, _35reg1661);
if (True == _35reg1662) {
Obj _35reg1663 = primCdr(closureRef(co, 0));
Obj _35reg1664 = primCdr(_35reg1663);
Obj _35reg1665 = primEQ(Nil, _35reg1664);
if (True == _35reg1665) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc1025 = makeNative(6, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1666 = primIsCons(closureRef(co, 0));
if (True == _35reg1666) {
Obj _35reg1667 = primCar(closureRef(co, 0));
Obj _35reg1668 = primEQ(intern("null?"), _35reg1667);
if (True == _35reg1668) {
Obj _35reg1669 = primCdr(closureRef(co, 0));
Obj _35reg1670 = primIsCons(_35reg1669);
if (True == _35reg1670) {
Obj _35reg1671 = primCdr(closureRef(co, 0));
Obj _35reg1672 = primCar(_35reg1671);
Obj _35reg1673 = primEQ(Nil, _35reg1672);
if (True == _35reg1673) {
Obj _35reg1674 = primCdr(closureRef(co, 0));
Obj _35reg1675 = primCdr(_35reg1674);
Obj _35reg1676 = primEQ(Nil, _35reg1675);
if (True == _35reg1676) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35cc1024 = makeNative(7, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1677 = primIsCons(closureRef(co, 0));
if (True == _35reg1677) {
Obj _35reg1678 = primCar(closureRef(co, 0));
Obj _35reg1679 = primEQ(intern("and"), _35reg1678);
if (True == _35reg1679) {
Obj _35reg1680 = primCdr(closureRef(co, 0));
Obj _35reg1681 = primIsCons(_35reg1680);
if (True == _35reg1681) {
Obj _35reg1682 = primCdr(closureRef(co, 0));
Obj _35reg1683 = primCar(_35reg1682);
Obj _35reg1684 = primEQ(True, _35reg1683);
if (True == _35reg1684) {
Obj _35reg1685 = primCdr(closureRef(co, 0));
Obj _35reg1686 = primCdr(_35reg1685);
Obj _35reg1687 = primIsCons(_35reg1686);
if (True == _35reg1687) {
Obj _35reg1688 = primCdr(closureRef(co, 0));
Obj _35reg1689 = primCdr(_35reg1688);
Obj _35reg1690 = primCar(_35reg1689);
Obj _35reg1691 = primEQ(True, _35reg1690);
if (True == _35reg1691) {
Obj _35reg1692 = primCdr(closureRef(co, 0));
Obj _35reg1693 = primCdr(_35reg1692);
Obj _35reg1694 = primCdr(_35reg1693);
Obj _35reg1695 = primEQ(Nil, _35reg1694);
if (True == _35reg1695) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc1023 = makeNative(8, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1696 = primIsCons(closureRef(co, 0));
if (True == _35reg1696) {
Obj _35reg1697 = primCar(closureRef(co, 0));
Obj _35reg1698 = primEQ(intern("cons?"), _35reg1697);
if (True == _35reg1698) {
Obj _35reg1699 = primCdr(closureRef(co, 0));
Obj _35reg1700 = primIsCons(_35reg1699);
if (True == _35reg1700) {
Obj _35reg1701 = primCdr(closureRef(co, 0));
Obj _35reg1702 = primCar(_35reg1701);
Obj _35reg1703 = primIsCons(_35reg1702);
if (True == _35reg1703) {
Obj _35reg1704 = primCdr(closureRef(co, 0));
Obj _35reg1705 = primCar(_35reg1704);
Obj _35reg1706 = primCar(_35reg1705);
Obj _35reg1707 = primEQ(intern("cons"), _35reg1706);
if (True == _35reg1707) {
Obj _35reg1708 = primCdr(closureRef(co, 0));
Obj _35reg1709 = primCar(_35reg1708);
Obj _35reg1710 = primCdr(_35reg1709);
Obj _35reg1711 = primIsCons(_35reg1710);
if (True == _35reg1711) {
Obj _35reg1712 = primCdr(closureRef(co, 0));
Obj _35reg1713 = primCar(_35reg1712);
Obj _35reg1714 = primCdr(_35reg1713);
Obj _35reg1715 = primCar(_35reg1714);
Obj __ = _35reg1715;
Obj _35reg1716 = primCdr(closureRef(co, 0));
Obj _35reg1717 = primCar(_35reg1716);
Obj _35reg1718 = primCdr(_35reg1717);
Obj _35reg1719 = primCdr(_35reg1718);
Obj _35reg1720 = primIsCons(_35reg1719);
if (True == _35reg1720) {
Obj _35reg1721 = primCdr(closureRef(co, 0));
Obj _35reg1722 = primCar(_35reg1721);
Obj _35reg1723 = primCdr(_35reg1722);
Obj _35reg1724 = primCdr(_35reg1723);
Obj _35reg1725 = primCar(_35reg1724);
__ = _35reg1725;
Obj _35reg1726 = primCdr(closureRef(co, 0));
Obj _35reg1727 = primCar(_35reg1726);
Obj _35reg1728 = primCdr(_35reg1727);
Obj _35reg1729 = primCdr(_35reg1728);
Obj _35reg1730 = primCdr(_35reg1729);
Obj _35reg1731 = primEQ(Nil, _35reg1730);
if (True == _35reg1731) {
Obj _35reg1732 = primCdr(closureRef(co, 0));
Obj _35reg1733 = primCdr(_35reg1732);
Obj _35reg1734 = primEQ(Nil, _35reg1733);
if (True == _35reg1734) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc1022 = makeNative(9, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1735 = primIsCons(closureRef(co, 0));
if (True == _35reg1735) {
Obj _35reg1736 = primCar(closureRef(co, 0));
Obj _35reg1737 = primEQ(intern("cdr"), _35reg1736);
if (True == _35reg1737) {
Obj _35reg1738 = primCdr(closureRef(co, 0));
Obj _35reg1739 = primIsCons(_35reg1738);
if (True == _35reg1739) {
Obj _35reg1740 = primCdr(closureRef(co, 0));
Obj _35reg1741 = primCar(_35reg1740);
Obj _35reg1742 = primIsCons(_35reg1741);
if (True == _35reg1742) {
Obj _35reg1743 = primCdr(closureRef(co, 0));
Obj _35reg1744 = primCar(_35reg1743);
Obj _35reg1745 = primCar(_35reg1744);
Obj _35reg1746 = primEQ(intern("cons"), _35reg1745);
if (True == _35reg1746) {
Obj _35reg1747 = primCdr(closureRef(co, 0));
Obj _35reg1748 = primCar(_35reg1747);
Obj _35reg1749 = primCdr(_35reg1748);
Obj _35reg1750 = primIsCons(_35reg1749);
if (True == _35reg1750) {
Obj _35reg1751 = primCdr(closureRef(co, 0));
Obj _35reg1752 = primCar(_35reg1751);
Obj _35reg1753 = primCdr(_35reg1752);
Obj _35reg1754 = primCar(_35reg1753);
Obj __ = _35reg1754;
Obj _35reg1755 = primCdr(closureRef(co, 0));
Obj _35reg1756 = primCar(_35reg1755);
Obj _35reg1757 = primCdr(_35reg1756);
Obj _35reg1758 = primCdr(_35reg1757);
Obj _35reg1759 = primIsCons(_35reg1758);
if (True == _35reg1759) {
Obj _35reg1760 = primCdr(closureRef(co, 0));
Obj _35reg1761 = primCar(_35reg1760);
Obj _35reg1762 = primCdr(_35reg1761);
Obj _35reg1763 = primCdr(_35reg1762);
Obj _35reg1764 = primCar(_35reg1763);
Obj x = _35reg1764;
Obj _35reg1765 = primCdr(closureRef(co, 0));
Obj _35reg1766 = primCar(_35reg1765);
Obj _35reg1767 = primCdr(_35reg1766);
Obj _35reg1768 = primCdr(_35reg1767);
Obj _35reg1769 = primCdr(_35reg1768);
Obj _35reg1770 = primEQ(Nil, _35reg1769);
if (True == _35reg1770) {
Obj _35reg1771 = primCdr(closureRef(co, 0));
Obj _35reg1772 = primCdr(_35reg1771);
Obj _35reg1773 = primEQ(Nil, _35reg1772);
if (True == _35reg1773) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1022;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1022;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1022;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1022;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1022;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1022;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1022;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1022;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1022;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35p1020 = __arg1;
Obj _35cc1021 = makeNative(10, _35clofun2028, 0, 1, _35p1020);
Obj _35reg1774 = primIsCons(_35p1020);
if (True == _35reg1774) {
Obj _35reg1775 = primCar(_35p1020);
Obj _35reg1776 = primEQ(intern("car"), _35reg1775);
if (True == _35reg1776) {
Obj _35reg1777 = primCdr(_35p1020);
Obj _35reg1778 = primIsCons(_35reg1777);
if (True == _35reg1778) {
Obj _35reg1779 = primCdr(_35p1020);
Obj _35reg1780 = primCar(_35reg1779);
Obj _35reg1781 = primIsCons(_35reg1780);
if (True == _35reg1781) {
Obj _35reg1782 = primCdr(_35p1020);
Obj _35reg1783 = primCar(_35reg1782);
Obj _35reg1784 = primCar(_35reg1783);
Obj _35reg1785 = primEQ(intern("cons"), _35reg1784);
if (True == _35reg1785) {
Obj _35reg1786 = primCdr(_35p1020);
Obj _35reg1787 = primCar(_35reg1786);
Obj _35reg1788 = primCdr(_35reg1787);
Obj _35reg1789 = primIsCons(_35reg1788);
if (True == _35reg1789) {
Obj _35reg1790 = primCdr(_35p1020);
Obj _35reg1791 = primCar(_35reg1790);
Obj _35reg1792 = primCdr(_35reg1791);
Obj _35reg1793 = primCar(_35reg1792);
Obj x = _35reg1793;
Obj _35reg1794 = primCdr(_35p1020);
Obj _35reg1795 = primCar(_35reg1794);
Obj _35reg1796 = primCdr(_35reg1795);
Obj _35reg1797 = primCdr(_35reg1796);
Obj _35reg1798 = primIsCons(_35reg1797);
if (True == _35reg1798) {
Obj _35reg1799 = primCdr(_35p1020);
Obj _35reg1800 = primCar(_35reg1799);
Obj _35reg1801 = primCdr(_35reg1800);
Obj _35reg1802 = primCdr(_35reg1801);
Obj _35reg1803 = primCar(_35reg1802);
Obj __ = _35reg1803;
Obj _35reg1804 = primCdr(_35p1020);
Obj _35reg1805 = primCar(_35reg1804);
Obj _35reg1806 = primCdr(_35reg1805);
Obj _35reg1807 = primCdr(_35reg1806);
Obj _35reg1808 = primCdr(_35reg1807);
Obj _35reg1809 = primEQ(Nil, _35reg1808);
if (True == _35reg1809) {
Obj _35reg1810 = primCdr(_35p1020);
Obj _35reg1811 = primCdr(_35reg1810);
Obj _35reg1812 = primEQ(Nil, _35reg1811);
if (True == _35reg1812) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1021;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1021;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1021;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1021;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1021;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1021;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1021;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1021;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1021;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1043 = makeNative(12, _35clofun2028, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35cc1042 = makeNative(13, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1814 = primIsCons(closureRef(co, 0));
if (True == _35reg1814) {
Obj _35reg1815 = primCar(closureRef(co, 0));
Obj f = _35reg1815;
Obj _35reg1816 = primCdr(closureRef(co, 0));
Obj args = _35reg1816;
Obj _35reg1817 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#propagate-boolean"));
__arg2 = _35reg1817;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1042;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val1835 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1836 = primCons(_35val1835, Nil);
Obj _35reg1837 = primCons(args, _35reg1836);
Obj _35reg1838 = primCons(intern("lambda"), _35reg1837);
__nargs = 2;
__arg1 = _35reg1838;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2028) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35cc1041 = makeNative(14, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1818 = primIsCons(closureRef(co, 0));
if (True == _35reg1818) {
Obj _35reg1819 = primCar(closureRef(co, 0));
Obj _35reg1820 = primEQ(intern("lambda"), _35reg1819);
if (True == _35reg1820) {
Obj _35reg1821 = primCdr(closureRef(co, 0));
Obj _35reg1822 = primIsCons(_35reg1821);
if (True == _35reg1822) {
Obj _35reg1823 = primCdr(closureRef(co, 0));
Obj _35reg1824 = primCar(_35reg1823);
Obj args = _35reg1824;
Obj _35reg1825 = primCdr(closureRef(co, 0));
Obj _35reg1826 = primCdr(_35reg1825);
Obj _35reg1827 = primIsCons(_35reg1826);
if (True == _35reg1827) {
Obj _35reg1828 = primCdr(closureRef(co, 0));
Obj _35reg1829 = primCdr(_35reg1828);
Obj _35reg1830 = primCar(_35reg1829);
Obj body = _35reg1830;
Obj _35reg1831 = primCdr(closureRef(co, 0));
Obj _35reg1832 = primCdr(_35reg1831);
Obj _35reg1833 = primCdr(_35reg1832);
Obj _35reg1834 = primEQ(Nil, _35reg1833);
if (True == _35reg1834) {
pushCont(co, 15, _35clofun2028, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1041;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1041;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1041;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1041;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1041;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val1867 = __arg1;
Obj y1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj z1 = _35val1867;
Obj _35reg1868 = primCons(z1, Nil);
Obj _35reg1869 = primCons(y1, _35reg1868);
Obj _35reg1870 = primCons(x1, _35reg1869);
Obj _35reg1871 = primCons(intern("if"), _35reg1870);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg1871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1866 = __arg1;
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj y1 = _35val1866;
pushCont(co, 17, _35clofun2028, 2, y1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = z;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1865 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x1 = _35val1865;
pushCont(co, 18, _35clofun2028, 2, z, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc1040 = makeNative(16, _35clofun2028, 0, 1, closureRef(co, 0));
Obj _35reg1839 = primIsCons(closureRef(co, 0));
if (True == _35reg1839) {
Obj _35reg1840 = primCar(closureRef(co, 0));
Obj _35reg1841 = primEQ(intern("if"), _35reg1840);
if (True == _35reg1841) {
Obj _35reg1842 = primCdr(closureRef(co, 0));
Obj _35reg1843 = primIsCons(_35reg1842);
if (True == _35reg1843) {
Obj _35reg1844 = primCdr(closureRef(co, 0));
Obj _35reg1845 = primCar(_35reg1844);
Obj x = _35reg1845;
Obj _35reg1846 = primCdr(closureRef(co, 0));
Obj _35reg1847 = primCdr(_35reg1846);
Obj _35reg1848 = primIsCons(_35reg1847);
if (True == _35reg1848) {
Obj _35reg1849 = primCdr(closureRef(co, 0));
Obj _35reg1850 = primCdr(_35reg1849);
Obj _35reg1851 = primCar(_35reg1850);
Obj y = _35reg1851;
Obj _35reg1852 = primCdr(closureRef(co, 0));
Obj _35reg1853 = primCdr(_35reg1852);
Obj _35reg1854 = primCdr(_35reg1853);
Obj _35reg1855 = primIsCons(_35reg1854);
if (True == _35reg1855) {
Obj _35reg1856 = primCdr(closureRef(co, 0));
Obj _35reg1857 = primCdr(_35reg1856);
Obj _35reg1858 = primCdr(_35reg1857);
Obj _35reg1859 = primCar(_35reg1858);
Obj z = _35reg1859;
Obj _35reg1860 = primCdr(closureRef(co, 0));
Obj _35reg1861 = primCdr(_35reg1860);
Obj _35reg1862 = primCdr(_35reg1861);
Obj _35reg1863 = primCdr(_35reg1862);
Obj _35reg1864 = primEQ(Nil, _35reg1863);
if (True == _35reg1864) {
pushCont(co, 19, _35clofun2028, 2, y, z);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2028) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2027(struct Cora* co){
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
__arg0 = globalRef(intern("cora/init#length-h"));
__arg1 = makeNumber(0);
__arg2 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1508 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1508) {
Obj _35reg1509 = primCar(l);
Obj _35reg1510 = primCons(_35reg1509, res);
Obj _35reg1511 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#filter-h"));
__arg1 = _35reg1510;
__arg2 = fn;
__arg3 = _35reg1511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1512 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#filter-h"));
__arg1 = res;
__arg2 = fn;
__arg3 = _35reg1512;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj _35reg1506 = primIsCons(l);
if (True == _35reg1506) {
Obj _35reg1507 = primCar(l);
pushCont(co, 1, _35clofun2027, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = _35reg1507;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
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
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val1518 = __arg1;
Obj _35reg1516= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1519 = primCons(_35reg1516, _35val1518);
__nargs = 2;
__arg1 = _35reg1519;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2027) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj _35reg1515 = primEQ(l1, Nil);
if (True == _35reg1515) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2027) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1516 = primCar(l1);
Obj _35reg1517 = primCdr(l1);
pushCont(co, 4, _35clofun2027, 1, _35reg1516);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35reg1517;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x = __arg1;
Obj _35reg1522 = primCdr(x);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = _35reg1522;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x = __arg1;
Obj _35reg1525 = primEQ(closureRef(co, 0), x);
Obj _35reg1526 = primNot(_35reg1525);
__nargs = 2;
__arg1 = _35reg1526;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2027) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val1529 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1530 = primNot(_35val1529);
if (True == _35reg1530) {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("inconsistent func rule args count");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = n;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2027) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label9:
{
Obj _35val1528 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 8, _35clofun2027, 1, n);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35val1528;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val1523 = __arg1;
Obj counts = _35val1523;
Obj _35reg1524 = primCar(counts);
Obj n = _35reg1524;
Obj dif = makeNative(7, _35clofun2027, 1, 1, n);
Obj _35reg1527 = primCdr(counts);
pushCont(co, 9, _35clofun2027, 1, n);
__nargs = 3;
__arg0 = globalRef(intern("filter"));
__arg1 = dif;
__arg2 = _35reg1527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val1521 = __arg1;
Obj pats = _35val1521;
Obj len = makeNative(6, _35clofun2027, 1, 0);
pushCont(co, 10, _35clofun2027, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = len;
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj rules = __arg1;
pushCont(co, 11, _35clofun2027, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#rules-patterns"));
__arg1 = Nil;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val1535 = __arg1;
Obj _35reg1533= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1536 = primCons(_35reg1533, _35val1535);
__nargs = 2;
__arg1 = _35reg1536;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2027) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj n = __arg1;
Obj _35reg1532 = primEQ(n, makeNumber(0));
if (True == _35reg1532) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2027) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1533 = primGenSym(intern("p"));
Obj _35reg1534 = primSub(n, makeNumber(1));
pushCont(co, 13, _35clofun2027, 1, _35reg1533);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#gen-parameters"));
__arg1 = _35reg1534;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val1542 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1543 = primCons(intern("list"), args);
Obj _35reg1544 = primCons(_35reg1543, body);
Obj _35reg1545 = primCons(intern("match"), _35reg1544);
Obj _35reg1546 = primCons(_35reg1545, Nil);
Obj _35reg1547 = primCons(args, _35reg1546);
Obj _35reg1548 = primCons(_35val1542, _35reg1547);
Obj _35reg1549 = primCons(intern("defun"), _35reg1548);
__nargs = 2;
__arg1 = _35reg1549;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2027) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val1541 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args = _35val1541;
pushCont(co, 15, _35clofun2027, 2, body, args);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1540 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj nargs = _35val1540;
pushCont(co, 16, _35clofun2027, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#gen-parameters"));
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1539 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body = _35val1539;
pushCont(co, 17, _35clofun2027, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rules-arg-count"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1538 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun2027, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#extract-rules"));
__arg1 = _35val1538;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj exp = __arg1;
pushCont(co, 19, _35clofun2027, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2027) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2026(struct Cora* co){
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
pushCont(co, 20, _35clofun2025, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1424 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1425 = primCons(_35val1424, Nil);
Obj _35reg1426 = primCons(value, _35reg1425);
Obj _35reg1427 = primCons(val, _35reg1426);
Obj _35reg1428 = primCons(intern("let"), _35reg1427);
__nargs = 2;
__arg1 = _35reg1428;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2026) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val1430 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1431 = primCons(_35val1430, Nil);
Obj _35reg1432 = primCons(value, _35reg1431);
Obj _35reg1433 = primCons(val, _35reg1432);
Obj _35reg1434 = primCons(intern("let"), _35reg1433);
__nargs = 2;
__arg1 = _35reg1434;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2026) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val1436 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1437 = primCons(_35val1436, Nil);
Obj _35reg1438 = primCons(value, _35reg1437);
Obj _35reg1439 = primCons(val, _35reg1438);
Obj _35reg1440 = primCons(intern("let"), _35reg1439);
__nargs = 2;
__arg1 = _35reg1440;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2026) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val1418 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules = _35val1418;
Obj _35reg1419 = primIsCons(value);
if (True == _35reg1419) {
Obj _35reg1420 = primCar(value);
Obj _35reg1421 = primEQ(intern("cons"), _35reg1420);
Obj _35reg1422 = primNot(_35reg1421);
if (True == _35reg1422) {
if (True == True) {
Obj _35reg1423 = primGenSym(intern("val"));
Obj val = _35reg1423;
pushCont(co, 1, _35clofun2026, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg1429 = primGenSym(intern("val"));
Obj val = _35reg1429;
pushCont(co, 2, _35clofun2026, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg1435 = primGenSym(intern("val"));
Obj val = _35reg1435;
pushCont(co, 3, _35clofun2026, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label5:
{
Obj _35val1417 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value = _35val1417;
pushCont(co, 4, _35clofun2026, 1, value);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val1416 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 5, _35clofun2026, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = _35val1416;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj exp = __arg1;
pushCont(co, 6, _35clofun2026, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-match"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc1019 = makeNative(9, _35clofun2026, 0, 0);
Obj _35reg1443 = primIsCons(closureRef(co, 0));
if (True == _35reg1443) {
Obj _35reg1444 = primCar(closureRef(co, 0));
Obj x = _35reg1444;
Obj _35reg1445 = primCdr(closureRef(co, 0));
Obj y = _35reg1445;
Obj _35reg1446 = primCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = y;
__arg2 = _35reg1446;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1019;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val1456 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1457 = primCons(intern("list"), _35val1456);
Obj pat = _35reg1457;
Obj _35reg1458 = primCons(pat, closureRef(co, 2));
Obj _35reg1459 = primCons(act, _35reg1458);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg1459;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc1018 = makeNative(10, _35clofun2026, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg1447 = primIsCons(closureRef(co, 0));
if (True == _35reg1447) {
Obj _35reg1448 = primCar(closureRef(co, 0));
Obj _35reg1449 = primEQ(intern("=>"), _35reg1448);
if (True == _35reg1449) {
Obj _35reg1450 = primCdr(closureRef(co, 0));
Obj _35reg1451 = primIsCons(_35reg1450);
if (True == _35reg1451) {
Obj _35reg1452 = primCdr(closureRef(co, 0));
Obj _35reg1453 = primCar(_35reg1452);
Obj act = _35reg1453;
Obj _35reg1454 = primCdr(closureRef(co, 0));
Obj _35reg1455 = primCdr(_35reg1454);
Obj remain = _35reg1455;
pushCont(co, 11, _35clofun2026, 2, act, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val1486 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pred= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1487 = primCons(intern("list"), _35val1486);
Obj pat = _35reg1487;
Obj _35reg1488 = primCons(act, Nil);
Obj _35reg1489 = primCons(pred, _35reg1488);
Obj _35reg1490 = primCons(intern("where"), _35reg1489);
Obj _35reg1491 = primCons(pat, closureRef(co, 2));
Obj _35reg1492 = primCons(_35reg1490, _35reg1491);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg1492;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc1017 = makeNative(12, _35clofun2026, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg1460 = primIsCons(closureRef(co, 0));
if (True == _35reg1460) {
Obj _35reg1461 = primCar(closureRef(co, 0));
Obj _35reg1462 = primEQ(intern("=>"), _35reg1461);
if (True == _35reg1462) {
Obj _35reg1463 = primCdr(closureRef(co, 0));
Obj _35reg1464 = primIsCons(_35reg1463);
if (True == _35reg1464) {
Obj _35reg1465 = primCdr(closureRef(co, 0));
Obj _35reg1466 = primCar(_35reg1465);
Obj act = _35reg1466;
Obj _35reg1467 = primCdr(closureRef(co, 0));
Obj _35reg1468 = primCdr(_35reg1467);
Obj _35reg1469 = primIsCons(_35reg1468);
if (True == _35reg1469) {
Obj _35reg1470 = primCdr(closureRef(co, 0));
Obj _35reg1471 = primCdr(_35reg1470);
Obj _35reg1472 = primCar(_35reg1471);
Obj _35reg1473 = primEQ(intern("where"), _35reg1472);
if (True == _35reg1473) {
Obj _35reg1474 = primCdr(closureRef(co, 0));
Obj _35reg1475 = primCdr(_35reg1474);
Obj _35reg1476 = primCdr(_35reg1475);
Obj _35reg1477 = primIsCons(_35reg1476);
if (True == _35reg1477) {
Obj _35reg1478 = primCdr(closureRef(co, 0));
Obj _35reg1479 = primCdr(_35reg1478);
Obj _35reg1480 = primCdr(_35reg1479);
Obj _35reg1481 = primCar(_35reg1480);
Obj pred = _35reg1481;
Obj _35reg1482 = primCdr(closureRef(co, 0));
Obj _35reg1483 = primCdr(_35reg1482);
Obj _35reg1484 = primCdr(_35reg1483);
Obj _35reg1485 = primCdr(_35reg1484);
Obj remain = _35reg1485;
pushCont(co, 13, _35clofun2026, 3, act, pred, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1017;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1017;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1017;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1017;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1017;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1017;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj _35cc1016 = makeNative(14, _35clofun2026, 0, 3, input, current, result);
Obj _35reg1493 = primEQ(Nil, input);
if (True == _35reg1493) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1016;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
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
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1499 = __arg1;
Obj _35reg1498= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#rules-patterns"));
__arg1 = _35reg1498;
__arg2 = _35val1499;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1496 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1496) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1497 = primCar(rules);
Obj _35reg1498 = primCons(_35reg1497, res);
pushCont(co, 17, _35clofun2026, 1, _35reg1498);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj res = __arg1;
Obj rules = __arg2;
pushCont(co, 18, _35clofun2026, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj i = __arg1;
Obj l = __arg2;
Obj _35reg1501 = primEQ(l, Nil);
if (True == _35reg1501) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2026) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1502 = primAdd(i, makeNumber(1));
Obj _35reg1503 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#length-h"));
__arg1 = _35reg1502;
__arg2 = _35reg1503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2026) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2025(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1350 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val1349= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1351 = primCons(cc, Nil);
Obj _35reg1352 = primCons(_35reg1351, Nil);
Obj _35reg1353 = primCons(_35val1350, _35reg1352);
Obj _35reg1354 = primCons(_35val1349, _35reg1353);
Obj _35reg1355 = primCons(intern("if"), _35reg1354);
__nargs = 2;
__arg1 = _35reg1355;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2025) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val1349 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun2025, 2, cc, _35val1349);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1357 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val1356= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1358 = primCons(cc, Nil);
Obj _35reg1359 = primCons(_35reg1358, Nil);
Obj _35reg1360 = primCons(_35val1357, _35reg1359);
Obj _35reg1361 = primCons(_35val1356, _35reg1360);
Obj _35reg1362 = primCons(intern("if"), _35reg1361);
__nargs = 2;
__arg1 = _35reg1362;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2025) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val1356 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun2025, 2, cc, _35val1356);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val1339 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1339) {
Obj _35reg1340 = primCar(action);
Obj _35reg1341 = primEQ(_35reg1340, intern("where"));
if (True == _35reg1341) {
if (True == True) {
pushCont(co, 20, _35clofun2024, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2025) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
if (True == False) {
pushCont(co, 1, _35clofun2025, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2025) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
} else {
if (True == False) {
pushCont(co, 3, _35clofun2025, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2025) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label5:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _35reg1337 = primCdr(rules);
Obj _35reg1338 = primCar(_35reg1337);
Obj action = _35reg1338;
pushCont(co, 4, _35clofun2025, 2, cc, action);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val1377 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val1377;
Obj _35reg1378 = primCons(rest, Nil);
Obj _35reg1379 = primCons(Nil, _35reg1378);
Obj _35reg1380 = primCons(intern("lambda"), _35reg1379);
Obj _35reg1381 = primCons(curr, Nil);
Obj _35reg1382 = primCons(_35reg1380, _35reg1381);
Obj _35reg1383 = primCons(cc, _35reg1382);
Obj _35reg1384 = primCons(intern("let"), _35reg1383);
__nargs = 2;
__arg1 = _35reg1384;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2025) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val1374 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val1374;
Obj _35reg1375 = primCdr(rules);
Obj _35reg1376 = primCdr(_35reg1375);
pushCont(co, 6, _35clofun2025, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg1376;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val1373 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 7, _35clofun2025, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val1373;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1372 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val1372;
pushCont(co, 8, _35clofun2025, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val1392 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val1392;
Obj _35reg1393 = primCons(rest, Nil);
Obj _35reg1394 = primCons(Nil, _35reg1393);
Obj _35reg1395 = primCons(intern("lambda"), _35reg1394);
Obj _35reg1396 = primCons(curr, Nil);
Obj _35reg1397 = primCons(_35reg1395, _35reg1396);
Obj _35reg1398 = primCons(cc, _35reg1397);
Obj _35reg1399 = primCons(intern("let"), _35reg1398);
__nargs = 2;
__arg1 = _35reg1399;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2025) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val1389 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val1389;
Obj _35reg1390 = primCdr(rules);
Obj _35reg1391 = primCdr(_35reg1390);
pushCont(co, 10, _35clofun2025, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg1391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val1388 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 11, _35clofun2025, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val1388;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val1387 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val1387;
pushCont(co, 12, _35clofun2025, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1369 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1369) {
if (True == True) {
Obj _35reg1370 = primCar(rules);
Obj pat = _35reg1370;
Obj _35reg1371 = primGenSym(intern("cc"));
Obj cc = _35reg1371;
pushCont(co, 9, _35clofun2025, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg1385 = primCar(rules);
Obj pat = _35reg1385;
Obj _35reg1386 = primGenSym(intern("cc"));
Obj cc = _35reg1386;
pushCont(co, 13, _35clofun2025, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label15:
{
Obj _35val1407 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val1407;
Obj _35reg1408 = primCons(rest, Nil);
Obj _35reg1409 = primCons(Nil, _35reg1408);
Obj _35reg1410 = primCons(intern("lambda"), _35reg1409);
Obj _35reg1411 = primCons(curr, Nil);
Obj _35reg1412 = primCons(_35reg1410, _35reg1411);
Obj _35reg1413 = primCons(cc, _35reg1412);
Obj _35reg1414 = primCons(intern("let"), _35reg1413);
__nargs = 2;
__arg1 = _35reg1414;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2025) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val1404 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val1404;
Obj _35reg1405 = primCdr(rules);
Obj _35reg1406 = primCdr(_35reg1405);
pushCont(co, 15, _35clofun2025, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg1406;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1403 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 16, _35clofun2025, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val1403;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1402 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val1402;
pushCont(co, 17, _35clofun2025, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1367 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1367) {
Obj _35reg1368 = primCdr(rules);
pushCont(co, 14, _35clofun2025, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = _35reg1368;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj _35reg1400 = primCar(rules);
Obj pat = _35reg1400;
Obj _35reg1401 = primGenSym(intern("cc"));
Obj cc = _35reg1401;
pushCont(co, 18, _35clofun2025, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label20:
{
Obj _35val1364 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1364) {
Obj _35reg1365 = primCons(makeCString("no match-help found!"), Nil);
Obj _35reg1366 = primCons(intern("error"), _35reg1365);
__nargs = 2;
__arg1 = _35reg1366;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2025) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 19, _35clofun2025, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2025) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2024(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1273 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val1273;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1272 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val1272;
pushCont(co, 0, _35clofun2024, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1271 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val1271;
pushCont(co, 1, _35clofun2024, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1281 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1275= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1282 = primCons(cc, Nil);
Obj _35reg1283 = primCons(_35reg1282, Nil);
Obj _35reg1284 = primCons(_35val1281, _35reg1283);
Obj _35reg1285 = primCons(_35reg1275, _35reg1284);
Obj _35reg1286 = primCons(intern("if"), _35reg1285);
__nargs = 2;
__arg1 = _35reg1286;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2024) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val1280 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1277= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1275= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 3, _35clofun2024, 2, cc, _35reg1275);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg1277;
__arg3 = _35val1280;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1289 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val1289;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val1288 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val1288;
pushCont(co, 5, _35clofun2024, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val1287 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val1287;
pushCont(co, 6, _35clofun2024, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val1297 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1291= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1298 = primCons(cc, Nil);
Obj _35reg1299 = primCons(_35reg1298, Nil);
Obj _35reg1300 = primCons(_35val1297, _35reg1299);
Obj _35reg1301 = primCons(_35reg1291, _35reg1300);
Obj _35reg1302 = primCons(intern("if"), _35reg1301);
__nargs = 2;
__arg1 = _35reg1302;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2024) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35val1296 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1293= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1291= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 8, _35clofun2024, 2, cc, _35reg1291);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg1293;
__arg3 = _35val1296;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val1251 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj y = _35val1251;
Obj _35reg1252 = primIsCons(expr);
if (True == _35reg1252) {
Obj _35reg1253 = primCar(expr);
Obj _35reg1254 = primEQ(_35reg1253, intern("cons"));
if (True == _35reg1254) {
if (True == True) {
pushCont(co, 18, _35clofun2023, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1258 = primCons(expr, Nil);
Obj _35reg1259 = primCons(intern("cons?"), _35reg1258);
Obj _35reg1260 = primCons(expr, Nil);
Obj _35reg1261 = primCons(intern("car"), _35reg1260);
Obj _35reg1262 = primCons(expr, Nil);
Obj _35reg1263 = primCons(intern("cdr"), _35reg1262);
pushCont(co, 20, _35clofun2023, 4, x, _35reg1261, cc, _35reg1259);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg1263;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 2, _35clofun2024, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1274 = primCons(expr, Nil);
Obj _35reg1275 = primCons(intern("cons?"), _35reg1274);
Obj _35reg1276 = primCons(expr, Nil);
Obj _35reg1277 = primCons(intern("car"), _35reg1276);
Obj _35reg1278 = primCons(expr, Nil);
Obj _35reg1279 = primCons(intern("cdr"), _35reg1278);
pushCont(co, 4, _35clofun2024, 4, x, _35reg1277, cc, _35reg1275);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg1279;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
pushCont(co, 7, _35clofun2024, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1290 = primCons(expr, Nil);
Obj _35reg1291 = primCons(intern("cons?"), _35reg1290);
Obj _35reg1292 = primCons(expr, Nil);
Obj _35reg1293 = primCons(intern("car"), _35reg1292);
Obj _35reg1294 = primCons(expr, Nil);
Obj _35reg1295 = primCons(intern("cdr"), _35reg1294);
pushCont(co, 9, _35clofun2024, 4, x, _35reg1293, cc, _35reg1291);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg1295;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label11:
{
Obj _35val1250 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj x = _35val1250;
pushCont(co, 10, _35clofun2024, 4, expr, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 11, _35clofun2024, 4, pat, expr, body, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val1304 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1304) {
Obj _35reg1305 = primIsSymbol(x);
Obj _35reg1306 = primNot(_35reg1305);
if (True == _35reg1306) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2024) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2024) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2024) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label14:
{
Obj x = __arg1;
pushCont(co, 13, _35clofun2024, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("atom?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val1335 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = _35val1335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val1322 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val1322) {
Obj _35reg1323 = primCar(pat);
Obj _35reg1324 = primEQ(_35reg1323, intern("quote"));
if (True == _35reg1324) {
Obj _35reg1325 = primCons(expr, Nil);
Obj _35reg1326 = primCons(pat, _35reg1325);
Obj _35reg1327 = primCons(intern("="), _35reg1326);
Obj _35reg1328 = primCons(cc, Nil);
Obj _35reg1329 = primCons(_35reg1328, Nil);
Obj _35reg1330 = primCons(body, _35reg1329);
Obj _35reg1331 = primCons(_35reg1327, _35reg1330);
Obj _35reg1332 = primCons(intern("if"), _35reg1331);
__nargs = 2;
__arg1 = _35reg1332;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2024) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1333 = primCar(pat);
Obj _35reg1334 = primEQ(_35reg1333, intern("cons"));
if (True == _35reg1334) {
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match-cons-expander"));
__arg1 = pat;
__arg2 = expr;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 15, _35clofun2024, 0);
__nargs = 3;
__arg0 = globalRef(intern("str"));
__arg1 = makeCString("match fail ");
__arg2 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val1307 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val1307) {
Obj _35reg1308 = primEQ(pat, expr);
if (True == _35reg1308) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2024) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1309 = primCons(expr, Nil);
Obj _35reg1310 = primCons(pat, _35reg1309);
Obj _35reg1311 = primCons(intern("="), _35reg1310);
Obj _35reg1312 = primCons(cc, Nil);
Obj _35reg1313 = primCons(_35reg1312, Nil);
Obj _35reg1314 = primCons(body, _35reg1313);
Obj _35reg1315 = primCons(_35reg1311, _35reg1314);
Obj _35reg1316 = primCons(intern("if"), _35reg1315);
__nargs = 2;
__arg1 = _35reg1316;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2024) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj _35reg1317 = primIsSymbol(pat);
if (True == _35reg1317) {
Obj _35reg1318 = primCons(body, Nil);
Obj _35reg1319 = primCons(expr, _35reg1318);
Obj _35reg1320 = primCons(pat, _35reg1319);
Obj _35reg1321 = primCons(intern("let"), _35reg1320);
__nargs = 2;
__arg1 = _35reg1321;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2024) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 16, _35clofun2024, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
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
Obj literal_63 = makeNative(14, _35clofun2024, 1, 0);
pushCont(co, 17, _35clofun2024, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = literal_63;
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1343 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val1342= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1344 = primCons(cc, Nil);
Obj _35reg1345 = primCons(_35reg1344, Nil);
Obj _35reg1346 = primCons(_35val1343, _35reg1345);
Obj _35reg1347 = primCons(_35val1342, _35reg1346);
Obj _35reg1348 = primCons(intern("if"), _35reg1347);
__nargs = 2;
__arg1 = _35reg1348;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2024) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val1342 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun2024, 2, cc, _35val1342);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2024) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2023(struct Cora* co){
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
Obj _35reg1191 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-let"));
__arg1 = _35reg1191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1200 = __arg1;
Obj _35val1199= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1198= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1201 = primCons(intern("cond"), _35val1200);
Obj _35reg1202 = primCons(_35reg1201, Nil);
Obj _35reg1203 = primCons(_35val1199, _35reg1202);
Obj _35reg1204 = primCons(_35reg1198, _35reg1203);
Obj _35reg1205 = primCons(intern("if"), _35reg1204);
__nargs = 2;
__arg1 = _35reg1205;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val1199 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1198= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun2023, 2, _35val1199, _35reg1198);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1197 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj curr = _35val1197;
Obj _35reg1198 = primCar(curr);
pushCont(co, 2, _35clofun2023, 2, exp, _35reg1198);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
Obj _35reg1193 = primCdr(exp);
Obj _35reg1194 = primEQ(Nil, _35reg1193);
if (True == _35reg1194) {
Obj _35reg1195 = primCons(makeCString("no cond match"), Nil);
Obj _35reg1196 = primCons(intern("error"), _35reg1195);
__nargs = 2;
__arg1 = _35reg1196;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 3, _35clofun2023, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val1211 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val1211;
Obj _35reg1212 = primEQ(more, True);
if (True == _35reg1212) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1213 = primCar(l);
Obj _35reg1214 = primCons(more, Nil);
Obj _35reg1215 = primCons(True, _35reg1214);
Obj _35reg1216 = primCons(_35reg1213, _35reg1215);
Obj _35reg1217 = primCons(intern("if"), _35reg1216);
__nargs = 2;
__arg1 = _35reg1217;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label6:
{
Obj l = __arg1;
Obj _35reg1207 = primEQ(l, Nil);
if (True == _35reg1207) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1208 = primCar(l);
Obj _35reg1209 = primEQ(_35reg1208, True);
if (True == _35reg1209) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1210 = primCdr(l);
pushCont(co, 5, _35clofun2023, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-or"));
__arg1 = _35reg1210;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label7:
{
Obj exp = __arg1;
Obj _35reg1219 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-or"));
__arg1 = _35reg1219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val1225 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val1225;
Obj _35reg1226 = primEQ(more, False);
if (True == _35reg1226) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1227 = primCar(l);
Obj _35reg1228 = primCons(False, Nil);
Obj _35reg1229 = primCons(more, _35reg1228);
Obj _35reg1230 = primCons(_35reg1227, _35reg1229);
Obj _35reg1231 = primCons(intern("if"), _35reg1230);
__nargs = 2;
__arg1 = _35reg1231;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label9:
{
Obj l = __arg1;
Obj _35reg1221 = primEQ(Nil, l);
if (True == _35reg1221) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1222 = primCar(l);
Obj _35reg1223 = primEQ(_35reg1222, False);
if (True == _35reg1223) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1224 = primCdr(l);
pushCont(co, 8, _35clofun2023, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-and"));
__arg1 = _35reg1224;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label10:
{
Obj exp = __arg1;
Obj _35reg1233 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-and"));
__arg1 = _35reg1233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x = __arg1;
Obj _35reg1235 = primEQ(x, True);
if (True == _35reg1235) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1236 = primEQ(x, False);
if (True == _35reg1236) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label12:
{
Obj _35val1243 = __arg1;
Obj _35reg1241= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1244 = primCons(_35val1243, Nil);
Obj _35reg1245 = primCons(_35reg1241, _35reg1244);
Obj _35reg1246 = primCons(intern("cons"), _35reg1245);
__nargs = 2;
__arg1 = _35reg1246;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val1239 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1239) {
Obj _35reg1240 = primCar(pat);
__nargs = 2;
__arg1 = _35reg1240;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1241 = primCar(pat);
Obj _35reg1242 = primCdr(pat);
pushCont(co, 12, _35clofun2023, 1, _35reg1241);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rcons1"));
__arg1 = _35reg1242;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj pat = __arg1;
Obj _35reg1238 = primCdr(pat);
pushCont(co, 13, _35clofun2023, 1, pat);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg1238;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj exp = __arg1;
Obj _35reg1248 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rcons1"));
__arg1 = _35reg1248;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val1257 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val1257;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1256 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val1256;
pushCont(co, 16, _35clofun2023, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1255 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val1255;
pushCont(co, 17, _35clofun2023, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1265 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1259= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1266 = primCons(cc, Nil);
Obj _35reg1267 = primCons(_35reg1266, Nil);
Obj _35reg1268 = primCons(_35val1265, _35reg1267);
Obj _35reg1269 = primCons(_35reg1259, _35reg1268);
Obj _35reg1270 = primCons(intern("if"), _35reg1269);
__nargs = 2;
__arg1 = _35reg1270;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2023) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val1264 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1261= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1259= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun2023, 2, cc, _35reg1259);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg1261;
__arg3 = _35val1264;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2023) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2022(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1134 = __arg1;
Obj _35val1133= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 20, _35clofun2021, 1, _35val1133);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = _35val1134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1133 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 0, _35clofun2022, 1, _35val1133);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj exp1 = __arg1;
Obj _35reg1141 = primEQ(exp1, closureRef(co, 0));
if (True == _35reg1141) {
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#macroexpand-boot"));
__arg2 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val1142 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(2, _35clofun2022, 1, 1, exp);
__arg1 = _35val1142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
Obj _35reg1127 = primIsCons(exp);
if (True == _35reg1127) {
Obj _35reg1128 = primCar(exp);
Obj _35reg1129 = primEQ(_35reg1128, globalRef(intern("*protect-symbol*")));
if (True == _35reg1129) {
Obj _35reg1130 = primCdr(exp);
__nargs = 2;
__arg1 = _35reg1130;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2022) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1131 = primCar(exp);
Obj _35reg1132 = primEQ(_35reg1131, intern("lambda"));
if (True == _35reg1132) {
pushCont(co, 1, _35clofun2022, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1139 = primCar(exp);
Obj _35reg1140 = primEQ(_35reg1139, intern("quote"));
if (True == _35reg1140) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2022) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 3, _35clofun2022, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand1"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2022) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label5:
{
Obj _35val1149 = __arg1;
Obj _35val1148= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1147= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1150 = primCons(_35val1148, _35val1149);
Obj _35reg1151 = primCons(intern("lambda"), _35reg1150);
Obj _35reg1152 = primCons(_35reg1151, Nil);
Obj _35reg1153 = primCons(_35reg1147, _35reg1152);
Obj _35reg1154 = primCons(intern("cora/init#add-to-*macros*"), _35reg1153);
__nargs = 2;
__arg1 = _35reg1154;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2022) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val1148 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1147= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun2022, 2, _35val1148, _35reg1147);
__nargs = 2;
__arg0 = globalRef(intern("cdddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val1145 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1146 = primCons(_35val1145, Nil);
Obj _35reg1147 = primCons(intern("quote"), _35reg1146);
pushCont(co, 6, _35clofun2022, 2, exp, _35reg1147);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
pushCont(co, 7, _35clofun2022, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj exp = __arg1;
Obj _35reg1157 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg1157;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val1163 = __arg1;
Obj _35val1162= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1161= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1164 = primCons(_35val1163, Nil);
Obj _35reg1165 = primCons(_35val1162, _35reg1164);
Obj _35reg1166 = primCons(intern("lambda"), _35reg1165);
Obj _35reg1167 = primCons(_35reg1166, Nil);
Obj _35reg1168 = primCons(_35reg1161, _35reg1167);
Obj _35reg1169 = primCons(intern("set"), _35reg1168);
__nargs = 2;
__arg1 = _35reg1169;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2022) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val1162 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1161= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun2022, 2, _35val1162, _35reg1161);
__nargs = 2;
__arg0 = globalRef(intern("cadddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val1159 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1160 = primCons(_35val1159, Nil);
Obj _35reg1161 = primCons(intern("quote"), _35reg1160);
pushCont(co, 11, _35clofun2022, 2, exp, _35reg1161);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj exp = __arg1;
pushCont(co, 12, _35clofun2022, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _35reg1171 = primIsCons(l);
if (True == _35reg1171) {
Obj _35reg1172 = primCar(l);
Obj _35reg1173 = primEQ(_35reg1172, x);
if (True == _35reg1173) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2022) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1174 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = _35reg1174;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2022) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label15:
{
Obj x = __arg1;
Obj _35reg1176 = primIsCons(x);
Obj _35reg1177 = primNot(_35reg1176);
__nargs = 2;
__arg1 = _35reg1177;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2022) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val1185 = __arg1;
Obj _35val1183= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1182= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1186 = primCons(_35val1185, Nil);
Obj _35reg1187 = primCons(_35val1183, _35reg1186);
Obj _35reg1188 = primCons(_35reg1182, _35reg1187);
Obj _35reg1189 = primCons(intern("let"), _35reg1188);
__nargs = 2;
__arg1 = _35reg1189;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2022) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35val1184 = __arg1;
Obj _35val1183= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1182= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun2022, 2, _35val1183, _35reg1182);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-let"));
__arg1 = _35val1184;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1183 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1182= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun2022, 2, _35val1183, _35reg1182);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1180 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1180) {
Obj _35reg1181 = primCar(exp);
__nargs = 2;
__arg1 = _35reg1181;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2022) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1182 = primCar(exp);
pushCont(co, 18, _35clofun2022, 2, exp, _35reg1182);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj exp = __arg1;
Obj _35reg1179 = primCdr(exp);
pushCont(co, 19, _35clofun2022, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg1179;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2022) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2021(struct Cora* co){
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
Obj _35reg1053 = primEQ(x, Nil);
__nargs = 2;
__arg1 = _35reg1053;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x = __arg1;
Obj _35reg1055 = primCdr(x);
Obj _35reg1056 = primCar(_35reg1055);
__nargs = 2;
__arg1 = _35reg1056;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj x = __arg1;
Obj _35reg1058 = primCar(x);
Obj _35reg1059 = primCar(_35reg1058);
__nargs = 2;
__arg1 = _35reg1059;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj x = __arg1;
Obj _35reg1061 = primCar(x);
Obj _35reg1062 = primCdr(_35reg1061);
__nargs = 2;
__arg1 = _35reg1062;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x = __arg1;
Obj _35reg1064 = primCdr(x);
Obj _35reg1065 = primCdr(_35reg1064);
__nargs = 2;
__arg1 = _35reg1065;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x = __arg1;
Obj _35reg1067 = primCdr(x);
Obj _35reg1068 = primCdr(_35reg1067);
Obj _35reg1069 = primCar(_35reg1068);
__nargs = 2;
__arg1 = _35reg1069;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj x = __arg1;
Obj _35reg1071 = primCdr(x);
Obj _35reg1072 = primCdr(_35reg1071);
Obj _35reg1073 = primCdr(_35reg1072);
Obj _35reg1074 = primCar(_35reg1073);
__nargs = 2;
__arg1 = _35reg1074;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj x = __arg1;
Obj _35reg1076 = primCdr(x);
Obj _35reg1077 = primCdr(_35reg1076);
Obj _35reg1078 = primCdr(_35reg1077);
__nargs = 2;
__arg1 = _35reg1078;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val1083 = __arg1;
Obj _35reg1081= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1084 = primCons(_35val1083, Nil);
Obj _35reg1085 = primCons(_35reg1081, _35reg1084);
Obj _35reg1086 = primCons(intern("cons"), _35reg1085);
__nargs = 2;
__arg1 = _35reg1086;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj exp = __arg1;
Obj _35reg1080 = primIsCons(exp);
if (True == _35reg1080) {
Obj _35reg1081 = primCar(exp);
Obj _35reg1082 = primCdr(exp);
pushCont(co, 8, _35clofun2021, 1, _35reg1081);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg1082;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label10:
{
Obj x = __arg1;
Obj _35reg1088 = primIsCons(x);
__nargs = 2;
__arg1 = _35reg1088;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj res = __arg1;
Obj l = __arg2;
Obj _35reg1090 = primIsCons(l);
if (True == _35reg1090) {
Obj _35reg1091 = primCar(l);
Obj _35reg1092 = primCons(_35reg1091, res);
Obj _35reg1093 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#reverse-h"));
__arg1 = _35reg1092;
__arg2 = _35reg1093;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label12:
{
Obj _35val1099 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1100 = primCons(_35val1099, res);
Obj _35reg1101 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("map-h"));
__arg1 = _35reg1100;
__arg2 = f;
__arg3 = _35reg1101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj _35reg1097 = primIsCons(l);
if (True == _35reg1097) {
Obj _35reg1098 = primCar(l);
pushCont(co, 12, _35clofun2021, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = _35reg1098;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x = __arg1;
Obj _35reg1107 = primCons(globalRef(intern("*protect-symbol*")), x);
__nargs = 2;
__arg1 = _35reg1107;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj n = __arg1;
Obj v = __arg2;
Obj _35reg1109 = primCons(n, v);
Obj _35reg1110 = primCons(_35reg1109, globalRef(intern("*macros*")));
Obj _35reg1111 = primSet(co, intern("*macros*"), _35reg1110);
__nargs = 2;
__arg1 = _35reg1111;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj item = __arg1;
Obj _35reg1114 = primIsCons(closureRef(co, 0));
if (True == _35reg1114) {
Obj _35reg1115 = primCar(closureRef(co, 0));
Obj _35reg1116 = primCar(item);
Obj _35reg1117 = primEQ(_35reg1115, _35reg1116);
if (True == _35reg1117) {
if (True == True) {
Obj _35reg1118 = primCdr(item);
__nargs = 2;
__arg0 = _35reg1118;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1119 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg1119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg1120 = primCdr(item);
__nargs = 2;
__arg0 = _35reg1120;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1121 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg1121;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg1122 = primCdr(item);
__nargs = 2;
__arg0 = _35reg1122;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1123 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg1123;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label18:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj _35reg1113 = primEQ(Nil, macros);
if (True == _35reg1113) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1124 = primCar(macros);
__nargs = 2;
__arg0 = makeNative(17, _35clofun2021, 1, 2, exp, macros);
__arg1 = _35reg1124;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = exp;
__arg2 = globalRef(intern("*macros*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2021) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1135 = __arg1;
Obj _35val1133= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1136 = primCons(_35val1135, Nil);
Obj _35reg1137 = primCons(_35val1133, _35reg1136);
Obj _35reg1138 = primCons(intern("lambda"), _35reg1137);
__nargs = 2;
__arg1 = _35reg1138;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2021) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

