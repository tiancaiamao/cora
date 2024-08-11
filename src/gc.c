#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stddef.h>
#include <assert.h>
#include "gc.h"

const int MEM_BLOCK_SIZE = 1024;

struct Block {
  int offset;
  struct Block *next;
  struct Block *prev;
  char data[];
};

static struct Block *
blockNew() {
  struct Block *b = malloc(MEM_BLOCK_SIZE);
  b->offset = 0;
  b->next = NULL;
  b->prev = NULL;
  return b;
}

static void
blockReset(struct Block *block) {
  /* printf("reset data in rage [%p, %p]\n", block, (char*)block + MEM_BLOCK_SIZE); */
  // For easy debug ... not really a MUST
  memset(block, 0, MEM_BLOCK_SIZE);
  free(block);
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
  assert(size < MEM_BLOCK_SIZE);
  if (block->data + block->offset + size > (char*)block + MEM_BLOCK_SIZE) {
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
  struct Block *head;
  struct Block *tail;
};

static void
areaInit(struct Area *area) {
  area->head = NULL;
  area->tail = NULL;
}

static bool
areaContains(struct Area *area, void *p) {
  struct Block *b = area->head;
  while (b != NULL) {
    if (blockContains(b, p)) {
      return true;
    }
    b = b->next;
  }
  return false;
}

static scmHead*
areaAlloc(struct Area *area, int size) {
  assert(size > sizeof(scmHead));
  // Lazy initialize the first block.
  if (area->tail == NULL) {
    struct Block *b = blockNew();
    area->head = b;
    area->tail = b;
  }

  struct Block *curr = area->tail;
  scmHead *res = blockAlloc(curr, size);
  if (res != NULL) {
    return res;
  }

  struct Block *tmp = blockNew();
  if (tmp == NULL) {
    abort();
  }

  /* printf("new block === [%p,  %p]\n", tmp, (char*)tmp + MEM_BLOCK_SIZE); */

  // Insert the new block to head.
  curr->next = tmp;
  tmp->prev = curr;
  area->tail = tmp;
  return areaAlloc(area, size);
}

static void
areaReset(struct Area *area) {
  while (area->head != NULL) {
    struct Block *p = area->head;
    area->head = p->next;
    blockReset(p);
  }
  area->tail = NULL;
}

static int
areaSize(struct Area *area) {
  int size = 0;
  struct Block *b = area->head;
  while (b != NULL) {
    size += b->offset;
    b = b->next;
  }
  return size;
}

struct GC {
  struct Area area1;
  struct Area area2;
  struct Area *curr;
  int nextSize;
  bool flag;
};

struct GC gc;

void* baseStackAddr = NULL;

void
gcInit(struct GC *gc, void *dummy) {
  baseStackAddr = dummy;
  areaInit(&gc->area1);
  areaInit(&gc->area2);
  gc->curr = &gc->area1;
  gc->nextSize = MEM_BLOCK_SIZE;
  gc->flag = false;
}

static gcFunc registry[256] = {};

bool
gcRegistForType(uint8_t idx, gcFunc fn) {
  assert(idx < 256);
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
  // p is not gc alloced, skip it.
  // This magic number kinda dirty, see types.h
  if ((p&0x3) != 0x3) {
    return p;
  }

  if (!areaContains(gc->curr, ptr(p))) {
    return p;
  }

  scmHead *from = ptr(p);
  if (from->forwarding != 0) {
    return from->forwarding;
  }
  assert(from->size > 0);
  assert(from->type <= 6);

  // Copy the data of itself to the new place.
  struct Area *area = gcGetNextArea(gc);
  void* to = areaAlloc(area, from->size);
  memcpy(to, from, from->size);
  from->forwarding = (uintptr_t)to | tag(p);

  /* printf("gcCopy from %p to %p ==%ld, sz=%d tp=%d\n", from, to, p, from->size, from->type); */

  return from->forwarding;
}

static void
gcStack(struct GC* gc, uintptr_t* start, uintptr_t* end) {
  /* printf("gcStack -- start %p end %p\n", start, end); */
  assert(start < end);
  assert(((uintptr_t)start & 0x7) == 0);
  assert(((uintptr_t)end & 0x7) == 0);

  for (uintptr_t *p = start; p<end; p++) {
    uintptr_t stackValue = *p;
    if (areaContains(gc->curr, ptr(stackValue))) {
      *p = gcCopy(gc, stackValue);
      /* printf("gcStack update == %p end %ld\n", p, *p); */
    } else {
      /* printf("gcStack skip == %p\n", p); */
    }
  }
}

extern void gcGlobal(struct GC *gc);

void
gcRun(struct GC *gc) {
  int sz1 = areaSize(gc->curr);

  void* stackAddr = &stackAddr;
  // Dump registers onto stack and scan the stack.
  jmp_buf ctx;
  memset(&ctx, 0, sizeof(jmp_buf));
  setjmp(ctx);

  // enqueue the root.
  gcStack(gc, stackAddr, baseStackAddr);
  gcGlobal(gc);

  // breadth first.
  struct Area *area = gcGetNextArea(gc);
  struct Block *curr = area->head;
  while(curr != NULL) {
    int currOffset = 0;
    while (currOffset < curr->offset) {
      scmHead *head = (scmHead*)&curr->data[currOffset];
      gcFunc copyChildren = registry[head->type];
      if (copyChildren != NULL) {
	copyChildren(gc, head);
	/* printf("gcCopy handle %p ==%ld, sz=%d tp=%d\n", head, head, head->size, head->type); */
      }
      currOffset += head->size;
    }
    curr = curr->next; // Note, it's in reverse order from tail to head
  }

  areaReset(gc->curr);
  gc->curr = gcGetNextArea(gc);

  int sz2 = areaSize(gc->curr);
  /* printf("after run gc, current size = %d, after gc = %d\n", sz1, sz2); */
  gc->nextSize = 2 * sz2;
  if (gc->nextSize < MEM_BLOCK_SIZE) {
    // Because a block is at least that size, GC smaller then this is meanless.
    gc->nextSize = MEM_BLOCK_SIZE;
  }

  gc->flag = false;
}


bool
gcCheck(struct GC* gc) {
  return gc->flag;
}

void*
gcAlloc(struct GC* gc, int size) {
  int sz1 = areaSize(gc->curr);
  if (sz1 >= gc->nextSize) {
    gc->flag = true;
  }
  return areaAlloc(gc->curr, size);
}
