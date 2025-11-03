#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include "gc.h"
#include "str.h"
#include "vector.h"

#define assert(c) if (!(c)) __builtin_trap()

enum {
	TAG_IMMED  = 0b001,
	TAG_COBJ = 0b010,
	TAG_SYMBOL = 0b011,
	TAG_BYTES  = 0b100,
	TAG_CONS   = 0b101,
	TAG_NATIVE   = 0b110,
	TAG_PTR = 0b111, // general pointer, like vector
};

static inline int64_t
fixnum(Obj o) {
	assert(isfixnum(o));
	return (int64_t)(*(double*)&o);
}

static inline Obj
makePtr(void *ptr, uint8_t tag) {
	assert(((uintptr_t)ptr >> 48) == 0);
	uintptr_t tmp = (((uintptr_t)tag) << 48) | OBJ_MASK | (uintptr_t)ptr;
	return (Obj)tmp;
}

#define OBJ_FIELD(O, TYPE, FIELD) (((struct TYPE*)(ptr(O)))->FIELD)

extern const Obj Undef;
extern const Obj Nil;
extern const Obj True;
extern const Obj False;

static inline bool iscobj(Obj v) { return ((v & MASK) == (((uint64_t)TAG_COBJ << 48) | OBJ_MASK));}
static inline bool issymbol(Obj v) { return ((v & MASK) == (((uint64_t)TAG_SYMBOL << 48) | OBJ_MASK));}
static inline bool isbytes(Obj v) { return ((v & MASK) == (((uint64_t)TAG_BYTES << 48) | OBJ_MASK));}
static inline bool iscons(Obj v) { return ((v & MASK) == (((uint64_t)TAG_CONS << 48) | OBJ_MASK));}
static inline bool isboolean(Obj x) { return ((x == True) || (x == False));}

void typesInit();

struct Cora;

void* newObj(scmHeadType tp, int sz);

struct scmCons {
  scmHead head;
  Obj car;
  Obj cdr;
};

scmHead *getScmHead(Obj);

void* mustCObj(Obj o);

#define intern(x) makeSymbol(x)
Obj makeSymbol(const char *s);
Obj symbolGet(Obj sym);
int symbolStr(Obj sym, char* dest, size_t sz);

#define cons(x, y) makeCons(x, y)
// #define iscons(o) (((o) & TAG_MASK) == TAG_PTR && ((scmHead *)ptr(o))->type == scmHeadCons)

Obj makeCons(Obj car, Obj cdr);
Obj consp(Obj v);
Obj cadr(Obj v);
Obj cddr(Obj v);
Obj caddr(Obj v);
Obj cdddr(Obj v);

static inline Obj car(Obj o) { struct scmCons* c = (struct scmCons*)ptr(o); assert(c->head.type == scmHeadCons); return c->car; }
// #define car(v) (((struct scmCons*)(ptr(v)))->car)
#define cdr(v) (((struct scmCons*)(ptr(v)))->cdr)

Obj makeCObj(void *ptr);

Obj makeBytes(int len);
char *bytesData(Obj o);
int bytesLen(Obj o);

Obj makeString(const char *s, int len);
Obj makeCString(const char *s);
str stringStr(Obj o);

static inline Obj makeNumber(int64_t v) {
	double f = (double)v;
	if (isNumber(*(uint64_t*)&f)) {
		return *(uint64_t*)&f;
	}
	assert(false);
}

// #define isBytes(o) ((tag(o) == TAG_PTR) && (((scmHead *)ptr(o))->type == scmHeadBytes))

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

    if (isbytes(x) && isbytes(y)) {
        struct scmBytes *x1 = (struct scmBytes *)ptr(x);
        struct scmBytes *y1 = (struct scmBytes *)ptr(y);
        assert(x1->head.type == scmHeadBytes);
        assert(y1->head.type == scmHeadBytes);
        str s1 = { x1->data, x1->len };
        str s2 = { y1->data, y1->len };
        return strCmp(s1, s2) == 0;
    }

    return false;
}

struct Cora;

typedef void (*basicBlock)(struct Cora *co);

typedef vector(Obj) constantTable;

typedef uint32_t Opcode;

struct pcState {
	basicBlock func;
	union {
		int label;
		struct {
			Opcode *opcode;
			constantTable constant;
		} v;
	} data;
};

struct scmNative {
	scmHead head;
	struct pcState code;
	/* Opcode *opcode; // reference to opcode when it's a bytecode closure. */
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
struct scmNative* mustNative(Obj o);
bool isNative(Obj o);

struct stackState {
	Obj stack;
	int base;
	int pos;
};

struct frame {
	struct stackState stk;
	struct pcState pc;

	Obj frees;

	// For debugging
	char *debugFile;
	int debugLine;
};

struct callStack {
  struct frame *data;
  int len;
  int cap;
};

Obj makeContinuation(struct frame *data, int len);
struct callStack contCallStack(Obj cont);

void gcMarkCallStack(struct GC *gc, struct callStack *stack, int minv);

extern Obj symQuote, symIf, symLambda, symDo, symMacroExpand, symDebugEval, symBackQuote, symUnQuote;

Obj makeVector(int size, int cap);
Obj vectorRef(Obj vec, int idx);
Obj vectorSet(Obj vec, int idx, Obj val);
Obj vectorAppend(Obj vec, Obj val);
bool isvector(Obj o);
int vectorLength(Obj vec);

struct trieNode {
		Obj value;
		char *sym;
		struct trieNode* child[256];

		struct trieNode *next;
		struct Cora *owner;
};

#define globalRef(symbol) ({ \
    struct trieNode *s = ptr(symbol); \
    Obj val = s->value; \
    if (val == Undef) { \
        printf("undefined global symbol: %s\n", s->sym); \
        assert(false); \
    } \
    val; \
})

void trieNodeGCFunc(struct GC* gc, struct trieNode *node);

#endif
