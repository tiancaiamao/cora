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
Obj x140152817501991 = primSet(co, __symbolTable[0], makeNative1(2, clofun0, 1, 0));
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
Obj n = R[1];
Obj x140152817501479 = PRIM_LT(n, MAKE_NUMBER(2));
if (True == x140152817501479) {
coraReturn(co, n);
return;
} else {
Obj x140152817501703 = PRIM_SUB(n, MAKE_NUMBER(1));
R[1] = n;
struct frame1 __curr = {
.fn = clofun0,
.label = 1,
.frame = R,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[0]), x140152817501703);
return;
}
}
case 1:
{
Obj x140152817501735= co->res;
Obj n = R[1];
Obj x140152817501895 = PRIM_SUB(n, MAKE_NUMBER(2));
R[1] = x140152817501735;
struct frame1 __curr = {
.fn = clofun0,
.label = 2,
.frame = R,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[0]), x140152817501895);
return;
}
case 2:
{
Obj x140152817501927= co->res;
Obj x140152817501735 = R[1];
Obj x140152817501959 = PRIM_ADD(x140152817501735, x140152817501927);
coraReturn(co, x140152817501959);
return;
}
}
}

