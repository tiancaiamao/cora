#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>
#include "types.h"

#include <stdio.h>

typedef uint8_t scmHeadType;

enum {
	scmHeadNumber,
	scmHeadCons,
	scmHeadVector,
	scmHeadNull,
	scmHeadString,
	scmHeadSymbol,
	scmHeadBoolean,
	scmHeadClosure,
	scmHeadStream,
	scmHeadPrimitive,
	scmHeadError,
};

const Obj True = ((1 << (TAG_SHIFT+1)) | TAG_BOOLEAN);
const Obj False = ((2 << (TAG_SHIFT+1)) | TAG_BOOLEAN);
const Obj Nil = ((666 << (TAG_SHIFT+1)) | TAG_IMMEDIATE_CONST);
const Obj Undef = ((42 << TAG_SHIFT) | TAG_IMMEDIATE_CONST);

typedef struct {
  uint8_t mark;
  scmHeadType type;
} scmHead;


struct scmCons {
  scmHead head;
  Obj car;
  Obj cdr;
};

struct scmSymbol {
  scmHead head;
  Obj value;
  char *str;
};

struct scmString {
  scmHead head;
  int sz;
  char data[];
};


struct Managed;

static bool initialized = false;

static void init();

struct VM*
newVM() {
  if (initialized == false) {
    init();
    initialized = true;
  }

  struct VM* m = malloc(sizeof(struct VM));
  m->size = 16;
  m->idx = 0;
  m->stack = malloc(sizeof(Obj) * m->size);
  m->pc = NULL;
  return m;
}

struct scmClosure {
  scmHead head;
  ClosureFn fn;
  int count;
  Obj args[];
};

static void gcKeep(struct Managed* frame, scmHead* o);

struct Managed {
  scmHead** data;
  int size;
  int cap;
};

struct Managed mem;

static void*
newObj(scmHeadType tp, int sz) {
  scmHead* p = malloc(sz);
  assert(((Obj)p & TAG_PTR) == 0);
  p->mark = 0;
  p->type = tp;
  gcKeep(&mem, p);
  return (void*)p;
}

Obj makeCons(Obj car, Obj cdr) {
  struct scmCons* p = newObj(scmHeadCons, sizeof(struct scmCons));
  p->car = car;
  p->cdr = cdr;
  return ((Obj)(&p->head) | TAG_CONS);
}

