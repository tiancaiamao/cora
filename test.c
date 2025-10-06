#include "types.h"
#include "runtime1.h"

static void clofun4(struct Cora* co, int label, Obj *R);
static void clofun3(struct Cora* co, int label, Obj *R);
static void clofun2(struct Cora* co, int label, Obj *R);
static void clofun1(struct Cora* co, int label, Obj *R);
static void clofun0(struct Cora* co, int label, Obj *R);


static __thread Obj* __symbolTable;

void entry(struct Cora *co) {
__symbolTable = (Obj*)malloc(sizeof(Obj) * 4);
__symbolTable[0] = intern("try");
__symbolTable[1] = intern("throw");
__symbolTable[2] = intern("f");
__symbolTable[3] = intern("add");
co->ctx.fn = clofun4;
co->ctx.label = 0;
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553200957319 = primSet(co, __symbolTable[3], makeNative1(3, clofun0, 2, 0));
Obj x105553200960135 = primSet(co, __symbolTable[2], makeNative1(2, clofun1, 1, 0));
struct frame1 __curr = {
.fn = clofun4,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[0]), makeNative1(1, clofun2, 0, 0), makeNative1(3, clofun3, 2, 0));
return;
}
case 1:
{
Obj x105553200961607= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[3]), x105553200961607, MAKE_NUMBER(1));
return;
}
}
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj v = R[1];
Obj cc = R[2];
co->ctx.sp = R;
coraCall1(co, cc, v);
return;
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[2]), MAKE_NUMBER(300));
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj x105553200957991 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == x105553200957991) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[1]), MAKE_NUMBER(42));
return;
} else {
Obj x105553200958855 = PRIM_SUB(n, MAKE_NUMBER(1));
struct frame1 __curr = {
.fn = clofun1,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[2]), x105553200958855);
return;
}
}
case 1:
{
Obj x105553200958983= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[3]), x105553200958983, MAKE_NUMBER(1));
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj y = R[2];
Obj x105553200956807 = PRIM_ADD(x, y);
coraReturn(co, x105553200956807);
return;
}
}
}

