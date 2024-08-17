#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stddef.h>
#include <assert.h>
#include "gc.h"

const int MEM_BLOCK_SIZE = 4 * 1024;

struct Block {
  struct Block *next;
  struct Block *prev;
  char data[];
};

static struct Block *
blockNew() {
  struct Block *b = malloc(MEM_BLOCK_SIZE);
  b->next = NULL;
  b->prev = NULL;
  scmHead* h = (scmHead*)b->data;
  h->type = 0; // scmHeadUnused
  h->size = (char*)b + MEM_BLOCK_SIZE - b->data;
  return b;
}

/* static void */
/* blockReset(struct Block *block) { */
/*   /\* printf("reset data in rage [%p, %p]\n", block, (char*)block + MEM_BLOCK_SIZE); *\/ */
/*   // For easy debug ... not really a MUST */
/*   memset(block, 0, MEM_BLOCK_SIZE); */
/*   free(block); */
/* } */

static bool
blockContains(struct Block *block, void *p) {
  return p>= (void*)block->data && p < (void*)block + MEM_BLOCK_SIZE;
}

#define alignto(p, bits)      (((p) >> bits) << bits)
#define aligntonext(p, bits)  alignto(((p) + (1 << bits) - 1), bits)

struct GC {
  void* baseStackAddr;
  struct Block *head;
  struct Block *tail;

  // currBlock + currOffset determines the allocat position.
  struct Block *currBlock;
  int currOffset;

  // TODO: implement a freelist
  void* freeList[5];

  // Initially, allocate objects version=0
  // For every round of GC, the version++
  // gc mark make the inuse object version+1, while dead object version keep unchanged
  // If an object's version < gc version, it's garbage and sweep lazily
  int version;
  int nextSize;
};

void
gcInit(struct GC *gc, void *baseStackAddr) {
  gc->baseStackAddr = baseStackAddr;
  struct Block *b = blockNew();
  gc->head = b;
  gc->tail = b;

  gc->currBlock = b;
  gc->currOffset = 0;
  gc->version = 0;
  gc->nextSize = MEM_BLOCK_SIZE;
}

static struct Block*
gcContains(struct GC *gc, void *p) {
  struct Block *b = gc->head;
  while (b != NULL) {
    if (blockContains(b, p)) {
      return b;
    }
    b = b->next;
  }
  return NULL;
}

static scmHead*
moveToNextBlock(struct GC *gc) {
  gc->currBlock = gc->currBlock->next;
  // all blocks exhausted?
  if (gc->currBlock == NULL) {
    struct Block *b = blockNew();
    b->prev = gc->tail;
    gc->tail->next = b;
    gc->tail = b;
    gc->currBlock = gc->tail;
  }
  gc->currOffset = 0;
  return (scmHead*)&gc->currBlock->data[gc->currOffset];
}

static scmHead*
moveToFirstUnused(struct GC *gc) {
  scmHead *head = (void*)(gc->currBlock->data + gc->currOffset);
  while(head->version == gc->version && head->type != 0) {
    gc->currOffset += head->size;
    head = (void*)&gc->currBlock->data[gc->currOffset];
    // The next block.
    if ((char*)head >= (char*)gc->currBlock + MEM_BLOCK_SIZE) {
      head = moveToNextBlock(gc);
    }
  }
  return head;
}

void*
gcAlloc(struct GC *gc, int size) {
  size = aligntonext(size, TAG_SHIFT);

  assert(size > sizeof(scmHead));
  assert(size < MEM_BLOCK_SIZE);
  // TODO: try allocate from freelist first.

  scmHead* head = moveToFirstUnused(gc);
  // merge adjacent object until the unused size is greater than required.
  while(head->size < size) {
    scmHead *next = (scmHead*)((char*)head + head->size);
    if ((char*)next >= (char*)gc->currBlock + MEM_BLOCK_SIZE) {
      moveToNextBlock(gc);
      head = moveToFirstUnused(gc);
      continue;
    }
    if (next->version == gc->version && next->type != 0) {
      // Meet inuse object, fragments cause allocation fail.
      assert(false);
      break;
    }
    head->size += next->size;
  }
  
  // now alloc from this unused obj.
  if (head->size > size) {
    int remain = head->size - size;
    scmHead* tmp = (void*)head + size;
    tmp->size = remain;
    tmp->type = 0;
    tmp->version = gc->version;

    gc->currOffset = (char*)head - gc->currBlock->data;
    head->size = size;
  }
  // not mandatory to move to the next unused obj, let the next alloc operation handle it.
  head->version = gc->version;
  return head;
}

/* static void */
/* gcUnlinkBlock(struct GC *gc, struct Block *b) { */
/*   if (b->prev != NULL) { */
/*     b->prev->next = b->next; */
/*   } */
/*   if (b->next != NULL) { */
/*     b->next->prev = b->prev; */
/*   } */

