#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdint.h>
#include <stdbool.h>
#include "gc.h"
#include "str.h"

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
// 011 cobj
// 101 immediate const (boolean, null, undef...)
// 111 general pointer (string, vector, number, error...)
#define TAG_FIXNUM 0x0
#define TAG_SYMBOL 0x1
#define TAG_COBJ 0x3
#define TAG_IMMEDIATE_CONST 0x5
// 1-101 boolean
// 0-101 other constant
#define TAG_BOOLEAN 0xd

#define iscobj(x) (tag(x) == TAG_COBJ)
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
      /* scmHeadCurry, */
      scmHeadString,
      scmHeadVector,
      scmHeadClosure,
      /* scmHeadContinuation, */
      scmHeadPrimitive,

      scmHeadNative,
};

void typesInit();

void* newObj(struct VM *vm, int pos, scmHeadType tp, int sz);

struct VM;
struct scmCons {
  scmHead head;
  Obj car;
  Obj cdr;
};

#define fixnum(x) ((intptr_t)(x)>>1)
bool eq(Obj x, Obj y);

scmHead *getScmHead(Obj);

void* mustCObj(Obj o);

#define intern(x) makeSymbol(x)
Obj makeSymbol(char *s);
Obj symbolGet(Obj sym);
Obj symbolSet(Obj sym, Obj val);
char* symbolStr(Obj sym);

#define cons(vm, pos, x, y) makeCons(vm, pos, x, y)
bool iscons(Obj o);
Obj makeCons(struct VM *vm, int pos, Obj car, Obj cdr);
Obj consp(Obj v);
Obj cadr(Obj v);
Obj caddr(Obj v);
Obj cdddr(Obj v);
#define car(v) (((struct scmCons*)(ptr(v)))->car)
#define cdr(v) (((struct scmCons*)(ptr(v)))->cdr)

Obj makeCObj(void *ptr);

typedef void (nativeFn)(struct VM*);

struct scmClosure {
  scmHead head;
  int required;
  Obj code;
  void *closed;
  int nfrees;
  nativeFn *fn;
};

Obj makeClosure(struct VM *vm, int requred, int nfrees, void *closed, Obj code, nativeFn *pc);
struct scmClosure* mustClosure(Obj o);
Obj closureCode(Obj);
bool isclosure(Obj o);
Obj closureSlot(Obj, int);
int closureRequired(Obj);
nativeFn* closurePC(Obj o);

/* Obj makePrimitive(struct VM *vm, int pos, opcode fn, int nargs); */
Obj makeCurry(int required, Obj *closed, int nfrees);

struct tagbstring;
typedef struct tagbstring * bstring;

Obj makeString(struct VM *vm, int pos, const char *s, int len);
strBuf stringStr(Obj o);
int stringLen(Obj o);
Obj makeNumber(int v);
bool isstring(Obj o);
bool isNumber(Obj o);

struct stack {
  Obj *data;
  int base;
  int pos;
};

Obj symQuote, symIf, symLambda, symDo, symMacroExpand, symDebugEval;

Obj makeVector(struct VM *vm, int pos, int c);
Obj vectorRef(Obj vec, int idx);
Obj vectorSet(Obj vec, int idx, Obj val);
bool isvector(Obj o);

struct trieNode {
  Obj value;
  char *sym;
  struct trieNode* child[256];
};

#endif
