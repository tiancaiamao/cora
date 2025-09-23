#include "types.h"
#include "runtime1.h"

static void clofun1(struct Cora* co, int label, Obj *R);
static void clofun0(struct Cora* co, int label, Obj *R);


static __thread Obj* __symbolTable;

void entry(struct Cora *co) {
__symbolTable = (Obj*)malloc(sizeof(Obj) * 1);
__symbolTable[0] = intern("fib");
struct frame1 curr = {
.fn = clofun1,
.label = 0,
.frame = stackAlloc(&co->stk, 0),
};
co->ctx = curr;
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4313456359 = primSet(co, __symbolTable[0], makeNative1(2, clofun0, 1, 0));
stackUndo(&co->stk);
coraCall1(co, globalRef(__symbolTable[0]), MAKE_NUMBER(40));
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj i = R[1];
Obj x4313454855 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == x4313454855) {
coraReturn(co, MAKE_NUMBER(1));
return;
} else {
Obj x4313455207 = PRIM_EQ(i, MAKE_NUMBER(1));
if (True == x4313455207) {
coraReturn(co, MAKE_NUMBER(1));
return;
} else {
Obj x4313455719 = PRIM_SUB(i, MAKE_NUMBER(1));
R[1] = i;
struct frame1 __curr = {
.fn = clofun0,
.label = 1,
.frame = R,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[0]), x4313455719);
return;
}
}
}
case 1:
{
Obj x4313455879= co->res;
Obj i = R[1];
Obj x4313456231 = PRIM_SUB(i, MAKE_NUMBER(2));
R[1] = x4313455879;
struct frame1 __curr = {
.fn = clofun0,
.label = 2,
.frame = R,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[0]), x4313456231);
return;
}
case 2:
{
Obj x4313456263= co->res;
Obj x4313455879 = R[1];
Obj x4313456327 = PRIM_ADD(x4313455879, x4313456263);
coraReturn(co, x4313456327);
return;
}
}
}

