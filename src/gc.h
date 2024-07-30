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

#define TAG_SHIFT 3
#define TAG_MASK 0x7
#define TAG_PTR 0x7

#define ptr(x) ((void*)((x)&~TAG_PTR))
#define tag(x) ((x) & TAG_MASK)

extern struct GC gc;
void gcInit(struct GC* gc, void* mark);
uintptr_t gcCopy(struct GC *gc, uintptr_t head);
void* gcAlloc(struct GC* gc, int size);

typedef void (*gcFunc)(struct GC *gc, void* from, void* to);
bool gcRegistForType(uint8_t type, gcFunc fn);

#endif