Obj makeString(char *s, int len) {
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

Obj makeSymbol(char *s) {
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
    struct scmSymbol* sym = newObj(scmHeadSymbol, sizeof(struct scmSymbol));
    p->sym = sym;
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

Obj symbolSet(Obj sym, Obj val) {
  assert(issymbol(sym));
  struct scmSymbol* s = ptr(sym);
  assert(s->head.type == scmHeadSymbol);
  s->value = val;
  return val;
}

Obj
makeClosure(ClosureFn fn, int count, ...) {
  int sz = sizeof(struct scmClosure) + count*sizeof(Obj);
  struct scmClosure* clo = newObj(scmHeadClosure, sz);
  clo->fn = fn;
  clo->count = count;

  va_list ap;
  va_start(ap, count);
  for (int i=0; i<count; i++) {
    clo->args[i] = va_arg(ap, Obj);
  }
  va_end(ap);

  return ((Obj)(&clo->head) | TAG_PTR);
}

ClosureFn
closureFn(Obj o) {
  struct scmClosure* clo = ptr(o);
  assert(clo->head.type == scmHeadClosure);
  return clo->fn;
}

Obj
closureRef(Obj o, int idx) {
  struct scmClosure* clo = ptr(o);
  assert(clo->head.type == scmHeadClosure);
  return clo->args[idx];
}

static void
init() {
  mem.cap = 1024;
  mem.size = 0;
  mem.data = (scmHead**)malloc(sizeof(scmHead*) * mem.cap);
}

static void
gcKeep(struct Managed* frame, scmHead* o) {
  if (frame->size == frame->cap) {
    scmHead** data = malloc(2 * frame->cap * sizeof(scmHead*));
    memcpy(data, frame->data, frame->size * sizeof(scmHead*));
    free(frame->data);
    frame->data = data;
    frame->cap = 2 * frame->cap;
  }
  frame->data[frame->size] = o;
  frame->size++;
}

#define notptr(x) ((tag(x) == TAG_FIXNUM) || (tag(x) == TAG_IMMEDIATE_CONST))

static void
mark(Obj o) {
  if (notptr(o)) {
    return;
  }
  scmHead* head = ptr(o);
  if (head->mark != 0) {
    return; // already marked
  }

  switch (head->type) {
  case scmHeadVector:
    // TODO
    break;
  case scmHeadString:
    break;
  case scmHeadClosure:
    {
      struct scmClosure* clo = (void*)head;
      for (int i=0; i < clo->count; i++) {
        mark(clo->args[i]);
      }
      break;
    }
  case scmHeadSymbol:
    mark(((struct scmSymbol*)(head))->value);
    break;
  default:
    break;
  }
  head->mark = 1;
}

static void
sweep(struct Managed *frame) {
  int pos = 0;
  for (int i = 0; i < frame->size; i++) {
    scmHead* ptr = frame->data[i];
    if (ptr->mark) {
      ptr->mark = 0;
      frame->data[pos] = ptr;
      pos++;
    } else {
      free(ptr);
    }
  }
  frame->size = pos;
}

void
gc(struct VM* m) {
  for (int i=0; i < m->idx; i++) {
    Obj o = m->stack[i];
    mark(o);
  }
  sweep(&mem);
}

#ifdef _UNIT_TEST_

#include <stdio.h>


static void
clofun(struct VM *m) {
}

static void
testSymbol() {
  printf("test symbol...");

  Obj x = intern("asd");
  symbolSet(intern("fact"), x);
  intern("667");
  intern("abde");
  intern("abde");
  intern("zz");

  assert(root.child['z'] != NULL);
  assert(root.child['z']->sym == NULL);

  struct trieNode* y = root.child['a']->child['s']->child['d'];
  assert(ptr((Obj)(y->sym)) == ptr(x));

  Obj f1 = symbolGet(intern("fact"));
  Obj f2 = symbolGet(intern("fact"));
  Obj f3 = symbolGet(intern("fact"));
  Obj f4 = symbolGet(intern("fact"));
  Obj f5 = symbolGet(intern("fact"));
  Obj f6 = symbolGet(intern("fact"));
  assert(f1 == x);
  assert(f2 == x);
  assert(f3 == x);
  assert(f4 == x);
  assert(f5 == x);
  assert(f6 == x);

  printf("success\n");
}

static void
testBasic() {
  printf("test basic...");
  Obj p = cons(fixnum(3), Nil);
  Obj hd = car(p);
  Obj tl = cdr(p);
  assert(hd == fixnum(3));
  assert(tl == Nil);
  assert(iscons(p));

  Obj s = intern("test");
  Obj s1 = intern("test");
  Obj s2 = intern("xxx");
  assert(s == s1);
  assert(s != s2);

  assert(isboolean(s) == false);
  assert(isboolean(True));
  assert(isboolean(False));
  assert(isboolean(Nil) == false);
  assert(isboolean(Undef) == false);

  Obj x = makeString("asdf", 4);
  assert(tag(x) == TAG_PTR);
  assert(((scmHead*)ptr(x))->type == scmHeadString);

  Obj clo = makeClosure(clofun, 3, fixnum(5), s, hd);
  assert(closureFn(clo) == clofun);
  assert(closureRef(clo, 0) == fixnum(5));
  assert(closureRef(clo, 1) == s);
  assert(closureRef(clo, 2) == hd);

  printf("success\n");
}

static void
testGC() {
  printf("test gc...");

  struct VM* m = newVM();

  Obj s = makeString("abcd", 4);
  Obj o = cons(fixnum(4), Nil);
  Obj x = cons(fixnum(5), o);
  Obj j = cons(fixnum(6), x);
  m->stack[0] = j;
  m->idx = 1;

  gc(m);

  assert(car(o) == fixnum(4));
  assert(cdr(j) == x);

  free(m);

  printf("success\n");
}

int main(int argc, char *argv[]) {
  init();
  testSymbol();
  testBasic();
  testGC();
}

#endif
