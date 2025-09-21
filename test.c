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
Obj x4347998759 = primSet(co, __symbolTable[0], makeNative1(2, clofun0, 1, 0));
stackUndo(&co->stk);
coraCall(co, globalRef(__symbolTable[0]), 1, MAKE_NUMBER(40));
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj x4347998247 = PRIM_LT(n, MAKE_NUMBER(2));
if (True == x4347998247) {
coraReturn(co, n);
return;
} else {
Obj x4347998471 = PRIM_SUB(n, MAKE_NUMBER(1));
R[1] = n;
struct frame1 __curr = {
.fn = clofun0,
.label = 1,
.frame = R,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[0]), 1, x4347998471);
return;
}
}
case 1:
{
Obj x4347998503= co->res;
Obj n = R[1];
Obj x4347998663 = PRIM_SUB(n, MAKE_NUMBER(2));
R[1] = x4347998503;
struct frame1 __curr = {
.fn = clofun0,
.label = 2,
.frame = R,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[0]), 1, x4347998663);
return;
}
case 2:
{
Obj x4347998695= co->res;
Obj x4347998503 = R[1];
Obj x4347998727 = PRIM_ADD(x4347998503, x4347998695);
coraReturn(co, x4347998727);
return;
}
}
}

