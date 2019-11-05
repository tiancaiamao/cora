#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdint.h>
#include <stdbool.h>

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
struct scmNative;
typedef Obj (*ClosureFn)(struct VM* vm, struct scmNative* self);

struct VM {
  Obj* stack;
  int size;
  int idx;
  ClosureFn pc;
};


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
	scmHeadBuiltin,
	scmHeadStream,
	scmHeadError,
  scmHeadNative,
};

typedef struct {
  uint8_t mark;
  scmHeadType type;
} scmHead;

struct scmCons {
  scmHead head;
  Obj car;
  Obj cdr;
};

struct scmNative {
  scmHead head;
  ClosureFn fn;
  int required;
  Obj captured[];
};


typedef Obj(*BuiltinFn)(Obj args[]);

struct scmBuiltin {
  scmHead head;
  BuiltinFn fn;
  int required;
};

struct scmClosure {
  scmHead head;
  Obj params;
  Obj body;
  Obj env;
};

struct scmSymbol {
  scmHead head;
  Obj value;
  char str[];
};

struct VM* newVM();

#define intern(x) makeSymbol(x)
Obj makeSymbol(char *s);
Obj symbolGet(Obj sym);
Obj symbolSet(Obj sym, Obj val);

Obj makeCons(Obj car, Obj cdr);
Obj consp(Obj v);
Obj cadr(Obj v);
Obj caddr(Obj v);
Obj cdddr(Obj v);

Obj makeNative(ClosureFn fn, int count, ...);

Obj makeClosure(Obj params, Obj body, Obj env);
Obj closureRef(Obj o, int idx);
ClosureFn closureFn(Obj o);

Obj makeString(char *s, int len);
Obj makeNumber(int v);
Obj makeBuiltin(BuiltinFn fn, int required);

#define ptr(x) ((void*)((x)&~TAG_PTR))
#define fixnum(x) ((x)>>1)
#define car(v) (((struct scmCons*)(ptr(v)))->car)
#define cdr(v) (((struct scmCons*)(ptr(v)))->cdr)
#define cons(x,y) makeCons(x,y)

bool eq(Obj x, Obj y);

Obj symQuote, symIf, symLambda, symDo;

#endif
