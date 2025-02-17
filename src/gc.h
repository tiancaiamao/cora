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
  scmHeadBytes,
  scmHeadVector,
  scmHeadNative,
  scmHeadContinuation,

  scmHeadMax,
};

typedef uint8_t version_t;

typedef struct {
  uint32_t size;
  scmHeadType type;
  version_t version;
} scmHead;

#define TAG_SHIFT 3
#define TAG_MASK 0x7
#define TAG_PTR 0x7

#define ptr(x) ((void*)((x)&~TAG_PTR))
#define tag(x) ((x) & TAG_MASK)

void gcInit(uintptr_t* mark);
struct GC *getGC();

void* gcAlloc(struct GC* gc, int size);

int versionCmp(int v1, int v2);
void writeBarrier(struct GC *gc, uintptr_t *slot, uintptr_t val);
scmHead* gcMark(struct GC *gc, uintptr_t head);
scmHead* gcMarkAndEnsure(struct GC *gc, uintptr_t head, version_t minv);

typedef void (*gcFunc)(struct GC *gc, void* from);
bool gcRegistForType(uint8_t type, gcFunc fn);

#endif
