#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "types.h"
#include "gc.h"

const Obj True = ((1 << (TAG_SHIFT+1)) | TAG_BOOLEAN);
const Obj False = ((2 << (TAG_SHIFT+1)) | TAG_BOOLEAN);
const Obj Nil = ((666 << (TAG_SHIFT+1)) | TAG_IMMEDIATE_CONST);
const Obj Undef = ((42 << TAG_SHIFT) | TAG_IMMEDIATE_CONST);

struct scmString {
  scmHead head;
  strBuf str;
};

const char* typeNameX[8] = {
  "unused",
  "boolean",
  "null",
  "number",
  "cons",
  "string",
  "vector",
  "native",
};

void*
newObj(scmHeadType tp, int sz) {
  /* scmHead* p = malloc(sz); */
  scmHead* p = gcAlloc(&gc, sz);
  assert(((Obj)p & TAG_PTR) == 0);
  p->type = tp;
  /* printf("alloc object -- %p %s\n", p, typeNameX[tp]); */
  return (void*)p;
}

scmHead*
getScmHead(Obj o) {
  if (tag(o) == TAG_PTR) {
    return ptr(o);
  }
  return NULL;
}

Obj makeCObj(void *ptr) {
  // The pointer must be aligned to be used as c object.
  assert(((Obj)ptr & TAG_PTR) == 0);
  return ((Obj)(ptr) | TAG_COBJ);
}

void*
mustCObj(Obj o) {
  assert(tag(o) == TAG_COBJ);
  return ptr(o);
}

Obj
makeCons(Obj car, Obj cdr) {
  struct scmCons* p = newObj(scmHeadCons, sizeof(struct scmCons));
  p->car = car;
  p->cdr = cdr;
  return ((Obj)(&p->head) | TAG_PTR);
}

bool iscons(Obj o) {
  if ((o & TAG_MASK) != TAG_PTR) {
    return false;
  }
  scmHead *h = ptr(o);
  return h->type == scmHeadCons;
}

