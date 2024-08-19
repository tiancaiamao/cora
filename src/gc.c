#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stddef.h>
#include <assert.h>
#include "gc.h"

enum gcState {
  gcStateNone = 0,
  gcStateMark,
  gcStateIncremental,
};

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

static void
blockReset(struct Block *block) {
  // For easy debug ... not really a MUST
  memset(block, 0, MEM_BLOCK_SIZE);
  free(block);
}

static bool
blockContains(struct Block *block, void *p) {
  return p>= (void*)block->data && p < (void*)block + MEM_BLOCK_SIZE;
}

#define alignto(p, bits)      (((p) >> bits) << bits)
#define aligntonext(p, bits)  alignto(((p) + (1 << bits) - 1), bits)

struct doubleLinkList {
  struct Block *head;
  struct Block *tail;
};

struct GC {
  enum gcState state;
  void* baseStackAddr;
  // The blocks list for allocation.
  struct doubleLinkList data;
  // currBlock + currOffset determines the allocat position.
  struct Block *currBlock;
  int currOffset;

  // TODO: implement a freelist
  void* freeList[5];

  // Initially, allocate objects version=0
  // For every round of GC, the version+=2
  // gc mark white->gray version+1, gray->black version+1
  // while dead object version keep unchanged
  // If an object's version < gc version, it's garbage and sweeped lazily
  int version;

  // the GC queue, all objects in this queue are gray.
  struct doubleLinkList gray;
  int start;
  int end;

  int allocated;
  int nextSize;
  // inuseSize is calculated in each GC mark round.
  int inuseSize;
};

void
gcInit(struct GC *gc, void *baseStackAddr) {
  gc->state = gcStateNone;
  gc->baseStackAddr = baseStackAddr;
  struct Block *b = blockNew();
  gc->data.head = b;
  gc->data.tail = b;

  gc->currBlock = b;
  gc->currOffset = 0;
  gc->version = 0;
  gc->nextSize = MEM_BLOCK_SIZE;

  gc->gray.head = NULL;
  gc->gray.tail = NULL;
  gc->start = 0;
  gc->end = 0;

  gc->nextSize = MEM_BLOCK_SIZE;
  gc->allocated = 0;
  gc->inuseSize = 0;
}

static struct Block*
gcContains(struct GC *gc, void *p) {
  struct Block *b = gc->data.head;
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
    b->prev = gc->data.tail;
    gc->data.tail->next = b;
    gc->data.tail = b;
    gc->currBlock = gc->data.tail;
  }
  gc->currOffset = 0;
  return (scmHead*)&gc->currBlock->data[gc->currOffset];
}

static bool
inuse(struct GC *gc, scmHead *h) {
  // h is gray or black
  // and h is not an unused obj
  return (h->version+1) >= gc->version && h->type != 0;
}

