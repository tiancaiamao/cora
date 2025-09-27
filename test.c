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
.bp = co->ctx.sp,
};
co->ctx = curr;
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4319021895 = primSet(co, __symbolTable[0], makeNative1(2, clofun0, 1, 0));
co->ctx.sp = R;
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
Obj x4319021223 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == x4319021223) {
coraReturn(co, MAKE_NUMBER(1));
return;
} else {
Obj x4319021383 = PRIM_EQ(i, MAKE_NUMBER(1));
if (True == x4319021383) {
coraReturn(co, MAKE_NUMBER(1));
return;
} else {
Obj x4319021607 = PRIM_SUB(i, MAKE_NUMBER(1));
R[1] = i;
struct frame1 __curr = {
.fn = clofun0,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[0]), x4319021607);
return;
}
}
}
case 1:
{
Obj x4319021639= co->res;
Obj i = R[1];
Obj x4319021799 = PRIM_SUB(i, MAKE_NUMBER(2));
R[1] = x4319021639;
struct frame1 __curr = {
.fn = clofun0,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[0]), x4319021799);
return;
}
case 2:
{
Obj x4319021831= co->res;
Obj x4319021639 = R[1];
Obj x4319021863 = PRIM_ADD(x4319021639, x4319021831);
coraReturn(co, x4319021863);
return;
}
}
}

