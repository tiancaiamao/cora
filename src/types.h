#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdint.h>
#include <stdbool.h>
#include "gc.h"

typedef uint8_t scmHeadType;

#define TAG_SHIFT 3
#define TAG_MASK 0x7
#define TAG_PTR 0x7

#define ptr(x) ((void*)((x)&~TAG_PTR))
#define tag(x) ((x) & TAG_MASK)

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
// 1-101 boolean
// 0-101 other constant
#define TAG_BOOLEAN 0xd

#define iscons(x) (tag(x) == TAG_CONS)
#define issymbol(x) (tag(x) == TAG_SYMBOL)
#define isfixnum(x) (((x) & 1) == 0)
#define isboolean(x) (((x) & 0xf) == TAG_BOOLEAN)

extern const Obj True;
extern const Obj False;
extern const Obj Nil;
extern const Obj Undef;

enum {
      // Instant values.
      scmHeadBoolean,
      scmHeadNull,
      // Symbol is a special pointer, but it's basically instant value.
      // Number may be or may not be pointer.
      scmHeadNumber,
      // The followings are all pointer types.
      // Except cons, all the others are general pointer.
      scmHeadCons,
      /* scmHeadNative, */
      scmHeadCurry,
      scmHeadString,
      scmHeadVector,
      scmHeadClosure,
      scmHeadContinuation,
      scmHeadPrimitive,

      // Seems weird, but the instructions object memory management need it.
      // Instr do not use tagged pointer, because it's not Obj.
      scmHeadInstr,
};

void typesInit();

void* newObj(scmHeadType tp, int sz);

struct VM;
typedef void (*InstrFunc)(struct VM *vm);
/* typedef void (*nativeFuncPtr) (struct controlFlow *ctx); */

struct scmCons {
  scmHead head;
  Obj car;
  Obj cdr;
};

#define fixnum(x) ((intptr_t)(x)>>1)
bool eq(Obj x, Obj y);

scmHead *getScmHead(Obj);

#define intern(x) makeSymbol(x)
Obj makeSymbol(char *s);
Obj symbolGet(Obj sym);
Obj symbolSet(Obj sym, Obj val);
const char* symbolStr(Obj sym);

#define cons(x, y) makeCons(x, y)
Obj makeCons(Obj car, Obj cdr);
Obj consp(Obj v);
Obj cadr(Obj v);
Obj caddr(Obj v);
Obj cdddr(Obj v);
#define car(v) (((struct scmCons*)(ptr(v)))->car)
#define cdr(v) (((struct scmCons*)(ptr(v)))->cdr)

typedef struct _instrHead {
  scmHead head;
  InstrFunc fn;
} instrHead;

typedef instrHead* Instr;

Obj makePrimitive(InstrFunc fn, int required);
bool isprimitive(Obj o);
int primitiveRequired(Obj o);
InstrFunc primitiveFn(Obj o);

/* Obj makeBuiltin(nativeFuncPtr fn, int required); */
/* Obj makeNative(nativeFuncPtr fn, int required, int captured, ...); */

Obj nativeRef(Obj o, int idx);
int nativeRequired(Obj o);
int nativeCaptured(Obj o);
/* nativeFuncPtr nativeFn(Obj o); */

Obj makeCurry(int required, int captured, Obj *data, Obj primitive);
int curryRequired(Obj curry);
Obj curryPrim(Obj curry);
Obj curryCaptured(Obj curry);
Obj* curryData(Obj curry);
bool iscurry(Obj o);


struct hashForObjItem {
  int key;
  Obj value;
};

struct hashForObj {
  struct hashForObjItem *ptr;
  int size;
};

Obj makeClosure(int required, Instr code, Obj parent, struct hashForObj h);
Instr closureCode(Obj);
bool isclosure(Obj o);
Obj closureParent(Obj);
Obj closureSlot(Obj, int);
int closureRequired(Obj);

Obj makeString(const char *s, int len);
char* stringStr(Obj o);
int stringLen(Obj o);
Obj makeNumber(int v);
bool isstring(Obj o);
bool isNumber(Obj o);

struct stack {
  Obj *data;
  int base;
  int pos;
};

Obj makeContinuation(struct stack s, InstrFunc code, void *data);
InstrFunc contCode(Obj o);
void* contCodeData(Obj o);

Obj symQuote, symIf, symLambda, symDo, symMacroExpand, symDebugEval;
/* void gcSymbols(struct GC *gc); */

Obj makeVector(int c);
Obj vectorRef(Obj vec, int idx);
Obj vectorSet(Obj vec, int idx, Obj val);
bool isvector(Obj o);

struct stack contStack(Obj o);

#endif
