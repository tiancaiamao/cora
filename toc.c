#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun4879(struct Cora* co);
void _35clofun4878(struct Cora* co);
void _35clofun4877(struct Cora* co);
void _35clofun4876(struct Cora* co);
void _35clofun4875(struct Cora* co);
void _35clofun4874(struct Cora* co);
void _35clofun4873(struct Cora* co);
void _35clofun4872(struct Cora* co);
void _35clofun4871(struct Cora* co);
void _35clofun4870(struct Cora* co);
void _35clofun4869(struct Cora* co);
void _35clofun4868(struct Cora* co);
void _35clofun4867(struct Cora* co);
void _35clofun4866(struct Cora* co);
void _35clofun4865(struct Cora* co);
void _35clofun4864(struct Cora* co);
void _35clofun4863(struct Cora* co);
void _35clofun4862(struct Cora* co);
void _35clofun4861(struct Cora* co);
void _35clofun4860(struct Cora* co);
void _35clofun4859(struct Cora* co);
void _35clofun4858(struct Cora* co);
void _35clofun4857(struct Cora* co);
void _35clofun4856(struct Cora* co);


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
pushCont(co, 10, _35clofun4879, 0);
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

void _35clofun4879(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val4847 = __arg1;
Obj _35val4845= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val4845;
__arg2 = _35val4847;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val4845 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg4846 = primCdr(exp);
pushCont(co, 0, _35clofun4879, 1, _35val4845);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg4846;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val4854 = __arg1;
Obj _35val4852= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val4852;
__arg2 = _35val4854;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val4852 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg4853 = primCdr(exp);
pushCont(co, 2, _35clofun4879, 1, _35val4852);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg4853;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val4840 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val4840) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4879) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg4841 = primIsCons(exp);
if (True == _35reg4841) {
Obj _35reg4842 = primCar(exp);
Obj _35reg4843 = primEQ(_35reg4842, intern("quote"));
if (True == _35reg4843) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4844 = primCar(exp);
pushCont(co, 1, _35clofun4879, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg4844;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4879) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg4848 = primIsCons(exp);
if (True == _35reg4848) {
Obj _35reg4849 = primCar(exp);
Obj _35reg4850 = primEQ(_35reg4849, intern("quote"));
if (True == _35reg4850) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4851 = primCar(exp);
pushCont(co, 3, _35clofun4879, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg4851;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label5:
{
Obj _35val4832 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val4832) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4879) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg4833 = primIsCons(exp);
if (True == _35reg4833) {
Obj _35reg4834 = primCar(exp);
Obj _35reg4835 = primEQ(_35reg4834, intern("quote"));
if (True == _35reg4835) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4836 = primCar(exp);
pushCont(co, 20, _35clofun4878, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg4836;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 4, _35clofun4879, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val4816 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val4816) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4879) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg4817 = primIsCons(exp);
if (True == _35reg4817) {
Obj _35reg4818 = primCar(exp);
Obj _35reg4819 = primEQ(_35reg4818, intern("quote"));
if (True == _35reg4819) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4820 = primCar(exp);
pushCont(co, 16, _35clofun4878, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg4820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
Obj _35reg4824 = primIsString(exp);
if (True == _35reg4824) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4879) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg4825 = primIsCons(exp);
if (True == _35reg4825) {
Obj _35reg4826 = primCar(exp);
Obj _35reg4827 = primEQ(_35reg4826, intern("quote"));
if (True == _35reg4827) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4828 = primCar(exp);
pushCont(co, 18, _35clofun4878, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.eval0"));
__arg1 = _35reg4828;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 5, _35clofun4879, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("boolean?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label7:
{
Obj exp = __arg1;
Obj _35reg4815 = primIsSymbol(exp);
if (True == _35reg4815) {
__nargs = 2;
__arg0 = globalRef(intern("value"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 6, _35clofun4879, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("number?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val4634 = __arg1;
Obj _35reg4639 = primSet(co, intern("cora/lib/toc.compile"), makeNative(5, _35clofun4874, 1, 0));
Obj _35reg4645 = primSet(co, intern("for-each"), makeNative(9, _35clofun4874, 2, 0));
Obj _35reg4652 = primSet(co, intern("cora/lib/toc.generate-jumptable"), makeNative(13, _35clofun4874, 3, 0));
Obj _35reg4673 = primSet(co, intern("cora/lib/toc.generate-toplevel-group"), makeNative(14, _35clofun4875, 2, 0));
Obj _35reg4680 = primSet(co, intern("cora/lib/toc.generate-c"), makeNative(2, _35clofun4876, 2, 0));
Obj _35reg4699 = primSet(co, intern("cora/lib/toc.handle-import-eagerly"), makeNative(6, _35clofun4876, 1, 0));
Obj _35reg4740 = primSet(co, intern("cora/lib/toc.split-type-and-code"), makeNative(13, _35clofun4876, 4, 0));
Obj _35reg4741 = primSet(co, intern("cora/lib/infer.*typecheck*"), False);
Obj _35reg4776 = primSet(co, intern("cora/lib/toc.preprocess"), makeNative(13, _35clofun4877, 2, 0));
Obj _35reg4782 = primSet(co, intern("cora/lib/toc.compile-to-c"), makeNative(19, _35clofun4877, 3, 0));
Obj _35reg4784 = primSet(co, intern("set"), makeNative(20, _35clofun4877, 2, 0));
Obj _35reg4786 = primSet(co, intern("car"), makeNative(0, _35clofun4878, 1, 0));
Obj _35reg4788 = primSet(co, intern("cdr"), makeNative(1, _35clofun4878, 1, 0));
Obj _35reg4790 = primSet(co, intern("cons"), makeNative(2, _35clofun4878, 2, 0));
Obj _35reg4792 = primSet(co, intern("cons"), makeNative(3, _35clofun4878, 2, 0));
Obj _35reg4794 = primSet(co, intern("+"), makeNative(4, _35clofun4878, 2, 0));
Obj _35reg4796 = primSet(co, intern("-"), makeNative(5, _35clofun4878, 2, 0));
Obj _35reg4798 = primSet(co, intern("*"), makeNative(6, _35clofun4878, 2, 0));
Obj _35reg4800 = primSet(co, intern("/"), makeNative(7, _35clofun4878, 2, 0));
Obj _35reg4802 = primSet(co, intern("="), makeNative(8, _35clofun4878, 2, 0));
Obj _35reg4804 = primSet(co, intern(">"), makeNative(9, _35clofun4878, 2, 0));
Obj _35reg4806 = primSet(co, intern("<"), makeNative(10, _35clofun4878, 2, 0));
Obj _35reg4808 = primSet(co, intern("gensym"), makeNative(11, _35clofun4878, 1, 0));
Obj _35reg4810 = primSet(co, intern("symbol?"), makeNative(12, _35clofun4878, 1, 0));
Obj _35reg4812 = primSet(co, intern("not"), makeNative(13, _35clofun4878, 1, 0));
Obj _35reg4814 = primSet(co, intern("string?"), makeNative(14, _35clofun4878, 1, 0));
Obj _35reg4855 = primSet(co, intern("cora/lib/toc.eval0"), makeNative(7, _35clofun4879, 1, 0));
__nargs = 2;
__arg1 = _35reg4855;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4879) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35val3138 = __arg1;
Obj _35reg3153 = primSet(co, intern("cora/lib/toc.assq"), makeNative(3, _35clofun4856, 2, 0));
Obj _35reg3159 = primSet(co, intern("cora/lib/toc.foldl"), makeNative(7, _35clofun4856, 3, 0));
Obj _35reg3169 = primSet(co, intern("cora/lib/toc.pos-in-list0"), makeNative(11, _35clofun4856, 3, 0));
Obj _35reg3170 = primSet(co, intern("cora/lib/toc.index"), makeNative(12, _35clofun4856, 2, 0));
Obj _35reg3177 = primSet(co, intern("cora/lib/toc.exist-in-env"), makeNative(16, _35clofun4856, 2, 0));
Obj _35reg3178 = primCons(intern("primSet"), Nil);
Obj _35reg3179 = primCons(makeNumber(2), _35reg3178);
Obj _35reg3180 = primCons(intern("set"), _35reg3179);
Obj _35reg3181 = primCons(intern("primCar"), Nil);
Obj _35reg3182 = primCons(makeNumber(1), _35reg3181);
Obj _35reg3183 = primCons(intern("car"), _35reg3182);
Obj _35reg3184 = primCons(intern("primCdr"), Nil);
Obj _35reg3185 = primCons(makeNumber(1), _35reg3184);
Obj _35reg3186 = primCons(intern("cdr"), _35reg3185);
Obj _35reg3187 = primCons(intern("primCons"), Nil);
Obj _35reg3188 = primCons(makeNumber(2), _35reg3187);
Obj _35reg3189 = primCons(intern("cons"), _35reg3188);
Obj _35reg3190 = primCons(intern("primIsCons"), Nil);
Obj _35reg3191 = primCons(makeNumber(1), _35reg3190);
Obj _35reg3192 = primCons(intern("cons?"), _35reg3191);
Obj _35reg3193 = primCons(intern("primAdd"), Nil);
Obj _35reg3194 = primCons(makeNumber(2), _35reg3193);
Obj _35reg3195 = primCons(intern("+"), _35reg3194);
Obj _35reg3196 = primCons(intern("primSub"), Nil);
Obj _35reg3197 = primCons(makeNumber(2), _35reg3196);
Obj _35reg3198 = primCons(intern("-"), _35reg3197);
Obj _35reg3199 = primCons(intern("primMul"), Nil);
Obj _35reg3200 = primCons(makeNumber(2), _35reg3199);
Obj _35reg3201 = primCons(intern("*"), _35reg3200);
Obj _35reg3202 = primCons(intern("primDiv"), Nil);
Obj _35reg3203 = primCons(makeNumber(2), _35reg3202);
Obj _35reg3204 = primCons(intern("/"), _35reg3203);
Obj _35reg3205 = primCons(intern("primEQ"), Nil);
Obj _35reg3206 = primCons(makeNumber(2), _35reg3205);
Obj _35reg3207 = primCons(intern("="), _35reg3206);
Obj _35reg3208 = primCons(intern("primGT"), Nil);
Obj _35reg3209 = primCons(makeNumber(2), _35reg3208);
Obj _35reg3210 = primCons(intern(">"), _35reg3209);
Obj _35reg3211 = primCons(intern("primLT"), Nil);
Obj _35reg3212 = primCons(makeNumber(2), _35reg3211);
Obj _35reg3213 = primCons(intern("<"), _35reg3212);
Obj _35reg3214 = primCons(intern("primGenSym"), Nil);
Obj _35reg3215 = primCons(makeNumber(1), _35reg3214);
Obj _35reg3216 = primCons(intern("gensym"), _35reg3215);
Obj _35reg3217 = primCons(intern("primIsSymbol"), Nil);
Obj _35reg3218 = primCons(makeNumber(1), _35reg3217);
Obj _35reg3219 = primCons(intern("symbol?"), _35reg3218);
Obj _35reg3220 = primCons(intern("primNot"), Nil);
Obj _35reg3221 = primCons(makeNumber(1), _35reg3220);
Obj _35reg3222 = primCons(intern("not"), _35reg3221);
Obj _35reg3223 = primCons(intern("primIsNumber"), Nil);
Obj _35reg3224 = primCons(makeNumber(1), _35reg3223);
Obj _35reg3225 = primCons(intern("integer?"), _35reg3224);
Obj _35reg3226 = primCons(intern("primIsString"), Nil);
Obj _35reg3227 = primCons(makeNumber(1), _35reg3226);
Obj _35reg3228 = primCons(intern("string?"), _35reg3227);
Obj _35reg3229 = primCons(_35reg3228, Nil);
Obj _35reg3230 = primCons(_35reg3225, _35reg3229);
Obj _35reg3231 = primCons(_35reg3222, _35reg3230);
Obj _35reg3232 = primCons(_35reg3219, _35reg3231);
Obj _35reg3233 = primCons(_35reg3216, _35reg3232);
Obj _35reg3234 = primCons(_35reg3213, _35reg3233);
Obj _35reg3235 = primCons(_35reg3210, _35reg3234);
Obj _35reg3236 = primCons(_35reg3207, _35reg3235);
Obj _35reg3237 = primCons(_35reg3204, _35reg3236);
Obj _35reg3238 = primCons(_35reg3201, _35reg3237);
Obj _35reg3239 = primCons(_35reg3198, _35reg3238);
Obj _35reg3240 = primCons(_35reg3195, _35reg3239);
Obj _35reg3241 = primCons(_35reg3192, _35reg3240);
Obj _35reg3242 = primCons(_35reg3189, _35reg3241);
Obj _35reg3243 = primCons(_35reg3186, _35reg3242);
Obj _35reg3244 = primCons(_35reg3183, _35reg3243);
Obj _35reg3245 = primCons(_35reg3180, _35reg3244);
Obj _35reg3246 = primSet(co, intern("cora/lib/toc.*builtin-prims*"), _35reg3245);
Obj _35reg3250 = primSet(co, intern("builtin?"), makeNative(19, _35clofun4856, 1, 0));
Obj _35reg3253 = primSet(co, intern("cora/lib/toc.builtin->name"), makeNative(1, _35clofun4857, 1, 0));
Obj _35reg3256 = primSet(co, intern("cora/lib/toc.builtin->args"), makeNative(4, _35clofun4857, 1, 0));
Obj _35reg3261 = primSet(co, intern("cora/lib/toc.temp-list"), makeNative(7, _35clofun4857, 2, 0));
Obj _35reg3397 = primSet(co, intern("cora/lib/toc.parse"), makeNative(16, _35clofun4858, 2, 0));
Obj _35reg3408 = primSet(co, intern("cora/lib/toc.union"), makeNative(1, _35clofun4859, 2, 0));
Obj _35reg3419 = primSet(co, intern("cora/lib/toc.diff"), makeNative(7, _35clofun4859, 2, 0));
Obj _35reg3470 = primSet(co, intern("cora/lib/toc.convert-protect?"), makeNative(14, _35clofun4859, 1, 0));
Obj _35reg3645 = primSet(co, intern("cora/lib/toc.free-vars"), makeNative(16, _35clofun4860, 1, 0));
Obj _35reg3718 = primSet(co, intern("cora/lib/toc.closure-convert"), makeNative(10, _35clofun4861, 2, 0));
Obj _35reg3721 = primSet(co, intern("cora/lib/toc.id"), makeNative(11, _35clofun4861, 1, 0));
Obj _35reg3858 = primSet(co, intern("cora/lib/toc.tailify"), makeNative(8, _35clofun4862, 2, 0));
Obj _35reg3905 = primSet(co, intern("cora/lib/toc.tailify-list"), makeNative(18, _35clofun4862, 3, 0));
Obj _35reg3984 = primSet(co, intern("cora/lib/toc.explicit-stack"), makeNative(15, _35clofun4863, 2, 0));
Obj _35reg4160 = primSet(co, intern("cora/lib/toc.collect-lambda"), makeNative(8, _35clofun4865, 2, 0));
Obj _35reg4173 = primSet(co, intern("cora/lib/toc.append-result"), makeNative(14, _35clofun4865, 5, 0));
Obj _35reg4180 = primSet(co, intern("cora/lib/toc.wrap-var"), makeNative(16, _35clofun4865, 2, 0));
Obj _35reg4200 = primSet(co, intern("cora/lib/toc.generate-call-list"), makeNative(9, _35clofun4866, 4, 0));
Obj _35reg4470 = primSet(co, intern("cora/lib/toc.generate-inst"), makeNative(12, _35clofun4870, 4, 0));
Obj _35reg4493 = primSet(co, intern("cora/lib/toc.generate-cont"), makeNative(4, _35clofun4871, 3, 0));
Obj _35reg4502 = primSet(co, intern("cora/lib/toc.generate-inst-list-h"), makeNative(10, _35clofun4871, 5, 0));
Obj _35reg4503 = primSet(co, intern("cora/lib/toc.generate-inst-list"), makeNative(11, _35clofun4871, 4, 0));
Obj _35reg4508 = primSet(co, intern("cora/lib/toc.code-gen-func-declare"), makeNative(15, _35clofun4871, 2, 0));
Obj _35reg4516 = primSet(co, intern("cora/lib/toc.local-from-params"), makeNative(1, _35clofun4872, 3, 0));
Obj _35reg4521 = primSet(co, intern("cora/lib/toc.local-from-cont"), makeNative(6, _35clofun4872, 3, 0));
Obj _35reg4528 = primSet(co, intern("cora/lib/toc.generate-call-args-reverse"), makeNative(10, _35clofun4872, 4, 0));
Obj _35reg4590 = primSet(co, intern("cora/lib/toc.code-gen-toplevel"), makeNative(0, _35clofun4873, 2, 0));
Obj _35reg4591 = primSet(co, intern("cora/lib/toc.parse-pass"), makeNative(1, _35clofun4873, 1, 0));
Obj _35reg4592 = primSet(co, intern("cora/lib/toc.closure-convert-pass"), makeNative(2, _35clofun4873, 1, 0));
Obj _35reg4593 = primSet(co, intern("cora/lib/toc.tailify-pass"), makeNative(3, _35clofun4873, 1, 0));
Obj _35reg4594 = primSet(co, intern("cora/lib/toc.explicit-stack-pass"), makeNative(4, _35clofun4873, 1, 0));
Obj _35reg4624 = primSet(co, intern("cora/lib/toc.collect-lambda-pass"), makeNative(15, _35clofun4873, 1, 0));
Obj _35reg4631 = primSet(co, intern("cora/lib/toc.rewrite-->macro"), makeNative(18, _35clofun4873, 2, 0));
pushCont(co, 8, _35clofun4879, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("->");
__arg2 = makeNative(0, _35clofun4874, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3137 = __arg1;
pushCont(co, 9, _35clofun4879, 0);
__nargs = 2;
__arg0 = globalRef(intern("import"));
__arg1 = makeString1("cora/lib/io");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4879) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4878(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35tmp3113 = __arg1;
Obj _35reg4785 = primCar(_35tmp3113);
__nargs = 2;
__arg1 = _35reg4785;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35tmp3114 = __arg1;
Obj _35reg4787 = primCdr(_35tmp3114);
__nargs = 2;
__arg1 = _35reg4787;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35tmp3116 = __arg1;
Obj _35tmp3115 = __arg2;
Obj _35reg4789 = primCons(_35tmp3116, _35tmp3115);
__nargs = 2;
__arg1 = _35reg4789;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35tmp3118 = __arg1;
Obj _35tmp3117 = __arg2;
Obj _35reg4791 = primCons(_35tmp3118, _35tmp3117);
__nargs = 2;
__arg1 = _35reg4791;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35tmp3120 = __arg1;
Obj _35tmp3119 = __arg2;
Obj _35reg4793 = primAdd(_35tmp3120, _35tmp3119);
__nargs = 2;
__arg1 = _35reg4793;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35tmp3122 = __arg1;
Obj _35tmp3121 = __arg2;
Obj _35reg4795 = primSub(_35tmp3122, _35tmp3121);
__nargs = 2;
__arg1 = _35reg4795;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35tmp3124 = __arg1;
Obj _35tmp3123 = __arg2;
Obj _35reg4797 = primMul(_35tmp3124, _35tmp3123);
__nargs = 2;
__arg1 = _35reg4797;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35tmp3126 = __arg1;
Obj _35tmp3125 = __arg2;
Obj _35reg4799 = primDiv(_35tmp3126, _35tmp3125);
__nargs = 2;
__arg1 = _35reg4799;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35tmp3128 = __arg1;
Obj _35tmp3127 = __arg2;
Obj _35reg4801 = primEQ(_35tmp3128, _35tmp3127);
__nargs = 2;
__arg1 = _35reg4801;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35tmp3130 = __arg1;
Obj _35tmp3129 = __arg2;
Obj _35reg4803 = primGT(_35tmp3130, _35tmp3129);
__nargs = 2;
__arg1 = _35reg4803;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35tmp3132 = __arg1;
Obj _35tmp3131 = __arg2;
Obj _35reg4805 = primLT(_35tmp3132, _35tmp3131);
__nargs = 2;
__arg1 = _35reg4805;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35tmp3133 = __arg1;
Obj _35reg4807 = primGenSym(_35tmp3133);
__nargs = 2;
__arg1 = _35reg4807;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35tmp3134 = __arg1;
Obj _35reg4809 = primIsSymbol(_35tmp3134);
__nargs = 2;
__arg1 = _35reg4809;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35tmp3135 = __arg1;
Obj _35reg4811 = primNot(_35tmp3135);
__nargs = 2;
__arg1 = _35reg4811;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35tmp3136 = __arg1;
Obj _35reg4813 = primIsString(_35tmp3136);
__nargs = 2;
__arg1 = _35reg4813;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4878) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val4823 = __arg1;
Obj _35val4821= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val4821;
__arg2 = _35val4823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4878) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val4821 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg4822 = primCdr(exp);
pushCont(co, 15, _35clofun4878, 1, _35val4821);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg4822;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4878) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val4831 = __arg1;
Obj _35val4829= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val4829;
__arg2 = _35val4831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4878) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val4829 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg4830 = primCdr(exp);
pushCont(co, 17, _35clofun4878, 1, _35val4829);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg4830;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4878) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4839 = __arg1;
Obj _35val4837= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val4837;
__arg2 = _35val4839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4878) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4837 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg4838 = primCdr(exp);
pushCont(co, 19, _35clofun4878, 1, _35val4837);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.eval0"));
__arg2 = _35reg4838;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4878) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4877(struct Cora* co){
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
pushCont(co, 20, _35clofun4876, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4760 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg4760;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4877) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label1:
{
Obj _35val4757 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(0, _35clofun4877, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val4763 = __arg1;
Obj _35reg4764 = primCons(intern("begin"), _35val4763);
__nargs = 2;
__arg1 = _35reg4764;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4877) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 2, _35clofun4877, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4765 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg4765;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4877) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label4:
{
Obj _35val4762 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(3, _35clofun4877, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val4768 = __arg1;
Obj _35reg4769 = primCons(intern("begin"), _35val4768);
__nargs = 2;
__arg1 = _35reg4769;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4877) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 5, _35clofun4877, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4770 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg4770;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4877) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label7:
{
Obj _35val4767 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(6, _35clofun4877, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val4773 = __arg1;
Obj _35reg4774 = primCons(intern("begin"), _35val4773);
__nargs = 2;
__arg1 = _35reg4774;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4877) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 8, _35clofun4877, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4775 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg4775;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4877) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label10:
{
Obj _35val4772 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(9, _35clofun4877, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val4743 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val4743) {
Obj _35reg4744 = primCar(sexp);
Obj _35reg4745 = primEQ(intern("begin"), _35reg4744);
if (True == _35reg4745) {
if (True == True) {
Obj _35reg4746 = primCdr(sexp);
Obj sexp1 = _35reg4746;
pushCont(co, 16, _35clofun4876, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4751 = primCons(sexp, Nil);
Obj sexp1 = _35reg4751;
pushCont(co, 19, _35clofun4876, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg4756 = primCdr(sexp);
Obj sexp1 = _35reg4756;
pushCont(co, 1, _35clofun4877, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4761 = primCons(sexp, Nil);
Obj sexp1 = _35reg4761;
pushCont(co, 4, _35clofun4877, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg4766 = primCdr(sexp);
Obj sexp1 = _35reg4766;
pushCont(co, 7, _35clofun4877, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4771 = primCons(sexp, Nil);
Obj sexp1 = _35reg4771;
pushCont(co, 10, _35clofun4877, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label12:
{
Obj _35val4742 = __arg1;
Obj sexp = _35val4742;
pushCont(co, 11, _35clofun4877, 1, sexp);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj file_45path = __arg1;
Obj pkg_45str = __arg2;
pushCont(co, 12, _35clofun4877, 0);
__nargs = 3;
__arg0 = globalRef(intern("read-file-as-sexp"));
__arg1 = file_45path;
__arg2 = pkg_45str;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val4781 = __arg1;
Obj stream= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.close-output-file"));
__arg1 = stream;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val4780 = __arg1;
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stream = _35val4780;
pushCont(co, 14, _35clofun4877, 1, stream);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.generate-c"));
__arg1 = stream;
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val4779 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc = _35val4779;
pushCont(co, 15, _35clofun4877, 1, bc);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.open-output-file"));
__arg1 = to;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val4778 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj input = _35val4778;
pushCont(co, 16, _35clofun4877, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.compile"));
__arg1 = input;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val4777 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj sexp1 = _35val4777;
pushCont(co, 17, _35clofun4877, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj from = __arg1;
Obj to = __arg2;
Obj pkg_45str = __arg3;
pushCont(co, 18, _35clofun4877, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.preprocess"));
__arg1 = from;
__arg2 = pkg_45str;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4877) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35tmp3112 = __arg1;
Obj _35tmp3111 = __arg2;
Obj _35reg4783 = primSet(co, _35tmp3112, _35tmp3111);
__nargs = 2;
__arg1 = _35reg4783;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4877) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4876(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val4675 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 20, _35clofun4875, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(17, _35clofun4875, 1, 1, to);
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val4674 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun4876, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("#include \"runtime.h\"\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj to = __arg1;
Obj bc = __arg2;
pushCont(co, 1, _35clofun4876, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("#include \"types.h\"\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc3102 = makeNative(3, _35clofun4876, 0, 0);
Obj __ = closureRef(co, 0);
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4876) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val4698 = __arg1;
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35p3100 = __arg1;
Obj _35cc3101 = makeNative(4, _35clofun4876, 0, 1, _35p3100);
Obj _35reg4681 = primIsCons(_35p3100);
if (True == _35reg4681) {
Obj _35reg4682 = primCar(_35p3100);
Obj _35reg4683 = primIsCons(_35reg4682);
if (True == _35reg4683) {
Obj _35reg4684 = primCar(_35p3100);
Obj _35reg4685 = primCar(_35reg4684);
Obj _35reg4686 = primEQ(intern("import"), _35reg4685);
if (True == _35reg4686) {
Obj _35reg4687 = primCar(_35p3100);
Obj _35reg4688 = primCdr(_35reg4687);
Obj _35reg4689 = primIsCons(_35reg4688);
if (True == _35reg4689) {
Obj _35reg4690 = primCar(_35p3100);
Obj _35reg4691 = primCdr(_35reg4690);
Obj _35reg4692 = primCar(_35reg4691);
Obj pkg = _35reg4692;
Obj _35reg4693 = primCar(_35p3100);
Obj _35reg4694 = primCdr(_35reg4693);
Obj _35reg4695 = primCdr(_35reg4694);
Obj _35reg4696 = primEQ(Nil, _35reg4695);
if (True == _35reg4696) {
Obj _35reg4697 = primCdr(_35p3100);
Obj remain = _35reg4697;
pushCont(co, 5, _35clofun4876, 1, remain);
__nargs = 2;
__arg0 = globalRef(intern("import"));
__arg1 = pkg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc3110 = makeNative(7, _35clofun4876, 0, 0);
Obj _35reg4700 = primIsCons(closureRef(co, 0));
if (True == _35reg4700) {
Obj _35reg4701 = primCar(closureRef(co, 0));
Obj exp = _35reg4701;
Obj _35reg4702 = primCdr(closureRef(co, 0));
Obj more = _35reg4702;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg4703 = primCons(exp, Nil);
Obj _35reg4704 = primCons(intern("backquote"), _35reg4703);
Obj _35reg4705 = primCons(_35reg4704, Nil);
Obj _35reg4706 = primCons(intern("macroexpand"), _35reg4705);
Obj _35reg4707 = primCons(intern("tvar"), Nil);
Obj _35reg4708 = primCons(Nil, Nil);
Obj _35reg4709 = primCons(Nil, _35reg4708);
Obj _35reg4710 = primCons(_35reg4707, _35reg4709);
Obj _35reg4711 = primCons(_35reg4706, _35reg4710);
Obj _35reg4712 = primCons(intern("cora/lib/infer.check-type"), _35reg4711);
Obj _35reg4713 = primCons(_35reg4712, type);
Obj _35reg4714 = primCons(exp, code);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = more;
__arg2 = _35reg4713;
__arg3 = _35reg4714;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc3109 = makeNative(8, _35clofun4876, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg4715 = primIsCons(closureRef(co, 0));
if (True == _35reg4715) {
Obj _35reg4716 = primCar(closureRef(co, 0));
Obj _35reg4717 = primIsCons(_35reg4716);
if (True == _35reg4717) {
Obj _35reg4718 = primCar(closureRef(co, 0));
Obj _35reg4719 = primCar(_35reg4718);
Obj _35reg4720 = primEQ(intern(":declare"), _35reg4719);
if (True == _35reg4720) {
Obj _35reg4721 = primCar(closureRef(co, 0));
Obj _35reg4722 = primCdr(_35reg4721);
Obj exp = _35reg4722;
Obj _35reg4723 = primCdr(closureRef(co, 0));
Obj more = _35reg4723;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg4724 = primCons(intern("declare"), exp);
Obj _35reg4725 = primCons(_35reg4724, type);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = more;
__arg2 = _35reg4725;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc3108 = makeNative(9, _35clofun4876, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg4726 = primIsCons(closureRef(co, 0));
if (True == _35reg4726) {
Obj _35reg4727 = primCar(closureRef(co, 0));
Obj _35reg4728 = primIsCons(_35reg4727);
if (True == _35reg4728) {
Obj _35reg4729 = primCar(closureRef(co, 0));
Obj _35reg4730 = primCar(_35reg4729);
Obj _35reg4731 = primEQ(intern(":type"), _35reg4730);
if (True == _35reg4731) {
Obj _35reg4732 = primCar(closureRef(co, 0));
Obj _35reg4733 = primCdr(_35reg4732);
Obj exp = _35reg4733;
Obj _35reg4734 = primCdr(closureRef(co, 0));
Obj more = _35reg4734;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg4735 = primCons(intern("begin"), exp);
Obj _35reg4736 = primCons(_35reg4735, type);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = more;
__arg2 = _35reg4736;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val4739 = __arg1;
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val4738= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = k;
__arg1 = _35val4738;
__arg2 = _35val4739;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val4738 = __arg1;
Obj code= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun4876, 2, k, _35val4738);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35p3103 = __arg1;
Obj _35p3104 = __arg2;
Obj _35p3105 = __arg3;
Obj _35p3106 = co->args[4];
Obj _35cc3107 = makeNative(10, _35clofun4876, 0, 4, _35p3103, _35p3104, _35p3105, _35p3106);
Obj _35reg4737 = primEQ(Nil, _35p3103);
if (True == _35reg4737) {
Obj type = _35p3104;
Obj code = _35p3105;
Obj k = _35p3106;
pushCont(co, 12, _35clofun4876, 2, code, k);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = type;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val4748 = __arg1;
Obj _35reg4749 = primCons(intern("begin"), _35val4748);
__nargs = 2;
__arg1 = _35reg4749;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4876) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 14, _35clofun4876, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4750 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg4750;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4876) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label16:
{
Obj _35val4747 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(15, _35clofun4876, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val4753 = __arg1;
Obj _35reg4754 = primCons(intern("begin"), _35val4753);
__nargs = 2;
__arg1 = _35reg4754;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4876) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 17, _35clofun4876, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4755 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg4755;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4876) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label19:
{
Obj _35val4752 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(18, _35clofun4876, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4876) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4758 = __arg1;
Obj _35reg4759 = primCons(intern("begin"), _35val4758);
__nargs = 2;
__arg1 = _35reg4759;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4876) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4875(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val4666 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 20, _35clofun4874, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("fail:\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val4665 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun4875, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(14, _35clofun4874, 1, 1, to);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val4664 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun4875, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("goto *jumpTable[co->ctx.pc.label];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val4663 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun4875, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("};\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val4662 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 3, _35clofun4875, 2, group, to);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.generate-jumptable"));
__arg1 = to;
__arg2 = makeNumber(0);
__arg3 = _35val4662;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val4661 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun4875, 2, group, to);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val4660 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun4875, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("static void* jumpTable[] = {");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val4659 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun4875, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("Obj __arg3 = co->args[3];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val4658 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun4875, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("Obj __arg2 = co->args[2];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val4657 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun4875, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("Obj __arg1 = co->args[1];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val4656 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun4875, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("Obj __arg0 = co->args[0];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val4655 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun4875, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("int __nargs = co->nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val4654 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun4875, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val4653 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun4875, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.code-gen-func-declare"));
__arg1 = to;
__arg2 = _35val4653;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj to = __arg1;
Obj group = __arg2;
pushCont(co, 13, _35clofun4875, 2, group, to);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val4677 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = closureRef(co, 0);
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val4676 = __arg1;
pushCont(co, 15, _35clofun4875, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.code-gen-func-declare"));
__arg1 = closureRef(co, 0);
__arg2 = _35val4676;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj group = __arg1;
pushCont(co, 16, _35clofun4875, 0);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj group = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.generate-toplevel-group"));
__arg1 = closureRef(co, 0);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4679 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(18, _35clofun4875, 1, 1, to);
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4678 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun4875, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4875) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4874(struct Cora* co){
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
pushCont(co, 20, _35clofun4873, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val4638 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda-pass"));
__arg1 = _35val4638;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val4637 = __arg1;
pushCont(co, 1, _35clofun4874, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack-pass"));
__arg1 = _35val4637;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val4636 = __arg1;
pushCont(co, 2, _35clofun4874, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.tailify-pass"));
__arg1 = _35val4636;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val4635 = __arg1;
pushCont(co, 3, _35clofun4874, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert-pass"));
__arg1 = _35val4635;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj exp = __arg1;
pushCont(co, 4, _35clofun4874, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.parse-pass"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val4643 = __arg1;
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = fn;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc3099 = makeNative(6, _35clofun4874, 0, 0);
Obj fn = closureRef(co, 0);
Obj _35reg4640 = primIsCons(closureRef(co, 1));
if (True == _35reg4640) {
Obj _35reg4641 = primCar(closureRef(co, 1));
Obj x = _35reg4641;
Obj _35reg4642 = primCdr(closureRef(co, 1));
Obj y = _35reg4642;
pushCont(co, 7, _35clofun4874, 2, fn, y);
__nargs = 2;
__arg0 = fn;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3099;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35p3096 = __arg1;
Obj _35p3097 = __arg2;
Obj _35cc3098 = makeNative(8, _35clofun4874, 0, 2, _35p3096, _35p3097);
Obj fn = _35p3096;
Obj _35reg4644 = primEQ(Nil, _35p3097);
if (True == _35reg4644) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4874) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3098;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val4647 = __arg1;
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
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val4650 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg4651 = primAdd(i, makeNumber(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.generate-jumptable"));
__arg1 = to;
__arg2 = _35reg4651;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val4649 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 11, _35clofun4874, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = to;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj to = __arg1;
Obj i = __arg2;
Obj n = __arg3;
Obj _35reg4646 = primEQ(i, makeNumber(0));
if (True == _35reg4646) {
pushCont(co, 10, _35clofun4874, 2, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("&&label0");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4648 = primLT(i, n);
if (True == _35reg4648) {
pushCont(co, 12, _35clofun4874, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1(", &&label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4874) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label14:
{
Obj x = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.code-gen-toplevel"));
__arg1 = closureRef(co, 0);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val4672 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("\n}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val4671 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 15, _35clofun4874, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->args[3] = __arg3;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val4670 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 16, _35clofun4874, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->args[2] = __arg2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val4669 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 17, _35clofun4874, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->args[1] = __arg1;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4668 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun4874, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->args[0] = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4667 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 19, _35clofun4874, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = to;
__arg2 = makeString1("co->nargs = __nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4874) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4873(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35p3088 = __arg1;
Obj _35p3089 = __arg2;
Obj _35cc3090 = makeNative(14, _35clofun4872, 0, 2, _35p3088, _35p3089);
Obj w = _35p3088;
Obj _35reg4531 = primIsCons(_35p3089);
if (True == _35reg4531) {
Obj _35reg4532 = primCar(_35p3089);
Obj label = _35reg4532;
Obj _35reg4533 = primCdr(_35p3089);
Obj _35reg4534 = primIsCons(_35reg4533);
if (True == _35reg4534) {
Obj _35reg4535 = primCdr(_35p3089);
Obj _35reg4536 = primCar(_35reg4535);
Obj _35reg4537 = primIsCons(_35reg4536);
if (True == _35reg4537) {
Obj _35reg4538 = primCdr(_35p3089);
Obj _35reg4539 = primCar(_35reg4538);
Obj _35reg4540 = primCar(_35reg4539);
Obj _35reg4541 = primEQ(intern("lambda"), _35reg4540);
if (True == _35reg4541) {
Obj _35reg4542 = primCdr(_35p3089);
Obj _35reg4543 = primCar(_35reg4542);
Obj _35reg4544 = primCdr(_35reg4543);
Obj _35reg4545 = primIsCons(_35reg4544);
if (True == _35reg4545) {
Obj _35reg4546 = primCdr(_35p3089);
Obj _35reg4547 = primCar(_35reg4546);
Obj _35reg4548 = primCdr(_35reg4547);
Obj _35reg4549 = primCar(_35reg4548);
Obj params = _35reg4549;
Obj _35reg4550 = primCdr(_35p3089);
Obj _35reg4551 = primCar(_35reg4550);
Obj _35reg4552 = primCdr(_35reg4551);
Obj _35reg4553 = primCdr(_35reg4552);
Obj _35reg4554 = primIsCons(_35reg4553);
if (True == _35reg4554) {
Obj _35reg4555 = primCdr(_35p3089);
Obj _35reg4556 = primCar(_35reg4555);
Obj _35reg4557 = primCdr(_35reg4556);
Obj _35reg4558 = primCdr(_35reg4557);
Obj _35reg4559 = primCar(_35reg4558);
Obj actives = _35reg4559;
Obj _35reg4560 = primCdr(_35p3089);
Obj _35reg4561 = primCar(_35reg4560);
Obj _35reg4562 = primCdr(_35reg4561);
Obj _35reg4563 = primCdr(_35reg4562);
Obj _35reg4564 = primCdr(_35reg4563);
Obj _35reg4565 = primIsCons(_35reg4564);
if (True == _35reg4565) {
Obj _35reg4566 = primCdr(_35p3089);
Obj _35reg4567 = primCar(_35reg4566);
Obj _35reg4568 = primCdr(_35reg4567);
Obj _35reg4569 = primCdr(_35reg4568);
Obj _35reg4570 = primCdr(_35reg4569);
Obj _35reg4571 = primCar(_35reg4570);
Obj body = _35reg4571;
Obj _35reg4572 = primCdr(_35p3089);
Obj _35reg4573 = primCar(_35reg4572);
Obj _35reg4574 = primCdr(_35reg4573);
Obj _35reg4575 = primCdr(_35reg4574);
Obj _35reg4576 = primCdr(_35reg4575);
Obj _35reg4577 = primCdr(_35reg4576);
Obj _35reg4578 = primEQ(Nil, _35reg4577);
if (True == _35reg4578) {
Obj _35reg4579 = primCdr(_35p3089);
Obj _35reg4580 = primCdr(_35reg4579);
Obj _35reg4581 = primEQ(Nil, _35reg4580);
if (True == _35reg4581) {
pushCont(co, 20, _35clofun4872, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = exp;
__arg2 = globalRef(intern("cora/lib/toc.id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val4602 = __arg1;
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res = _35val4602;
Obj _35reg4603 = primCons(intern("entry"), makeNumber(0));
Obj _35reg4604 = primCons(e1, Nil);
Obj _35reg4605 = primCons(Nil, _35reg4604);
Obj _35reg4606 = primCons(Nil, _35reg4605);
Obj _35reg4607 = primCons(intern("lambda"), _35reg4606);
Obj _35reg4608 = primCons(_35reg4607, Nil);
Obj _35reg4609 = primCons(_35reg4603, _35reg4608);
Obj _35reg4610 = primCons(_35reg4609, Nil);
Obj _35reg4611 = primCons(_35reg4610, res);
__nargs = 2;
__arg1 = _35reg4611;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4873) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val4613 = __arg1;
Obj _35val4612= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg4614 = primCons(_35val4612, _35val4613);
Obj res = _35reg4614;
Obj _35reg4615 = primCons(intern("entry"), makeNumber(0));
Obj _35reg4616 = primCons(e1, Nil);
Obj _35reg4617 = primCons(Nil, _35reg4616);
Obj _35reg4618 = primCons(Nil, _35reg4617);
Obj _35reg4619 = primCons(intern("lambda"), _35reg4618);
Obj _35reg4620 = primCons(_35reg4619, Nil);
Obj _35reg4621 = primCons(_35reg4615, _35reg4620);
Obj _35reg4622 = primCons(_35reg4621, Nil);
Obj _35reg4623 = primCons(_35reg4622, res);
__nargs = 2;
__arg1 = _35reg4623;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4873) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val4612 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun4873, 2, _35val4612, e1);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val4601 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val4601) {
pushCont(co, 5, _35clofun4873, 1, e1);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 7, _35clofun4873, 2, v, e1);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val4600 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur = _35val4600;
pushCont(co, 8, _35clofun4873, 3, cur, v, e1);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val4599 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1 = _35val4599;
pushCont(co, 9, _35clofun4873, 2, v, e1);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val4598 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun4873, 1, v);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = v;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val4597 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun4873, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(2);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val4596 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun4873, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val4595 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v = _35val4595;
pushCont(co, 13, _35clofun4873, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj exp = __arg1;
pushCont(co, 14, _35clofun4873, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("vector"));
__arg1 = makeNumber(3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc3095 = makeNative(16, _35clofun4873, 0, 0);
Obj obj = closureRef(co, 0);
Obj _35reg4625 = primIsCons(closureRef(co, 1));
if (True == _35reg4625) {
Obj _35reg4626 = primCar(closureRef(co, 1));
Obj hd = _35reg4626;
Obj _35reg4627 = primCdr(closureRef(co, 1));
Obj more = _35reg4627;
Obj _35reg4628 = primCons(obj, Nil);
Obj _35reg4629 = primCons(hd, _35reg4628);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.rewrite-->macro"));
__arg1 = _35reg4629;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35p3092 = __arg1;
Obj _35p3093 = __arg2;
Obj _35cc3094 = makeNative(17, _35clofun4873, 0, 2, _35p3092, _35p3093);
Obj obj = _35p3092;
Obj _35reg4630 = primEQ(Nil, _35p3093);
if (True == _35reg4630) {
__nargs = 2;
__arg1 = obj;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4873) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val4633 = __arg1;
Obj obj= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fns = _35val4633;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.rewrite-->macro"));
__arg1 = obj;
__arg2 = fns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4632 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj obj = _35val4632;
pushCont(co, 19, _35clofun4873, 1, obj);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4873) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4872(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val4509 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 20, _35clofun4871, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 0, _35clofun4872, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val4520 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val4519 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun4872, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val4518 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 3, _35clofun4872, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("= co->ctx.stk.stack[co->ctx.stk.base + ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val4517 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 4, _35clofun4872, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 5, _35clofun4872, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val4525 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4526 = primAdd(idx, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-args-reverse"));
__arg1 = fn;
__arg2 = w;
__arg3 = _35reg4526;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc3087 = makeNative(7, _35clofun4872, 0, 0);
Obj fn = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj idx = closureRef(co, 2);
Obj _35reg4522 = primIsCons(closureRef(co, 3));
if (True == _35reg4522) {
Obj _35reg4523 = primCar(closureRef(co, 3));
Obj a = _35reg4523;
Obj _35reg4524 = primCdr(closureRef(co, 3));
Obj b = _35reg4524;
pushCont(co, 8, _35clofun4872, 4, idx, fn, w, b);
__nargs = 4;
__arg0 = fn;
__arg1 = w;
__arg2 = idx;
__arg3 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p3082 = __arg1;
Obj _35p3083 = __arg2;
Obj _35p3084 = __arg3;
Obj _35p3085 = co->args[4];
Obj _35cc3086 = makeNative(9, _35clofun4872, 0, 4, _35p3082, _35p3083, _35p3084, _35p3085);
Obj fn = _35p3082;
Obj w = _35p3083;
Obj idx = _35p3084;
Obj _35reg4527 = primEQ(Nil, _35p3085);
if (True == _35reg4527) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4872) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3086;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val4530 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.display"));
__arg1 = makeString1("\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val4529 = __arg1;
Obj other= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 12, _35clofun4872, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.display"));
__arg1 = other;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc3091 = makeNative(11, _35clofun4872, 0, 0);
Obj w = closureRef(co, 0);
Obj other = closureRef(co, 1);
pushCont(co, 13, _35clofun4872, 1, other);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io.display"));
__arg1 = makeString1("wrong format of toplevel\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val4589 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val4587 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4588 = primCar(label);
pushCont(co, 15, _35clofun4872, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = _35reg4588;
__arg2 = params;
__arg3 = w;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val4586 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 16, _35clofun4872, 4, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc.local-from-cont"));
__arg2 = w;
__arg3 = makeNumber(0);
co->args[4] = actives;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val4585 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 17, _35clofun4872, 5, actives, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc.local-from-params"));
__arg2 = w;
__arg3 = makeNumber(1);
co->args[4] = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4584 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 18, _35clofun4872, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4582 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg4583 = primCdr(label);
pushCont(co, 19, _35clofun4872, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35reg4583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4872) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4871(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val4485 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 20, _35clofun4870, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val4483 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4484 = primCar(label);
pushCont(co, 0, _35clofun4871, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = _35reg4484;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val4482 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 1, _35clofun4871, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val4480 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4481 = primCdr(label);
pushCont(co, 2, _35clofun4871, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35reg4481;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35p3071 = __arg1;
Obj _35p3072 = __arg2;
Obj _35p3073 = __arg3;
Obj _35cc3074 = makeNative(13, _35clofun4870, 0, 0);
Obj self = _35p3071;
Obj w = _35p3072;
Obj _35reg4471 = primIsCons(_35p3073);
if (True == _35reg4471) {
Obj _35reg4472 = primCar(_35p3073);
Obj _35reg4473 = primEQ(intern("%continuation"), _35reg4472);
if (True == _35reg4473) {
Obj _35reg4474 = primCdr(_35p3073);
Obj _35reg4475 = primIsCons(_35reg4474);
if (True == _35reg4475) {
Obj _35reg4476 = primCdr(_35p3073);
Obj _35reg4477 = primCar(_35reg4476);
Obj label = _35reg4477;
Obj _35reg4478 = primCdr(_35p3073);
Obj _35reg4479 = primCdr(_35reg4478);
Obj stacks = _35reg4479;
pushCont(co, 3, _35clofun4871, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("pushCont(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val4500 = __arg1;
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
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val4498 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg4499 = primNot(_35val4498);
if (True == _35reg4499) {
pushCont(co, 6, _35clofun4871, 5, self, env, fn, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val4497 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 7, _35clofun4871, 5, self, env, fn, w, b);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc3081 = makeNative(5, _35clofun4871, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj fn = closureRef(co, 2);
Obj w = closureRef(co, 3);
Obj _35reg4494 = primIsCons(closureRef(co, 4));
if (True == _35reg4494) {
Obj _35reg4495 = primCar(closureRef(co, 4));
Obj a = _35reg4495;
Obj _35reg4496 = primCdr(closureRef(co, 4));
Obj b = _35reg4496;
pushCont(co, 8, _35clofun4871, 5, self, env, fn, w, b);
__nargs = 5;
__arg0 = fn;
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3081;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p3075 = __arg1;
Obj _35p3076 = __arg2;
Obj _35p3077 = __arg3;
Obj _35p3078 = co->args[4];
Obj _35p3079 = co->args[5];
Obj _35cc3080 = makeNative(9, _35clofun4871, 0, 5, _35p3075, _35p3076, _35p3077, _35p3078, _35p3079);
Obj self = _35p3075;
Obj env = _35p3076;
Obj fn = _35p3077;
Obj w = _35p3078;
Obj _35reg4501 = primEQ(Nil, _35p3079);
if (True == _35reg4501) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4871) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
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
__arg0 = globalRef(intern("cora/lib/toc.generate-inst-list-h"));
__arg1 = self;
__arg2 = env;
__arg3 = globalRef(intern("cora/lib/toc.generate-inst"));
co->args[4] = w;
co->args[5] = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val4507 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val4506 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 12, _35clofun4871, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("(struct Cora* co");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val4504 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg4505 = primCar(label);
pushCont(co, 13, _35clofun4871, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = _35reg4505;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj w = __arg1;
Obj label = __arg2;
pushCont(co, 14, _35clofun4871, 2, label, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("void ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val4513 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val4512 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun4871, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val4515 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4514 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 18, _35clofun4871, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4510 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg4511 = primLT(i, makeNumber(4));
if (True == _35reg4511) {
pushCont(co, 17, _35clofun4871, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = __arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, _35clofun4871, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4871) { co->ctx.pc = ps; goto fail; };
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

void _35clofun4870(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val4422 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val4422) {
pushCont(co, 17, _35clofun4869, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("makeNumber(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4425 = primIsString(x);
if (True == _35reg4425) {
pushCont(co, 20, _35clofun4869, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("makeString1(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4429 = primEQ(x, Nil);
if (True == _35reg4429) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("Nil");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4430 = primEQ(x, True);
if (True == _35reg4430) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("True");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4431 = primEQ(x, False);
if (True == _35reg4431) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("False");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}
}
}

label1:
{
Obj _35cc3061 = makeNative(12, _35clofun4869, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4408 = primIsCons(closureRef(co, 3));
if (True == _35reg4408) {
Obj _35reg4409 = primCar(closureRef(co, 3));
Obj _35reg4410 = primEQ(intern("%const"), _35reg4409);
if (True == _35reg4410) {
Obj _35reg4411 = primCdr(closureRef(co, 3));
Obj _35reg4412 = primIsCons(_35reg4411);
if (True == _35reg4412) {
Obj _35reg4413 = primCdr(closureRef(co, 3));
Obj _35reg4414 = primCar(_35reg4413);
Obj x = _35reg4414;
Obj _35reg4415 = primCdr(closureRef(co, 3));
Obj _35reg4416 = primCdr(_35reg4415);
Obj _35reg4417 = primEQ(Nil, _35reg4416);
if (True == _35reg4417) {
Obj _35reg4418 = primIsSymbol(x);
if (True == _35reg4418) {
pushCont(co, 15, _35clofun4869, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 0, _35clofun4870, 2, x, w);
__nargs = 2;
__arg0 = globalRef(intern("number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3061;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3061;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3061;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3061;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val4443 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val4442 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun4870, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc3060 = makeNative(1, _35clofun4870, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4432 = primIsCons(closureRef(co, 3));
if (True == _35reg4432) {
Obj _35reg4433 = primCar(closureRef(co, 3));
Obj _35reg4434 = primEQ(intern("%stack-ref"), _35reg4433);
if (True == _35reg4434) {
Obj _35reg4435 = primCdr(closureRef(co, 3));
Obj _35reg4436 = primIsCons(_35reg4435);
if (True == _35reg4436) {
Obj _35reg4437 = primCdr(closureRef(co, 3));
Obj _35reg4438 = primCar(_35reg4437);
Obj idx = _35reg4438;
Obj _35reg4439 = primCdr(closureRef(co, 3));
Obj _35reg4440 = primCdr(_35reg4439);
Obj _35reg4441 = primEQ(Nil, _35reg4440);
if (True == _35reg4441) {
pushCont(co, 3, _35clofun4870, 2, idx, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("stackRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val4455 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val4454 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun4870, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc3059 = makeNative(4, _35clofun4870, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4444 = primIsCons(closureRef(co, 3));
if (True == _35reg4444) {
Obj _35reg4445 = primCar(closureRef(co, 3));
Obj _35reg4446 = primEQ(intern("%closure-ref"), _35reg4445);
if (True == _35reg4446) {
Obj _35reg4447 = primCdr(closureRef(co, 3));
Obj _35reg4448 = primIsCons(_35reg4447);
if (True == _35reg4448) {
Obj _35reg4449 = primCdr(closureRef(co, 3));
Obj _35reg4450 = primCar(_35reg4449);
Obj idx = _35reg4450;
Obj _35reg4451 = primCdr(closureRef(co, 3));
Obj _35reg4452 = primCdr(_35reg4451);
Obj _35reg4453 = primEQ(Nil, _35reg4452);
if (True == _35reg4453) {
pushCont(co, 6, _35clofun4870, 2, idx, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("closureRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val4468 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("\"))");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val4467 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 8, _35clofun4870, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = _35val4467;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val4466 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun4870, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc3058 = makeNative(7, _35clofun4870, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4456 = primIsCons(closureRef(co, 3));
if (True == _35reg4456) {
Obj _35reg4457 = primCar(closureRef(co, 3));
Obj _35reg4458 = primEQ(intern("%global"), _35reg4457);
if (True == _35reg4458) {
Obj _35reg4459 = primCdr(closureRef(co, 3));
Obj _35reg4460 = primIsCons(_35reg4459);
if (True == _35reg4460) {
Obj _35reg4461 = primCdr(closureRef(co, 3));
Obj _35reg4462 = primCar(_35reg4461);
Obj x = _35reg4462;
Obj _35reg4463 = primCdr(closureRef(co, 3));
Obj _35reg4464 = primCdr(_35reg4463);
Obj _35reg4465 = primEQ(Nil, _35reg4464);
if (True == _35reg4465) {
pushCont(co, 10, _35clofun4870, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("globalRef(intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3058;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3058;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3058;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3058;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35p3053 = __arg1;
Obj _35p3054 = __arg2;
Obj _35p3055 = __arg3;
Obj _35p3056 = co->args[4];
Obj _35cc3057 = makeNative(11, _35clofun4870, 0, 4, _35p3053, _35p3054, _35p3055, _35p3056);
Obj self = _35p3053;
Obj env = _35p3054;
Obj w = _35p3055;
Obj x = _35p3056;
Obj _35reg4469 = primIsSymbol(x);
if (True == _35reg4469) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3057;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val4491 = __arg1;
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
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x = __arg1;
pushCont(co, 14, _35clofun4870, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = closureRef(co, 1);
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val4492 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val4489 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg4490 = primNot(_35val4489);
if (True == _35reg4490) {
pushCont(co, 16, _35clofun4870, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(15, _35clofun4870, 1, 2, self, w);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val4488 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 17, _35clofun4870, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4487 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 18, _35clofun4870, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35val4487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4486 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 19, _35clofun4870, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4870) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4869(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val4362 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 20, _35clofun4868, 5, f, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = _35val4362;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc3063 = makeNative(15, _35clofun4868, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4345 = primIsCons(closureRef(co, 3));
if (True == _35reg4345) {
Obj _35reg4346 = primCar(closureRef(co, 3));
Obj _35reg4347 = primIsCons(_35reg4346);
if (True == _35reg4347) {
Obj _35reg4348 = primCar(closureRef(co, 3));
Obj _35reg4349 = primCar(_35reg4348);
Obj _35reg4350 = primEQ(intern("%builtin"), _35reg4349);
if (True == _35reg4350) {
Obj _35reg4351 = primCar(closureRef(co, 3));
Obj _35reg4352 = primCdr(_35reg4351);
Obj _35reg4353 = primIsCons(_35reg4352);
if (True == _35reg4353) {
Obj _35reg4354 = primCar(closureRef(co, 3));
Obj _35reg4355 = primCdr(_35reg4354);
Obj _35reg4356 = primCar(_35reg4355);
Obj f = _35reg4356;
Obj _35reg4357 = primCar(closureRef(co, 3));
Obj _35reg4358 = primCdr(_35reg4357);
Obj _35reg4359 = primCdr(_35reg4358);
Obj _35reg4360 = primEQ(Nil, _35reg4359);
if (True == _35reg4360) {
Obj _35reg4361 = primCdr(closureRef(co, 3));
Obj args = _35reg4361;
pushCont(co, 0, _35clofun4869, 5, f, self, env, args, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.builtin->name"));
__arg1 = f;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val4401 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg4402 = primCons(a, env);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = _35reg4402;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val4400 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 2, _35clofun4869, 5, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val4399 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 3, _35clofun4869, 5, a, env, self, w, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val4398 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 4, _35clofun4869, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val4397 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 5, _35clofun4869, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val4406 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg4407 = primCons(a, env);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = _35reg4407;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val4405 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 7, _35clofun4869, 5, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val4404 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 8, _35clofun4869, 5, a, env, self, w, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val4403 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 9, _35clofun4869, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val4395 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj idx = _35val4395;
Obj _35reg4396 = primLT(idx, makeNumber(0));
if (True == _35reg4396) {
pushCont(co, 6, _35clofun4869, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
pushCont(co, 10, _35clofun4869, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc3062 = makeNative(1, _35clofun4869, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4369 = primIsCons(closureRef(co, 3));
if (True == _35reg4369) {
Obj _35reg4370 = primCar(closureRef(co, 3));
Obj _35reg4371 = primEQ(intern("let"), _35reg4370);
if (True == _35reg4371) {
Obj _35reg4372 = primCdr(closureRef(co, 3));
Obj _35reg4373 = primIsCons(_35reg4372);
if (True == _35reg4373) {
Obj _35reg4374 = primCdr(closureRef(co, 3));
Obj _35reg4375 = primCar(_35reg4374);
Obj a = _35reg4375;
Obj _35reg4376 = primCdr(closureRef(co, 3));
Obj _35reg4377 = primCdr(_35reg4376);
Obj _35reg4378 = primIsCons(_35reg4377);
if (True == _35reg4378) {
Obj _35reg4379 = primCdr(closureRef(co, 3));
Obj _35reg4380 = primCdr(_35reg4379);
Obj _35reg4381 = primCar(_35reg4380);
Obj b = _35reg4381;
Obj _35reg4382 = primCdr(closureRef(co, 3));
Obj _35reg4383 = primCdr(_35reg4382);
Obj _35reg4384 = primCdr(_35reg4383);
Obj _35reg4385 = primIsCons(_35reg4384);
if (True == _35reg4385) {
Obj _35reg4386 = primCdr(closureRef(co, 3));
Obj _35reg4387 = primCdr(_35reg4386);
Obj _35reg4388 = primCdr(_35reg4387);
Obj _35reg4389 = primCar(_35reg4388);
Obj c = _35reg4389;
Obj _35reg4390 = primCdr(closureRef(co, 3));
Obj _35reg4391 = primCdr(_35reg4390);
Obj _35reg4392 = primCdr(_35reg4391);
Obj _35reg4393 = primCdr(_35reg4392);
Obj _35reg4394 = primEQ(Nil, _35reg4393);
if (True == _35reg4394) {
pushCont(co, 11, _35clofun4869, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.index"));
__arg1 = a;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val4421 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val4420 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 13, _35clofun4869, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = _35val4420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val4419 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun4869, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val4424 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val4423 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun4869, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val4428 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4427 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun4869, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = _35val4427;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4426 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun4869, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc/internal.escape-str"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4869) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4868(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val4307 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 20, _35clofun4867, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35val4307;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val4306 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 0, _35clofun4868, 4, self, env, frees, w);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val4305 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 1, _35clofun4868, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val4304 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 2, _35clofun4868, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val4303 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 3, _35clofun4868, 5, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val4301 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg4302 = primCar(label);
pushCont(co, 4, _35clofun4868, 5, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = _35reg4302;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val4300 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 5, _35clofun4868, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val4298 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg4299 = primCdr(label);
pushCont(co, 6, _35clofun4868, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35reg4299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc3065 = makeNative(16, _35clofun4867, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4282 = primIsCons(closureRef(co, 3));
if (True == _35reg4282) {
Obj _35reg4283 = primCar(closureRef(co, 3));
Obj _35reg4284 = primEQ(intern("%closure"), _35reg4283);
if (True == _35reg4284) {
Obj _35reg4285 = primCdr(closureRef(co, 3));
Obj _35reg4286 = primIsCons(_35reg4285);
if (True == _35reg4286) {
Obj _35reg4287 = primCdr(closureRef(co, 3));
Obj _35reg4288 = primCar(_35reg4287);
Obj label = _35reg4288;
Obj _35reg4289 = primCdr(closureRef(co, 3));
Obj _35reg4290 = primCdr(_35reg4289);
Obj _35reg4291 = primIsCons(_35reg4290);
if (True == _35reg4291) {
Obj _35reg4292 = primCdr(closureRef(co, 3));
Obj _35reg4293 = primCdr(_35reg4292);
Obj _35reg4294 = primCar(_35reg4293);
Obj nargs = _35reg4294;
Obj _35reg4295 = primCdr(closureRef(co, 3));
Obj _35reg4296 = primCdr(_35reg4295);
Obj _35reg4297 = primCdr(_35reg4296);
Obj frees = _35reg4297;
pushCont(co, 7, _35clofun4868, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("makeNative(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3065;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3065;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3065;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3065;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val4344 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val4343 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 9, _35clofun4868, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val4342 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 10, _35clofun4868, 4, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("} else {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val4341 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 11, _35clofun4868, 4, self, env, c, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val4340 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 12, _35clofun4868, 5, b, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(") {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val4339 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 13, _35clofun4868, 5, b, self, env, c, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc3064 = makeNative(8, _35clofun4868, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4313 = primIsCons(closureRef(co, 3));
if (True == _35reg4313) {
Obj _35reg4314 = primCar(closureRef(co, 3));
Obj _35reg4315 = primEQ(intern("if"), _35reg4314);
if (True == _35reg4315) {
Obj _35reg4316 = primCdr(closureRef(co, 3));
Obj _35reg4317 = primIsCons(_35reg4316);
if (True == _35reg4317) {
Obj _35reg4318 = primCdr(closureRef(co, 3));
Obj _35reg4319 = primCar(_35reg4318);
Obj a = _35reg4319;
Obj _35reg4320 = primCdr(closureRef(co, 3));
Obj _35reg4321 = primCdr(_35reg4320);
Obj _35reg4322 = primIsCons(_35reg4321);
if (True == _35reg4322) {
Obj _35reg4323 = primCdr(closureRef(co, 3));
Obj _35reg4324 = primCdr(_35reg4323);
Obj _35reg4325 = primCar(_35reg4324);
Obj b = _35reg4325;
Obj _35reg4326 = primCdr(closureRef(co, 3));
Obj _35reg4327 = primCdr(_35reg4326);
Obj _35reg4328 = primCdr(_35reg4327);
Obj _35reg4329 = primIsCons(_35reg4328);
if (True == _35reg4329) {
Obj _35reg4330 = primCdr(closureRef(co, 3));
Obj _35reg4331 = primCdr(_35reg4330);
Obj _35reg4332 = primCdr(_35reg4331);
Obj _35reg4333 = primCar(_35reg4332);
Obj c = _35reg4333;
Obj _35reg4334 = primCdr(closureRef(co, 3));
Obj _35reg4335 = primCdr(_35reg4334);
Obj _35reg4336 = primCdr(_35reg4335);
Obj _35reg4337 = primCdr(_35reg4336);
Obj _35reg4338 = primEQ(Nil, _35reg4337);
if (True == _35reg4338) {
pushCont(co, 14, _35clofun4868, 6, a, b, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("if (True == ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val4366 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val4365 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 16, _35clofun4868, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val4368 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4367 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun4868, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4363 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg4364 = primEQ(f, intern("set"));
if (True == _35reg4364) {
pushCont(co, 17, _35clofun4868, 4, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, _35clofun4868, 4, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4868) { co->ctx.pc = ps; goto fail; };
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

void _35clofun4867(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val4204 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 20, _35clofun4866, 4, f, args, self, w);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc3070 = makeNative(10, _35clofun4866, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4201 = primIsCons(closureRef(co, 3));
if (True == _35reg4201) {
Obj _35reg4202 = primCar(closureRef(co, 3));
Obj f = _35reg4202;
Obj _35reg4203 = primCdr(closureRef(co, 3));
Obj args = _35reg4203;
pushCont(co, 0, _35clofun4867, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("__nargs = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3070;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val4234 = __arg1;
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
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc3069 = makeNative(1, _35clofun4867, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4217 = primIsCons(closureRef(co, 3));
if (True == _35reg4217) {
Obj _35reg4218 = primCar(closureRef(co, 3));
Obj _35reg4219 = primEQ(intern("call"), _35reg4218);
if (True == _35reg4219) {
Obj _35reg4220 = primCdr(closureRef(co, 3));
Obj _35reg4221 = primIsCons(_35reg4220);
if (True == _35reg4221) {
Obj _35reg4222 = primCdr(closureRef(co, 3));
Obj _35reg4223 = primCar(_35reg4222);
Obj exp = _35reg4223;
Obj _35reg4224 = primCdr(closureRef(co, 3));
Obj _35reg4225 = primCdr(_35reg4224);
Obj _35reg4226 = primIsCons(_35reg4225);
if (True == _35reg4226) {
Obj _35reg4227 = primCdr(closureRef(co, 3));
Obj _35reg4228 = primCdr(_35reg4227);
Obj _35reg4229 = primCar(_35reg4228);
Obj cont = _35reg4229;
Obj _35reg4230 = primCdr(closureRef(co, 3));
Obj _35reg4231 = primCdr(_35reg4230);
Obj _35reg4232 = primCdr(_35reg4231);
Obj _35reg4233 = primEQ(Nil, _35reg4232);
if (True == _35reg4233) {
pushCont(co, 2, _35clofun4867, 4, self, env, w, exp);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.generate-cont"));
__arg1 = self;
__arg2 = w;
__arg3 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3069;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3069;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3069;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3069;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3069;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc3068 = makeNative(3, _35clofun4867, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4235 = primIsCons(closureRef(co, 3));
if (True == _35reg4235) {
Obj _35reg4236 = primCar(closureRef(co, 3));
Obj _35reg4237 = primEQ(intern("tailcall"), _35reg4236);
if (True == _35reg4237) {
Obj _35reg4238 = primCdr(closureRef(co, 3));
Obj _35reg4239 = primIsCons(_35reg4238);
if (True == _35reg4239) {
Obj _35reg4240 = primCdr(closureRef(co, 3));
Obj _35reg4241 = primCar(_35reg4240);
Obj exp = _35reg4241;
Obj _35reg4242 = primCdr(closureRef(co, 3));
Obj _35reg4243 = primCdr(_35reg4242);
Obj _35reg4244 = primEQ(Nil, _35reg4243);
if (True == _35reg4244) {
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3068;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3068;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3068;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3068;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val4262 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("goto *jumpTable[co->ctx.pc.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val4261 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 5, _35clofun4867, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(") { goto fail; }\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val4260 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun4867, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = self;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val4259 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun4867, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("if (co->ctx.pc.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val4258 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun4867, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("co->ctx = co->callstack.data[--co->callstack.len];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val4257 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun4867, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val4256 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 10, _35clofun4867, 2, self, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val4255 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 11, _35clofun4867, 4, env, x, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("__arg1 = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc3067 = makeNative(4, _35clofun4867, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4245 = primIsCons(closureRef(co, 3));
if (True == _35reg4245) {
Obj _35reg4246 = primCar(closureRef(co, 3));
Obj _35reg4247 = primEQ(intern("return"), _35reg4246);
if (True == _35reg4247) {
Obj _35reg4248 = primCdr(closureRef(co, 3));
Obj _35reg4249 = primIsCons(_35reg4248);
if (True == _35reg4249) {
Obj _35reg4250 = primCdr(closureRef(co, 3));
Obj _35reg4251 = primCar(_35reg4250);
Obj x = _35reg4251;
Obj _35reg4252 = primCdr(closureRef(co, 3));
Obj _35reg4253 = primCdr(_35reg4252);
Obj _35reg4254 = primEQ(Nil, _35reg4253);
if (True == _35reg4254) {
pushCont(co, 12, _35clofun4867, 4, env, x, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("__nargs = 2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3067;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3067;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3067;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3067;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val4281 = __arg1;
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
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val4280 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 14, _35clofun4867, 4, self, env, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35cc3066 = makeNative(13, _35clofun4867, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg4263 = primIsCons(closureRef(co, 3));
if (True == _35reg4263) {
Obj _35reg4264 = primCar(closureRef(co, 3));
Obj _35reg4265 = primEQ(intern("do"), _35reg4264);
if (True == _35reg4265) {
Obj _35reg4266 = primCdr(closureRef(co, 3));
Obj _35reg4267 = primIsCons(_35reg4266);
if (True == _35reg4267) {
Obj _35reg4268 = primCdr(closureRef(co, 3));
Obj _35reg4269 = primCar(_35reg4268);
Obj a = _35reg4269;
Obj _35reg4270 = primCdr(closureRef(co, 3));
Obj _35reg4271 = primCdr(_35reg4270);
Obj _35reg4272 = primIsCons(_35reg4271);
if (True == _35reg4272) {
Obj _35reg4273 = primCdr(closureRef(co, 3));
Obj _35reg4274 = primCdr(_35reg4273);
Obj _35reg4275 = primCar(_35reg4274);
Obj b = _35reg4275;
Obj _35reg4276 = primCdr(closureRef(co, 3));
Obj _35reg4277 = primCdr(_35reg4276);
Obj _35reg4278 = primCdr(_35reg4277);
Obj _35reg4279 = primEQ(Nil, _35reg4278);
if (True == _35reg4279) {
pushCont(co, 15, _35clofun4867, 4, self, env, w, b);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3066;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3066;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3066;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3066;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3066;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val4312 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val4311 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 17, _35clofun4867, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4309 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4310 = primNot(_35val4309);
if (True == _35reg4310) {
pushCont(co, 18, _35clofun4867, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val4308 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun4867, 4, self, env, frees, w);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4867) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4866(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val4187 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 20, _35clofun4865, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val4186 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 0, _35clofun4866, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val4197 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4198 = primAdd(i, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg4198;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val4196 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 2, _35clofun4866, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val4195 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 3, _35clofun4866, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val4194 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 4, _35clofun4866, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val4193 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 5, _35clofun4866, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val4192 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 6, _35clofun4866, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc3052 = makeNative(17, _35clofun4865, 0, 0);
Obj self = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj i = closureRef(co, 2);
Obj _35reg4181 = primIsCons(closureRef(co, 3));
if (True == _35reg4181) {
Obj _35reg4182 = primCar(closureRef(co, 3));
Obj x = _35reg4182;
Obj _35reg4183 = primCdr(closureRef(co, 3));
Obj more = _35reg4183;
Obj _35reg4184 = primGT(i, makeNumber(3));
Obj _35reg4185 = primNot(_35reg4184);
if (True == _35reg4185) {
pushCont(co, 1, _35clofun4866, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 7, _35clofun4866, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3052;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35p3047 = __arg1;
Obj _35p3048 = __arg2;
Obj _35p3049 = __arg3;
Obj _35p3050 = co->args[4];
Obj _35cc3051 = makeNative(8, _35clofun4866, 0, 4, _35p3047, _35p3048, _35p3049, _35p3050);
Obj self = _35p3047;
Obj w = _35p3048;
Obj i = _35p3049;
Obj _35reg4199 = primEQ(Nil, _35p3050);
if (True == _35reg4199) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4866) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3051;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val4216 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("goto *jumpTable[ps.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val4215 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 11, _35clofun4866, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(") { co->ctx.pc = ps; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val4214 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun4866, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-sym"));
__arg1 = w;
__arg2 = self;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val4213 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 13, _35clofun4866, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("if (ps.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val4212 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun4866, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val4211 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 15, _35clofun4866, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val4210 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun4866, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1("co->ctx.frees = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val4208 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4209 = primCons(f, args);
pushCont(co, 17, _35clofun4866, 2, self, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = makeNumber(0);
co->args[4] = _35reg4209;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4207 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun4866, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4205 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4206 = primAdd(makeNumber(1), _35val4205);
pushCont(co, 19, _35clofun4866, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-num"));
__arg1 = w;
__arg2 = _35reg4206;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4866) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4865(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val4135 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4136 = primCons(name, idx);
Obj _35reg4137 = primCons(_35reg4136, fvs);
Obj _35reg4138 = primCons(clo_45or_45cont, _35reg4137);
__nargs = 2;
__arg1 = _35reg4138;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4865) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val4148 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg4147= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg4149 = primCons(_35val4148, fvs);
Obj _35reg4150 = primCons(_35reg4147, _35reg4149);
Obj _35reg4151 = primCons(clo_45or_45cont, _35reg4150);
__nargs = 2;
__arg1 = _35reg4151;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4865) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val4146 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg4147 = primCons(name, idx);
pushCont(co, 1, _35clofun4865, 3, fvs, _35reg4147, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val4156 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4157 = primCons(name, idx);
Obj _35reg4158 = primCons(_35reg4157, fvs);
Obj _35reg4159 = primCons(clo_45or_45cont, _35reg4158);
__nargs = 2;
__arg1 = _35reg4159;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4865) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val4139 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg4140 = primCar(_35val4139);
Obj name = _35reg4140;
Obj _35reg4141 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg4141) {
Obj _35reg4142 = primCons(body1, Nil);
Obj _35reg4143 = primCons(Nil, _35reg4142);
Obj _35reg4144 = primCons(params, _35reg4143);
Obj _35reg4145 = primCons(intern("lambda"), _35reg4144);
pushCont(co, 2, _35clofun4865, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg4145;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4152 = primCons(body1, Nil);
Obj _35reg4153 = primCons(fvs, _35reg4152);
Obj _35reg4154 = primCons(params, _35reg4153);
Obj _35reg4155 = primCons(intern("lambda"), _35reg4154);
pushCont(co, 3, _35clofun4865, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg4155;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val4117 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val4117;
Obj _35reg4118 = primEQ(idx, makeNumber(0));
if (True == _35reg4118) {
Obj _35reg4119 = primGenSym(intern("clofun"));
Obj name = _35reg4119;
Obj _35reg4120 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg4120) {
Obj _35reg4121 = primCons(body1, Nil);
Obj _35reg4122 = primCons(Nil, _35reg4121);
Obj _35reg4123 = primCons(params, _35reg4122);
Obj _35reg4124 = primCons(intern("lambda"), _35reg4123);
pushCont(co, 20, _35clofun4864, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg4124;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4131 = primCons(body1, Nil);
Obj _35reg4132 = primCons(fvs, _35reg4131);
Obj _35reg4133 = primCons(params, _35reg4132);
Obj _35reg4134 = primCons(intern("lambda"), _35reg4133);
pushCont(co, 0, _35clofun4865, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg4134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 4, _35clofun4865, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val4116 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val4116;
pushCont(co, 5, _35clofun4865, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val4115 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val4115;
pushCont(co, 6, _35clofun4865, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35p3042 = __arg1;
Obj _35p3043 = __arg2;
Obj _35cc3044 = makeNative(19, _35clofun4863, 0, 2, _35p3042, _35p3043);
Obj v = _35p3042;
Obj _35reg3986 = primIsCons(_35p3043);
if (True == _35reg3986) {
Obj _35reg3987 = primCar(_35p3043);
Obj clo_45or_45cont = _35reg3987;
Obj _35reg3988 = primCdr(_35p3043);
Obj _35reg3989 = primIsCons(_35reg3988);
if (True == _35reg3989) {
Obj _35reg3990 = primCdr(_35p3043);
Obj _35reg3991 = primCar(_35reg3990);
Obj _35reg3992 = primIsCons(_35reg3991);
if (True == _35reg3992) {
Obj _35reg3993 = primCdr(_35p3043);
Obj _35reg3994 = primCar(_35reg3993);
Obj _35reg3995 = primCar(_35reg3994);
Obj _35reg3996 = primEQ(intern("lambda"), _35reg3995);
if (True == _35reg3996) {
Obj _35reg3997 = primCdr(_35p3043);
Obj _35reg3998 = primCar(_35reg3997);
Obj _35reg3999 = primCdr(_35reg3998);
Obj _35reg4000 = primIsCons(_35reg3999);
if (True == _35reg4000) {
Obj _35reg4001 = primCdr(_35p3043);
Obj _35reg4002 = primCar(_35reg4001);
Obj _35reg4003 = primCdr(_35reg4002);
Obj _35reg4004 = primCar(_35reg4003);
Obj params = _35reg4004;
Obj _35reg4005 = primCdr(_35p3043);
Obj _35reg4006 = primCar(_35reg4005);
Obj _35reg4007 = primCdr(_35reg4006);
Obj _35reg4008 = primCdr(_35reg4007);
Obj _35reg4009 = primIsCons(_35reg4008);
if (True == _35reg4009) {
Obj _35reg4010 = primCdr(_35p3043);
Obj _35reg4011 = primCar(_35reg4010);
Obj _35reg4012 = primCdr(_35reg4011);
Obj _35reg4013 = primCdr(_35reg4012);
Obj _35reg4014 = primCar(_35reg4013);
Obj body = _35reg4014;
Obj _35reg4015 = primCdr(_35p3043);
Obj _35reg4016 = primCar(_35reg4015);
Obj _35reg4017 = primCdr(_35reg4016);
Obj _35reg4018 = primCdr(_35reg4017);
Obj _35reg4019 = primCdr(_35reg4018);
Obj _35reg4020 = primEQ(Nil, _35reg4019);
if (True == _35reg4020) {
Obj _35reg4021 = primCdr(_35p3043);
Obj _35reg4022 = primCdr(_35reg4021);
Obj fvs = _35reg4022;
Obj _35reg4023 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg4023) {
if (True == True) {
pushCont(co, 8, _35clofun4864, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg4069 = primEQ(clo_45or_45cont, intern("%continuation"));
if (True == _35reg4069) {
if (True == True) {
pushCont(co, 18, _35clofun4864, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 7, _35clofun4865, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 1;
__arg0 = _35cc3044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val4167 = __arg1;
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
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val4171 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg4172 = primCons(_35val4171, res);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(2);
__arg3 = _35reg4172;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val4170 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj res = _35val4170;
pushCont(co, 10, _35clofun4865, 2, res, v);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = cur1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val4169 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun4865, 2, cur1, v);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val4168 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun4865, 2, cur1, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj v = __arg1;
Obj idx = __arg2;
Obj cur = __arg3;
Obj name = co->args[4];
Obj val = co->args[5];
Obj _35reg4161 = primCons(name, idx);
Obj _35reg4162 = primCons(val, Nil);
Obj _35reg4163 = primCons(_35reg4161, _35reg4162);
Obj _35reg4164 = primCons(_35reg4163, cur);
Obj cur1 = _35reg4164;
Obj _35reg4165 = primLT(idx, makeNumber(20));
if (True == _35reg4165) {
Obj _35reg4166 = primAdd(idx, makeNumber(1));
pushCont(co, 9, _35clofun4865, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = _35reg4166;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 13, _35clofun4865, 2, cur1, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val4175 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg4176 = primCons(_35val4175, Nil);
Obj _35reg4177 = primCons(x, _35reg4176);
Obj _35reg4178 = primCons(tmp, _35reg4177);
Obj _35reg4179 = primCons(intern("let"), _35reg4178);
__nargs = 2;
__arg1 = _35reg4179;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4865) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x = __arg1;
Obj k = __arg2;
Obj _35reg4174 = primGenSym(intern("reg"));
Obj tmp = _35reg4174;
pushCont(co, 15, _35clofun4865, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val4190 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4191 = primAdd(i, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg4191;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4189 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun4865, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal.generate-str"));
__arg1 = w;
__arg2 = makeString1(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4188 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 19, _35clofun4865, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc.generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4865) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4864(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val4034 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg4035 = primCons(name, idx);
pushCont(co, 20, _35clofun4863, 3, fvs, _35reg4035, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val4044 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4045 = primCons(name, idx);
Obj _35reg4046 = primCons(_35reg4045, fvs);
Obj _35reg4047 = primCons(clo_45or_45cont, _35reg4046);
__nargs = 2;
__arg1 = _35reg4047;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4864) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val4057 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg4056= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg4058 = primCons(_35val4057, fvs);
Obj _35reg4059 = primCons(_35reg4056, _35reg4058);
Obj _35reg4060 = primCons(clo_45or_45cont, _35reg4059);
__nargs = 2;
__arg1 = _35reg4060;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4864) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val4055 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg4056 = primCons(name, idx);
pushCont(co, 2, _35clofun4864, 3, fvs, _35reg4056, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val4065 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4066 = primCons(name, idx);
Obj _35reg4067 = primCons(_35reg4066, fvs);
Obj _35reg4068 = primCons(clo_45or_45cont, _35reg4067);
__nargs = 2;
__arg1 = _35reg4068;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4864) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val4048 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg4049 = primCar(_35val4048);
Obj name = _35reg4049;
Obj _35reg4050 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg4050) {
Obj _35reg4051 = primCons(body1, Nil);
Obj _35reg4052 = primCons(Nil, _35reg4051);
Obj _35reg4053 = primCons(params, _35reg4052);
Obj _35reg4054 = primCons(intern("lambda"), _35reg4053);
pushCont(co, 3, _35clofun4864, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg4054;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4061 = primCons(body1, Nil);
Obj _35reg4062 = primCons(fvs, _35reg4061);
Obj _35reg4063 = primCons(params, _35reg4062);
Obj _35reg4064 = primCons(intern("lambda"), _35reg4063);
pushCont(co, 4, _35clofun4864, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg4064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val4026 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val4026;
Obj _35reg4027 = primEQ(idx, makeNumber(0));
if (True == _35reg4027) {
Obj _35reg4028 = primGenSym(intern("clofun"));
Obj name = _35reg4028;
Obj _35reg4029 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg4029) {
Obj _35reg4030 = primCons(body1, Nil);
Obj _35reg4031 = primCons(Nil, _35reg4030);
Obj _35reg4032 = primCons(params, _35reg4031);
Obj _35reg4033 = primCons(intern("lambda"), _35reg4032);
pushCont(co, 0, _35clofun4864, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg4033;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4040 = primCons(body1, Nil);
Obj _35reg4041 = primCons(fvs, _35reg4040);
Obj _35reg4042 = primCons(params, _35reg4041);
Obj _35reg4043 = primCons(intern("lambda"), _35reg4042);
pushCont(co, 1, _35clofun4864, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg4043;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 5, _35clofun4864, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val4025 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val4025;
pushCont(co, 6, _35clofun4864, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val4024 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val4024;
pushCont(co, 7, _35clofun4864, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val4082 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg4081= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg4083 = primCons(_35val4082, fvs);
Obj _35reg4084 = primCons(_35reg4081, _35reg4083);
Obj _35reg4085 = primCons(clo_45or_45cont, _35reg4084);
__nargs = 2;
__arg1 = _35reg4085;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4864) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val4080 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg4081 = primCons(name, idx);
pushCont(co, 9, _35clofun4864, 3, fvs, _35reg4081, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val4090 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4091 = primCons(name, idx);
Obj _35reg4092 = primCons(_35reg4091, fvs);
Obj _35reg4093 = primCons(clo_45or_45cont, _35reg4092);
__nargs = 2;
__arg1 = _35reg4093;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4864) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val4103 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg4102= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg4104 = primCons(_35val4103, fvs);
Obj _35reg4105 = primCons(_35reg4102, _35reg4104);
Obj _35reg4106 = primCons(clo_45or_45cont, _35reg4105);
__nargs = 2;
__arg1 = _35reg4106;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4864) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val4101 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg4102 = primCons(name, idx);
pushCont(co, 12, _35clofun4864, 3, fvs, _35reg4102, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val4111 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg4112 = primCons(name, idx);
Obj _35reg4113 = primCons(_35reg4112, fvs);
Obj _35reg4114 = primCons(clo_45or_45cont, _35reg4113);
__nargs = 2;
__arg1 = _35reg4114;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4864) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val4094 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg4095 = primCar(_35val4094);
Obj name = _35reg4095;
Obj _35reg4096 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg4096) {
Obj _35reg4097 = primCons(body1, Nil);
Obj _35reg4098 = primCons(Nil, _35reg4097);
Obj _35reg4099 = primCons(params, _35reg4098);
Obj _35reg4100 = primCons(intern("lambda"), _35reg4099);
pushCont(co, 13, _35clofun4864, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg4100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4107 = primCons(body1, Nil);
Obj _35reg4108 = primCons(fvs, _35reg4107);
Obj _35reg4109 = primCons(params, _35reg4108);
Obj _35reg4110 = primCons(intern("lambda"), _35reg4109);
pushCont(co, 14, _35clofun4864, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg4110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val4072 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val4072;
Obj _35reg4073 = primEQ(idx, makeNumber(0));
if (True == _35reg4073) {
Obj _35reg4074 = primGenSym(intern("clofun"));
Obj name = _35reg4074;
Obj _35reg4075 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg4075) {
Obj _35reg4076 = primCons(body1, Nil);
Obj _35reg4077 = primCons(Nil, _35reg4076);
Obj _35reg4078 = primCons(params, _35reg4077);
Obj _35reg4079 = primCons(intern("lambda"), _35reg4078);
pushCont(co, 10, _35clofun4864, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg4079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4086 = primCons(body1, Nil);
Obj _35reg4087 = primCons(fvs, _35reg4086);
Obj _35reg4088 = primCons(params, _35reg4087);
Obj _35reg4089 = primCons(intern("lambda"), _35reg4088);
pushCont(co, 11, _35clofun4864, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc.append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg4089;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 15, _35clofun4864, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val4071 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val4071;
pushCont(co, 16, _35clofun4864, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val4070 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val4070;
pushCont(co, 17, _35clofun4864, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4127 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg4126= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg4128 = primCons(_35val4127, fvs);
Obj _35reg4129 = primCons(_35reg4126, _35reg4128);
Obj _35reg4130 = primCons(clo_45or_45cont, _35reg4129);
__nargs = 2;
__arg1 = _35reg4130;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4864) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val4125 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg4126 = primCons(name, idx);
pushCont(co, 19, _35clofun4864, 3, fvs, _35reg4126, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4864) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4863(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc3041 = makeNative(19, _35clofun4862, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg3906 = primIsCons(closureRef(co, 1));
if (True == _35reg3906) {
Obj _35reg3907 = primCar(closureRef(co, 1));
Obj f = _35reg3907;
Obj _35reg3908 = primCdr(closureRef(co, 1));
Obj args = _35reg3908;
pushCont(co, 20, _35clofun4862, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3041;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val3930 = __arg1;
Obj _35val3929= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3931 = primCons(_35val3930, Nil);
Obj _35reg3932 = primCons(_35val3929, _35reg3931);
Obj _35reg3933 = primCons(intern("call"), _35reg3932);
__nargs = 2;
__arg1 = _35reg3933;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4863) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val3929 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun4863, 1, _35val3929);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
__arg2 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3928 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 2, _35clofun4863, 2, fvs, cont);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val3928;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc3040 = makeNative(0, _35clofun4863, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg3911 = primIsCons(closureRef(co, 1));
if (True == _35reg3911) {
Obj _35reg3912 = primCar(closureRef(co, 1));
Obj _35reg3913 = primEQ(intern("call"), _35reg3912);
if (True == _35reg3913) {
Obj _35reg3914 = primCdr(closureRef(co, 1));
Obj _35reg3915 = primIsCons(_35reg3914);
if (True == _35reg3915) {
Obj _35reg3916 = primCdr(closureRef(co, 1));
Obj _35reg3917 = primCar(_35reg3916);
Obj exp = _35reg3917;
Obj _35reg3918 = primCdr(closureRef(co, 1));
Obj _35reg3919 = primCdr(_35reg3918);
Obj _35reg3920 = primIsCons(_35reg3919);
if (True == _35reg3920) {
Obj _35reg3921 = primCdr(closureRef(co, 1));
Obj _35reg3922 = primCdr(_35reg3921);
Obj _35reg3923 = primCar(_35reg3922);
Obj cont = _35reg3923;
Obj _35reg3924 = primCdr(closureRef(co, 1));
Obj _35reg3925 = primCdr(_35reg3924);
Obj _35reg3926 = primCdr(_35reg3925);
Obj _35reg3927 = primEQ(Nil, _35reg3926);
if (True == _35reg3927) {
pushCont(co, 3, _35clofun4863, 3, exp, fvs, cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val3955 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3956 = primCons(_35val3955, Nil);
Obj _35reg3957 = primCons(val, _35reg3956);
Obj _35reg3958 = primCons(intern("lambda"), _35reg3957);
Obj _35reg3959 = primCons(_35reg3958, fvs2);
Obj _35reg3960 = primCons(intern("%continuation"), _35reg3959);
__nargs = 2;
__arg1 = _35reg3960;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4863) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val3954 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs2 = _35val3954;
pushCont(co, 5, _35clofun4863, 2, val, fvs2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3953 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 6, _35clofun4863, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val3953;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3952 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val3952;
pushCont(co, 7, _35clofun4863, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3951 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 8, _35clofun4863, 3, fvs, body, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = _35val3951;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc3039 = makeNative(4, _35clofun4863, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg3934 = primIsCons(closureRef(co, 1));
if (True == _35reg3934) {
Obj _35reg3935 = primCar(closureRef(co, 1));
Obj _35reg3936 = primEQ(intern("continuation"), _35reg3935);
if (True == _35reg3936) {
Obj _35reg3937 = primCdr(closureRef(co, 1));
Obj _35reg3938 = primIsCons(_35reg3937);
if (True == _35reg3938) {
Obj _35reg3939 = primCdr(closureRef(co, 1));
Obj _35reg3940 = primCar(_35reg3939);
Obj val = _35reg3940;
Obj _35reg3941 = primCdr(closureRef(co, 1));
Obj _35reg3942 = primCdr(_35reg3941);
Obj _35reg3943 = primIsCons(_35reg3942);
if (True == _35reg3943) {
Obj _35reg3944 = primCdr(closureRef(co, 1));
Obj _35reg3945 = primCdr(_35reg3944);
Obj _35reg3946 = primCar(_35reg3945);
Obj body = _35reg3946;
Obj _35reg3947 = primCdr(closureRef(co, 1));
Obj _35reg3948 = primCdr(_35reg3947);
Obj _35reg3949 = primCdr(_35reg3948);
Obj _35reg3950 = primEQ(Nil, _35reg3949);
if (True == _35reg3950) {
pushCont(co, 9, _35clofun4863, 3, fvs, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val3978 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3979 = primCons(_35val3978, Nil);
Obj _35reg3980 = primCons(args, _35reg3979);
Obj _35reg3981 = primCons(intern("lambda"), _35reg3980);
__nargs = 2;
__arg1 = _35reg3981;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4863) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35cc3038 = makeNative(10, _35clofun4863, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg3961 = primIsCons(closureRef(co, 1));
if (True == _35reg3961) {
Obj _35reg3962 = primCar(closureRef(co, 1));
Obj _35reg3963 = primEQ(intern("lambda"), _35reg3962);
if (True == _35reg3963) {
Obj _35reg3964 = primCdr(closureRef(co, 1));
Obj _35reg3965 = primIsCons(_35reg3964);
if (True == _35reg3965) {
Obj _35reg3966 = primCdr(closureRef(co, 1));
Obj _35reg3967 = primCar(_35reg3966);
Obj args = _35reg3967;
Obj _35reg3968 = primCdr(closureRef(co, 1));
Obj _35reg3969 = primCdr(_35reg3968);
Obj _35reg3970 = primIsCons(_35reg3969);
if (True == _35reg3970) {
Obj _35reg3971 = primCdr(closureRef(co, 1));
Obj _35reg3972 = primCdr(_35reg3971);
Obj _35reg3973 = primCar(_35reg3972);
Obj body = _35reg3973;
Obj _35reg3974 = primCdr(closureRef(co, 1));
Obj _35reg3975 = primCdr(_35reg3974);
Obj _35reg3976 = primCdr(_35reg3975);
Obj _35reg3977 = primEQ(Nil, _35reg3976);
if (True == _35reg3977) {
pushCont(co, 11, _35clofun4863, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.explicit-stack"));
__arg1 = fvs;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35cc3037 = makeNative(12, _35clofun4863, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg3982 = primIsSymbol(var);
if (True == _35reg3982) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4863) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3037;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val3983 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc3036= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val3983) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4863) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3036;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35p3034 = __arg1;
Obj _35p3035 = __arg2;
Obj _35cc3036 = makeNative(13, _35clofun4863, 0, 2, _35p3034, _35p3035);
Obj __ = _35p3034;
Obj x = _35p3035;
pushCont(co, 14, _35clofun4863, 2, x, _35cc3036);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc3046 = makeNative(16, _35clofun4863, 0, 0);
Obj v = closureRef(co, 0);
Obj x = closureRef(co, 1);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4863) { goto fail; }
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
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc3045 = makeNative(17, _35clofun4863, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v = closureRef(co, 0);
Obj f_45args = closureRef(co, 1);
Obj _35reg3985 = primIsCons(f_45args);
if (True == _35reg3985) {
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = makeNative(18, _35clofun4863, 1, 1, v);
__arg2 = f_45args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3045;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4863) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val4036 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg4035= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg4037 = primCons(_35val4036, fvs);
Obj _35reg4038 = primCons(_35reg4035, _35reg4037);
Obj _35reg4039 = primCons(clo_45or_45cont, _35reg4038);
__nargs = 2;
__arg1 = _35reg4039;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4863) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4862(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc3025 = makeNative(18, _35clofun4861, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg3801 = primIsCons(closureRef(co, 0));
if (True == _35reg3801) {
Obj _35reg3802 = primCar(closureRef(co, 0));
Obj _35reg3803 = primEQ(intern("do"), _35reg3802);
if (True == _35reg3803) {
Obj _35reg3804 = primCdr(closureRef(co, 0));
Obj _35reg3805 = primIsCons(_35reg3804);
if (True == _35reg3805) {
Obj _35reg3806 = primCdr(closureRef(co, 0));
Obj _35reg3807 = primCar(_35reg3806);
Obj a = _35reg3807;
Obj _35reg3808 = primCdr(closureRef(co, 0));
Obj _35reg3809 = primCdr(_35reg3808);
Obj _35reg3810 = primIsCons(_35reg3809);
if (True == _35reg3810) {
Obj _35reg3811 = primCdr(closureRef(co, 0));
Obj _35reg3812 = primCdr(_35reg3811);
Obj _35reg3813 = primCar(_35reg3812);
Obj b = _35reg3813;
Obj _35reg3814 = primCdr(closureRef(co, 0));
Obj _35reg3815 = primCdr(_35reg3814);
Obj _35reg3816 = primCdr(_35reg3815);
Obj _35reg3817 = primEQ(Nil, _35reg3816);
if (True == _35reg3817) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = a;
__arg2 = makeNative(20, _35clofun4861, 1, 2, b, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val3850 = __arg1;
Obj _35val3849= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3851 = primCons(_35val3850, Nil);
Obj _35reg3852 = primCons(_35val3849, _35reg3851);
Obj _35reg3853 = primCons(ra, _35reg3852);
Obj _35reg3854 = primCons(intern("if"), _35reg3853);
__nargs = 2;
__arg1 = _35reg3854;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4862) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val3849 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 1, _35clofun4862, 2, _35val3849, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj ra = __arg1;
pushCont(co, 2, _35clofun4862, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc3024 = makeNative(0, _35clofun4862, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg3823 = primIsCons(closureRef(co, 0));
if (True == _35reg3823) {
Obj _35reg3824 = primCar(closureRef(co, 0));
Obj _35reg3825 = primEQ(intern("if"), _35reg3824);
if (True == _35reg3825) {
Obj _35reg3826 = primCdr(closureRef(co, 0));
Obj _35reg3827 = primIsCons(_35reg3826);
if (True == _35reg3827) {
Obj _35reg3828 = primCdr(closureRef(co, 0));
Obj _35reg3829 = primCar(_35reg3828);
Obj a = _35reg3829;
Obj _35reg3830 = primCdr(closureRef(co, 0));
Obj _35reg3831 = primCdr(_35reg3830);
Obj _35reg3832 = primIsCons(_35reg3831);
if (True == _35reg3832) {
Obj _35reg3833 = primCdr(closureRef(co, 0));
Obj _35reg3834 = primCdr(_35reg3833);
Obj _35reg3835 = primCar(_35reg3834);
Obj b = _35reg3835;
Obj _35reg3836 = primCdr(closureRef(co, 0));
Obj _35reg3837 = primCdr(_35reg3836);
Obj _35reg3838 = primCdr(_35reg3837);
Obj _35reg3839 = primIsCons(_35reg3838);
if (True == _35reg3839) {
Obj _35reg3840 = primCdr(closureRef(co, 0));
Obj _35reg3841 = primCdr(_35reg3840);
Obj _35reg3842 = primCdr(_35reg3841);
Obj _35reg3843 = primCar(_35reg3842);
Obj c = _35reg3843;
Obj _35reg3844 = primCdr(closureRef(co, 0));
Obj _35reg3845 = primCdr(_35reg3844);
Obj _35reg3846 = primCdr(_35reg3845);
Obj _35reg3847 = primCdr(_35reg3846);
Obj _35reg3848 = primEQ(Nil, _35reg3847);
if (True == _35reg3848) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = a;
__arg2 = makeNative(3, _35clofun4862, 1, 3, b, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val3855 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc3023= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val3855) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4862) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc3023 = makeNative(4, _35clofun4862, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x = closureRef(co, 0);
Obj __ = closureRef(co, 1);
pushCont(co, 5, _35clofun4862, 2, x, _35cc3023);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3857 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc3022= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val3857) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3022;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3022;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label8:
{
Obj _35p3020 = __arg1;
Obj _35p3021 = __arg2;
Obj _35cc3022 = makeNative(6, _35clofun4862, 0, 2, _35p3020, _35p3021);
Obj x = _35p3020;
Obj next = _35p3021;
Obj _35reg3856 = primIsSymbol(x);
if (True == _35reg3856) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3022;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 7, _35clofun4862, 3, next, x, _35cc3022);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj hd1 = __arg1;
Obj _35reg3862 = primCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.tailify-list"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg3862;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc3033 = makeNative(9, _35clofun4862, 0, 0);
Obj _35reg3859 = primIsCons(closureRef(co, 0));
if (True == _35reg3859) {
Obj _35reg3860 = primCar(closureRef(co, 0));
Obj hd = _35reg3860;
Obj _35reg3861 = primCdr(closureRef(co, 0));
Obj tl = _35reg3861;
Obj ls = closureRef(co, 1);
Obj next = closureRef(co, 2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = hd;
__arg2 = makeNative(10, _35clofun4862, 1, 3, tl, ls, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3033;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val3874 = __arg1;
Obj _35reg3873= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3875 = primCons(_35val3874, Nil);
Obj _35reg3876 = primCons(_35reg3873, _35reg3875);
Obj _35reg3877 = primCons(intern("continuation"), _35reg3876);
Obj _35reg3878 = primCons(_35reg3877, Nil);
Obj _35reg3879 = primCons(exp, _35reg3878);
Obj _35reg3880 = primCons(intern("call"), _35reg3879);
__nargs = 2;
__arg1 = _35reg3880;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4862) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val3886 = __arg1;
Obj _35reg3885= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3887 = primCons(_35val3886, Nil);
Obj _35reg3888 = primCons(_35reg3885, _35reg3887);
Obj _35reg3889 = primCons(intern("continuation"), _35reg3888);
Obj _35reg3890 = primCons(_35reg3889, Nil);
Obj _35reg3891 = primCons(exp, _35reg3890);
Obj _35reg3892 = primCons(intern("call"), _35reg3891);
__nargs = 2;
__arg1 = _35reg3892;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4862) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35val3867 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3868 = primEQ(_35val3867, intern("%builtin"));
if (True == _35reg3868) {
if (True == True) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.wrap-var"));
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3869 = primEQ(next, globalRef(intern("cora/lib/toc.id")));
if (True == _35reg3869) {
Obj _35reg3870 = primCons(exp, Nil);
Obj _35reg3871 = primCons(intern("tailcall"), _35reg3870);
__nargs = 2;
__arg1 = _35reg3871;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4862) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3872 = primGenSym(intern("val"));
Obj val = _35reg3872;
Obj _35reg3873 = primCons(val, Nil);
pushCont(co, 12, _35clofun4862, 2, _35reg3873, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3881 = primEQ(next, globalRef(intern("cora/lib/toc.id")));
if (True == _35reg3881) {
Obj _35reg3882 = primCons(exp, Nil);
Obj _35reg3883 = primCons(intern("tailcall"), _35reg3882);
__nargs = 2;
__arg1 = _35reg3883;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4862) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3884 = primGenSym(intern("val"));
Obj val = _35reg3884;
Obj _35reg3885 = primCons(val, Nil);
pushCont(co, 13, _35clofun4862, 2, _35reg3885, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label15:
{
Obj _35val3898 = __arg1;
Obj _35reg3897= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3899 = primCons(_35val3898, Nil);
Obj _35reg3900 = primCons(_35reg3897, _35reg3899);
Obj _35reg3901 = primCons(intern("continuation"), _35reg3900);
Obj _35reg3902 = primCons(_35reg3901, Nil);
Obj _35reg3903 = primCons(exp, _35reg3902);
Obj _35reg3904 = primCons(intern("call"), _35reg3903);
__nargs = 2;
__arg1 = _35reg3904;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4862) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val3866 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val3866) {
pushCont(co, 14, _35clofun4862, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3893 = primEQ(next, globalRef(intern("cora/lib/toc.id")));
if (True == _35reg3893) {
Obj _35reg3894 = primCons(exp, Nil);
Obj _35reg3895 = primCons(intern("tailcall"), _35reg3894);
__nargs = 2;
__arg1 = _35reg3895;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4862) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3896 = primGenSym(intern("val"));
Obj val = _35reg3896;
Obj _35reg3897 = primCons(val, Nil);
pushCont(co, 15, _35clofun4862, 2, _35reg3897, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label17:
{
Obj _35val3864 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp = _35val3864;
Obj _35reg3865 = primCar(exp);
pushCont(co, 16, _35clofun4862, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = _35reg3865;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35p3029 = __arg1;
Obj _35p3030 = __arg2;
Obj _35p3031 = __arg3;
Obj _35cc3032 = makeNative(11, _35clofun4862, 0, 3, _35p3029, _35p3030, _35p3031);
Obj _35reg3863 = primEQ(Nil, _35p3029);
if (True == _35reg3863) {
Obj ls = _35p3030;
Obj next = _35p3031;
pushCont(co, 17, _35clofun4862, 1, next);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3032;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3909 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3910 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val3909;
__arg2 = _35reg3910;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4862) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4861(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3677 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 20, _35clofun4860, 2, _35val3677, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc3018 = makeNative(19, _35clofun4860, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg3651 = primIsCons(closureRef(co, 1));
if (True == _35reg3651) {
Obj _35reg3652 = primCar(closureRef(co, 1));
Obj _35reg3653 = primEQ(intern("let"), _35reg3652);
if (True == _35reg3653) {
Obj _35reg3654 = primCdr(closureRef(co, 1));
Obj _35reg3655 = primIsCons(_35reg3654);
if (True == _35reg3655) {
Obj _35reg3656 = primCdr(closureRef(co, 1));
Obj _35reg3657 = primCar(_35reg3656);
Obj a = _35reg3657;
Obj _35reg3658 = primCdr(closureRef(co, 1));
Obj _35reg3659 = primCdr(_35reg3658);
Obj _35reg3660 = primIsCons(_35reg3659);
if (True == _35reg3660) {
Obj _35reg3661 = primCdr(closureRef(co, 1));
Obj _35reg3662 = primCdr(_35reg3661);
Obj _35reg3663 = primCar(_35reg3662);
Obj b = _35reg3663;
Obj _35reg3664 = primCdr(closureRef(co, 1));
Obj _35reg3665 = primCdr(_35reg3664);
Obj _35reg3666 = primCdr(_35reg3665);
Obj _35reg3667 = primIsCons(_35reg3666);
if (True == _35reg3667) {
Obj _35reg3668 = primCdr(closureRef(co, 1));
Obj _35reg3669 = primCdr(_35reg3668);
Obj _35reg3670 = primCdr(_35reg3669);
Obj _35reg3671 = primCar(_35reg3670);
Obj c = _35reg3671;
Obj _35reg3672 = primCdr(closureRef(co, 1));
Obj _35reg3673 = primCdr(_35reg3672);
Obj _35reg3674 = primCdr(_35reg3673);
Obj _35reg3675 = primCdr(_35reg3674);
Obj _35reg3676 = primEQ(Nil, _35reg3675);
if (True == _35reg3676) {
pushCont(co, 0, _35clofun4861, 3, fvs, c, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val3709 = __arg1;
Obj _35reg3707= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3710 = primCons(_35reg3707, _35val3709);
Obj _35reg3711 = primCons(intern("%closure"), _35reg3710);
__nargs = 2;
__arg1 = _35reg3711;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4861) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val3708 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3707= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun4861, 1, _35reg3707);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val3708;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3704 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3705 = primCons(_35val3704, Nil);
Obj _35reg3706 = primCons(args, _35reg3705);
Obj _35reg3707 = primCons(intern("lambda"), _35reg3706);
pushCont(co, 3, _35clofun4861, 2, fvs1, _35reg3707);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3703 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val3703;
pushCont(co, 4, _35clofun4861, 3, args, fvs, fvs1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc3017 = makeNative(1, _35clofun4861, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg3683 = primIsCons(closureRef(co, 1));
if (True == _35reg3683) {
Obj _35reg3684 = primCar(closureRef(co, 1));
Obj _35reg3685 = primEQ(intern("lambda"), _35reg3684);
if (True == _35reg3685) {
Obj _35reg3686 = primCdr(closureRef(co, 1));
Obj _35reg3687 = primIsCons(_35reg3686);
if (True == _35reg3687) {
Obj _35reg3688 = primCdr(closureRef(co, 1));
Obj _35reg3689 = primCar(_35reg3688);
Obj args = _35reg3689;
Obj _35reg3690 = primCdr(closureRef(co, 1));
Obj _35reg3691 = primCdr(_35reg3690);
Obj _35reg3692 = primIsCons(_35reg3691);
if (True == _35reg3692) {
Obj _35reg3693 = primCdr(closureRef(co, 1));
Obj _35reg3694 = primCdr(_35reg3693);
Obj _35reg3695 = primCar(_35reg3694);
Obj body = _35reg3695;
Obj _35reg3696 = primCdr(closureRef(co, 1));
Obj _35reg3697 = primCdr(_35reg3696);
Obj _35reg3698 = primCdr(_35reg3697);
Obj _35reg3699 = primEQ(Nil, _35reg3698);
if (True == _35reg3699) {
Obj _35reg3700 = primCons(body, Nil);
Obj _35reg3701 = primCons(args, _35reg3700);
Obj _35reg3702 = primCons(intern("lambda"), _35reg3701);
pushCont(co, 5, _35clofun4861, 3, body, args, fvs);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = _35reg3702;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3017;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3017;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3017;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3017;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3017;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val3713 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pos = _35val3713;
Obj _35reg3714 = primEQ(makeNumber(-1), pos);
if (True == _35reg3714) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4861) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3715 = primCons(pos, Nil);
Obj _35reg3716 = primCons(intern("%closure-ref"), _35reg3715);
__nargs = 2;
__arg1 = _35reg3716;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4861) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label8:
{
Obj _35cc3016 = makeNative(6, _35clofun4861, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg3712 = primIsSymbol(var);
if (True == _35reg3712) {
pushCont(co, 7, _35clofun4861, 1, var);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.index"));
__arg1 = var;
__arg2 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3016;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val3717 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc3015= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val3717) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4861) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p3013 = __arg1;
Obj _35p3014 = __arg2;
Obj _35cc3015 = makeNative(8, _35clofun4861, 0, 2, _35p3013, _35p3014);
Obj __ = _35p3013;
Obj x = _35p3014;
pushCont(co, 9, _35clofun4861, 2, x, _35cc3015);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x = __arg1;
Obj _35reg3719 = primCons(x, Nil);
Obj _35reg3720 = primCons(intern("return"), _35reg3719);
__nargs = 2;
__arg1 = _35reg3720;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4861) { goto fail; }
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
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc3028 = makeNative(12, _35clofun4861, 0, 0);
Obj _35reg3722 = primIsCons(closureRef(co, 0));
if (True == _35reg3722) {
Obj _35reg3723 = primCar(closureRef(co, 0));
Obj f = _35reg3723;
Obj _35reg3724 = primCdr(closureRef(co, 0));
Obj args = _35reg3724;
Obj next = closureRef(co, 1);
Obj _35reg3725 = primCons(f, args);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.tailify-list"));
__arg1 = _35reg3725;
__arg2 = Nil;
__arg3 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val3764 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3765 = primCons(_35val3764, Nil);
Obj _35reg3766 = primCons(args, _35reg3765);
Obj _35reg3767 = primCons(intern("lambda"), _35reg3766);
Obj _35reg3768 = primCons(_35reg3767, frees);
Obj _35reg3769 = primCons(intern("%closure"), _35reg3768);
__nargs = 2;
__arg0 = next;
__arg1 = _35reg3769;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc3027 = makeNative(13, _35clofun4861, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg3726 = primIsCons(closureRef(co, 0));
if (True == _35reg3726) {
Obj _35reg3727 = primCar(closureRef(co, 0));
Obj _35reg3728 = primEQ(intern("%closure"), _35reg3727);
if (True == _35reg3728) {
Obj _35reg3729 = primCdr(closureRef(co, 0));
Obj _35reg3730 = primIsCons(_35reg3729);
if (True == _35reg3730) {
Obj _35reg3731 = primCdr(closureRef(co, 0));
Obj _35reg3732 = primCar(_35reg3731);
Obj _35reg3733 = primIsCons(_35reg3732);
if (True == _35reg3733) {
Obj _35reg3734 = primCdr(closureRef(co, 0));
Obj _35reg3735 = primCar(_35reg3734);
Obj _35reg3736 = primCar(_35reg3735);
Obj _35reg3737 = primEQ(intern("lambda"), _35reg3736);
if (True == _35reg3737) {
Obj _35reg3738 = primCdr(closureRef(co, 0));
Obj _35reg3739 = primCar(_35reg3738);
Obj _35reg3740 = primCdr(_35reg3739);
Obj _35reg3741 = primIsCons(_35reg3740);
if (True == _35reg3741) {
Obj _35reg3742 = primCdr(closureRef(co, 0));
Obj _35reg3743 = primCar(_35reg3742);
Obj _35reg3744 = primCdr(_35reg3743);
Obj _35reg3745 = primCar(_35reg3744);
Obj args = _35reg3745;
Obj _35reg3746 = primCdr(closureRef(co, 0));
Obj _35reg3747 = primCar(_35reg3746);
Obj _35reg3748 = primCdr(_35reg3747);
Obj _35reg3749 = primCdr(_35reg3748);
Obj _35reg3750 = primIsCons(_35reg3749);
if (True == _35reg3750) {
Obj _35reg3751 = primCdr(closureRef(co, 0));
Obj _35reg3752 = primCar(_35reg3751);
Obj _35reg3753 = primCdr(_35reg3752);
Obj _35reg3754 = primCdr(_35reg3753);
Obj _35reg3755 = primCar(_35reg3754);
Obj body = _35reg3755;
Obj _35reg3756 = primCdr(closureRef(co, 0));
Obj _35reg3757 = primCar(_35reg3756);
Obj _35reg3758 = primCdr(_35reg3757);
Obj _35reg3759 = primCdr(_35reg3758);
Obj _35reg3760 = primCdr(_35reg3759);
Obj _35reg3761 = primEQ(Nil, _35reg3760);
if (True == _35reg3761) {
Obj _35reg3762 = primCdr(closureRef(co, 0));
Obj _35reg3763 = primCdr(_35reg3762);
Obj frees = _35reg3763;
Obj next = closureRef(co, 1);
pushCont(co, 14, _35clofun4861, 3, args, frees, next);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = body;
__arg2 = globalRef(intern("cora/lib/toc.id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val3796 = __arg1;
Obj rb= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3797 = primCons(_35val3796, Nil);
Obj _35reg3798 = primCons(rb, _35reg3797);
Obj _35reg3799 = primCons(closureRef(co, 0), _35reg3798);
Obj _35reg3800 = primCons(intern("let"), _35reg3799);
__nargs = 2;
__arg1 = _35reg3800;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4861) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj rb = __arg1;
pushCont(co, 16, _35clofun4861, 1, rb);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc3026 = makeNative(15, _35clofun4861, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg3770 = primIsCons(closureRef(co, 0));
if (True == _35reg3770) {
Obj _35reg3771 = primCar(closureRef(co, 0));
Obj _35reg3772 = primEQ(intern("let"), _35reg3771);
if (True == _35reg3772) {
Obj _35reg3773 = primCdr(closureRef(co, 0));
Obj _35reg3774 = primIsCons(_35reg3773);
if (True == _35reg3774) {
Obj _35reg3775 = primCdr(closureRef(co, 0));
Obj _35reg3776 = primCar(_35reg3775);
Obj a = _35reg3776;
Obj _35reg3777 = primCdr(closureRef(co, 0));
Obj _35reg3778 = primCdr(_35reg3777);
Obj _35reg3779 = primIsCons(_35reg3778);
if (True == _35reg3779) {
Obj _35reg3780 = primCdr(closureRef(co, 0));
Obj _35reg3781 = primCdr(_35reg3780);
Obj _35reg3782 = primCar(_35reg3781);
Obj b = _35reg3782;
Obj _35reg3783 = primCdr(closureRef(co, 0));
Obj _35reg3784 = primCdr(_35reg3783);
Obj _35reg3785 = primCdr(_35reg3784);
Obj _35reg3786 = primIsCons(_35reg3785);
if (True == _35reg3786) {
Obj _35reg3787 = primCdr(closureRef(co, 0));
Obj _35reg3788 = primCdr(_35reg3787);
Obj _35reg3789 = primCdr(_35reg3788);
Obj _35reg3790 = primCar(_35reg3789);
Obj c = _35reg3790;
Obj _35reg3791 = primCdr(closureRef(co, 0));
Obj _35reg3792 = primCdr(_35reg3791);
Obj _35reg3793 = primCdr(_35reg3792);
Obj _35reg3794 = primCdr(_35reg3793);
Obj _35reg3795 = primEQ(Nil, _35reg3794);
if (True == _35reg3795) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = b;
__arg2 = makeNative(17, _35clofun4861, 1, 3, a, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val3819 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3820 = primCons(_35val3819, Nil);
Obj _35reg3821 = primCons(ra, _35reg3820);
Obj _35reg3822 = primCons(intern("do"), _35reg3821);
__nargs = 2;
__arg1 = _35reg3822;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4861) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj ra = __arg1;
Obj _35reg3818 = primIsSymbol(ra);
if (True == _35reg3818) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, _35clofun4861, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4861) { co->ctx.pc = ps; goto fail; };
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

void _35clofun4860(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3523 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = globalRef(intern("cora/lib/toc.union"));
__arg2 = Nil;
__arg3 = _35val3523;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc3009 = makeNative(20, _35clofun4859, 0, 1, closureRef(co, 0));
Obj _35reg3504 = primIsCons(closureRef(co, 0));
if (True == _35reg3504) {
Obj _35reg3505 = primCar(closureRef(co, 0));
Obj _35reg3506 = primEQ(intern("call"), _35reg3505);
if (True == _35reg3506) {
Obj _35reg3507 = primCdr(closureRef(co, 0));
Obj _35reg3508 = primIsCons(_35reg3507);
if (True == _35reg3508) {
Obj _35reg3509 = primCdr(closureRef(co, 0));
Obj _35reg3510 = primCar(_35reg3509);
Obj exp = _35reg3510;
Obj _35reg3511 = primCdr(closureRef(co, 0));
Obj _35reg3512 = primCdr(_35reg3511);
Obj _35reg3513 = primIsCons(_35reg3512);
if (True == _35reg3513) {
Obj _35reg3514 = primCdr(closureRef(co, 0));
Obj _35reg3515 = primCdr(_35reg3514);
Obj _35reg3516 = primCar(_35reg3515);
Obj cont = _35reg3516;
Obj _35reg3517 = primCdr(closureRef(co, 0));
Obj _35reg3518 = primCdr(_35reg3517);
Obj _35reg3519 = primCdr(_35reg3518);
Obj _35reg3520 = primEQ(Nil, _35reg3519);
if (True == _35reg3520) {
Obj _35reg3521 = primCons(cont, Nil);
Obj _35reg3522 = primCons(exp, _35reg3521);
pushCont(co, 0, _35clofun4860, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.free-vars"));
__arg2 = _35reg3522;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3009;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3009;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3009;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3009;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3009;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc3008 = makeNative(1, _35clofun4860, 0, 1, closureRef(co, 0));
Obj _35reg3524 = primIsCons(closureRef(co, 0));
if (True == _35reg3524) {
Obj _35reg3525 = primCar(closureRef(co, 0));
Obj _35reg3526 = primEQ(intern("return"), _35reg3525);
if (True == _35reg3526) {
Obj _35reg3527 = primCdr(closureRef(co, 0));
Obj _35reg3528 = primIsCons(_35reg3527);
if (True == _35reg3528) {
Obj _35reg3529 = primCdr(closureRef(co, 0));
Obj _35reg3530 = primCar(_35reg3529);
Obj x = _35reg3530;
Obj _35reg3531 = primCdr(closureRef(co, 0));
Obj _35reg3532 = primCdr(_35reg3531);
Obj _35reg3533 = primEQ(Nil, _35reg3532);
if (True == _35reg3533) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3008;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3008;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3008;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3008;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc3007 = makeNative(2, _35clofun4860, 0, 1, closureRef(co, 0));
Obj _35reg3534 = primIsCons(closureRef(co, 0));
if (True == _35reg3534) {
Obj _35reg3535 = primCar(closureRef(co, 0));
Obj _35reg3536 = primEQ(intern("%closure"), _35reg3535);
if (True == _35reg3536) {
Obj _35reg3537 = primCdr(closureRef(co, 0));
Obj _35reg3538 = primIsCons(_35reg3537);
if (True == _35reg3538) {
Obj _35reg3539 = primCdr(closureRef(co, 0));
Obj _35reg3540 = primCar(_35reg3539);
Obj lam = _35reg3540;
Obj _35reg3541 = primCdr(closureRef(co, 0));
Obj _35reg3542 = primCdr(_35reg3541);
Obj more = _35reg3542;
Obj _35reg3543 = primCons(lam, more);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = _35reg3543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val3573 = __arg1;
Obj _35val3570= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.union"));
__arg1 = _35val3570;
__arg2 = _35val3573;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3571 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val3570= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3572 = primCons(a, Nil);
pushCont(co, 4, _35clofun4860, 1, _35val3570);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = _35val3571;
__arg2 = _35reg3572;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3570 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun4860, 2, a, _35val3570);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc3006 = makeNative(3, _35clofun4860, 0, 1, closureRef(co, 0));
Obj _35reg3544 = primIsCons(closureRef(co, 0));
if (True == _35reg3544) {
Obj _35reg3545 = primCar(closureRef(co, 0));
Obj _35reg3546 = primEQ(intern("let"), _35reg3545);
if (True == _35reg3546) {
Obj _35reg3547 = primCdr(closureRef(co, 0));
Obj _35reg3548 = primIsCons(_35reg3547);
if (True == _35reg3548) {
Obj _35reg3549 = primCdr(closureRef(co, 0));
Obj _35reg3550 = primCar(_35reg3549);
Obj a = _35reg3550;
Obj _35reg3551 = primCdr(closureRef(co, 0));
Obj _35reg3552 = primCdr(_35reg3551);
Obj _35reg3553 = primIsCons(_35reg3552);
if (True == _35reg3553) {
Obj _35reg3554 = primCdr(closureRef(co, 0));
Obj _35reg3555 = primCdr(_35reg3554);
Obj _35reg3556 = primCar(_35reg3555);
Obj b = _35reg3556;
Obj _35reg3557 = primCdr(closureRef(co, 0));
Obj _35reg3558 = primCdr(_35reg3557);
Obj _35reg3559 = primCdr(_35reg3558);
Obj _35reg3560 = primIsCons(_35reg3559);
if (True == _35reg3560) {
Obj _35reg3561 = primCdr(closureRef(co, 0));
Obj _35reg3562 = primCdr(_35reg3561);
Obj _35reg3563 = primCdr(_35reg3562);
Obj _35reg3564 = primCar(_35reg3563);
Obj c = _35reg3564;
Obj _35reg3565 = primCdr(closureRef(co, 0));
Obj _35reg3566 = primCdr(_35reg3565);
Obj _35reg3567 = primCdr(_35reg3566);
Obj _35reg3568 = primCdr(_35reg3567);
Obj _35reg3569 = primEQ(Nil, _35reg3568);
if (True == _35reg3569) {
pushCont(co, 6, _35clofun4860, 2, c, a);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3006;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3006;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3006;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3006;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3006;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3006;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val3593 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = globalRef(intern("cora/lib/toc.union"));
__arg2 = Nil;
__arg3 = _35val3593;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc3005 = makeNative(7, _35clofun4860, 0, 1, closureRef(co, 0));
Obj _35reg3574 = primIsCons(closureRef(co, 0));
if (True == _35reg3574) {
Obj _35reg3575 = primCar(closureRef(co, 0));
Obj _35reg3576 = primEQ(intern("do"), _35reg3575);
if (True == _35reg3576) {
Obj _35reg3577 = primCdr(closureRef(co, 0));
Obj _35reg3578 = primIsCons(_35reg3577);
if (True == _35reg3578) {
Obj _35reg3579 = primCdr(closureRef(co, 0));
Obj _35reg3580 = primCar(_35reg3579);
Obj x = _35reg3580;
Obj _35reg3581 = primCdr(closureRef(co, 0));
Obj _35reg3582 = primCdr(_35reg3581);
Obj _35reg3583 = primIsCons(_35reg3582);
if (True == _35reg3583) {
Obj _35reg3584 = primCdr(closureRef(co, 0));
Obj _35reg3585 = primCdr(_35reg3584);
Obj _35reg3586 = primCar(_35reg3585);
Obj y = _35reg3586;
Obj _35reg3587 = primCdr(closureRef(co, 0));
Obj _35reg3588 = primCdr(_35reg3587);
Obj _35reg3589 = primCdr(_35reg3588);
Obj _35reg3590 = primEQ(Nil, _35reg3589);
if (True == _35reg3590) {
Obj _35reg3591 = primCons(y, Nil);
Obj _35reg3592 = primCons(x, _35reg3591);
pushCont(co, 8, _35clofun4860, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.free-vars"));
__arg2 = _35reg3592;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3005;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3005;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3005;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3005;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3005;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val3623 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = globalRef(intern("cora/lib/toc.union"));
__arg2 = Nil;
__arg3 = _35val3623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc3004 = makeNative(9, _35clofun4860, 0, 1, closureRef(co, 0));
Obj _35reg3594 = primIsCons(closureRef(co, 0));
if (True == _35reg3594) {
Obj _35reg3595 = primCar(closureRef(co, 0));
Obj _35reg3596 = primEQ(intern("if"), _35reg3595);
if (True == _35reg3596) {
Obj _35reg3597 = primCdr(closureRef(co, 0));
Obj _35reg3598 = primIsCons(_35reg3597);
if (True == _35reg3598) {
Obj _35reg3599 = primCdr(closureRef(co, 0));
Obj _35reg3600 = primCar(_35reg3599);
Obj x = _35reg3600;
Obj _35reg3601 = primCdr(closureRef(co, 0));
Obj _35reg3602 = primCdr(_35reg3601);
Obj _35reg3603 = primIsCons(_35reg3602);
if (True == _35reg3603) {
Obj _35reg3604 = primCdr(closureRef(co, 0));
Obj _35reg3605 = primCdr(_35reg3604);
Obj _35reg3606 = primCar(_35reg3605);
Obj y = _35reg3606;
Obj _35reg3607 = primCdr(closureRef(co, 0));
Obj _35reg3608 = primCdr(_35reg3607);
Obj _35reg3609 = primCdr(_35reg3608);
Obj _35reg3610 = primIsCons(_35reg3609);
if (True == _35reg3610) {
Obj _35reg3611 = primCdr(closureRef(co, 0));
Obj _35reg3612 = primCdr(_35reg3611);
Obj _35reg3613 = primCdr(_35reg3612);
Obj _35reg3614 = primCar(_35reg3613);
Obj z = _35reg3614;
Obj _35reg3615 = primCdr(closureRef(co, 0));
Obj _35reg3616 = primCdr(_35reg3615);
Obj _35reg3617 = primCdr(_35reg3616);
Obj _35reg3618 = primCdr(_35reg3617);
Obj _35reg3619 = primEQ(Nil, _35reg3618);
if (True == _35reg3619) {
Obj _35reg3620 = primCons(z, Nil);
Obj _35reg3621 = primCons(y, _35reg3620);
Obj _35reg3622 = primCons(x, _35reg3621);
pushCont(co, 10, _35clofun4860, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.free-vars"));
__arg2 = _35reg3622;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3004;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3004;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3004;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3004;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3004;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3004;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val3641 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = _35val3641;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc3003 = makeNative(11, _35clofun4860, 0, 1, closureRef(co, 0));
Obj _35reg3624 = primIsCons(closureRef(co, 0));
if (True == _35reg3624) {
Obj _35reg3625 = primCar(closureRef(co, 0));
Obj _35reg3626 = primEQ(intern("lambda"), _35reg3625);
if (True == _35reg3626) {
Obj _35reg3627 = primCdr(closureRef(co, 0));
Obj _35reg3628 = primIsCons(_35reg3627);
if (True == _35reg3628) {
Obj _35reg3629 = primCdr(closureRef(co, 0));
Obj _35reg3630 = primCar(_35reg3629);
Obj args = _35reg3630;
Obj _35reg3631 = primCdr(closureRef(co, 0));
Obj _35reg3632 = primCdr(_35reg3631);
Obj _35reg3633 = primIsCons(_35reg3632);
if (True == _35reg3633) {
Obj _35reg3634 = primCdr(closureRef(co, 0));
Obj _35reg3635 = primCdr(_35reg3634);
Obj _35reg3636 = primCar(_35reg3635);
Obj body = _35reg3636;
Obj _35reg3637 = primCdr(closureRef(co, 0));
Obj _35reg3638 = primCdr(_35reg3637);
Obj _35reg3639 = primCdr(_35reg3638);
Obj _35reg3640 = primEQ(Nil, _35reg3639);
if (True == _35reg3640) {
pushCont(co, 12, _35clofun4860, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3003;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3003;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3003;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3003;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3003;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35cc3002 = makeNative(13, _35clofun4860, 0, 1, closureRef(co, 0));
Obj x = closureRef(co, 0);
Obj _35reg3642 = primIsSymbol(x);
if (True == _35reg3642) {
Obj _35reg3643 = primCons(x, Nil);
__nargs = 2;
__arg1 = _35reg3643;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4860) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3002;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val3644 = __arg1;
Obj _35cc3001= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val3644) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4860) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3001;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35p3000 = __arg1;
Obj _35cc3001 = makeNative(14, _35clofun4860, 0, 1, _35p3000);
Obj x = _35p3000;
pushCont(co, 15, _35clofun4860, 1, _35cc3001);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3649 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3650 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val3649;
__arg2 = _35reg3650;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc3019 = makeNative(17, _35clofun4860, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg3646 = primIsCons(closureRef(co, 1));
if (True == _35reg3646) {
Obj _35reg3647 = primCar(closureRef(co, 1));
Obj f = _35reg3647;
Obj _35reg3648 = primCdr(closureRef(co, 1));
Obj args = _35reg3648;
pushCont(co, 18, _35clofun4860, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3019;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4860) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val3678 = __arg1;
Obj _35val3677= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3679 = primCons(_35val3678, Nil);
Obj _35reg3680 = primCons(_35val3677, _35reg3679);
Obj _35reg3681 = primCons(a, _35reg3680);
Obj _35reg3682 = primCons(intern("let"), _35reg3681);
__nargs = 2;
__arg1 = _35reg3682;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4860) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4859(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc2986 = makeNative(19, _35clofun4858, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg3403 = primIsCons(closureRef(co, 0));
if (True == _35reg3403) {
Obj _35reg3404 = primCar(closureRef(co, 0));
Obj x = _35reg3404;
Obj _35reg3405 = primCdr(closureRef(co, 0));
Obj y = _35reg3405;
Obj s2 = closureRef(co, 1);
pushCont(co, 20, _35clofun4858, 3, y, s2, _35cc2986);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2986;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35p2983 = __arg1;
Obj _35p2984 = __arg2;
Obj _35cc2985 = makeNative(0, _35clofun4859, 0, 2, _35p2983, _35p2984);
Obj _35reg3407 = primEQ(Nil, _35p2983);
if (True == _35reg3407) {
Obj s2 = _35p2984;
__nargs = 2;
__arg1 = s2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4859) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2985;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3412 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3413 = primCons(x, _35val3412);
__nargs = 2;
__arg1 = _35reg3413;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4859) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35cc2992 = makeNative(2, _35clofun4859, 0, 0);
Obj _35reg3409 = primIsCons(closureRef(co, 0));
if (True == _35reg3409) {
Obj _35reg3410 = primCar(closureRef(co, 0));
Obj x = _35reg3410;
Obj _35reg3411 = primCdr(closureRef(co, 0));
Obj y = _35reg3411;
Obj s2 = closureRef(co, 1);
pushCont(co, 3, _35clofun4859, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2992;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val3417 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc2991= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val3417) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc2991 = makeNative(4, _35clofun4859, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg3414 = primIsCons(closureRef(co, 0));
if (True == _35reg3414) {
Obj _35reg3415 = primCar(closureRef(co, 0));
Obj x = _35reg3415;
Obj _35reg3416 = primCdr(closureRef(co, 0));
Obj y = _35reg3416;
Obj s2 = closureRef(co, 1);
pushCont(co, 5, _35clofun4859, 3, y, s2, _35cc2991);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p2988 = __arg1;
Obj _35p2989 = __arg2;
Obj _35cc2990 = makeNative(6, _35clofun4859, 0, 2, _35p2988, _35p2989);
Obj _35reg3418 = primEQ(Nil, _35p2988);
if (True == _35reg3418) {
Obj __ = _35p2989;
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4859) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2990;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2999 = makeNative(8, _35clofun4859, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4859) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35cc2998 = makeNative(9, _35clofun4859, 0, 1, closureRef(co, 0));
Obj _35reg3420 = primIsCons(closureRef(co, 0));
if (True == _35reg3420) {
Obj _35reg3421 = primCar(closureRef(co, 0));
Obj _35reg3422 = primEQ(intern("%closure-ref"), _35reg3421);
if (True == _35reg3422) {
Obj _35reg3423 = primCdr(closureRef(co, 0));
Obj _35reg3424 = primIsCons(_35reg3423);
if (True == _35reg3424) {
Obj _35reg3425 = primCdr(closureRef(co, 0));
Obj _35reg3426 = primCar(_35reg3425);
Obj __ = _35reg3426;
Obj _35reg3427 = primCdr(closureRef(co, 0));
Obj _35reg3428 = primCdr(_35reg3427);
Obj _35reg3429 = primEQ(Nil, _35reg3428);
if (True == _35reg3429) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4859) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2998;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2998;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2998;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2998;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35cc2997 = makeNative(10, _35clofun4859, 0, 1, closureRef(co, 0));
Obj _35reg3430 = primIsCons(closureRef(co, 0));
if (True == _35reg3430) {
Obj _35reg3431 = primCar(closureRef(co, 0));
Obj _35reg3432 = primEQ(intern("quote"), _35reg3431);
if (True == _35reg3432) {
Obj _35reg3433 = primCdr(closureRef(co, 0));
Obj _35reg3434 = primIsCons(_35reg3433);
if (True == _35reg3434) {
Obj _35reg3435 = primCdr(closureRef(co, 0));
Obj _35reg3436 = primCar(_35reg3435);
Obj x = _35reg3436;
Obj _35reg3437 = primCdr(closureRef(co, 0));
Obj _35reg3438 = primCdr(_35reg3437);
Obj _35reg3439 = primEQ(Nil, _35reg3438);
if (True == _35reg3439) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4859) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2997;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2997;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2997;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2997;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc2996 = makeNative(11, _35clofun4859, 0, 1, closureRef(co, 0));
Obj _35reg3440 = primIsCons(closureRef(co, 0));
if (True == _35reg3440) {
Obj _35reg3441 = primCar(closureRef(co, 0));
Obj _35reg3442 = primEQ(intern("%builtin"), _35reg3441);
if (True == _35reg3442) {
Obj _35reg3443 = primCdr(closureRef(co, 0));
Obj _35reg3444 = primIsCons(_35reg3443);
if (True == _35reg3444) {
Obj _35reg3445 = primCdr(closureRef(co, 0));
Obj _35reg3446 = primCar(_35reg3445);
Obj op = _35reg3446;
Obj _35reg3447 = primCdr(closureRef(co, 0));
Obj _35reg3448 = primCdr(_35reg3447);
Obj _35reg3449 = primEQ(Nil, _35reg3448);
if (True == _35reg3449) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4859) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2996;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2996;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2996;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2996;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35cc2995 = makeNative(12, _35clofun4859, 0, 1, closureRef(co, 0));
Obj _35reg3450 = primIsCons(closureRef(co, 0));
if (True == _35reg3450) {
Obj _35reg3451 = primCar(closureRef(co, 0));
Obj _35reg3452 = primEQ(intern("%global"), _35reg3451);
if (True == _35reg3452) {
Obj _35reg3453 = primCdr(closureRef(co, 0));
Obj _35reg3454 = primIsCons(_35reg3453);
if (True == _35reg3454) {
Obj _35reg3455 = primCdr(closureRef(co, 0));
Obj _35reg3456 = primCar(_35reg3455);
Obj x = _35reg3456;
Obj _35reg3457 = primCdr(closureRef(co, 0));
Obj _35reg3458 = primCdr(_35reg3457);
Obj _35reg3459 = primEQ(Nil, _35reg3458);
if (True == _35reg3459) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4859) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2995;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2995;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2995;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2995;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35p2993 = __arg1;
Obj _35cc2994 = makeNative(13, _35clofun4859, 0, 1, _35p2993);
Obj _35reg3460 = primIsCons(_35p2993);
if (True == _35reg3460) {
Obj _35reg3461 = primCar(_35p2993);
Obj _35reg3462 = primEQ(intern("%const"), _35reg3461);
if (True == _35reg3462) {
Obj _35reg3463 = primCdr(_35p2993);
Obj _35reg3464 = primIsCons(_35reg3463);
if (True == _35reg3464) {
Obj _35reg3465 = primCdr(_35p2993);
Obj _35reg3466 = primCar(_35reg3465);
Obj x = _35reg3466;
Obj _35reg3467 = primCdr(_35p2993);
Obj _35reg3468 = primCdr(_35reg3467);
Obj _35reg3469 = primEQ(Nil, _35reg3468);
if (True == _35reg3469) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4859) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2994;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2994;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2994;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2994;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3475 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = globalRef(intern("cora/lib/toc.union"));
__arg2 = Nil;
__arg3 = _35val3475;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc3012 = makeNative(15, _35clofun4859, 0, 0);
Obj _35reg3471 = primIsCons(closureRef(co, 0));
if (True == _35reg3471) {
Obj _35reg3472 = primCar(closureRef(co, 0));
Obj f = _35reg3472;
Obj _35reg3473 = primCdr(closureRef(co, 0));
Obj args = _35reg3473;
Obj _35reg3474 = primCons(f, args);
pushCont(co, 16, _35clofun4859, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc.free-vars"));
__arg2 = _35reg3474;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3012;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val3493 = __arg1;
Obj arg= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.diff"));
__arg1 = _35val3493;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc3011 = makeNative(17, _35clofun4859, 0, 1, closureRef(co, 0));
Obj _35reg3476 = primIsCons(closureRef(co, 0));
if (True == _35reg3476) {
Obj _35reg3477 = primCar(closureRef(co, 0));
Obj _35reg3478 = primEQ(intern("continuation"), _35reg3477);
if (True == _35reg3478) {
Obj _35reg3479 = primCdr(closureRef(co, 0));
Obj _35reg3480 = primIsCons(_35reg3479);
if (True == _35reg3480) {
Obj _35reg3481 = primCdr(closureRef(co, 0));
Obj _35reg3482 = primCar(_35reg3481);
Obj arg = _35reg3482;
Obj _35reg3483 = primCdr(closureRef(co, 0));
Obj _35reg3484 = primCdr(_35reg3483);
Obj _35reg3485 = primIsCons(_35reg3484);
if (True == _35reg3485) {
Obj _35reg3486 = primCdr(closureRef(co, 0));
Obj _35reg3487 = primCdr(_35reg3486);
Obj _35reg3488 = primCar(_35reg3487);
Obj body = _35reg3488;
Obj _35reg3489 = primCdr(closureRef(co, 0));
Obj _35reg3490 = primCdr(_35reg3489);
Obj _35reg3491 = primCdr(_35reg3490);
Obj _35reg3492 = primEQ(Nil, _35reg3491);
if (True == _35reg3492) {
pushCont(co, 18, _35clofun4859, 1, arg);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3011;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3011;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3011;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3011;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3011;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc3010 = makeNative(19, _35clofun4859, 0, 1, closureRef(co, 0));
Obj _35reg3494 = primIsCons(closureRef(co, 0));
if (True == _35reg3494) {
Obj _35reg3495 = primCar(closureRef(co, 0));
Obj _35reg3496 = primEQ(intern("tailcall"), _35reg3495);
if (True == _35reg3496) {
Obj _35reg3497 = primCdr(closureRef(co, 0));
Obj _35reg3498 = primIsCons(_35reg3497);
if (True == _35reg3498) {
Obj _35reg3499 = primCdr(closureRef(co, 0));
Obj _35reg3500 = primCar(_35reg3499);
Obj exp = _35reg3500;
Obj _35reg3501 = primCdr(closureRef(co, 0));
Obj _35reg3502 = primCdr(_35reg3501);
Obj _35reg3503 = primEQ(Nil, _35reg3502);
if (True == _35reg3503) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.free-vars"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3010;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3010;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3010;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3010;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4859) { co->ctx.pc = ps; goto fail; };
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

void _35clofun4858(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc2980 = makeNative(18, _35clofun4857, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg3283 = primIsCons(closureRef(co, 1));
if (True == _35reg3283) {
Obj _35reg3284 = primCar(closureRef(co, 1));
Obj _35reg3285 = primEQ(intern("let"), _35reg3284);
if (True == _35reg3285) {
Obj _35reg3286 = primCdr(closureRef(co, 1));
Obj _35reg3287 = primIsCons(_35reg3286);
if (True == _35reg3287) {
Obj _35reg3288 = primCdr(closureRef(co, 1));
Obj _35reg3289 = primCar(_35reg3288);
Obj a = _35reg3289;
Obj _35reg3290 = primCdr(closureRef(co, 1));
Obj _35reg3291 = primCdr(_35reg3290);
Obj _35reg3292 = primIsCons(_35reg3291);
if (True == _35reg3292) {
Obj _35reg3293 = primCdr(closureRef(co, 1));
Obj _35reg3294 = primCdr(_35reg3293);
Obj _35reg3295 = primCar(_35reg3294);
Obj b = _35reg3295;
Obj _35reg3296 = primCdr(closureRef(co, 1));
Obj _35reg3297 = primCdr(_35reg3296);
Obj _35reg3298 = primCdr(_35reg3297);
Obj _35reg3299 = primIsCons(_35reg3298);
if (True == _35reg3299) {
Obj _35reg3300 = primCdr(closureRef(co, 1));
Obj _35reg3301 = primCdr(_35reg3300);
Obj _35reg3302 = primCdr(_35reg3301);
Obj _35reg3303 = primCar(_35reg3302);
Obj c = _35reg3303;
Obj _35reg3304 = primCdr(closureRef(co, 1));
Obj _35reg3305 = primCdr(_35reg3304);
Obj _35reg3306 = primCdr(_35reg3305);
Obj _35reg3307 = primCdr(_35reg3306);
Obj _35reg3308 = primEQ(Nil, _35reg3307);
if (True == _35reg3308) {
pushCont(co, 20, _35clofun4857, 3, env, c, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2980;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2980;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2980;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2980;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2980;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2980;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val3334 = __arg1;
Obj _35val3333= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3335 = primCons(_35val3334, Nil);
Obj _35reg3336 = primCons(_35val3333, _35reg3335);
Obj _35reg3337 = primCons(intern("do"), _35reg3336);
__nargs = 2;
__arg1 = _35reg3337;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4858) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val3333 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun4858, 1, _35val3333);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc2979 = makeNative(0, _35clofun4858, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg3316 = primIsCons(closureRef(co, 1));
if (True == _35reg3316) {
Obj _35reg3317 = primCar(closureRef(co, 1));
Obj _35reg3318 = primEQ(intern("do"), _35reg3317);
if (True == _35reg3318) {
Obj _35reg3319 = primCdr(closureRef(co, 1));
Obj _35reg3320 = primIsCons(_35reg3319);
if (True == _35reg3320) {
Obj _35reg3321 = primCdr(closureRef(co, 1));
Obj _35reg3322 = primCar(_35reg3321);
Obj x = _35reg3322;
Obj _35reg3323 = primCdr(closureRef(co, 1));
Obj _35reg3324 = primCdr(_35reg3323);
Obj _35reg3325 = primIsCons(_35reg3324);
if (True == _35reg3325) {
Obj _35reg3326 = primCdr(closureRef(co, 1));
Obj _35reg3327 = primCdr(_35reg3326);
Obj _35reg3328 = primCar(_35reg3327);
Obj y = _35reg3328;
Obj _35reg3329 = primCdr(closureRef(co, 1));
Obj _35reg3330 = primCdr(_35reg3329);
Obj _35reg3331 = primCdr(_35reg3330);
Obj _35reg3332 = primEQ(Nil, _35reg3331);
if (True == _35reg3332) {
pushCont(co, 2, _35clofun4858, 2, env, y);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2979;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2979;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2979;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2979;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2979;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val3343 = __arg1;
Obj _35reg3344 = primCons(intern("if"), _35val3343);
__nargs = 2;
__arg1 = _35reg3344;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4858) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val3342 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 4, _35clofun4858, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val3342;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc2978 = makeNative(3, _35clofun4858, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg3338 = primIsCons(closureRef(co, 1));
if (True == _35reg3338) {
Obj _35reg3339 = primCar(closureRef(co, 1));
Obj _35reg3340 = primEQ(intern("if"), _35reg3339);
if (True == _35reg3340) {
Obj _35reg3341 = primCdr(closureRef(co, 1));
Obj args = _35reg3341;
pushCont(co, 5, _35clofun4858, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2978;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2978;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val3363 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3364 = primCons(_35val3363, Nil);
Obj _35reg3365 = primCons(args, _35reg3364);
Obj _35reg3366 = primCons(intern("lambda"), _35reg3365);
__nargs = 2;
__arg1 = _35reg3366;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4858) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val3362 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun4858, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = _35val3362;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2977 = makeNative(6, _35clofun4858, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg3345 = primIsCons(closureRef(co, 1));
if (True == _35reg3345) {
Obj _35reg3346 = primCar(closureRef(co, 1));
Obj _35reg3347 = primEQ(intern("lambda"), _35reg3346);
if (True == _35reg3347) {
Obj _35reg3348 = primCdr(closureRef(co, 1));
Obj _35reg3349 = primIsCons(_35reg3348);
if (True == _35reg3349) {
Obj _35reg3350 = primCdr(closureRef(co, 1));
Obj _35reg3351 = primCar(_35reg3350);
Obj args = _35reg3351;
Obj _35reg3352 = primCdr(closureRef(co, 1));
Obj _35reg3353 = primCdr(_35reg3352);
Obj _35reg3354 = primIsCons(_35reg3353);
if (True == _35reg3354) {
Obj _35reg3355 = primCdr(closureRef(co, 1));
Obj _35reg3356 = primCdr(_35reg3355);
Obj _35reg3357 = primCar(_35reg3356);
Obj body = _35reg3357;
Obj _35reg3358 = primCdr(closureRef(co, 1));
Obj _35reg3359 = primCdr(_35reg3358);
Obj _35reg3360 = primCdr(_35reg3359);
Obj _35reg3361 = primEQ(Nil, _35reg3360);
if (True == _35reg3361) {
pushCont(co, 8, _35clofun4858, 2, body, args);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = args;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2977;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2977;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2977;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2977;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2977;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val3368 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val3368) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4858) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3369 = primCons(x, Nil);
Obj _35reg3370 = primCons(intern("%global"), _35reg3369);
__nargs = 2;
__arg1 = _35reg3370;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4858) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label11:
{
Obj _35cc2976 = makeNative(9, _35clofun4858, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg3367 = primIsSymbol(x);
if (True == _35reg3367) {
pushCont(co, 10, _35clofun4858, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2976;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc2975 = makeNative(11, _35clofun4858, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj __ = closureRef(co, 0);
Obj _35reg3371 = primIsCons(closureRef(co, 1));
if (True == _35reg3371) {
Obj _35reg3372 = primCar(closureRef(co, 1));
Obj _35reg3373 = primEQ(intern("quote"), _35reg3372);
if (True == _35reg3373) {
Obj _35reg3374 = primCdr(closureRef(co, 1));
Obj _35reg3375 = primIsCons(_35reg3374);
if (True == _35reg3375) {
Obj _35reg3376 = primCdr(closureRef(co, 1));
Obj _35reg3377 = primCar(_35reg3376);
Obj x = _35reg3377;
Obj _35reg3378 = primCdr(closureRef(co, 1));
Obj _35reg3379 = primCdr(_35reg3378);
Obj _35reg3380 = primEQ(Nil, _35reg3379);
if (True == _35reg3380) {
Obj _35reg3381 = primCons(x, Nil);
Obj _35reg3382 = primCons(intern("%const"), _35reg3381);
__nargs = 2;
__arg1 = _35reg3382;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4858) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val3392 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2974= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val3392) {
if (True == True) {
Obj _35reg3393 = primCons(x, Nil);
Obj _35reg3394 = primCons(intern("%const"), _35reg3393);
__nargs = 2;
__arg1 = _35reg3394;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4858) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2974;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg3395 = primCons(x, Nil);
Obj _35reg3396 = primCons(intern("%const"), _35reg3395);
__nargs = 2;
__arg1 = _35reg3396;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4858) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2974;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label14:
{
Obj _35val3389 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2974= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val3389) {
if (True == True) {
Obj _35reg3390 = primCons(x, Nil);
Obj _35reg3391 = primCons(intern("%const"), _35reg3390);
__nargs = 2;
__arg1 = _35reg3391;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4858) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2974;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 13, _35clofun4858, 2, x, _35cc2974);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val3383 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2974= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val3383) {
if (True == True) {
Obj _35reg3384 = primCons(x, Nil);
Obj _35reg3385 = primCons(intern("%const"), _35reg3384);
__nargs = 2;
__arg1 = _35reg3385;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4858) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2974;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg3386 = primIsString(x);
if (True == _35reg3386) {
if (True == True) {
Obj _35reg3387 = primCons(x, Nil);
Obj _35reg3388 = primCons(intern("%const"), _35reg3387);
__nargs = 2;
__arg1 = _35reg3388;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4858) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2974;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 14, _35clofun4858, 2, x, _35cc2974);
__nargs = 2;
__arg0 = globalRef(intern("boolean?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label16:
{
Obj _35p2972 = __arg1;
Obj _35p2973 = __arg2;
Obj _35cc2974 = makeNative(12, _35clofun4858, 0, 2, _35p2972, _35p2973);
Obj __ = _35p2972;
Obj x = _35p2973;
pushCont(co, 15, _35clofun4858, 2, x, _35cc2974);
__nargs = 2;
__arg0 = globalRef(intern("number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3401 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3402 = primCons(x, _35val3401);
__nargs = 2;
__arg1 = _35reg3402;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4858) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35cc2987 = makeNative(17, _35clofun4858, 0, 0);
Obj _35reg3398 = primIsCons(closureRef(co, 0));
if (True == _35reg3398) {
Obj _35reg3399 = primCar(closureRef(co, 0));
Obj x = _35reg3399;
Obj _35reg3400 = primCdr(closureRef(co, 0));
Obj y = _35reg3400;
Obj s2 = closureRef(co, 1);
pushCont(co, 18, _35clofun4858, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2987;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val3406 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc2986= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val3406) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2986;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4858) { co->ctx.pc = ps; goto fail; };
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

void _35clofun4857(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3251 = __arg1;
Obj find = _35val3251;
pushCont(co, 20, _35clofun4856, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x = __arg1;
pushCont(co, 0, _35clofun4857, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc.*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3255 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val3255) {
__nargs = 2;
__arg1 = makeString1("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4857) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val3254 = __arg1;
Obj find = _35val3254;
pushCont(co, 2, _35clofun4857, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x = __arg1;
pushCont(co, 3, _35clofun4857, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc.*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc2971 = makeNative(5, _35clofun4857, 0, 0);
Obj n = closureRef(co, 0);
Obj res = closureRef(co, 1);
Obj _35reg3257 = primSub(n, makeNumber(1));
Obj _35reg3258 = primGenSym(intern("tmp"));
Obj _35reg3259 = primCons(_35reg3258, res);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.temp-list"));
__arg1 = _35reg3257;
__arg2 = _35reg3259;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35p2968 = __arg1;
Obj _35p2969 = __arg2;
Obj _35cc2970 = makeNative(6, _35clofun4857, 0, 2, _35p2968, _35p2969);
Obj _35reg3260 = primEQ(makeNumber(0), _35p2968);
if (True == _35reg3260) {
Obj res = _35p2969;
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4857) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2970;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3262 = __arg1;
Obj ls= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val3262;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc2982 = makeNative(8, _35clofun4857, 0, 0);
Obj env = closureRef(co, 0);
Obj ls = closureRef(co, 1);
pushCont(co, 9, _35clofun4857, 1, ls);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3273 = __arg1;
Obj _35reg3271= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3274 = primCons(_35reg3271, _35val3273);
__nargs = 2;
__arg1 = _35reg3274;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4857) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val3272 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3271= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun4857, 1, _35reg3271);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val3272;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3279 = __arg1;
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3280 = primCons(_35val3279, Nil);
Obj _35reg3281 = primCons(tmp, _35reg3280);
Obj _35reg3282 = primCons(intern("lambda"), _35reg3281);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
__arg2 = _35reg3282;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3277 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj tmp = _35val3277;
Obj _35reg3278 = primCons(op, args);
pushCont(co, 13, _35clofun4857, 2, tmp, env);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35reg3278;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3268 = __arg1;
Obj required= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj provided = _35val3268;
Obj _35reg3269 = primEQ(required, provided);
if (True == _35reg3269) {
Obj _35reg3270 = primCons(op, Nil);
Obj _35reg3271 = primCons(intern("%builtin"), _35reg3270);
pushCont(co, 12, _35clofun4857, 2, args, _35reg3271);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3275 = primGT(required, provided);
if (True == _35reg3275) {
Obj _35reg3276 = primSub(required, provided);
pushCont(co, 14, _35clofun4857, 3, op, args, env);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.temp-list"));
__arg1 = _35reg3276;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("primitive call mismatch");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label16:
{
Obj _35val3267 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj required = _35val3267;
pushCont(co, 15, _35clofun4857, 4, required, op, args, env);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3266 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35cc2981= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val3266) {
pushCont(co, 16, _35clofun4857, 3, op, args, env);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc.builtin->args"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2981;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35cc2981 = makeNative(10, _35clofun4857, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg3263 = primIsCons(closureRef(co, 1));
if (True == _35reg3263) {
Obj _35reg3264 = primCar(closureRef(co, 1));
Obj op = _35reg3264;
Obj _35reg3265 = primCdr(closureRef(co, 1));
Obj args = _35reg3265;
pushCont(co, 17, _35clofun4857, 4, op, args, env, _35cc2981);
__nargs = 2;
__arg0 = globalRef(intern("builtin?"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2981;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val3311 = __arg1;
Obj _35val3309= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3312 = primCons(_35val3311, Nil);
Obj _35reg3313 = primCons(_35val3309, _35reg3312);
Obj _35reg3314 = primCons(a, _35reg3313);
Obj _35reg3315 = primCons(intern("let"), _35reg3314);
__nargs = 2;
__arg1 = _35reg3315;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4857) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val3309 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3310 = primCons(a, env);
pushCont(co, 19, _35clofun4857, 2, _35val3309, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.parse"));
__arg1 = _35reg3310;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4857) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun4856(struct Cora* co){
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
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc2952 = makeNative(0, _35clofun4856, 0, 0);
Obj var = closureRef(co, 0);
Obj _35reg3139 = primIsCons(closureRef(co, 1));
if (True == _35reg3139) {
Obj _35reg3140 = primCar(closureRef(co, 1));
Obj __ = _35reg3140;
Obj _35reg3141 = primCdr(closureRef(co, 1));
Obj y = _35reg3141;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.assq"));
__arg1 = var;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2952;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc2951 = makeNative(1, _35clofun4856, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj _35reg3142 = primIsCons(closureRef(co, 1));
if (True == _35reg3142) {
Obj _35reg3143 = primCar(closureRef(co, 1));
Obj _35reg3144 = primIsCons(_35reg3143);
if (True == _35reg3144) {
Obj _35reg3145 = primCar(closureRef(co, 1));
Obj _35reg3146 = primCar(_35reg3145);
Obj x = _35reg3146;
Obj _35reg3147 = primCar(closureRef(co, 1));
Obj _35reg3148 = primCdr(_35reg3147);
Obj y = _35reg3148;
Obj _35reg3149 = primCdr(closureRef(co, 1));
Obj __ = _35reg3149;
Obj _35reg3150 = primEQ(var, x);
if (True == _35reg3150) {
Obj _35reg3151 = primCons(x, y);
__nargs = 2;
__arg1 = _35reg3151;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35p2948 = __arg1;
Obj _35p2949 = __arg2;
Obj _35cc2950 = makeNative(2, _35clofun4856, 0, 2, _35p2948, _35p2949);
Obj var = _35p2948;
Obj _35reg3152 = primEQ(Nil, _35p2949);
if (True == _35reg3152) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2950;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3157 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.foldl"));
__arg1 = f;
__arg2 = _35val3157;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc2957 = makeNative(4, _35clofun4856, 0, 0);
Obj f = closureRef(co, 0);
Obj acc = closureRef(co, 1);
Obj _35reg3154 = primIsCons(closureRef(co, 2));
if (True == _35reg3154) {
Obj _35reg3155 = primCar(closureRef(co, 2));
Obj x = _35reg3155;
Obj _35reg3156 = primCdr(closureRef(co, 2));
Obj y = _35reg3156;
pushCont(co, 5, _35clofun4856, 2, f, y);
__nargs = 3;
__arg0 = f;
__arg1 = acc;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2957;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p2953 = __arg1;
Obj _35p2954 = __arg2;
Obj _35p2955 = __arg3;
Obj _35cc2956 = makeNative(6, _35clofun4856, 0, 3, _35p2953, _35p2954, _35p2955);
Obj f = _35p2953;
Obj acc = _35p2954;
Obj _35reg3158 = primEQ(Nil, _35p2955);
if (True == _35reg3158) {
__nargs = 2;
__arg1 = acc;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2956;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2963 = makeNative(8, _35clofun4856, 0, 0);
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg3160 = primIsCons(closureRef(co, 2));
if (True == _35reg3160) {
Obj _35reg3161 = primCar(closureRef(co, 2));
Obj a = _35reg3161;
Obj _35reg3162 = primCdr(closureRef(co, 2));
Obj b = _35reg3162;
Obj _35reg3163 = primAdd(pos, makeNumber(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc.pos-in-list0"));
__arg1 = _35reg3163;
__arg2 = x;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2963;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc2962 = makeNative(9, _35clofun4856, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg3164 = primIsCons(closureRef(co, 2));
if (True == _35reg3164) {
Obj _35reg3165 = primCar(closureRef(co, 2));
Obj a = _35reg3165;
Obj _35reg3166 = primCdr(closureRef(co, 2));
Obj b = _35reg3166;
Obj _35reg3167 = primEQ(x, a);
if (True == _35reg3167) {
__nargs = 2;
__arg1 = pos;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2962;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2962;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35p2958 = __arg1;
Obj _35p2959 = __arg2;
Obj _35p2960 = __arg3;
Obj _35cc2961 = makeNative(10, _35clofun4856, 0, 3, _35p2958, _35p2959, _35p2960);
Obj __ = _35p2958;
Obj x = _35p2959;
Obj _35reg3168 = primEQ(Nil, _35p2960);
if (True == _35reg3168) {
__nargs = 2;
__arg1 = makeNumber(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2961;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3174 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tl= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3175 = primLT(_35val3174, makeNumber(0));
if (True == _35reg3175) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.exist-in-env"));
__arg1 = x;
__arg2 = tl;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label15:
{
Obj _35cc2967 = makeNative(13, _35clofun4856, 0, 0);
Obj x = closureRef(co, 0);
Obj _35reg3171 = primIsCons(closureRef(co, 1));
if (True == _35reg3171) {
Obj _35reg3172 = primCar(closureRef(co, 1));
Obj hd = _35reg3172;
Obj _35reg3173 = primCdr(closureRef(co, 1));
Obj tl = _35reg3173;
pushCont(co, 14, _35clofun4856, 2, x, tl);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.index"));
__arg1 = x;
__arg2 = hd;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35p2964 = __arg1;
Obj _35p2965 = __arg2;
Obj _35cc2966 = makeNative(15, _35clofun4856, 0, 2, _35p2964, _35p2965);
Obj x = _35p2964;
Obj _35reg3176 = primEQ(Nil, _35p2965);
if (True == _35reg3176) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2966;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val3248 = __arg1;
Obj _35reg3249 = primNot(_35val3248);
__nargs = 2;
__arg1 = _35reg3249;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35val3247 = __arg1;
pushCont(co, 17, _35clofun4856, 0);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35val3247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x = __arg1;
pushCont(co, 18, _35clofun4856, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc.assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc.*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3252 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val3252) {
__nargs = 2;
__arg1 = makeString1("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun4856) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun4856) { co->ctx.pc = ps; goto fail; };
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

