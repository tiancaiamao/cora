#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "types.h"

const Obj True = ((1 << (TAG_SHIFT+1)) | TAG_BOOLEAN);
const Obj False = ((2 << (TAG_SHIFT+1)) | TAG_BOOLEAN);
const Obj Nil = ((666 << (TAG_SHIFT+1)) | TAG_IMMEDIATE_CONST);
const Obj Undef = ((42 << TAG_SHIFT) | TAG_IMMEDIATE_CONST);

struct scmString {
  scmHead head;
  int sz;
  char data[];
};

struct scmSymbol {
  scmHead head;
  Obj value;
  char str[];
};

struct scmClosure {
  scmHead head;
  Obj params;
  Obj body;
  Obj env;
};

static void*
newObj(scmHeadType tp, int sz) {
  scmHead* p = malloc(sz);
  assert(((Obj)p & TAG_PTR) == 0);
  p->mark = 0;
  p->type = tp;
  return (void*)p;
}

Obj
makeCons(Obj car, Obj cdr) {
  struct scmCons* p = newObj(scmHeadCons, sizeof(struct scmCons));
  p->car = car;
  p->cdr = cdr;
  return ((Obj)(&p->head) | TAG_CONS);
}

Obj
consp(Obj x) {
  if (iscons(x)) {
    return True;
  }
  return False;
}

Obj
cadr(Obj x) {
  return car(cdr(x));
}

Obj
caddr(Obj x) {
  return car(cdr(cdr(x)));
}

Obj
cdddr(Obj x) {
  return cdr(cdr(cdr(x)));
}

Obj
makeClosure(Obj params, Obj body, Obj env) {
  struct scmClosure* clo = newObj(scmHeadClosure, sizeof(struct scmClosure));
  clo->params = params;
  clo->body = body;
  clo->env = env;
  return ((Obj)(&clo->head) | TAG_PTR);
}

Obj
closureParams(Obj clo) {
  struct scmClosure* c = ptr(clo);
  assert(c->head.type == scmHeadClosure);
  return c->params;
}

Obj
closureBody(Obj clo) {
  struct scmClosure* c = ptr(clo);
  assert(c->head.type == scmHeadClosure);
  return c->body;
}

Obj
closureEnv(Obj clo) {
  struct scmClosure* c = ptr(clo);
  assert(c->head.type == scmHeadClosure);
  return c->env;
}

Obj
makeNumber(int v) {
  if (v < 99999999) {
    return (Obj)((v<<1));
  }
  // TODO
  return (Obj)(99999999);
}

Obj
makeString(char *s, int len) {
  int sz = len + sizeof(struct scmString);
  struct scmString* str = newObj(scmHeadString, sz);
  str->sz = len;
  memcpy(&str->data[0], s, len);
  return ((Obj)(&str->head) | TAG_PTR);
}

struct trieNode {
  struct scmSymbol* sym;
  struct trieNode* child[256];
};

struct trieNode root = {};

Obj
makeSymbol(char *s) {
  char *old = s;
  struct trieNode* p = &root;
  for(; *s; s++) {
    if (p->child[*s] == NULL) {
      struct trieNode *n = malloc(sizeof(struct trieNode));
      memset(n, 0, sizeof(struct trieNode));
      p->child[*s] = n;
    }
    p = p->child[*s];
  }
  if (p->sym == NULL) {
    int sz = sizeof(struct scmSymbol)+strlen(old)+1;
    struct scmSymbol* sym = newObj(scmHeadSymbol, sz);
    sym->value = Undef;
    strcpy(sym->str, old);
    p->sym = sym;
    /* printf("+++ "); */
  }

  return ((Obj)(p->sym)) | TAG_SYMBOL;
}

Obj
symbolGet(Obj sym) {
  assert(issymbol(sym));
  struct scmSymbol* s = ptr(sym);
  assert(s->head.type == scmHeadSymbol);
  return s->value;
}

Obj
symbolSet(Obj sym, Obj val) {
  assert(issymbol(sym));
  struct scmSymbol* s = ptr(sym);
  assert(s->head.type == scmHeadSymbol);
  s->value = val;
  return val;
}

const char*
symbolStr(Obj sym) {
  assert(issymbol(sym));
  struct scmSymbol *s = ptr(sym);
  assert(s->head.type == scmHeadSymbol);
  return s->str;
}

struct scmCurry {
  scmHead head;
  Obj fn; // struct scmNative*
  int required;
  int captured;
  Obj data[];
};

Obj
makeCurry(Obj fn, int required, int captured) {
  int sz = sizeof(struct scmCurry) + captured*sizeof(Obj);
  struct scmCurry* clo = newObj(scmHeadCurry, sz);
  clo->fn = fn;
  clo->required = required;
  clo->captured = captured;
  assert(captured > 0);
  return ((Obj)(&clo->head) | TAG_PTR);
}

void
curryFill(Obj curry, int start, int end, Obj *base) {
  struct scmCurry *dst = ptr(curry);
  for (int i=start; i<end; i++) {
    dst->data[i] = base[i - start];
  }
}

int
curryRequired(Obj o) {
  struct scmCurry *curry = ptr(o);
  return curry->required;
}

Obj
curryCaptured(Obj o) {
  struct scmCurry *curry = ptr(o);
  return curry->captured;
}

Obj
curryFn(Obj o) {
  struct scmCurry *curry = ptr(o);
  return curry->fn;
}

Obj*
curryData(Obj o) {
  struct scmCurry *curry = ptr(o);
  return curry->data;
}

struct scmNative {
  scmHead head;
  nativeFuncPtr fn;
  // required is the argument number of the nativeFunc.
  int required;
  // captured is the size of the data, it's immutable after makeNative.
  int captured;
  Obj data[];
};

Obj
makeNative(nativeFuncPtr fn, int required, int captured, ...) {
  int sz = sizeof(struct scmNative) + captured*sizeof(Obj);
  struct scmNative* clo = newObj(scmHeadNative, sz);
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

nativeFuncPtr
nativeFn(Obj o) {
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

Obj
nativeRef(Obj o, int idx) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->data[idx];
}

bool
eq(Obj x, Obj y) {
  if (x == y) {
    return true;
  }

  if (iscons(x) && iscons(y)) {
    if (!eq(car(x), car(y))) {
      return false;
    }
    return eq(cdr(x), cdr(y));
  }

  return false;
}
