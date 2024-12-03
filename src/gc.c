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

#define MEM_BLOCK_SIZE (4 * 1024)
#define HEAP_ARENA_SIZE (64 * 1024 * 1024)
#define BLOCKS_PER_HEAP (HEAP_ARENA_SIZE / MEM_BLOCK_SIZE)

// each Block is 4K and cora objects are allocated from it.
struct Block {
	// The size class this block is responsible for.
	// size class 0 is special and used for GC gray objects temporary queue.
	int sizeClass;
	// Current position for allocation, offset in bytes.
	int curr;

	// block is allocated from it, so it should be recycle to it when reset.
	struct heapArena *ha;
	// The base address of this Block can be calculated from ha->ptr[block_idx]
	char *base;

	// Link the block into sizeClass freelist.
	struct Block *next;
	struct Block *prev;
};

// each heapArena maintains 64MB virtual memory (mmap from OS)
// Block are allocated from and recycle to heapArena.
struct heapArena {
	char *ptr;		// The start address of this virtual memory
	struct heapArena *next;

	struct Block blocks[BLOCKS_PER_HEAP];

	// freelist is used for recycling and fast allocation.
	struct Block *freelist;

	// idx record the current (max) position of the allocated blocks.
	// when idx == (HEAP_ARENA_SIZE / MEM_BLOCK_SIZE) and freelist is empty,
	// this heapArena is full.
	int idx;
};

