#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <stddef.h>
#include <assert.h>
#include "gc.h"

const int MEM_BLOCK_SIZE = 40*1024*1024;

struct Area {
  int offset;
  char *data;
};

struct GC {
  struct Area area1;
  struct Area area2;
  struct Area *curr;
};

struct GC gc;

static void
areaInit(struct Area *area) {
  area->data = malloc(MEM_BLOCK_SIZE);
  area->offset = 0;
}

void* baseStackAddr = NULL;

void
gcInit(struct GC *gc) {
  void* dummy;
  baseStackAddr = &dummy;
  areaInit(&gc->area1);
  areaInit(&gc->area2);
  gc->curr = &gc->area1;
}

static gcFunc registry[256] = {};

bool
gcRegistForType(uint8_t idx, gcFunc fn) {
  if (registry[idx] != NULL) {
    return false;
  }
  registry[idx] = fn;
  return true;
}

static bool
areaContains(struct Area *area, void *p) {
  if (p < (void*)area->data || p >= (void*)&area->data[area->offset]) {
    return false;
  }
  return true;
}

static bool
gcAlloced(struct GC* gc, uintptr_t i) {
  if (tag(i) != TAG_PTR && tag(i) != TAG_CONS) {
    return false;
  }
  void *p = ptr(i);
  if (areaContains(&gc->area1, p)) {
    return true;
  }
  if (areaContains(&gc->area2, p)) {
    return true;
  }
  return false;
}

#define alignto(p, bits)      (((p) >> bits) << bits)
#define aligntonext(p, bits)  alignto(((p) + (1 << bits) - 1), bits)

static scmHead*
areaAlloc(struct Area *area, int size) {
  assert(size > sizeof(scmHead));
  if (area->offset + size > MEM_BLOCK_SIZE) {
    // TODO:
    return NULL;
  }
  size = aligntonext(size, TAG_SHIFT);
  scmHead *head = (void*)&area->data[area->offset];
  head->size = size;
  head->forwarding = 0;
  area->offset += size;
  return head;
}

static struct Area*
gcGetNextArea(struct GC *gc) {
  struct Area *area;
  if (gc->curr == &gc->area1) {
    area = &gc->area2;
  } else {
    area = &gc->area1;
  }
  return area;
}

uintptr_t
gcCopy(struct GC *gc, uintptr_t p) {
  if (!areaContains(gc->curr, ptr(p))) {
    return p;
  }

  scmHead *from = ptr(p);
  if (from->forwarding != 0) {
    return from->forwarding;
  }

  // Copy the data of itself to the new place.
  struct Area *area = gcGetNextArea(gc);
  void* to = areaAlloc(area, from->size);
  memcpy(to, from, from->size);
  from->forwarding = (uintptr_t)to | tag(p);

  // Copy the children to the new place.
  // And update the reference of the new object.
  gcFunc copyChildren = registry[from->type];
  if (copyChildren != NULL) {
    copyChildren(gc, from, to);
  }

  return from->forwarding;
}

static void
gcStack(struct GC* gc, uintptr_t* from, uintptr_t* to) {
  assert(from < to);
  assert(((uintptr_t)from & 0x7) == 0);
  assert(((uintptr_t)to & 0x7) == 0);

  for (uintptr_t *p = from; p<to; p++) {
    uintptr_t stackValue = *p;
    if (areaContains(gc->curr, ptr(stackValue))) {
      *p = gcCopy(gc, stackValue);
    }
  }
}

extern void gcGlobal(struct GC *gc);

static void
gcRun(struct GC *gc) {
  void* stackAddr = &stackAddr;

  // Dump registers onto stack and scan the stack.
  jmp_buf ctx;
  memset(&ctx, 0, sizeof(jmp_buf));
  setjmp(ctx);
  gcStack(gc, stackAddr, baseStackAddr);
  gcGlobal(gc);

  gc->curr->offset = 0;
  gc->curr = gcGetNextArea(gc);
}

void*
gcAlloc(struct GC* gc, int size) {
  if (gc->curr->offset >= 1 * 1024 * 1024) {
    gcRun(gc);
  }
  return areaAlloc(gc->curr, size);
}
