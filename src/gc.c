#include <sys/mman.h>
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
const int HEAP_ARENA_SIZE = 64 * 1024 * 1024;
/* const int BLOCKS_PER_HEAP = HEAP_ARENA_SIZE / MEM_BLOCK_SIZE; */

// each heapArena maintains 64MB virtual memory (mmap from OS)
// Block are allocated from and recycle to heapArena.
struct heapArena {
  char *ptr;
  struct heapArena *next;

  // bitmap are used to combine contiguous blocks.
  // currently not used???
  /* char bitmap[BLOCKS_PER_HEAP / 8]; */

  // freelist is used for recycling and fast allocation.
  struct Block *freelist;
  // idx record the current (max) position of the allocated blocks.
  // when idx == (HEAP_ARENA_SIZE / MEM_BLOCK_SIZE) and freelist is empty,
  // this heapArena is full.
  int idx;
};

// each Block is 4K and cora object is allocated from it.
struct Block {
  struct Block *next;
  struct Block *prev;
  // block is allocated from it, so it should be recycle to it when reset.
  struct heapArena *ha;
  char data[];
};

static struct heapArena*
heapArenaNew() {
  struct heapArena *ha = malloc(sizeof(struct heapArena));
  ha->next = NULL;
  ha->ptr = mmap(0, HEAP_ARENA_SIZE, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
  /* printf("mmap return ptr ====== %p\n", ha->ptr); */
  ha->freelist = NULL;
  ha->idx = 0;
  return ha;
}

static bool
heapArenaFull(struct heapArena* ha) {
  return ha->freelist == NULL && ha->idx == (HEAP_ARENA_SIZE / MEM_BLOCK_SIZE);
}

static struct Block*
heapArenaAlloc(struct heapArena *h) {
  struct Block *b = h->freelist;
  if (h->freelist != NULL) {
    h->freelist = b->next;
    b->next = NULL;
    b->ha = h;
    return b;
  }
  b = (struct Block*)(h->ptr + h->idx * MEM_BLOCK_SIZE);
  b->ha = h;
  h->idx++;

  /* printf("allocate new block, current idx==%d\n", h->idx); */

  return b;
}

static bool
heapArenaContains(struct heapArena* h, void *p) {
  return p>= (void*)h->ptr && p < (void*)h->ptr + (h->idx * MEM_BLOCK_SIZE);
}

#define alignto(p, bits)      (((p) >> bits) << bits)
#define aligntonext(p, bits)  alignto(((p) + (1 << bits) - 1), bits)

#define FREE_LIST_SLOTS 6

struct doubleLinkList {
  struct Block *head;
  struct Block *tail;
};

// The type of scmFreeNode should be scmHeadUnused.
struct scmFreeNode {
  scmHead head;
  struct scmFreeNode *next;
};

struct GC {
  struct heapArena *heap;

  enum gcState state;
  uintptr_t* baseStackAddr;
  // The blocks list for allocation.
  struct doubleLinkList data;
  // currBlock + currOffset determines the allocat position.
  struct Block *currBlock;
  int currOffset;

  // implement a freelist
  // 24, 32, 40, 48, 56, 64
  struct scmFreeNode* freeList[FREE_LIST_SLOTS];

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

static struct heapArena*
gcGetHeapArena(struct GC *gc) {
  if (gc->heap == NULL || heapArenaFull(gc->heap)) {
    struct heapArena* ha = heapArenaNew();
    ha->next = gc->heap;
    gc->heap = ha;
  }
  return gc->heap;
}

static struct Block *
blockNew(struct GC *gc) {
  struct heapArena *ha = gcGetHeapArena(gc);
  struct Block *b = heapArenaAlloc(ha);

  b->next = NULL;
  b->prev = NULL;
  scmHead* h = (scmHead*)b->data;
  h->type = 0; // scmHeadUnused
  h->size = (char*)b + MEM_BLOCK_SIZE - b->data;
  return b;
}

static void
blockReset(struct Block *block) {
  struct heapArena *ha = block->ha;
  // For easy debug ... not really a MUST
  memset(block, 0, MEM_BLOCK_SIZE);
  if (ha->freelist == NULL) {
    ha->freelist = block;
  } else {
    block->next = ha->freelist->next;
    ha->freelist->next = block;
  }
}

void
gcInit(struct GC *gc, uintptr_t *baseStackAddr) {
  gc->heap = NULL;
  gc->state = gcStateNone;
  gc->baseStackAddr = baseStackAddr;
  struct Block *b = blockNew(gc);
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

  memset(gc->freeList, 0, FREE_LIST_SLOTS*sizeof(struct FreeNode*));
}

static bool
gcContains(struct GC *gc, void *p) {
  struct heapArena *h = gc->heap;
  while (h != NULL) {
    if (heapArenaContains(h, p)) {
      return true;
    }
    h = h->next;
  }
  return false;
}

static scmHead*
moveToNextBlock(struct GC *gc) {
  gc->currBlock = gc->currBlock->next;
  // all blocks exhausted?
  if (gc->currBlock == NULL) {
    struct Block *b = blockNew(gc);
    b->prev = gc->data.tail;
    gc->data.tail->next = b;
    gc->data.tail = b;
    gc->currBlock = gc->data.tail;
    /* printf("all blocks exhaused, allocate a new one ---%d %d\n", gc->allocated, gc->state); */
  }
  gc->currOffset = 0;
  return (scmHead*)&gc->currBlock->data[gc->currOffset];
}

static bool
inuse(struct GC *gc, scmHead *h) {
  // h is an unused obj
  if (h->type == 0) {
    return false;
  }
  if (gc->state == gcStateIncremental) {
    // gc.version +2 already, and object.version is laggy
    // when h is in this round of mark phase, it should not be recycled.
    // for example:
    //    gc.version == 6
    //    object.version == 4 white
    //    object.version == 5 gray
    //    object.version == 6 black
    return (h->version+2) >= gc->version;
  }

  // gcStateNone or gcStateMark
  // only white should exist.
  assert((h->version & 1) == 0);
  return h->version == gc->version;
}

static scmHead*
moveToFirstUnused(struct GC *gc) {
  scmHead *head = (void*)(gc->currBlock->data + gc->currOffset);
  while(true) {
    if ((char*)head >= (char*)gc->currBlock + MEM_BLOCK_SIZE) {
      head = moveToNextBlock(gc);
    }
    if (!inuse(gc, head)) {
      break;
    }
    gc->currOffset += head->size;
    head = (void*)&gc->currBlock->data[gc->currOffset];
  }
  return head;
}

static void*
gcAllocReturn(struct GC *gc, scmHead *head) {
  head->version = gc->version;
  gc->allocated += head->size;
  // should trigger the next round of GC.
  if (gc->allocated > gc->nextSize && gc->state == gcStateNone) {
    gc->state = gcStateMark;
  }
  /* printf("gcAlloc== %p size=%d version=%d\n", head, head->size, gc->version); */
  return head;
}

void*
gcAlloc(struct GC *gc, int size) {
  size = aligntonext(size, TAG_SHIFT);
  assert(size > sizeof(scmHead));
  assert(size < MEM_BLOCK_SIZE);

  // try allocate from freelist first.
  int slot = ((size+7) / 8) - 3;
  if (slot >= 0 && slot < FREE_LIST_SLOTS && gc->freeList[slot] != NULL) {
    struct scmFreeNode* ret = gc->freeList[slot];
    gc->freeList[slot] = ret->next;
    /* printf("alloc from freelist[%d] --- size=%d %p\n", slot, ret->head.size, ret); */
    return gcAllocReturn(gc, &ret->head);
  }

  // merge adjacent object until the unused size is greater than required.
  scmHead* head = moveToFirstUnused(gc);
  assert(head->size > 0);
  while(head->size < size) {
    scmHead *next = (scmHead*)((char*)head + head->size);
    if ((char*)next >= (char*)gc->currBlock + MEM_BLOCK_SIZE) {
      moveToNextBlock(gc);
      head = moveToFirstUnused(gc);
      continue;
    }
    assert(next->size > 0);

    if (inuse(gc, next)) {
      assert(head->size % 8 == 0);
      slot = (head->size / 8) - 3;
      if (slot >= 0 && slot < FREE_LIST_SLOTS) {
	/* printf("recycle freelist[%d] -- size=%d %p\n", slot, head->size, head); */
	struct scmFreeNode* tmp = (struct scmFreeNode*)head;
	tmp->next = gc->freeList[slot];
	gc->freeList[slot] = tmp;
      }

      /* printf("skip and waste mem == %d\n", head->size); */
      // Meet inuse object, fragments cause allocation fail.
      gc->currOffset = (char*)next + next->size - gc->currBlock->data;
      head = moveToFirstUnused(gc);
      continue;
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
  // not mandatory to move to the next unused obj, let the next alloc operation handle it.

  if (head->type != 0) {
    assert(head->version+1 < gc->version);
  }

  return gcAllocReturn(gc, head);
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
  struct Block *b = blockNew(gc);
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
    b = blockNew(gc);
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
    blockReset(gc->gray.head);
    gc->start = 0;
    gc->gray.head = b;
    if (b == NULL) {
      return NULL;
    }
  }
  if (b == gc->gray.tail && gc->start >= gc->end) {
    blockReset(b);
    gc->gray.head = NULL;
    gc->gray.tail = NULL;
    gc->start = 0;
    gc->end = 0;
    return NULL;
  }
  scmHead* ret = *((scmHead**)&b->data[gc->start]);
  gc->start += sizeof(scmHead*);
  return ret;
}

bool
checkPointer(struct GC *gc, uintptr_t p) {
  // p is not gc alloced, skip it.
  // This magic number kinda dirty, see types.h
  if ((p&0x7) != 0x7) {
    return false;
  }

  // not gc allocated
  if (!gcContains(gc, ptr(p))) {
    return false;
  }

  // black or gray object
  scmHead *from = ptr(p);
  if (from->version == gc->version || from->version+1 == gc->version) {
    return false;
  }

  if (from->type >=1 && from->type <= 7) {
    return true;
  }

  // Not a cora Object?
  printf("WARNING: some thing is wrong when checkPointer? %p {type=%d, size=%d, version=%d}\n",
	 from, from->type, from->size, from->version);
  return false;
}

void
gcMark(struct GC *gc, uintptr_t p) {
  if (checkPointer(gc, p)) {
    gcEnqueue(gc, ptr(p));
  }
}

#if defined(__clang__) || defined (__GNUC__)
# define ATTRIBUTE_NO_SANITIZE_ADDRESS __attribute__((no_sanitize_address))
#else
# define ATTRIBUTE_NO_SANITIZE_ADDRESS
#endif


ATTRIBUTE_NO_SANITIZE_ADDRESS
static void
gcStack(struct GC* gc) {
  uintptr_t* stackAddr = (uintptr_t*)&stackAddr;
  /* printf("gcStack -- start %p end %p\n", gc->baseStackAddr, stackAddr); */

  // Dump registers onto stack and scan the stack.
  jmp_buf ctx;
  memset(&ctx, 0, sizeof(jmp_buf));
  setjmp(ctx);
  assert(stackAddr < gc->baseStackAddr);
  assert(((uintptr_t)stackAddr & 0x7) == 0);
  assert(((uintptr_t)gc->baseStackAddr & 0x7) == 0);

  for (uintptr_t *p = stackAddr; p<(uintptr_t*)gc->baseStackAddr; p++) {
    /* printf("handling -- %p\n", p); */
    uintptr_t stackValue = *p;
    gcMark(gc, stackValue);
  }
}

extern void gcGlobal(struct GC *gc);

static void
gcRunMark(struct GC *gc) {

  /* printf("gcRun called ====, before and after:%d %d\n", gc->version, gc->version+2); */
  gc->version+=2;

  gc->allocated = 0;
  gc->inuseSize = 0;
  gcQueueInit(gc);
  // enqueue the root.
  gcStack(gc);
  gcGlobal(gc);

  gc->state = gcStateIncremental;
}

static void
gcRunIncremental(struct GC *gc) {
  int N = 100;
  // breadth first.
  scmHead *curr = gcDequeue(gc);
  while(curr != NULL) {
    gcFunc fn = registry[curr->type];
    if (fn != NULL) {
      assert(curr->version +1 == gc->version);
      fn(gc, curr);
      /* printf("gcMark handle %p ==%ld, sz=%d tp=%d version=%d\n", curr, curr, curr->size, curr->type, curr->version); */
    }
    N--;
    if (N == 0) {
      return;
    }
    curr = gcDequeue(gc);
  }

  /* printf("run gc, before size = %d, inuse size = %d, incremental size=%d\n", gc->nextSize, gc->inuseSize, gc->allocated); */
  gc->nextSize = 2 * gc->inuseSize + gc->allocated;
  if (gc->nextSize < MEM_BLOCK_SIZE) {
    // Because a block is at least that size, GC smaller then this is meanless.
    gc->nextSize = MEM_BLOCK_SIZE;
  }
  gc->state = gcStateNone;
  memset(gc->freeList, 0, FREE_LIST_SLOTS*sizeof(struct FreeNode*));
  gc->currBlock = gc->data.head;
  gc->currOffset = 0;
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
    break;
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

void
writeBarrier(uintptr_t *slot, uintptr_t val) {
  // Yuasa-style deletion barrier
  if (gc.state == gcStateIncremental) {
    uintptr_t old = *slot;
    gcMark(&gc, old);
  }
  *slot = val;
}
