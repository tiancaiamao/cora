#ifndef _GC_H_
#define _GC_H_

#include <stdbool.h>
#include <stdint.h>

typedef uint8_t scmHeadType;

typedef struct {
  scmHeadType type;
  uint16_t size;
  uintptr_t forwarding;
} scmHead;

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

#define ptr(x) ((void*)((x)&~TAG_PTR))
#define tag(x) ((x) & TAG_MASK)
#define iscons(x) (tag(x) == TAG_CONS)
#define issymbol(x) (tag(x) == TAG_SYMBOL)
#define isfixnum(x) (((x) & 1) == 0)
#define isboolean(x) (((x) & 0xf) == TAG_BOOLEAN)

extern struct GC gc;
void gcInit(struct GC* gc);
uintptr_t gcCopy(struct GC *gc, uintptr_t head);
void* gcAlloc(struct GC* gc, int size);

typedef void (*gcFunc)(struct GC *gc, void* from, void* to);
bool gcRegistForType(uint8_t type, gcFunc fn);

#endif
