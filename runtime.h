#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "src/types.h"

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

static void
saveStack(struct callStack *cs, nativeFn pc, int base, int pos, Obj *stack, Obj *frees) {
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
  addr->frees = frees;
  cs->len++;
  return;
}

static void
popStack(struct callStack *cs, nativeFn *pc, int *base, int *pos, Obj **stack, Obj **frees) {
  cs->len--;
  struct returnAddr *addr = &cs->data[cs->len];
  *pc = addr->pc;
  *base = addr->base;
  *pos = addr->pos;
  *stack = addr->stack;
  *frees = addr->frees;
  return;
}

struct Cora {
  Obj *stack;
  int base;
  int pos;

  struct callStack callstack;

  Obj *frees;
  Obj args[32];
  nativeFn pc;
};

void
trampoline(struct Cora *co, nativeFn pc) {
  co->pc = pc;
  while(co->pc != NULL) {
    co->pc(co);
  }
}

Obj
closureRef(struct Cora *co, int idx) {
  return co->frees[idx];
}

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


Obj primAdd(Obj x, Obj y) {
  if (isfixnum(x) && isfixnum(y)) {
    return x + y;
  } else {
    // TODO
    assert(false);
  }
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
  // captured is the size of the data, it's immutable after makeNative.
  int captured;
  Obj data[];
};


Obj
makeNative(nativeFn fn, int required, int captured, ...) {
  int sz = sizeof(struct scmNative) + captured*sizeof(Obj);
  struct scmNative* clo = newObj(NULL, 0, scmHeadNative, sz);
  clo->fn = fn;
  clo->required = required;
  clo->captured = captured;
  if (captured > 0) {
    va_list ap;
    va_start(ap, captured);
    for (int i=0; i<captured; i++) {
      clo->data[i] = va_arg(ap, Obj);
    }
    va_end(ap);
  }

  return ((Obj)(&clo->head) | TAG_PTR);
}

Obj*
nativeCaptured(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  if (native->captured == 0) {
    return NULL;
  }
  return native->data;
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

void coraCall(struct Cora *co) {
  Obj fn = co->args[0];
  nativeFn f = nativeFuncPtr(fn);
  co->frees = nativeCaptured(fn);
  f(co);
}

void pushCont(struct Cora *co, nativeFn cb) {
  saveStack(&co->callstack, cb, co->pos, co->pos, co->stack, co->frees);
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

void id(struct Cora *co) {
  co->pc = NULL;
  printf("call back -- %ld\n", co->args[1]);
}

void entry(struct Cora* co);

int main(int argc, char *argv) {
  struct Cora* co = coraNew();
  pushCont(co, id);
  trampoline(co, entry);
}
