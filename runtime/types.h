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

extern const Obj True;
extern const Obj False;
extern const Obj Nil;
extern const Obj Undef;

struct controlFlow;

typedef uint8_t scmHeadType;
enum {
  // Instant values.
	scmHeadBoolean,
	scmHeadNull,
  // Number may be or may not be pointer.
	scmHeadNumber,
  // The followings are all pointer types.
	scmHeadSymbol,
	scmHeadCons,
	scmHeadClosure,
  scmHeadNative,
	scmHeadCurry,
	scmHeadString,
	scmHeadVector,
};

typedef struct {
  uint8_t mark;
  scmHeadType type;
} scmHead;

typedef void (*nativeFuncPtr) (struct controlFlow *ctx);

struct scmCons {
  scmHead head;
  Obj car;
  Obj cdr;
};

#define ptr(x) ((void*)((x)&~TAG_PTR))
#define fixnum(x) ((x)>>1)
bool eq(Obj x, Obj y);

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

Obj makeNative(nativeFuncPtr fn, int required, int captured, ...);
Obj nativeRef(Obj o, int idx);
int nativeRequired(Obj o);
nativeFuncPtr nativeFn(Obj o);

Obj makeCurry(Obj fn, int required, int captured);
void curryFill(Obj curry, int start, int end, Obj *base);
int curryRequired(Obj curry);
Obj curryCaptured(Obj curry);
Obj curryFn(Obj curry);
Obj* curryData(Obj curry);

Obj makeClosure(Obj params, Obj body, Obj env);
Obj closureParams(Obj);
Obj closureBody(Obj);
Obj closureEnv(Obj);

Obj makeString(char *s, int len);
Obj makeNumber(int v);

Obj symQuote, symIf, symLambda, symDo, symMacroExpand;

#endif
