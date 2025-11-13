#include "types.h"
#include "gc.h"
#include "map.h"
#include "str.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Obj symQuote, symIf, symLambda, symDo, symMacroExpand, symDebugEval,
    symBackQuote, symUnQuote;

const Obj True = ((1 << (TAG_SHIFT + 1)) | TAG_BOOLEAN);
const Obj False = ((2 << (TAG_SHIFT + 1)) | TAG_BOOLEAN);
const Obj Nil = ((666 << (TAG_SHIFT + 1)) | TAG_IMMEDIATE_CONST);
const Obj Undef = ((42 << TAG_SHIFT) | TAG_IMMEDIATE_CONST);

const char *typeNameX[8] = {
    "unused", "boolean", "null", "number", "cons", "string", "vector", "native",
};

void *newObj(GC *gc, scmHeadType tp, int sz) {
  /* scmHead* p = malloc(sz); */
  scmHead *p = gcAlloc(gc, sz);
  assert(((Obj)p & TAG_PTR) == 0);
  p->type = tp;
  /* printf("alloc object -- %p %s\n", p, typeNameX[tp]); */
  return (void *)p;
}

scmHead *getScmHead(Obj o) {
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

void *mustCObj(Obj o) {
  assert(tag(o) == TAG_COBJ);
  return ptr(o);
}

Obj makeCons(GC *gc, Obj car, Obj cdr) {
  struct scmCons *p = newObj(gc, scmHeadCons, sizeof(struct scmCons));
  p->car = car;
  p->cdr = cdr;
  return ((Obj)(&p->head) | TAG_PTR);
}

static void consGCFunc(GC *gc, void *f) {
  struct scmCons *from = f;
  version_t minv = from->head.version;
  gcMark(gc, from->car, minv);
  gcMark(gc, from->cdr, minv);
}

Obj consp(Obj x) {
  if (iscons(x)) {
    return True;
  }
  return False;
}

Obj cadr(Obj x) { return car(cdr(x)); }

Obj caddr(Obj x) { return car(cdr(cdr(x))); }

Obj cdddr(Obj x) { return cdr(cdr(cdr(x))); }

Obj makeNumber(int v) {
  if (v < 99999999) {
    // The type of a fixnum is actually intptr_t, although stored as uintptr.
    // Be careful with the sign digit.
    Obj res = (Obj)(((intptr_t)(v) << 1));
    assert((res & 1) == 0);
    return res;
  }
  // TODO
  return (Obj)(99999999);
}

bool isNumber(Obj o) {
  if (tag(o) == TAG_FIXNUM) {
    return true;
  }
  if (tag(o) == TAG_PTR) {
    if (((scmHead *)ptr(o))->type == scmHeadNumber) {
      return true;
    }
  }
  return false;
}

Obj makeBytes(GC *gc, int len) {
  // sz is the actural length but we malloc a extra byte to be compatible with
  // C.
  int alloc = len + sizeof(struct scmBytes) + 1;
  struct scmBytes *str = newObj(gc, scmHeadBytes, alloc);
  str->len = len;
  return ((Obj)(&str->head) | TAG_PTR);
}

char *bytesData(Obj o) {
  struct scmBytes *s = ptr(o);
  assert(s->head.type == scmHeadBytes);
  return s->data;
}

int bytesLen(Obj o) {
  struct scmBytes *s = ptr(o);
  assert(s->head.type == scmHeadBytes);
  return s->len;
}

Obj makeString(GC *gc, const char *s, int len) {
  Obj ret = makeBytes(gc, len);
  char *data = bytesData(ret);
  memcpy(data, s, len);
  data[len] = 0;
  return ret;
}

Obj makeCString(GC *gc, const char *s) { return makeString(gc, s, strlen(s)); }

str stringStr(Obj o) {
  struct scmBytes *s = ptr(o);
  assert(s->head.type == scmHeadBytes);
  str ret;
  ret.str = s->data;
  ret.len = s->len;
  return ret;
}

static void bytesGCFunc(GC *gc, void *f) {}

map(str, strBuf) symbolIntern;

Obj intern(const char *s) {
  // TODO: lock!
  // global interning for symbol
  str key = cstr(s);
  strBuf *val = mapGet(&symbolIntern, key);
  if (val == NULL) {
    strBuf p = fromCStr(s);
    key = toStr(p);
    mapSet(&symbolIntern, key, p);
    return (Obj)(p) | TAG_SYMBOL;
  }
  strBuf p = *val;
  return (Obj)(p) | TAG_SYMBOL;
}

int symbolStr(Obj sym, char *dest, size_t sz) {
  assert(issymbol(sym));
  if (tag(sym) == TAG_SYMBOL) {
    strBuf s = ptr(sym);
    int l = strLen(toStr(s)) + 1;
    assert(l < sz);
    memcpy(dest, toCStr(s), l);
    return 0;
  } else if (tag(sym) == TAG_PTR &&
             ((scmHead *)ptr(sym))->type == scmHeadSymbol) {
#ifdef _BOOTSTRAP_TEST_
    struct scmSymbol *s = ptr(sym);
    snprintf(dest, sz, "#%d%%", s->unique);
#else
    snprintf(dest, sz, "x%ld", sym);
#endif
    return 0;
  }
  assert(false);
}

Obj makeNative(GC *gc, int nframe, basicBlock fn, int required, int captured,
               ...) {
  int sz = sizeof(struct scmNative) + captured * sizeof(Obj);
  struct scmNative *clo = newObj(gc, scmHeadNative, sz);
  clo->nframe = nframe;
  clo->fn = fn;
  clo->required = required;
  clo->captured = captured;
  if (captured > 0) {
    va_list ap;
    va_start(ap, captured);
    for (int i = 0; i < captured; i++) {
      clo->data[i] = va_arg(ap, Obj);
    }
    va_end(ap);
  }
  return ((Obj)(&clo->head) | TAG_PTR);
}

struct scmNative *mustNative(Obj o) {
  struct scmNative *native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native;
}

static void nativeGCFunc(GC *gc, void *f) {
  struct scmNative *from = f;
  version_t minv = from->head.version;
  for (int i = 0; i < from->captured; i++) {
    gcMark(gc, from->data[i], minv);
  }
}

Obj *nativeData(Obj o) {
  struct scmNative *native = ptr(o);
  assert(native->head.type == scmHeadNative);
  if (native->captured == 0) {
    return NULL;
  }
  return native->data;
}

int nativeCaptured(Obj o) {
  struct scmNative *native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->captured;
}

basicBlock nativeFn(Obj o) {
  struct scmNative *native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->fn;
}

int nativeRequired(Obj o) {
  struct scmNative *native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->required;
}

Obj makeVector(GC *gc, int size, int cap) {
  assert(size <= cap);
  struct scmVector *vec =
      newObj(gc, scmHeadVector, sizeof(struct scmVector) + sizeof(Obj) * cap);
  vec->head.rset = NULL;
  vec->head.inRSet = false;
  vec->size = size;
  vec->cap = cap;
  for (int i = 0; i < vec->size; i++) {
    vec->data[i] = Undef;
  }
  return ((Obj)(&vec->head) | TAG_PTR);
}

Obj vectorRef(Obj v, int idx) {
  struct scmVector *vec = ptr(v);
  assert(vec->head.type == scmHeadVector);
  assert(idx >= 0 && idx < vec->size);
  return vec->data[idx];
}

Obj vectorSet(GC *gc, Obj vec, int idx, Obj val) {
  struct scmVector *v = ptr(vec);
  assert(v->head.type == scmHeadVector);
  assert(idx >= 0 && idx < v->size);
  writeBarrierForIncremental(gc, &v->data[idx], val);
  writeBarrierForGeneration(gc, &v->head, val);
  return vec;
}

int vectorLength(Obj vec) {
  assert(isvector(vec));
  struct scmVector *v = ptr(vec);
  return v->size;
}

int vectorCapacity(Obj vec) {
  assert(isvector(vec));
  struct scmVector *v = ptr(vec);
  return v->cap;
}

Obj vectorAppend(GC *gc, Obj vec, Obj val) {
  assert(isvector(vec));
  struct scmVector *v = ptr(vec);
  if (v->size >= v->cap) {
    assert(v->cap > 0);
    int newCap;
    if (v->cap < 1024) {
      newCap = v->cap * 2;
    } else {
      newCap = v->cap + v->cap / 4;
    }
    Obj tmp = makeVector(gc, v->size, newCap);
    struct scmVector *tmpV = ptr(tmp);
    memcpy(tmpV->data, v->data, v->size * sizeof(Obj));
    // writeBarrier!
    writeBarrierForIncremental(gc, &vec, tmp);
    // this seems not required, because tmp->version should always >=
    // val->version?
    /* writeBarrierForGeneration(&v->head, val); */
    v = ptr(tmp);
  }
  v->data[v->size] = val;
  v->size++;
  return ((Obj)(&v->head) | TAG_PTR);
}

bool isvector(Obj o) {
  if (tag(o) == TAG_PTR) {
    if (((scmHead *)ptr(o))->type == scmHeadVector) {
      return true;
    }
  }
  return false;
}

static void vectorGCFunc(GC *gc, void *f) {
  struct scmVector *from = f;
  version_t minv = from->head.version;
  for (int i = 0; i < from->size; i++) {
    gcMark(gc, from->data[i], minv);
  }
}

static void symbolGCFunc(GC *gc, void *f) {
  struct scmSymbol *from = f;
  version_t minv = from->head.version;
  gcMark(gc, from->value, minv);
}

uint64_t strHashFunc(void *ptr) {
  str *s = (str *)ptr;
  return fnv1a64(s->str, s->len);
}

bool strEQFunc(void *ptr1, void *ptr2) {
  str *s1 = (str *)ptr1;
  str *s2 = (str *)ptr2;
  return strCmp(*s1, *s2) == 0;
}

void typesInit() {
  mapInit(&symbolIntern, strHashFunc, strEQFunc);
  gcRegistForType(scmHeadCons, consGCFunc);
  gcRegistForType(scmHeadBytes, bytesGCFunc);
  gcRegistForType(scmHeadVector, vectorGCFunc);
  gcRegistForType(scmHeadSymbol, symbolGCFunc);
  gcRegistForType(scmHeadNative, nativeGCFunc);
}
