#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdint.h>

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

const Obj True;
const Obj False;
const Obj Nil;
const Obj Undef;

struct VM;
typedef void(*ClosureFn)(struct VM*);

struct VM {
  Obj* stack;
  int size;
  int idx;
  ClosureFn pc;
};


typedef uint8_t scmHeadType;

typedef struct {
  uint8_t mark;
  scmHeadType type;
} scmHead;

struct scmCons {
  scmHead head;
  Obj car;
  Obj cdr;
};

struct VM* newVM();

#define intern(x) makeSymbol(x)
Obj makeSymbol(char *s);
Obj symbolGet(Obj sym);
Obj symbolSet(Obj sym, Obj val);
Obj makeCons(Obj car, Obj cdr);

Obj makeClosure(ClosureFn fn, int count, ...);
Obj closureRef(Obj o, int idx);
ClosureFn closureFn(Obj o);

#define ptr(x) ((void*)((x)&~TAG_PTR))
#define fixnum(x) (((uint)(x))>>1)
#define car(v) (((struct scmCons*)(ptr(v)))->car)
#define cdr(v) (((struct scmCons*)(ptr(v)))->cdr)
#define cons(x,y) makeCons(x,y)

#endif
