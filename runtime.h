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
  int nargs;
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

Obj primCons(Obj x, Obj y) {
  return cons(NULL, 0, x, y);
}

Obj primNot(Obj x) {
  if (x == True) {
    return False;
  } else if (x == False) {
    return True;
  } else {
    assert(false);
  }
}

Obj primCar(Obj x) {
  return car(x);
}

Obj primCdr(Obj x) {
  return cdr(x);
}

Obj primIsCons(Obj x) {
  if (iscons(x)) {
    return True;
  } else {
    return False;
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

static uint64_t genIdx = 0;

Obj primGenSym(Obj arg) {
  assert(issymbol(arg));
  char tmp[200];
  snprintf(tmp, 100, "#%s%ld", symbolStr(arg), genIdx);
  genIdx++;
  return makeSymbol(tmp);
}

Obj primIsSymbol(Obj x) {
  if (issymbol(x)) {
    return True;
  } else {
    return False;
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

void coraCall(struct Cora *co);
Obj* nativeData(Obj o);
int nativeCaptured(Obj o);

void callCurry(struct Cora *co) {
  Obj fn = co->args[0];
  int captured = nativeCaptured(fn);
  memmove(co->args+captured, co->args+1, (co->nargs-1) * sizeof(Obj));
  memcpy(co->args, nativeData(fn), captured*sizeof(Obj));
  co->nargs = co->nargs + captured - 1;
  co->pc = coraCall;
}

Obj
makeCurry1(int required, int captured, Obj *data) {
  int sz = sizeof(struct scmNative) + captured*sizeof(Obj);
  struct scmNative* clo = newObj(NULL, 0, scmHeadNative, sz);
  clo->fn = callCurry;
  clo->required = required;
  clo->captured = captured;
  memcpy(clo->data, data, captured*sizeof(Obj));
  return ((Obj)(&clo->head) | TAG_PTR);
}

bool
isNative(Obj c) {
  if ((c & TAG_MASK) != TAG_PTR) {
    return false;
  }
  scmHead *h = ptr(c);
  return h->type == scmHeadNative;
}

Obj*
nativeData(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  if (native->captured == 0) {
    return NULL;
  }
  return native->data;
}

int
nativeCaptured(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->captured;
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

void id(struct Cora *co);

void pushCont(struct Cora *co, nativeFn cb) {
  saveStack(&co->callstack, cb, co->pos, co->pos, co->stack, co->frees);
}

void coraCall(struct Cora *co) {
  Obj fn = co->args[0];
  int required = nativeRequired(co->args[0]);
  if (co->nargs == required + 1) {
    co->pc = nativeFuncPtr(fn);
    co->frees = nativeData(fn);
  } else if (co->nargs < required + 1) {
    Obj ret = makeCurry1(required+1-co->nargs, co->nargs, co->args);
    co->nargs = 0;
    co->args[1] = ret;
    popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  } else {
    // save the extra args.
    int cnt = co->nargs - (required+1);
    int sz = sizeof(Obj) * cnt;
    Obj* save = alloca(sz);
    memcpy(save, co->args+required+1, sz);
    // eval the first call and get the result;
    co->nargs = required + 1;
    pushCont(co, id);
    trampoline(co, co->pc);
    // recover args and make the next call.
    co->args[0] = co->args[1];
    memcpy(co->args+1, save, sz);
    co->nargs = cnt + 1;
    co->pc = coraCall;
  }
  return;
}

Obj makeString1(char *x) {
  return makeString(NULL, 0, x, strlen(x));
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
  printObj(stdout, co->args[1]);
}

void entry(struct Cora* co);

int main(int argc, char *argv) {
  struct Cora* co = coraNew();
  pushCont(co, id);
  trampoline(co, entry);
}
