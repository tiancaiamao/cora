#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stddef.h>
#include <assert.h>
#include "gc.h"

const int MEM_BLOCK_SIZE = 4*1024*1024;

struct Block {
  int offset;
  char *data;
};

static void
blockInit(struct Block *block) {
  block->data = malloc(MEM_BLOCK_SIZE);
  block->offset = 0;
}

static void
blockReset(struct Block *block) {
  free(block->data);
  block->offset = 0;
}

static bool
blockContains(struct Block *block, void *p) {
  if (p < (void*)block->data || p >= (void*)&block->data[block->offset]) {
    return false;
  }
  return true;
}

#define alignto(p, bits)      (((p) >> bits) << bits)
#define aligntonext(p, bits)  alignto(((p) + (1 << bits) - 1), bits)

static scmHead*
blockAlloc(struct Block *block, int size) {
  if (block->offset + size > MEM_BLOCK_SIZE) {
    return NULL;
  }
  size = aligntonext(size, TAG_SHIFT);
  scmHead *head = (void*)&block->data[block->offset];
  head->size = size;
  head->forwarding = 0;
  block->offset += size;
  return head;
}

struct Area {
  struct Block *blocks;
  int len;
  int cap;
};

static void
areaInit(struct Area *area) {
  area->len = 0;
  area->cap = 8;
  area->blocks = malloc(sizeof(struct Block) * area->cap);
}

static bool
areaContains(struct Area *area, void *p) {
  for (int i=0; i<area->len; i++) {
    struct Block *b = &area->blocks[i];
    if (blockContains(b, p)) {
      return true;
    }
  }
  return false;
}

static scmHead*
areaAlloc(struct Area *area, int size) {
  assert(size > sizeof(scmHead));
  // Lazy initialize the first block.
  if (area->len == 0) {
    area->len = 1;
    blockInit(&area->blocks[0]);
  }

  struct Block *curr = &area->blocks[area->len - 1];
  scmHead *res = blockAlloc(curr, size);
  if (res != NULL) {
    return res;
  }

  if (area->len == area->cap) {
    struct Block *tmp = malloc(sizeof(struct Block) * area->cap * 2);
    memcpy(tmp, area->blocks, sizeof(struct Block) * area->len);
    free(area->blocks);
    area->blocks = tmp;
  }
  curr = &area->blocks[area->len];
  blockInit(curr);
  area->len++;

  return areaAlloc(area, size);
}

static void
areaReset(struct Area *area) {
  for (int i=0; i<area->len; i++) {
    struct Block *b = &area->blocks[i];
    blockReset(b);
  }
  area->len = 0;
}

static int
areaSize(struct Area *area) {
  int size = 0;
  for (int i=0; i<area->len - 1; i++) {
    size += MEM_BLOCK_SIZE;
  }
  if (area->len > 0) {
    struct Block *b = &area->blocks[area->len - 1];
    size += b->offset;
  }
  return size;
}

struct GC {
  struct Area area1;
  struct Area area2;
  struct Area *curr;
  int nextSize;
};

struct GC gc;

void* baseStackAddr = NULL;

void
gcInit(struct GC *gc) {
  void* dummy;
  baseStackAddr = &dummy;
  areaInit(&gc->area1);
  areaInit(&gc->area2);
  gc->curr = &gc->area1;
  gc->nextSize = MEM_BLOCK_SIZE;
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

  areaReset(gc->curr);
  gc->curr = gcGetNextArea(gc);
}

void*
gcAlloc(struct GC* gc, int size) {
  int sz1 = areaSize(gc->curr);
  if (sz1 >= gc->nextSize) {
    gcRun(gc);
    int sz2 = areaSize(gc->curr);
    /* printf("run gc, current size = %d, after gc = %d\n", sz1, sz2); */
    gc->nextSize = 2 * sz2;
    if (gc->nextSize < MEM_BLOCK_SIZE) {
      // Because a block is at least that size, GC smaller then this is meanless.
      gc->nextSize = MEM_BLOCK_SIZE;
    }
  }
  return areaAlloc(gc->curr, size);
}
