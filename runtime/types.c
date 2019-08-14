#include <stdint.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef uintptr_t Obj;

// 000 fixnum
// 001 non-fixnum
// 001 symbol
// 011 cons
// 101 immediate const (boolean, null, undef...)
// 111 general pointer (string, vector, number, error...)
#define TAG_FIXNUM 0x0
#define TAG_SYMBOL 0x1
#define TAG_CONS 0x3
#define TAG_IMMEDIATE_CONST 0x5
#define TAG_PTR 0x7

#define TAG_SHIFT 3
#define TAG_MASK 0x7

// 1-101 boolean
// 0-101 other constant
#define TAG_BOOLEAN 0xd

#define tag(x) ((x) & TAG_MASK)
#define iscons(x) (tag(x) == TAG_CONS)
#define issymbol(x) (tag(x) == TAG_SYMBOL)
#define isfixnum(x) (((x) & 1) == 0)
#define isboolean(x) (((x) & 0xf) == TAG_BOOLEAN)

const Obj True = ((1 << (TAG_SHIFT+1)) & TAG_BOOLEAN);
const Obj False = ((2 << (TAG_SHIFT+1)) & TAG_BOOLEAN);
const Obj Nil = ((666 << (TAG_SHIFT+1)) & TAG_IMMEDIATE_CONST);
const Obj Undef = ((42 << TAG_SHIFT) & TAG_IMMEDIATE_CONST);

typedef int scmHead;
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

#define ptr(x) ((void*)((x)&~TAG_PTR))
#define fixnum(x) (((uint)(x))>>1)
#define car(v) (((struct scmCons*)(ptr(v)))->car)
#define cdr(v) (((struct scmCons*)(ptr(v)))->cdr)
#define cons makeCons

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

struct VM;
typedef void(*ClosureFn)(struct VM*);

struct VM {
  Obj* stack;
  ClosureFn pc;
};

struct scmClosure {
  scmHead head;
  ClosureFn fn;
  Obj args[];
};

void* newObj(scmHead tp, int sz) {
  scmHead* p = malloc(sz);
  assert(((Obj)p & TAG_PTR) == 0);
  *p = tp;
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
  memcpy(str->data, s, len);
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

#define intern(x) makeSymbol(x)

Obj makeClosure(ClosureFn fn, ...) {
  Obj val;
  va_list args;
  va_start(args, fn);
  val = va_arg(args, Obj);
  va_end(args);
}

