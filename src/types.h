#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdint.h>
#include <stdbool.h>
#include "gc.h"
#include "str.h"

#define assert(c) if (!(c)) __builtin_trap()

typedef uint8_t scmHeadType;

#define TAG_SHIFT 3
#define TAG_MASK 0x7
#define TAG_PTR 0x7

#define ptr(x) ((void*)((x)&~TAG_PTR))
#define tag(x) ((x) & TAG_MASK)

typedef uintptr_t Obj;

#define OBJ_FIELD(O, TYPE, FIELD) (((struct TYPE*)(ptr(O)))->FIELD)

// XX0 fixnum
// XX1 non-fixnum
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

void typesInit();

struct Cora;

void* newObj(scmHeadType tp, int sz);

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
char* symbolStr(Obj sym);

#define cons(x, y) makeCons(x, y)
bool iscons(Obj o);
Obj makeCons(Obj car, Obj cdr);
Obj consp(Obj v);
Obj cadr(Obj v);
Obj caddr(Obj v);
Obj cdddr(Obj v);
#define car(v) (((struct scmCons*)(ptr(v)))->car)
#define cdr(v) (((struct scmCons*)(ptr(v)))->cdr)

Obj makeCObj(void *ptr);

Obj makeString1(char *x);

Obj makeString(const char *s, int len);
Obj makeCString(const char *s);
strBuf stringStr(Obj o);
int stringLen(Obj o);
Obj makeNumber(int v);
bool isstring(Obj o);
bool isNumber(Obj o);

struct Cora;

typedef void (*basicBlock)(struct Cora *co);

struct pcState {
  basicBlock func;
  int label;
};

struct scmNative {
  scmHead head;
  struct pcState code;
  // required is the argument number of the nativeFunc.
  int required;
  // captured is the size of the data, it's immutable after makeNative.
  int captured;
  Obj data[];
};

Obj makeNative(int label, basicBlock fn, int required, int captured, ...);
Obj* nativeData(Obj o);
int nativeCaptured(Obj o);
int nativeRequired(Obj o);
struct pcState* nativeFuncPtr(Obj o);

struct stackState {
  Obj *stack;
  int base;
  int pos;
};

struct returnAddr {
  struct stackState stk;
  struct pcState pc;
  Obj frees;
};

struct callStack {
  struct returnAddr *data;
  int len;
  int cap;
};

Obj makeContinuation();
struct callStack* contCallStack(Obj cont);

void gcMarkCallStack(struct GC *gc, struct callStack *stack);

Obj symQuote, symIf, symLambda, symDo, symMacroExpand, symDebugEval, symBackQuote, symUnQuote;

Obj makeVector(int c);
Obj vectorRef(Obj vec, int idx);
Obj vectorSet(Obj vec, int idx, Obj val);
bool isvector(Obj o);
int vectorLength(Obj vec);

struct trieNode {
		Obj value;
		char *sym;
		struct trieNode* child[256];

		struct trieNode *next;
		struct Cora *owner;
};


void trieNodeGCFunc(struct GC* gc, struct trieNode *node);

#endif
