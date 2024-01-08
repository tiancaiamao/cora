#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "src/types.h"
#include "src/reader.h"

struct Cora;
typedef void (*nativeFn)(struct Cora *co);

struct returnAddr {
  nativeFn pc;
  Obj *frees;
  int base;
  int pos;
  Obj *stack;
};

struct callStack {
  struct returnAddr *data;
  int len;
  int cap;
};


struct Cora {
  Obj *stack;
  int base;
  int pos;

  struct callStack callstack;

  Obj *frees;
  Obj args[32];
  int nargs;
  nativeFn pc;
};

void trampoline(struct Cora *co, nativeFn pc);

struct scmNative {
  scmHead head;
  nativeFn fn;
  // required is the argument number of the nativeFunc.
  int required;
  // captured is the size of the data, it's immutable after makeNative.
  int captured;
  Obj data[];
};

void coraCall(struct Cora *co);
Obj makeNative(nativeFn fn, int required, int captured, ...);
Obj* nativeData(Obj o);
int nativeCaptured(Obj o);
int nativeRequired(Obj o);
nativeFn nativeFuncPtr(Obj o);

Obj makeString1(char *x);

void push(struct Cora *co, Obj v);
void pushCont(struct Cora *co, nativeFn cb);
/* void popStack(struct callStack *cs, nativeFn *pc, int *base, int *pos, Obj **stack, Obj **frees); */
void popStack(struct callStack *cs, nativeFn *pc, int *base, Obj **stack, Obj **frees);
Obj globalRef(Obj sym);
Obj closureRef(struct Cora *co, int idx);
Obj stackRef(struct Cora *co, int idx);

Obj primEQ(Obj x, Obj y);
Obj primAdd(Obj x, Obj y);
Obj primCons(Obj x, Obj y);
Obj primNot(Obj x);
Obj primCar(Obj x);
Obj primCdr(Obj x);
Obj primIsCons(Obj x);
Obj primSet(Obj key, Obj val);
Obj primSub(Obj x, Obj y);
Obj primMul(Obj x, Obj y);
Obj primGenSym(Obj arg);
Obj primIsSymbol(Obj x);
Obj primIsString(Obj x);


void id(struct Cora *co);



void entry(struct Cora* co);
void entry_init(struct Cora* co);
void entry_sys(struct Cora* co);
void entry_let_loop(struct Cora* co);

