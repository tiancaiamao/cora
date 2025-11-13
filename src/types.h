#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include "gc.h"
#include "str.h"

typedef struct Cora Cora;
typedef struct GC GC;

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
#define issymbol(x) ((tag(x) == TAG_SYMBOL) || (tag(x) == TAG_PTR && ((scmHead *)ptr(x))->type == scmHeadSymbol))
#define isfixnum(x) (((x) & 1) == 0)
#define isboolean(x) (((x) & 0xf) == TAG_BOOLEAN)

extern const Obj True;
extern const Obj False;
extern const Obj Nil;
extern const Obj Undef;

void typesInit();

void* newObj(GC *gc, scmHeadType tp, int sz);

struct scmCons {
  scmHead head;
  Obj car;
  Obj cdr;
};

#define fixnum(x) ((intptr_t)(x)>>1)

scmHead *getScmHead(Obj);

void* mustCObj(Obj o);

Obj intern(char *s);
int symbolStr(Obj sym, char* dest, size_t sz);

#define iscons(o) (((o) & TAG_MASK) == TAG_PTR && ((scmHead *)ptr(o))->type == scmHeadCons)

Obj makeCons(GC *gc, Obj car, Obj cdr);
Obj consp(Obj v);
Obj cadr(Obj v);
Obj caddr(Obj v);
Obj cdddr(Obj v);
#define car(v) (((struct scmCons*)(ptr(v)))->car)
#define cdr(v) (((struct scmCons*)(ptr(v)))->cdr)

Obj makeCObj(void *ptr);

Obj makeBytes(GC *gc, int len);
char *bytesData(Obj o);
int bytesLen(Obj o);

Obj makeString(GC *gc, const char *s, int len);
Obj makeCString(GC *gc, const char *s);
str stringStr(Obj o);

#define MAKE_NUMBER(v) (((Obj)v) << 1)

#define PRIM_CAR(obj) ((Obj)(((struct scmCons*)(ptr(obj)))->car))
#define PRIM_CDR(obj) ((Obj)(((struct scmCons*)(ptr(obj)))->cdr))
#define PRIM_ISCONS(obj) (iscons(obj)? True: False)

#define PRIM_EQ(x, y) (eq(x, y) ? True : False)
#define PRIM_GT(x, y) (fixnum(x) > fixnum(y) ? True : False)
#define PRIM_LT(x, y) (fixnum(x) < fixnum(y) ? True : False)

// assuming x and y are both fixnum
#define PRIM_ADD(x, y)    ((x) + (y))
#define PRIM_SUB(x, y)    ((x) - (y))
#define PRIM_MUL(x, y)    (MAKE_NUMBER(fixnum(x) * fixnum(y)))

Obj makeNumber(int v);
#define isBytes(o) ((tag(o) == TAG_PTR) && (((scmHead *)ptr(o))->type == scmHeadBytes))
bool isNumber(Obj o);

struct scmBytes {
	scmHead head;
	int len;
	char data[];
};

static inline bool
eq(Obj x, Obj y) {
    if (x == y) return true;

    if (iscons(x) && iscons(y)) {
        if (!eq(car(x), car(y))) return false;
        return eq(cdr(x), cdr(y));
    }

    if (isBytes(x) && isBytes(y)) {
        struct scmBytes *x1 = ptr(x);
        struct scmBytes *y1 = ptr(y);
        str s1 = { x1->data, x1->len };
        str s2 = { y1->data, y1->len };
        return strCmp(s1, s2) == 0;
    }

    return false;
}

typedef void (*basicBlock) (Cora *co, int label, Obj *R);

struct scmNative {
	scmHead head;
	int required;
	int nframe;
	basicBlock fn;

	int captured;
	Obj data[];
};

struct scmNative* mustNative(Obj o);
Obj makeNative(GC *gc, int nframe, basicBlock fn, int required, int captured, ...);
int nativeCaptured(Obj o);
int nativeRequired(Obj o);
Obj* nativeData(Obj o);
basicBlock nativeFn(Obj o);

extern Obj symQuote, symIf, symLambda, symDo, symMacroExpand, symDebugEval, symBackQuote, symUnQuote;

Obj makeVector(GC *gc, int size, int cap);
Obj vectorRef(Obj vec, int idx);
Obj vectorSet(GC *gc, Obj vec, int idx, Obj val);
Obj vectorAppend(GC *gc, Obj vec, Obj val);
bool isvector(Obj o);
int vectorLength(Obj vec);

uint64_t strHashFunc(void *ptr);
bool strEQFunc(void *ptr1, void *ptr2);

#endif
