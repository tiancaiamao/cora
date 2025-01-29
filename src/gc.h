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

typedef struct _version {
  uint8_t val;
}version_t;

typedef struct {
  uint32_t size;
  scmHeadType type;
  version_t version;
} scmHead;

static version_t
versionAdd(version_t ver, int val) {
  int tmp = ((int)(ver.val) + val) % 4;
  version_t ret = { .val = (uint8_t)tmp};
  return ret;
}

static version_t
versionSub(version_t ver, int val) {
  int tmp = ((int)(ver.val) + 4 - val) % 4;
  version_t ret = { .val = (uint8_t)tmp};
  return ret;
}

static bool
versionEQ(version_t v1, version_t v2) {
  return v1.val == v2.val;
}

#define TAG_SHIFT 3
#define TAG_MASK 0x7
#define TAG_PTR 0x7

#define ptr(x) ((void*)((x)&~TAG_PTR))
#define tag(x) ((x) & TAG_MASK)

struct GC;

void gcInit(uintptr_t* mark);
struct GC *getGC();

void* gcAlloc(struct GC* gc, int size);

void writeBarrier(struct GC *gc, uintptr_t *slot, uintptr_t val);
void gcMark(struct GC *gc, uintptr_t head);
void gcInuseSizeInc(struct GC *gc, int size);

typedef void (*gcFunc)(struct GC *gc, void* from);
bool gcRegistForType(uint8_t type, gcFunc fn);

#endif
