#ifndef _GC_H_
#define _GC_H_

#include <stdbool.h>
#include <stdint.h>

typedef uint8_t scmHeadType;

enum {
  scmHeadUnused = 0,
  // Instant values.
  scmHeadBoolean,
  scmHeadNull,
  // Symbol is a special pointer, but it's basically instant value.
  // Number may be or may not be pointer.
  scmHeadNumber,
  // The followings are all pointer types.
  scmHeadCons,
  scmHeadString,
  scmHeadVector,
  scmHeadNative,
  scmHeadContinuation,

  scmHeadMax,
};

typedef struct {
  scmHeadType type;
  uint16_t size;
  int version;
} scmHead;

#define TAG_SHIFT 3
#define TAG_MASK 0x7
#define TAG_PTR 0x7

#define ptr(x) ((void*)((x)&~TAG_PTR))
#define tag(x) ((x) & TAG_MASK)

extern struct GC gc;
void gcInit(struct GC* gc, uintptr_t* mark);
void* gcAlloc(struct GC* gc, int size);

void writeBarrier(uintptr_t *slot, uintptr_t val);
void gcMark(struct GC *gc, uintptr_t head);
void gcInuseSizeInc(struct GC *gc, int size);

typedef void (*gcFunc)(struct GC *gc, void* from);
bool gcRegistForType(uint8_t type, gcFunc fn);

extern struct GC gc;

#endif
