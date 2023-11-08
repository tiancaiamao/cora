#ifndef _GC_H
#define _GC_H

#include <stdbool.h>
#include <stdint.h>

// The GC algorithm is inspired by the paper <The Treadmill: Real-Time Garbage Collection Without Motion Sickness>
// The basic idea is the same -- like the "tricolor marking" and the "in-place garbage collection".
// The "treadmill optimization" is not adopted, white/gray/black/ecru four lists are used, instead of making them cyclic.
// See also http://www.cofault.com/2022/07/treadmill.html

#define TAG_PTR 0x7

#define ptr(x) ((void*)((x)&~TAG_PTR))

struct GC;

typedef uint8_t scmHeadType;

typedef struct _scmHead {
  scmHeadType type;
  struct _scmHead* prev;
  struct _scmHead* next;
  uint16_t size;
  uint8_t color;
} scmHead;

extern struct GC *g;

typedef void (*gcFunc)(struct GC* gc, void *obj);

#define GC_REGISTRY_MAX 256

struct Allocator;
struct GC {
  void* baseStackAddr;

  void *allocator;
  void* (*allocFn)(struct Allocator* allocator, int sz);
  void (*recycleFn)(struct Allocator* allocator, void *ptr);
  bool (*managed)(struct Allocator *allocator, void *ptr);

  // color is the color of ecru list.
  uint8_t color;

  // state change:
  /* | stage |                   | gray     | black    | white    | ecru     | comment                                         | */
  /* |-------|-------------------|----------|----------|----------|----------|-------------------------------------------------| */
  /* | 0     | Init              | NULL     | NULL     |          | Not NULL | ecru list means to be Scanned                   | */
  /* | 1     | GCing             | Not NULL |          |          |          | gray list means to be GCed                      | */
  /* | 2     | GC finish         | NULL     | Not NULL |          |          | all reachable become black, no gray anymore     | */
  /* | 2     | Before next round | NULL     | Not NULL | NULL     |          | when white list is used up, prepare the flip    | */
  /* | 0     | Post GC flip      | NULL     | NULL     | Not NULL | Not NULL | black become ecru and ecru become the new white | */
  //
  // stage0 = !gray && !black
  // stage1 = gray
  // stage2 = !gray && black
  //
  // In stage 1, read barrier should be set.
  // In stage 2, alloc object become black directly?
  scmHead white;
  scmHead ecru;
  scmHead gray;
  scmHead black;

  gcFunc registry[GC_REGISTRY_MAX];

  /* bool disable; */
  int count;
  int nextGC;
};

struct GC* gcInit();

void gcMark(struct GC *gc, scmHead *obj);
bool gcRegistForType(struct GC *gc, uint8_t type, gcFunc fn);

bool gcIng(struct GC *gc);

struct VM;
scmHead* gcAlloc(struct GC *gc, struct VM *vm, int pos, int sz);
/* void gcMarkRoot(struct GC *gc, scmHead *obj); */
bool gcStep(struct GC *gc, int n);

/* void gcDisable(struct GC *gc); */
/* void gcEnable(struct GC *gc); */

void gcFull(struct GC *gc, struct VM *vm, int pos);
void postGCFlip(struct GC *gc);


void printGC(struct GC *gc);

#endif