static struct heapArena *
heapArenaNew() {
	struct heapArena *ha = malloc(sizeof(struct heapArena));
	ha->next = NULL;
	ha->ptr =
		mmap(0, HEAP_ARENA_SIZE, PROT_READ | PROT_WRITE,
		     MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
	/* printf("mmap return ptr ====== %p\n", ha->ptr); */
	ha->freelist = NULL;
	ha->idx = 0;
	return ha;
}

static bool
heapArenaFull(struct heapArena *ha) {
	return ha->freelist == NULL
		&& ha->idx == (HEAP_ARENA_SIZE / MEM_BLOCK_SIZE);
}

static struct Block *
heapArenaAlloc(struct heapArena *h) {
	struct Block *b = h->freelist;
	if (h->freelist != NULL) {
		h->freelist = b->next;
		b->next = NULL;
		b->ha = h;
		return b;
	}
	b = &h->blocks[h->idx];
	b->ha = h;
	b->base = (h->ptr + h->idx * MEM_BLOCK_SIZE);
	b->sizeClass = 0;
	b->curr = 0;
	b->next = NULL;
	b->prev = NULL;
	h->idx++;

	/* printf("allocate new block, current idx==%d\n", h->idx); */
	return b;
}

static bool
heapArenaContains(struct heapArena *h, void *p) {
	return p >= (void *) h->ptr
		&& p < (void *) h->ptr + (h->idx * MEM_BLOCK_SIZE);
}

struct doubleLinkList {
	struct Block *head;
	struct Block *tail;
};

// The type of scmFreeNode should be scmHeadUnused.
struct scmFreeNode {
	scmHead head;
	struct scmFreeNode *next;
};

static int sizeClass[] =
	{ 0, 16, 24, 32, 40, 48, 56, 64, 96, 128, 192, 256, 384, 512, 768,
	1024,
	1536, 2048, MEM_BLOCK_SIZE
};

#define sizeClassSZ (sizeof(sizeClass) / sizeof(int))
static int smallSizeClassIdx[] =
	{ 0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10,
	10, 10,
	10, 10
};

static int largeSizeClassIdx[] =
	{ -1, -1, 9, 10, 11, 12, 12, 13, 13, 14, 14, 14, 14, 15, 15, 15, 15,
	16, 16,
	16, 16, 16, 16, 16, 16, 17, 17, 17, 17, 17, 17, 17, 17, 18, 18, 18,
	18, 18,
	18, 18, 18, 18, 18, 18, 18,
	18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
	18, 18,
	18, 18, 18, 18, 18
};

static int
getSlotBySize(int size) {
	int slot;
	if (size < 128) {
		int sizeDiv8 = ((size + 7) / 8);
		slot = smallSizeClassIdx[sizeDiv8];
	} else {
		int sizeDiv64 = ((size + 63) / 64);
		slot = largeSizeClassIdx[sizeDiv64];
	}
//              assert(sizeClass[slot] >= size);
//              if (slot > 0) {
//                              assert(sizeClass[slot-1] < size);
//              }
	return slot;
}

struct GC {
	enum gcState state;
	uintptr_t *baseStackAddr;
	struct heapArena *heap;

	// Each Block can be belongs to one size class. After Block initialization,
	// all objects allocated from that specific Block are with the same size.
	struct Block *sizeClass[sizeClassSZ];

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

static struct heapArena *
gcGetHeapArena(struct GC *gc) {
	if (gc->heap == NULL || heapArenaFull(gc->heap)) {
		struct heapArena *ha = heapArenaNew();
		ha->next = gc->heap;
		gc->heap = ha;
	}
	return gc->heap;
}

// The block allocated by blockNew is not initialized, it could be used
// for allocating GC object or be used as GC gray queue.
static struct Block *
blockNew(struct GC *gc) {
	struct heapArena *ha = gcGetHeapArena(gc);
	struct Block *b = heapArenaAlloc(ha);
	return b;
}

static void
blockReset(struct Block *block) {
	assert(block->sizeClass == 0);
	assert(block->curr == 0);
	struct heapArena *ha = block->ha;
	memset(block->base, 0, MEM_BLOCK_SIZE);
	block->next = NULL;
	block->prev = NULL;
	if (ha->freelist == NULL) {
		ha->freelist = block;
	} else {
		block->next = ha->freelist->next;
		ha->freelist->next = block;
	}
}

__thread struct GC *threadLocalGC;

void
gcInit(uintptr_t * baseStackAddr) {
	struct GC *gc = malloc(sizeof(struct GC));
	gc->heap = NULL;
	gc->state = gcStateNone;
	gc->baseStackAddr = baseStackAddr;
	// the first version start from 2 so uninitialized block can be treat the same
	// as the garbage.
	gc->version = 2;

	gc->gray.head = NULL;
	gc->gray.tail = NULL;
	gc->start = 0;
	gc->end = 0;

	gc->nextSize = MEM_BLOCK_SIZE;
	gc->allocated = 0;
	gc->inuseSize = 0;

	for (int i = 0; i < sizeClassSZ; i++) {
		gc->sizeClass[i] = NULL;
	}

	threadLocalGC = gc;
}

struct GC *
getGC() {
	return threadLocalGC;
}

static struct heapArena *
gcContains(struct GC *gc, void *p) {
	struct heapArena *h = gc->heap;
	while (h != NULL) {
		if (heapArenaContains(h, p)) {
			return h;
		}
		h = h->next;
	}
	return NULL;
}

static bool
inuse(struct GC *gc, scmHead * h) {
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
		return (h->version + 2) >= gc->version;
	}
	// gcStateNone or gcStateMark
	// only white should exist.
	assert((h->version & 1) == 0);
	return h->version == gc->version;
}

static void gcRun(struct GC *gc);

static struct Block *
getBlock(struct GC *gc, int slot) {
	struct Block *block = gc->sizeClass[slot];
	if (block == NULL) {
		block = blockNew(gc);
		block->sizeClass = sizeClass[slot];
		gc->sizeClass[slot] = block;
	}
	return block;
}

static scmHead *
blockAlloc(struct GC *gc, struct Block *block) {
	while (block->curr + block->sizeClass <= MEM_BLOCK_SIZE) {
		scmHead *p = (scmHead *) (block->base + block->curr);
		block->curr += block->sizeClass;
		// skip the inuse object
		if (!inuse(gc, p)) {
			return p;
		}
	}
	return NULL;
}

void *
gcAlloc(struct GC *gc, int size) {
	if (gc->state != gcStateNone) {
		gcRun(gc);
	}

	assert(size > sizeof(scmHead));
	assert(size < MEM_BLOCK_SIZE);

	// calculate the size class for the allocation.
	int slot = getSlotBySize(size);

	scmHead *ret = NULL;
	while (true) {
		struct Block *b = getBlock(gc, slot);
		ret = blockAlloc(gc, b);
		if (ret != NULL) {
			assert(ret->version < gc->version);
			break;
		}
		// Remove full block from the sizeClass list, wait GC to recycle them
		gc->sizeClass[slot] = b->next;
		b->prev = NULL;
		b->next = NULL;
		b->curr = 0;
	}

	ret->size = size;
	ret->version = gc->version;
	gc->allocated += size;
	// should trigger the next round of GC.
	if (gc->allocated > gc->nextSize && gc->state == gcStateNone) {
		gc->state = gcStateMark;
	}
	/* printf("gcAlloc== %p size=%d version=%d\n", head, head->size, gc->version); */
	return ret;
}


static gcFunc registry[256] = { };

bool
gcRegistForType(uint8_t idx, gcFunc fn) {
	if (registry[idx] != NULL) {
		return false;
	}
	registry[idx] = fn;
	return true;
}

static void
gcQueueInit(struct GC *gc) {
	struct Block *b = blockNew(gc);
	gc->gray.head = b;
	gc->gray.tail = b;
	gc->start = 0;
	gc->end = 0;
}

static void
gcEnqueue(struct GC *gc, scmHead * p) {
	struct Block *b = gc->gray.tail;
	if (gc->end + sizeof(scmHead *) > MEM_BLOCK_SIZE) {
		b = blockNew(gc);
		b->prev = gc->gray.tail;
		gc->gray.tail->next = b;
		gc->gray.tail = b;
		gc->end = 0;
	}
	// printf("gcEnqueue --%p %d %d %d\n", p, p->size, p->type, p->version);
	p->version++;
	*((scmHead **) (b->base + gc->end)) = p;
	gc->end += sizeof(scmHead *);
}

static scmHead *
gcDequeue(struct GC *gc) {
	struct Block *b = gc->gray.head;
	if (gc->start >= MEM_BLOCK_SIZE) {
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
	scmHead *ret = *((scmHead **) & b->base[gc->start]);
	gc->start += sizeof(scmHead *);
	return ret;
}

bool
checkPointer(struct GC *gc, uintptr_t p) {
	// p is not gc alloced, skip it.
	// This magic number kinda dirty, see types.h
	if ((p & 0x7) != 0x7) {
		return false;
	}
	// not gc allocated
	void *addr = ptr(p);
	struct heapArena *h = gcContains(gc, addr);
	if (h == NULL) {
		return false;
	}
	// get the block by the address.
	// The ptr address might not be aligned.
	int idx = ((char *) addr - h->ptr) / MEM_BLOCK_SIZE;
	struct Block *b = &h->blocks[idx];

	// Special block?
	if (b->sizeClass == 0) {
		return false;
	}

	int pos = ((char *) addr - b->base) / b->sizeClass;
	assert(pos >= 0);
	scmHead *from = (scmHead *) (b->base + (pos * b->sizeClass));
	if (from != addr) {
		printf("WARNING: the ptr %p is inside scmHead object! {type=%d, size=%d, version=%d}\n", (void *) p, from->type, from->size, from->version);
	}
	// black or gray object
	if (from->version == gc->version || from->version + 1 == gc->version) {
		return false;
	}
	// stale object? it should have been sweeped, but we defer the sweep lazily
	if (from->version + 2 < gc->version) {
		return false;
	}

	if (from->type > scmHeadUnused && from->type < scmHeadMax) {
		return true;
	}
	// Not a cora Object?
	printf("WARNING: some thing is wrong when checkPointer? %p {type=%d, size=%d, version=%d}\n", from, from->type, from->size, from->version);
	return false;
}

void
gcMark(struct GC *gc, uintptr_t p) {
	if (checkPointer(gc, p)) {
		gcEnqueue(gc, ptr(p));
	}
}

#if defined(__clang__) || defined (__GNUC__)
#define ATTRIBUTE_NO_SANITIZE_ADDRESS __attribute__((no_sanitize_address))
#else
#define ATTRIBUTE_NO_SANITIZE_ADDRESS
#endif


ATTRIBUTE_NO_SANITIZE_ADDRESS static void
gcStack(struct GC *gc) {
	uintptr_t *stackAddr = (uintptr_t *) & stackAddr;
	// printf("gcStack -- start %p end %p\n", gc->baseStackAddr, stackAddr);

	// Dump registers onto stack and scan the stack.
	jmp_buf ctx;
	memset(&ctx, 0, sizeof(jmp_buf));
	setjmp(ctx);
	assert(stackAddr < gc->baseStackAddr);
	assert(((uintptr_t) stackAddr & 0x7) == 0);
	assert(((uintptr_t) gc->baseStackAddr & 0x7) == 0);

	for (uintptr_t * p = stackAddr; p < (uintptr_t *) gc->baseStackAddr;
	     p++) {
		uintptr_t stackValue = *p;
		// printf("handling -- %p = %ld\n", p, stackValue);
		gcMark(gc, stackValue);
	}
}

extern void gcGlobal(struct GC *gc);

static void
gcRunMark(struct GC *gc) {
	// printf("gcRun called ====, before and after:%d %d\n", gc->version, gc->version+2);
	gc->version += 2;

	gc->allocated = 0;
	gc->inuseSize = 0;
	gcQueueInit(gc);
	// enqueue the root.
	gcGlobal(gc);
	gcStack(gc);

	gc->state = gcStateIncremental;
}

static void
gcDoneAndReset(struct GC *gc) {
	// Reset blocks for re-allocation
	for (int i = 0; i < sizeClassSZ; i++) {
		struct Block *b = gc->sizeClass[i];
		gc->sizeClass[i] = NULL;
		if (b != NULL) {
			b->curr = 0;
			b->prev = NULL;
			b->next = NULL;
		}
	}
	for (struct heapArena * h = gc->heap; h != NULL; h = h->next) {
		for (int i = 0; i < h->idx; i++) {
			struct Block *b = &h->blocks[i];
			if (b->sizeClass == 0) {
				// Skip the freelist blocks which is generated by GC gray queue.
				continue;
			}
			int slot = getSlotBySize(b->sizeClass);
			assert(b->sizeClass == sizeClass[slot]);
			b->next = gc->sizeClass[slot];
			gc->sizeClass[slot] = b;
		}
	}
}

static void
gcRunIncremental(struct GC *gc) {
	int N = 20;
	// breadth first.
	scmHead *curr = gcDequeue(gc);
	while (curr != NULL) {
		gcFunc fn = registry[curr->type];
		if (fn != NULL) {
			assert(curr->version + 1 == gc->version);
			fn(gc, curr);
			/* printf("gcMark handle %p ==%ld, sz=%d tp=%d version=%d\n", curr, curr, curr->size, curr->type, curr->version); */
		}
		N--;
		if (N == 0) {
			return;
		}
		curr = gcDequeue(gc);
	}

//              printf("run gc, before size = %d, inuse size = %d, incremental size=%d\n", gc->nextSize, gc->inuseSize, gc->allocated);
	gc->nextSize = 2 * gc->inuseSize + gc->allocated;
	if (gc->nextSize < MEM_BLOCK_SIZE) {
		// Because a block is at least that size, GC smaller then this is meanless.
		gc->nextSize = MEM_BLOCK_SIZE;
	}
	gc->state = gcStateNone;
	gcDoneAndReset(gc);
}

static void
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

void
gcInuseSizeInc(struct GC *gc, int size) {
	gc->inuseSize += size;
}

void
writeBarrier(struct GC *gc, uintptr_t * slot, uintptr_t val) {
	// Yuasa-style deletion barrier
	if (gc->state == gcStateIncremental) {
		uintptr_t old = *slot;
		gcMark(gc, old);
	}
	*slot = val;
}
