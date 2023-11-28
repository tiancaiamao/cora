#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "src/types.h"

struct Cora;
typedef void (*nativeFn)(struct Cora *co, Obj x);
typedef void (*nativeFn3)(struct Cora *co, Obj x, Obj y);

struct returnAddr {
  nativeFn pc;
  int base;
  int pos;
  Obj *stack;
};

struct callStack {
  struct returnAddr *data;
  int len;
  int cap;
};

static void
saveStack(struct callStack *cs, nativeFn pc, int base, int pos, Obj *stack) {
  if (cs->len + 1 >= cs->cap) {
    cs->cap = cs->cap * 2;
    void *newData = malloc(cs->cap*sizeof(struct returnAddr));
    memcpy(newData, cs->data, cs->len*sizeof(struct returnAddr));
    free(cs->data);
    cs->data = newData;
  }
  
  struct returnAddr *addr = &cs->data[cs->len];
  addr->pc = pc;
  addr->base = base;
  addr->pos = pos;
  addr->stack = stack;
  cs->len++;
  return;
}

static void
popStack(struct callStack *cs, void **pc, int *base, int *pos, Obj **stack) {
  cs->len--;
  struct returnAddr *addr = &cs->data[cs->len];
  *pc = addr->pc;
  *base = addr->base;
  *pos = addr->pos;
  *stack = addr->stack;
  return;
}

struct Cora {
  Obj *stack;
  int base;
  int pos;

  struct callStack callstack;
};

Obj globalRef(Obj sym) {
  struct trieNode* s = ptr(sym);
  Obj val = s->value;
  if (val == Undef) {
    printf("undefined global symbol: %s\n", s->sym);
    assert(false);
  }
  return val;
}

Obj primEQ(Obj x, Obj y) {
  return eq(x, y) ? True : False;
}

Obj primSet(Obj key, Obj val) {
  struct trieNode* s = ptr(key);
  s->value = val;
}

Obj primSub(Obj x, Obj y) {
  if (isfixnum(x) && isfixnum(y)) {
    return x - y;
  } else {
    // TODO
    assert(false);
  }
}

Obj primMul(Obj x, Obj y) {
  if (isfixnum(x) && isfixnum(y)) {
    return makeNumber(fixnum(x) * fixnum(y));
  } else {
    // TODO
    assert(false);
  }
}

struct scmNative {
  scmHead head;
  nativeFn fn;
  // required is the argument number of the nativeFunc.
  int required;
  /* // captured is the size of the data, it's immutable after makeNative. */
  /* int captured; */
  /* Obj data[]; */
};


Obj
makeNative(nativeFn fn, int required, ...) {
  int captured = 0;
  int sz = sizeof(struct scmNative) + captured*sizeof(Obj);
  struct scmNative* clo = newObj(NULL, 0, scmHeadNative, sz);
  clo->fn = fn;
  clo->required = required;
  /* clo->captured = captured; */
  /* if (captured > 0) { */
  /*   va_list ap; */
  /*   va_start(ap, captured); */
  /*   for (int i=0; i<captured; i++) { */
  /*     clo->data[i] = va_arg(ap, Obj); */
  /*   } */
  /*   va_end(ap); */
  /* } */

  return ((Obj)(&clo->head) | TAG_PTR);
}

nativeFn
nativeFuncPtr(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->fn;
}

int
nativeRequired(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->required;
}

void coraCall(struct Cora *co, Obj fn, Obj n) {
  /* va_list valist; */
  /* va_start(valist, x); */
  /* for (int i=0; i<num; i++) { */
  /*   Obj tmp = va_arg(valist, i); */
  /* } */
  /* va_end(valist); */

  nativeFn f = nativeFuncPtr(fn);
  f(co, n);
}

void coraCall3(struct Cora *co, Obj fn, Obj arg1, Obj arg2) {
  /* va_list valist; */
  /* va_start(valist, x); */
  /* for (int i=0; i<num; i++) { */
  /*   Obj tmp = va_arg(valist, i); */
  /* } */
  /* va_end(valist); */

  nativeFn3 f = nativeFuncPtr(fn);
  f(co, arg1, arg2);
}

void coraReturn(struct Cora *co, Obj val) {
  void* pc;
  popStack(&co->callstack, &pc, &co->base, &co->pos, &co->stack);
  return ((nativeFn)pc)(co, val);
}

void pushCont(struct Cora *co, nativeFn cb) {
  saveStack(&co->callstack, cb, co->pos, co->pos, co->stack);
}

void push(struct Cora *co, Obj v) {
  co->stack[co->pos] = v;
  co->pos++;
}

Obj stackRef(struct Cora *co, int idx) {
  return co->stack[co->base + idx];
}

const int INIT_STACK_SIZE = 1000;

struct Cora* coraNew() {
  struct Cora *co = malloc(sizeof(struct Cora));
  co->stack = malloc(sizeof(Obj) * INIT_STACK_SIZE);
  co->base = 0;
  co->pos = 0;

  co->callstack.data = malloc(64*sizeof(struct returnAddr));
  co->callstack.len = 0;
  co->callstack.cap = 64;
}

void id(struct Cora *co, Obj x) {
  printf("call back -- %ld\n", x);
}

int main(int argc, char *argv) {
  struct Cora* co = coraNew();
  pushCont(co, id);
  entry(co);
}