static scmHead*
moveToFirstUnused(struct GC *gc) {
  scmHead *head = (void*)(gc->currBlock->data + gc->currOffset);
  while(inuse(gc, head)) {
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
    if (inuse(gc, next)) {
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
    tmp->version = 0;

    gc->currOffset = (char*)head - gc->currBlock->data;
    head->size = size;
  }

  if (head->type != 0) {
    assert(head->version+1 < gc->version);
  }

  // not mandatory to move to the next unused obj, let the next alloc operation handle it.
  head->version = gc->version;
  gc->allocated += size;
  // should trigger the next round of GC.
  if (gc->allocated > gc->nextSize) {
    gc->state = gcStateMark;
  }

  /* printf("gcAlloc== %p size=%d version=%d\n", head, head->size, gc->version); */
  return head;
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

struct GC gc;

static void
gcQueueInit(struct GC *gc) {
  struct Block *b = blockNew();
  gc->gray.head = b;
  gc->gray.tail = b;
  gc->start = 0;
  gc->end = 0;
}

static void
gcEnqueue(struct GC *gc, scmHead* p) {
  assert(p->version +2 == gc->version);

  struct Block *b = gc->gray.tail;
  if (&b->data[gc->end + sizeof(scmHead*)] > ((char*)b + MEM_BLOCK_SIZE)) {
    b = blockNew();
    b->prev = gc->gray.tail;
    gc->gray.tail->next = b;
    gc->gray.tail = b;
    gc->end = 0;
  }
  /* printf("gcEnqueue --%p %d %d %d\n", p, p->size, p->type, p->version); */
  p->version++;
  *((scmHead**)(b->data+gc->end)) = p;
  gc->end += sizeof(scmHead*);
}

static scmHead*
gcDequeue(struct GC *gc) {
  struct Block *b = gc->gray.head;
  if (b->data + gc->start >= (char*)b + MEM_BLOCK_SIZE) {
    b = b->next;
    if (b == NULL) {
      return NULL;
    } else {
      blockReset(gc->gray.head);
      gc->gray.head = b;
      gc->start = 0;
    }
  }
  scmHead* ret = *((scmHead**)&b->data[gc->start]);
  gc->start += sizeof(scmHead*);
  return ret;
}

bool
checkPointer(struct GC *gc, uintptr_t p) {
  // p is not gc alloced, skip it.
  // This magic number kinda dirty, see types.h
  if ((p&0x3) != 0x3) {
    return false;
  }

  // not gc allocated
  if (gcContains(gc, ptr(p)) == NULL) {
    return false;
  }

  // black or gray object
  scmHead *from = ptr(p);
  if (from->version == gc->version || from->version+1 == gc->version) {
    return false;
  }
  assert(from->size > 0);
  assert(from->type <= 7);
  return true;
}

void
gcMark(struct GC *gc, uintptr_t p) {
  if (checkPointer(gc, p)) {
    gcEnqueue(gc, ptr(p));
  }
}

static void
gcStack(struct GC* gc, uintptr_t* start) {
  /* printf("gcStack -- start %p end %p\n", start, end); */
  assert(start < (uintptr_t*)gc->baseStackAddr);
  assert(((uintptr_t)start & 0x7) == 0);
  assert(((uintptr_t)gc->baseStackAddr & 0x7) == 0);

  for (uintptr_t *p = start; p<(uintptr_t*)gc->baseStackAddr; p++) {
    uintptr_t stackValue = *p;
    gcMark(gc, stackValue);
  }
}

extern void gcGlobal(struct GC *gc);

static void
gcRunMark(struct GC *gc) {
  void* stackAddr = &stackAddr;
  // Dump registers onto stack and scan the stack.
  jmp_buf ctx;
  memset(&ctx, 0, sizeof(jmp_buf));
  setjmp(ctx);

  /* printf("gcRun called ====, before and after:%d %d\n", gc->version, gc->version+1); */
  gc->version+=2;

  gc->allocated = 0;
  gc->inuseSize = 0;
  gcQueueInit(gc);
  // enqueue the root.
  gcStack(gc, stackAddr);
  gcGlobal(gc);

  gc->state = gcStateIncremental;
}

static void
gcRunIncremental(struct GC *gc) {
  // breadth first.
  scmHead *curr = gcDequeue(gc);
  while(curr != NULL) {
    gcFunc fn = registry[curr->type];
    if (fn != NULL) {
      assert(curr->version +1 == gc->version);
      fn(gc, curr);
      /* printf("gcMark handle %p ==%ld, sz=%d tp=%d version=%d\n", curr, curr, curr->size, curr->type, curr->version); */
    }
    curr = gcDequeue(gc);
  }

  /* int sz2 = areaSize(gc->curr); */
  /* printf("after run gc, current size = %d, after gc = %d\n", gc->nextSize, gc->inuseSize); */
  gc->nextSize = 2 * gc->inuseSize;
  if (gc->nextSize < MEM_BLOCK_SIZE) {
    // Because a block is at least that size, GC smaller then this is meanless.
    gc->nextSize = MEM_BLOCK_SIZE;
  }
  gc->state = gcStateNone;
}

void
gcRun(struct GC *gc) {
  switch (gc->state) {
  case gcStateNone:
    assert(false);
  case gcStateMark:
    gcRunMark(gc);
    break;
  case gcStateIncremental:
    gcRunIncremental(gc);
  }
}

bool
gcCheck(struct GC* gc) {
  return gc->state != gcStateNone;
}

void
gcInuseSizeInc(struct GC *gc, int size) {
  gc->inuseSize += size;
}
