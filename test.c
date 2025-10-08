#include "types.h"
#include "runtime1.h"

static void clofun2(struct Cora* co, int label, Obj *R);
static void clofun1(struct Cora* co, int label, Obj *R);
static void clofun0(struct Cora* co, int label, Obj *R);


static __thread Obj* __symbolTable;

void entry(struct Cora *co) {
__symbolTable = (Obj*)malloc(sizeof(Obj) * 2);
__symbolTable[0] = intern("throw");
__symbolTable[1] = intern("try");
co->ctx.fn = clofun2;
co->ctx.label = 0;
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[1]), makeNative1(1, clofun0, 0, 0), makeNative1(3, clofun1, 2, 0));
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj v = R[1];
Obj __ = R[2];
coraReturn(co, v);
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[0]), MAKE_NUMBER(42));
return;
}
}
}