/*   // b is special, like head or tail, update the gc's link. */
/*   if (gc->head == b) { */
/*     gc->head = b->next; */
/*   } */
/*   if (gc->tail == b) { */
/*     gc->tail = b->next; */
/*   } */

/*   // unlink b */
/*   b->prev = NULL; */
/*   b->next = NULL; */
/* } */

/* static void */
/* gcLinkBlock(struct GC *gc, struct Block *b) { */
/*   if (gc->tail == NULL) { */
/*     assert(gc->head == NULL); */
/*     gc->head = b; */
/*     gc->tail = b; */
/*     return; */
/*   } */

/*   gc->tail->next = b; */
/*   b->prev = gc->tail; */
/*   b->next = NULL; */
/*   gc->tail = b; */
/*   return; */
/* } */

/* static void */
/* gcReset(struct GC *gc) { */
/*   while (gc->head != NULL) { */
/*     struct Block *p = gc->head; */
/*     gc->head = p->next; */
/*     blockReset(p); */
/*   } */
/*   gc->tail = NULL; */
/* } */

/* static int */
/* gcSize(struct GC *gc) { */
/*   int size = 0; */
/*   struct Block *b = gc->head; */
/*   while (b != NULL) { */
/*     size += b->offset; */
/*     b = b->next; */
/*   } */
/*   return size; */
/* } */

struct GC gc;

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

uintptr_t
gcCopy(struct GC *gc, uintptr_t p) {
}
/*   // p is not gc alloced, skip it. */
/*   // This magic number kinda dirty, see types.h */
/*   if ((p&0x3) != 0x3) { */
/*     return p; */
/*   } */

/*   if (areaContains(gc->curr, ptr(p)) == NULL) { */
/*     return p; */
/*   } */

/*   scmHead *from = ptr(p); */
/*   if (from->forwarding != 0) { */
/*     return from->forwarding; */
/*   } */
/*   assert(from->size > 0); */
/*   assert(from->type <= 6); */

/*   // Copy the data of itself to the new place. */
/*   struct GC *area = gcGetNextArea(gc); */
/*   void* to = areaAlloc(area, from->size); */
/*   memcpy(to, from, from->size); */
/*   from->forwarding = (uintptr_t)to | tag(p); */

/*   /\* printf("gcCopy from %p to %p ==%ld, sz=%d tp=%d\n", from, to, p, from->size, from->type); *\/ */

/*   return from->forwarding; */
/* } */

/* static void */
/* gcStack(struct GC* gc, uintptr_t* start, uintptr_t* end) { */
/*   /\* printf("gcStack -- start %p end %p\n", start, end); *\/ */
/*   assert(start < end); */
/*   assert(((uintptr_t)start & 0x7) == 0); */
/*   assert(((uintptr_t)end & 0x7) == 0); */

/*   for (uintptr_t *p = start; p<end; p++) { */
/*     uintptr_t stackValue = *p; */
/*     // mostly copying!! */
/*     gcCopyBlock(gc, stackValue); */
/*   } */
/* } */

extern void gcGlobal(struct GC *gc);

void
gcRun(struct GC *gc) {
  /* void* stackAddr = &stackAddr; */
  /* // Dump registers onto stack and scan the stack. */
  /* jmp_buf ctx; */
  /* memset(&ctx, 0, sizeof(jmp_buf)); */
  /* setjmp(ctx); */

  /* // enqueue the root. */
  /* /\* gcStack(gc, stackAddr, baseStackAddr); *\/ */
  /* /\* gcGlobal(gc); *\/ */

  /* // breadth first. */
  /* struct GC *area = gcGetNextArea(gc); */
  /* struct Block *curr = area->head; */
  /* while(curr != NULL) { */
  /*   int currOffset = 0; */
  /*   while (currOffset < curr->offset) { */
  /*     scmHead *head = (scmHead*)&curr->data[currOffset]; */
  /*     gcFunc copyChildren = registry[head->type]; */
  /*     if (copyChildren != NULL) { */
  /* 	copyChildren(gc, head); */
  /* 	/\* printf("gcCopy handle %p ==%ld, sz=%d tp=%d\n", head, head, head->size, head->type); *\/ */
  /*     } */
  /*     currOffset += head->size; */
  /*   } */
  /*   curr = curr->next; // Note, it's in reverse order from tail to head */
  /* } */

  /* areaReset(gc->curr); */
  /* gc->curr = gcGetNextArea(gc); */

  /* int sz2 = areaSize(gc->curr); */
  /* /\* printf("after run gc, current size = %d, after gc = %d\n", sz1, sz2); *\/ */
  /* gc->nextSize = 2 * sz2; */
  /* if (gc->nextSize < MEM_BLOCK_SIZE) { */
  /*   // Because a block is at least that size, GC smaller then this is meanless. */
  /*   gc->nextSize = MEM_BLOCK_SIZE; */
  /* } */

}
