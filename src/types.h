#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include "gc.h"
#include "str.h"

typedef struct Cora Cora;
typedef struct GC GC;

#define assert(c) if (!(c)) __builtin_trap()

typedef uint8_t scmHeadType;

#define isNumber(x) ((x & OBJ_MASK) != OBJ_MASK)
static inline bool isfixnum(Obj x) { return isNumber(x) && *(double*)&x == trunc(*(double*)&x);}

static inline int64_t
fixnum(Obj o) {
	assert(isfixnum(o));
	return (int64_t)(*(double*)&o);
}

static inline Obj
makeNaNPtr(void *ptr, uint8_t tag) {
	assert(((uintptr_t)ptr >> 48) == 0);
	uintptr_t tmp = (((uintptr_t)tag) << 48) | OBJ_MASK | (uintptr_t)ptr;
	return (Obj)tmp;
}

#define MASK      0x7FFF000000000000 // 0111  1111 1111 1000
#define OBJ_FIELD(O, TYPE, FIELD) (((struct TYPE*)(ptr(O)))->FIELD)

extern const Obj True;
extern const Obj False;
extern const Obj Nil;
extern const Obj Undef;

static inline bool iscobj(Obj v) { return ((v & MASK) == (((uint64_t)TAG_COBJ << 48) | OBJ_MASK));}
static inline bool issymbol(Obj v) {
	return isobj(v) && ((tag(v) == TAG_SYMBOL) || (tag(v) == TAG_PTR && ((scmHead *)ptr(v))->type == scmHeadSymbol));
}
static inline bool isBytes(Obj v) { return ((v & MASK) == (((uint64_t)TAG_BYTES << 48) | OBJ_MASK));}
static inline bool iscons(Obj v) { return ((v & MASK) == (((uint64_t)TAG_CONS << 48) | OBJ_MASK));}
static inline bool isboolean(Obj x) { return ((x == True) || (x == False));}

void typesInit();

void* newObj(GC *gc, scmHeadType tp, int sz);

struct scmCons {
  scmHead head;
  Obj car;
  Obj cdr;
};

scmHead *getScmHead(Obj);

void* mustCObj(Obj o);

Obj intern(char *s);
int symbolStr(Obj sym, char* dest, size_t sz);

Obj makeCons(GC *gc, Obj car, Obj cdr);
Obj consp(Obj v);
Obj cadr(Obj v);
Obj caddr(Obj v);
Obj cdddr(Obj v);
static inline Obj car(Obj o) { struct scmCons* c = (struct scmCons*)ptr(o); assert(c->head.type == scmHeadCons); return c->car; }
static inline Obj cdr(Obj o) { struct scmCons* c = (struct scmCons*)ptr(o); assert(c->head.type == scmHeadCons); return c->cdr; }

Obj makeCObj(void *ptr);

Obj makeBytes(GC *gc, int len);
char *bytesData(Obj o);
int bytesLen(Obj o);

Obj makeString(GC *gc, const char *s, int len);
Obj makeCString(GC *gc, const char *s);
str stringStr(Obj o);


static inline Obj makeNumber(int64_t v) {
	double f = (double)v;
	if (isNumber(*(uint64_t *)&f)) {
		return *(uint64_t *)&f;
	}
	assert(false);
}
#define MAKE_NUMBER(v) makeNumber(v)

#define PRIM_CAR(obj) ((Obj)(((struct scmCons*)(ptr(obj)))->car))
#define PRIM_CDR(obj) ((Obj)(((struct scmCons*)(ptr(obj)))->cdr))
#define PRIM_ISCONS(obj) (iscons(obj)? True: False)

#define PRIM_EQ(x, y) (eq(x, y) ? True : False)
#define PRIM_GT(x, y) (fixnum(x) > fixnum(y) ? True : False)
#define PRIM_LT(x, y) (fixnum(x) < fixnum(y) ? True : False)

// assuming x and y are both fixnum
#define PRIM_ADD(x, y)    (MAKE_NUMBER(fixnum(x) + fixnum(y)))
#define PRIM_SUB(x, y)    (MAKE_NUMBER(fixnum(x) - fixnum(y)))
#define PRIM_MUL(x, y)    (MAKE_NUMBER(fixnum(x) * fixnum(y)))

Obj makeNumber(int64_t v);

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