static void
consGCFunc(struct GC *gc, void* f) {
  struct scmCons *from = f;
  gcMark(gc, from->car);
  gcMark(gc, from->cdr);
  from->head.version++;
  gcInuseSizeInc(gc, from->head.size);
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
makeNumber(int v) {
  if (v < 99999999) {
    // The type of a fixnum is actually intptr_t, although stored as uintptr.
    // Be careful with the sign digit.
    Obj res = (Obj)(((intptr_t)(v)<<1));
    assert((res & 1) == 0);
    return res;
  }
  // TODO
  return (Obj)(99999999);
}

bool
isNumber(Obj o) {
  if (tag(o) == TAG_FIXNUM) {
    return true;
  }
  if (tag(o) == TAG_PTR) {
    if (((scmHead*)ptr(o))->type == scmHeadNumber) {
      return true;
    }
  }
  return false;
}

Obj
makeString(const char *s, int len) {
  // sz is the actural length but we malloc a extra byte to be compatible with C.
  int alloc = len + sizeof(struct scmString) + 1;
  struct scmString* str = newObj(scmHeadString, alloc);
  str->str = fromBlk(s, len);
  return ((Obj)(&str->head) | TAG_PTR);
}

Obj makeString1(char *x) {
  return makeString(x, strlen(x));
}

Obj
makeCString(const char *s) {
  return makeString(s, strlen(s));
}

strBuf
stringStr(Obj o) {
  struct scmString* s = ptr(o);
  assert(s->head.type == scmHeadString);
  return s->str;
}

int
stringLen(Obj o) {
  struct scmString* s = ptr(o);
  assert(s->head.type == scmHeadString);
  return strLen(toStr(s->str));
}

bool
isstring(Obj o) {
  if (tag(o) == TAG_PTR) {
    if (((scmHead*)ptr(o))->type == scmHeadString) {
      return true;
    }
  }
  return false;
}

static void
stringGCFunc(struct GC *gc, void* f) {
  // TODO:
  struct scmString *from = f;
  from->head.version++;
}


struct trieNode gRoot = {};

void
trieNodeGCFunc(struct GC* gc, struct trieNode *node) {
  gcMark(gc, node->value);
  for (int i=0; i<256; i++) {
    if (node->child[i] != NULL) {
      trieNodeGCFunc(gc, node->child[i]);
    }
  }
}

Obj
makeSymbol(char *s) {
  char *old = s;
  struct trieNode* p = &gRoot;
  for(; *s; s++) {
    int offset = *s;
    if (p->child[offset] == NULL) {
      struct trieNode *n = malloc(sizeof(struct trieNode));
      memset(n, 0, sizeof(struct trieNode));
      p->child[offset] = n;
    }
    p = p->child[offset];
  }
  /* printf("making symbol ...%p\n", p); */
  if (p->sym == NULL) {
    char* tmp = malloc(strlen(old) + 1);
    strcpy(tmp, old);
    p->sym = tmp;
    p->value = Undef;
  }

  return (Obj)(p) | TAG_SYMBOL;
}

Obj
symbolGet(Obj sym) {
  assert(issymbol(sym));
  struct trieNode* s = ptr(sym);
  return s->value;
}

Obj
symbolSet(Obj sym, Obj val) {
  assert(issymbol(sym));
  struct trieNode* s = ptr(sym);
  s->value = val;
  return val;
}

char*
symbolStr(Obj sym) {
  assert(issymbol(sym));
  struct trieNode *s = ptr(sym);
  return s->sym;
}

Obj
makeNative(basicBlock fn, int required, int captured, ...) {
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

static void
nativeGCFunc(struct GC *gc, void* f) {
  struct scmNative *from = f;
  for (int i=0; i<from->captured; i++) {
    gcMark(gc, from->data[i]);
  }
  from->head.version++;
  gcInuseSizeInc(gc, from->head.size);
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

basicBlock
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

struct scmVector {
  scmHead head;
  int size;
  Obj data[];
};

Obj
makeVector(int size) {
  struct scmVector* vec = newObj(scmHeadVector, sizeof(struct scmVector)+sizeof(Obj)*size);
  vec->size = size;
  for (int i=0; i<vec->size; i++) {
    vec->data[i] = Undef;
  }
  return ((Obj)(&vec->head) | TAG_PTR);
}

Obj
vectorRef(Obj v, int idx) {
  struct scmVector* vec = ptr(v);
  assert(vec->head.type == scmHeadVector);
  assert(idx >= 0 && idx < vec->size);
  return vec->data[idx];
}

Obj
vectorSet(Obj vec, int idx, Obj val) {
  struct scmVector* v = ptr(vec);
  assert(v->head.type == scmHeadVector);
  assert(idx >= 0 && idx < v->size);
  writeBarrier(&v->data[idx], val);
  return vec;
}

int
vectorLength(Obj vec) {
  assert(isvector(vec));
  struct scmVector *v = ptr(vec);
  return v->size;
}

bool
isvector(Obj o) {
  if (tag(o) == TAG_PTR) {
    if (((scmHead*)ptr(o))->type == scmHeadVector) {
      return true;
    }
  }
  return false;
}


static void
vectorGCFunc(struct GC *gc, void* f) {
  struct scmVector *from = f;
  for (int i=0; i<from->size; i++) {
    gcMark(gc, from->data[i]);
  }
  from->head.version++;
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

  if (isstring(x) && isstring(y)) {
    struct scmString* x1 = ptr(x);
    struct scmString* y1 = ptr(y);
    return strCmp(toStr(x1->str), toStr(y1->str)) == 0;
  }

  return false;
}

struct scmContinuation {
  scmHead head;
  struct callStack cs;
};

Obj
makeContinuation() {
  struct scmContinuation* cont = newObj(scmHeadContinuation, sizeof(struct scmContinuation));
  struct callStack* stack = &cont->cs;
  stack->data = malloc(64*sizeof(struct returnAddr));
  stack->len = 0;
  stack->cap = 64;
  return ((Obj)(&cont->head) | TAG_PTR);
}

struct callStack*
contCallStack(Obj cont) {
  struct scmContinuation* v = ptr(cont);
  assert(v->head.type == scmHeadContinuation);
  return &v->cs;
}

void
gcMarkCallStack(struct GC *gc, struct callStack *stack) {
  for (int i=0; i<stack->len; i++) {
    struct returnAddr* addr = &stack->data[i];
    for (int j=addr->base; j<addr->pos; j++) {
      gcMark(gc, addr->stack[j]);
    }
    // Don't forget this one!
    gcMark(gc, addr->frees);
  }
}

static void
continuationGCFunc(struct GC *gc, void* f) {
  struct scmContinuation *from = f;
  gcMarkCallStack(gc, &from->cs);
  from->head.version++;
  gcInuseSizeInc(gc, from->head.size);
}

void
typesInit() {
  gcRegistForType(scmHeadCons, consGCFunc);
  gcRegistForType(scmHeadString, stringGCFunc);
  gcRegistForType(scmHeadVector, vectorGCFunc);
  gcRegistForType(scmHeadNative, nativeGCFunc);
  gcRegistForType(scmHeadContinuation, continuationGCFunc);
}
