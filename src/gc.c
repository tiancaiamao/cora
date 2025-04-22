#include <sys/mman.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stddef.h>
#include <assert.h>
#include <inttypes.h>
#include "gc.h"
#include "trace.h"

enum gcState {
	gcStateNone = 0,
	gcStateMark,
	gcStateIncremental,
	gcStateSweep,
};

#define MEM_BLOCK_SIZE (4 * 1024)
#define HEAP_ARENA_SIZE (64 * 1024 * 1024)
#define BLOCKS_PER_HEAP (HEAP_ARENA_SIZE / MEM_BLOCK_SIZE)

// each Block is 4K and cora objects are allocated from it.
struct Block {
	// The size class this block is responsible for.
	// **size class 0 is special**, used for GC gray objects temporary queue.
	// Or unused blocks in the freelist.
	int sizeClass;
	// Current position for allocation, offset in bytes.
	int curr;

	// block is allocated from it, so it should be recycle to it when reset.
	struct heapArena *ha;
	// The base address of this Block can be calculated from ha->ptr[block_idx]
	char *base;

	// Link the block into sizeClass or freelist.
	// Or point to the scmHead for large objects.
	struct Block *next;

	// If a block is never touched after a round of GC,
	// then it's safe to put it to freelist.
	int touch;
};

// each heapArena maintains 64MB virtual memory (mmap from OS)
// Block are allocated from and recycle to heapArena.
struct heapArena {
	char *ptr;		// The start address of this virtual memory
	struct heapArena *next;

	// idx record the current (max) position of the allocated blocks.
	// when idx == (HEAP_ARENA_SIZE / MEM_BLOCK_SIZE) and freelist is empty,
	// this heapArena is full.
	int idx;

	struct Block blocks[BLOCKS_PER_HEAP];

	bool forLargeObjects;
	// curr is used when this heapArena is for large objects.
	int curr;

};

static struct heapArena *
heapArenaNew() {
	TRACE_SCOPE("heapArenaNew");
	struct heapArena *ha = malloc(sizeof(struct heapArena));
	ha->next = NULL;
	ha->ptr =
		mmap(0, HEAP_ARENA_SIZE, PROT_READ | PROT_WRITE,
		     MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
	/* printf("mmap return ptr ====== %p\n", ha->ptr); */
	ha->idx = 0;
	ha->curr = 0;
	ha->forLargeObjects = false;
	return ha;
}

static bool
heapArenaFull(struct heapArena *ha) {
	return ha->idx >= BLOCKS_PER_HEAP;
}

static struct Block *
heapArenaAlloc(struct heapArena *h) {
	struct Block *b = &h->blocks[h->idx];
	b->ha = h;
	b->base = h->ptr + h->idx * MEM_BLOCK_SIZE;
	b->sizeClass = 0;
	b->curr = 0;
	b->next = NULL;
	b->touch = false;
	h->idx++;
	return b;
}

static bool
heapArenaContains(struct heapArena *h, void *p) {
	return p >= (void *) h->ptr &&
		p < (void *) h->ptr + (h->idx * MEM_BLOCK_SIZE);
}

struct doubleLinkList {
	struct Block *head;
	struct Block *tail;
};

// The type of scmFreeNode should be scmHeadUnused.
// It is used by large object allocation.
struct scmFreeNode {
	scmHead head;
	int slots;
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

static int mediumSizeClassIdx[] =
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
	int *idxArray = (size < 128) ? smallSizeClassIdx : mediumSizeClassIdx;
	int sizeDiv = (size < 128) ? (size + 7) / 8 : (size + 63) / 64;
	return idxArray[sizeDiv];
}

struct runDoneProgress {
	int sizeClassPos;
	struct Block *b;
	struct heapArena *ha;
};

#define VERSION_BITS 6
#define VERSION_MASK ((1 << VERSION_BITS) - 1)
#define HALF_VERSION (1 << (VERSION_BITS - 1))

static int
versionCmp(int v1, int v2) {
	assert(v1 < (1 << VERSION_BITS));
	assert(v2 < (1 << VERSION_BITS));

	int diff = v2 - v1;
	if (diff == 0)
		return 0;

	if (diff > -HALF_VERSION && diff < HALF_VERSION) {
		return (diff > 0) ? -1 : 1;
	}
	return (diff > 0) ? 1 : -1;
}

struct GCStats {
	size_t allocated;
	size_t nextSize;
	// markSize is calculated in each GC mark round.
	size_t markSize;
	int markCount;
	int markSkip;

	// After introducing generational GC, the inuse size in not accurate enough.
	size_t youngGenSize;
	size_t middleGenSize;
	size_t oldGenSize;

	size_t avgAllocated;
	size_t prevTrigger;
};

static void
gcStatsReset(struct GCStats *stats) {
	stats->allocated = 0;
	stats->markSize = 0;
	stats->markCount = 0;
	stats->markSkip = 0;
}

struct GC {
	enum gcState state;
	uintptr_t *baseStackAddr;

	// Small objects are allocated from sizeClass blocks.
	// Each Block can be belongs to one size class. After Block initialization,
	// all objects allocated from that specific Block are with the same size.
	struct Block *sizeClass[sizeClassSZ];
	struct heapArena *heap;

	struct Block *freelist;

	// Large objects are allocated directly from heapArena;
	// This is a list of heapArena and if one heapArena is full, it's moved to heap.
	struct heapArena *large;

	// Initially, allocate objects version=0
	// For every round of GC, the version++,
	// while dead object version keep unchanged
	// If an object's version < gc version, it's garbage and sweeped lazily
	uint64_t version;

	// the GC queue, all objects in this queue are gray.
	struct doubleLinkList gray;
	int start;
	int end;

	// Save the current progress of gcRunSweep state.
	struct runDoneProgress progress;

	struct GCStats stats;

	// remember set for generationGC.
	scmHeadEx *rset;
};

static void
gcInuseSizeInc(struct GC *gc, int size) {
	assert(size > 0);
	gc->stats.markSize += size;
	gc->stats.markCount++;
}

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
	TRACE_SCOPE("blockNew");
	struct heapArena *ha = gcGetHeapArena(gc);
	struct Block *b = heapArenaAlloc(ha);
	return b;
}

static void
blockReset(struct GC *gc, struct Block *block) {
	assert(block->sizeClass == 0);
	assert(block->curr == 0);

	memset(block->base, 0, MEM_BLOCK_SIZE);

	// Insert at the head of freelist
	block->next = gc->freelist;
	gc->freelist = block;
}

__thread struct GC *threadLocalGC;

void
gcInit(uintptr_t *baseStackAddr) {
	assert(((uintptr_t) baseStackAddr & 0x7) == 0);

	struct GC *gc = malloc(sizeof(struct GC));
	if (gc == NULL) {
		// Handle memory allocation failure
		return;
	}

	gc->heap = NULL;
	gc->large = NULL;
	gc->state = gcStateNone;
	gc->baseStackAddr = baseStackAddr;
	gc->version = 2;	// Start from 2, so uninitialized blocks can be treated as garbage
	gc->rset = NULL;
	gc->freelist = NULL;

	gc->gray.head = NULL;
	gc->gray.tail = NULL;
	gc->start = 0;
	gc->end = 0;

	gc->stats.nextSize = MEM_BLOCK_SIZE;
	gc->stats.youngGenSize = 0;
	gc->stats.middleGenSize = 0;
	gc->stats.oldGenSize = 0;
	gc->stats.avgAllocated = 0;
	gc->stats.prevTrigger = 0;
	gcStatsReset(&gc->stats);

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

	h = gc->large;
	while (h != NULL) {
		if (heapArenaContains(h, p)) {
			return h;
		}
		h = h->next;
	}
	return NULL;
}

// return 0 if not in use
// return 1 when gc->version == h->version
// return 2 when gc->version > h->version
static int
inuse(struct GC *gc, scmHead *h) {
	if (h->type == scmHeadUnused) {
		return 0;
	}
	int cmp = versionCmp(gc->version & VERSION_MASK, h->version & VERSION_MASK);
	if (cmp > 0) {
		return 0;
	}
	if (cmp == 0) {
		return 1;
	}
	return 2;
}


static void gcRun(struct GC *gc);

static struct Block*
getBlock(struct GC *gc, int slot) {
	struct Block *block = gc->sizeClass[slot];
	if (block != NULL) {
		assert(slot != 0);
		return block;
	}

	if (gc->freelist != NULL) {
		// Take from free list.
		block = gc->freelist;
		gc->freelist = gc->freelist->next;
		block->next = NULL;
		assert(block->sizeClass == 0);
		assert(block->curr == 0);
		assert(block->touch == false);
	} else {
		block = blockNew(gc);
	}

	// Put to sizeClass list.
	if (slot > 0) {
		block->sizeClass = sizeClass[slot];
		gc->sizeClass[slot] = block;
	}
	return block;
}

// Helper function to check if GC should be triggered
static bool
shouldTriggerGC(struct GC *gc) {
	return gc->stats.allocated > gc->stats.nextSize &&
		gc->state == gcStateNone;
}

// Used in allocDone
static void
allocDone(struct GC *gc, int size, scmHead *ret) {
	ret->size = size;
	ret->version =
		(gc->state ==
		 gcStateNone) ? (gc->version & VERSION_MASK) : ((gc->version +
								 2) &
								VERSION_MASK);

	gc->stats.allocated += size;

	// Check if we need to trigger a new round of GC
	if (shouldTriggerGC(gc)) {
		gc->state = gcStateMark;
	}
}

static int
getLargeObjSlots(scmHead *n) {
	if (n->type == scmHeadUnused) {
		return ((struct scmFreeNode *) n)->slots;
	}
	return (n->size + MEM_BLOCK_SIZE - 1) / MEM_BLOCK_SIZE;
}

static void
updateLargeObjectMeta(struct heapArena *ha, int start, int slots, scmHead *h) {
	for (int i = 0; i < slots; i++) {
		struct Block *b = &ha->blocks[start + i];
		b->base = (char *) h;
	}
}

scmHead *
heapArenaAllocLarge(struct heapArena *ha, struct GC *gc, int slots) {
	while (ha->curr + slots <= BLOCKS_PER_HEAP) {
		// printf("allocate from %p, curr=%d, slots=%d\n", ha, ha->curr, slots);
		// The simple case.
		if (ha->curr == ha->idx) {
			if (ha->curr + slots >= BLOCKS_PER_HEAP) {
				return NULL;
			}
			// printf("allocate from uninitialized ==%d\n", ha->curr);
			struct scmFreeNode *n =
				(struct scmFreeNode *) (ha->ptr +
							(ha->curr *
							 MEM_BLOCK_SIZE));
			n->head.type = scmHeadUnused;
			n->slots = slots;
			updateLargeObjectMeta(ha, ha->curr, slots, &n->head);
			ha->curr += slots;
			ha->idx += slots;
			return &n->head;
		}
		// Find the first available object
		scmHead *n =
			(scmHead *) (ha->ptr + (ha->curr * MEM_BLOCK_SIZE));
		if (inuse(gc, n)) {
			// skip this object and move num blocks forward.
			int skip =
				(n->size + MEM_BLOCK_SIZE -
				 1) / MEM_BLOCK_SIZE;
			ha->curr += skip;
			continue;
		}

		int slots1 = getLargeObjSlots(n);
		// printf("first available object at == %d slots=%d\n", ha->curr, slots1);
		assert(slots1 > 0);
		while (slots1 < slots) {
			// Grow the unused space.
			if (ha->curr + slots1 == ha->idx) {
				ha->idx = ha->curr + slots;
				n->type = scmHeadUnused;
				((struct scmFreeNode *) n)->slots = slots;
				updateLargeObjectMeta(ha, ha->curr + slots1,
						      slots - slots1, n);
				slots1 = slots;
				break;
			}
			// Try to merge n with the adjacent one 
			scmHead *next =
				(scmHead *) (ha->ptr +
					     ((ha->curr +
					       slots1) * MEM_BLOCK_SIZE));
			if (inuse(gc, next)) {
				break;
			}
			int slots2 = getLargeObjSlots(next);
			// printf("merge with next, slots ==%d\n", slots2);
			assert(slots2 > 0);
			for (int i = 0; i < slots2; i++) {
				struct Block *b =
					&ha->blocks[ha->curr + slots1 + i];
				assert(b->base == (char *) next);
			}

			n->type = scmHeadUnused;
			updateLargeObjectMeta(ha, ha->curr + slots1, slots2,
					      n);
			slots1 += slots2;
			((struct scmFreeNode *) n)->slots = slots1;
		}
		if (slots1 < slots) {
			ha->curr += slots1;
			continue;
		}
		// Now alloc from this one
		for (int i = 0; i < slots; i++) {
			struct Block *b = &ha->blocks[ha->curr + i];
			// b->base = (char*)n;
			assert(b->base == (char *) n);
		}
		if (slots1 > slots) {
			scmHead *next =
				(scmHead *) (ha->ptr +
					     ((ha->curr +
					       slots) * MEM_BLOCK_SIZE));
			next->type = scmHeadUnused;
			((struct scmFreeNode *) next)->slots = slots1 - slots;
			updateLargeObjectMeta(ha, ha->curr + slots,
					      slots1 - slots, next);
		}
		ha->curr += slots;
		return n;
	}
	return NULL;
}

static void *
gcAllocLargeObject(struct GC *gc, int size) {
	TRACE_SCOPE("gcAllocLargeObject");
	assert(size < HEAP_ARENA_SIZE);
	scmHead *p;
	while (true) {
		struct heapArena *ha = gc->large;
		if (ha == NULL) {
			ha = heapArenaNew();
			ha->forLargeObjects = true;
			gc->large = ha;
		}

		int slots = (size + MEM_BLOCK_SIZE - 1) / MEM_BLOCK_SIZE;
		p = heapArenaAllocLarge(ha, gc, slots);
		if (p != NULL) {
			break;
		}
		// Current arena is full, move to heap list waiting for GC
		gc->large = ha->next;
		if (gc->state == gcStateSweep && gc->progress.ha == ha) {
			gc->progress.ha = gc->large;
			printf("update gc progress in alloc large object\n");
		}
		// Link to heap list
		struct heapArena *heapHead = gcGetHeapArena(gc);
		ha->next = heapHead->next;
		heapHead->next = ha;
	}
	allocDone(gc, size, p);
	return p;
}

static scmHead *
blockAlloc(struct GC *gc, struct Block *block) {
	while (block->curr + block->sizeClass <= MEM_BLOCK_SIZE) {
		scmHead *p = (scmHead *) (block->base + block->curr);
		block->curr += block->sizeClass;
		switch (inuse(gc, p)) {
		case 0:
			if (gc->state != gcStateNone) {
				block->touch = true;
			}
			return p;
		case 1:
			// leave to gcMark to decide touch or not.
			break;
		case 2:
			block->touch = true;
		}
	}
	return NULL;
}

void *
gcAlloc(struct GC *gc, int size) {
	TRACE_SCOPE("gcAlloc");
	assert(size > sizeof(scmHead));

	// If GC is in progress, continue GC steps
	if (gc->state != gcStateNone) {
		gcRun(gc);
	}
	// Handle large object allocation
	if (size >= MEM_BLOCK_SIZE) {
		return gcAllocLargeObject(gc, size);
	}
	// Calculate size class and allocate object
	int slot = getSlotBySize(size);
	scmHead *ret = NULL;

	while (true) {
		struct Block *b = getBlock(gc, slot);
		ret = blockAlloc(gc, b);
		if (ret != NULL) {
			break;
		}
		// Remove full block, waiting for GC to recycle
		gc->sizeClass[slot] = b->next;
		b->next = NULL;
		b->curr = 0;

		// Update GC progress
		if (gc->state == gcStateSweep && gc->progress.b == b) {
			gc->progress.b = gc->sizeClass[slot];
			printf("update gc progress in alloc object\n");
		}
	}

	allocDone(gc, size, ret);
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
	struct Block *b = getBlock(gc, 0);
	gc->gray.head = b;
	gc->gray.tail = b;
	gc->start = 0;
	gc->end = 0;
}

static void
gcEnqueue(struct GC *gc, scmHead *p) {
	struct Block *b = gc->gray.tail;
	if (gc->end + sizeof(scmHead *) > MEM_BLOCK_SIZE) {
		b = getBlock(gc, 0);
		gc->gray.tail->next = b;
		gc->gray.tail = b;
		gc->end = 0;
	}
	// printf("gcEnqueue --%p %d %d %d\n", p, p->size, p->type, p->version);
	*((scmHead **) (b->base + gc->end)) = p;
	gc->end += sizeof(scmHead *);
}

static scmHead *
gcDequeue(struct GC *gc) {
	struct Block *b = gc->gray.head;
	if (gc->start >= MEM_BLOCK_SIZE) {
		b = b->next;
		blockReset(gc, gc->gray.head);
		gc->start = 0;
		gc->gray.head = b;
		if (b == NULL) {
			return NULL;
		}
	}
	if (b == gc->gray.tail && gc->start >= gc->end) {
		blockReset(gc, b);
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

// checkPointer checks whether an arbitrary pointer p is
// 1. allocated from heap
// 2. and point to an in use cora object
// Also return the block this pointer belong to.
static scmHead *
checkPointer(struct GC *gc, uintptr_t p, struct Block **block) {
	// Fast path: check pointer tag
	if ((p & 0x7) != 0x7) {
		return NULL;
	}
	// Get actual address
	void *addr = ptr(p);
	struct heapArena *h = gcContains(gc, addr);
	if (h == NULL) {
		return NULL;
	}
	// Get block index
	int idx = ((char *) addr - h->ptr) / MEM_BLOCK_SIZE;
	struct Block *b = &h->blocks[idx];
	*block = b;

	// Handle large objects
	if (h->forLargeObjects) {
		scmHead *from = (scmHead *) b->base;
		assert(from != NULL);
		return inuse(gc, from) ? from : NULL;
	}
	// Handle small objects
	if (b->sizeClass == 0) {
		return NULL;	// Special block
	}

	int pos = ((char *) addr - b->base) / b->sizeClass;
	assert(pos >= 0);
	scmHead *from = (scmHead *) (b->base + (pos * b->sizeClass));

	if (from != addr) {
		printf("WARNING: the ptr %p is inside scmHead object! {type=%d, size=%d, version=%d}\n", (void *) p, from->type, from->size, from->version);
	}

	return inuse(gc, from) ? from : NULL;
}

// Constants for generational GC
#define GEN_BITS 2
#define GEN_MASK ((1 << GEN_BITS) - 1)
#define GEN_SHIFT VERSION_BITS

// Increment values for each generation
static const int GEN_INCREMENTS[] = { 2, 4, 8, 24 };

// A smart generational GC strategy
// Higher 2bits are for generation mark and lower 6bits are for version,
// Instead of next version = version + 1, using next version = version + N
// +N can make the object be skipped in next several rounds of GC.
// i.e. using a lower GC frequency for older generation.
static version_t
nextVersion(int gen, uint64_t ver) {
	/* return ((gen + 1) << 6) | ((ver + 1) % 64); */
	assert(gen >= 0 && gen < 4);
	for (int i = gen; i >= 0; i--) {
		int inc = GEN_INCREMENTS[i];
		if ((ver % inc) == 0) {
			ver = ver + inc - 1;
			break;
		}
	}
	if (gen < 3) {
		gen++;
	}
	return (gen << 6) | (ver % 64);
}

// return whether the object is enqueued.
static bool
markObject(struct GC *gc, scmHead *from, version_t minv) {
	assert(minv == 0 || ((minv & 1) == 1));
	// A gray object
	if ((from->version & 1) == 1) {
		if (minv != 0) {
			// Old generation to young generation is forbidden
			if (versionCmp
			    (minv & VERSION_MASK,
			     from->version & VERSION_MASK) > 0) {
				/* from->version = (from->version & (3 << 6)) | (minv & VERSION_MASK); */
				from->version = minv;
			}
		}
		return false;
	}

	int bump = false;
	version_t curr_version = from->version & VERSION_MASK;
	// Normal marking logic
	if (curr_version == (gc->version & VERSION_MASK)) {
		from->version = nextVersion(from->version >> 6, gc->version);
		bump = true;
	}
	// Generational GC barrier check
	if (minv != 0) {
		// Old generation to young generation is forbidden
		if (versionCmp
		    (minv & VERSION_MASK, from->version & VERSION_MASK) > 0) {
			/* from->version = (from->version & (3 << 6)) | (minv & VERSION_MASK); */
			from->version = minv;
			bump = true;
		}
	}

	if (bump) {
		gcEnqueue(gc, from);
		return true;
	}
	gc->stats.markSkip++;
	return false;
}

void
gcMark(struct GC *gc, uintptr_t p, version_t minv) {
	struct Block *b;
	scmHead *from = checkPointer(gc, p, &b);
	if (from == NULL) {
		return;
	}
	assert(from->type > scmHeadUnused && from->type < scmHeadMax);
	bool enqueued = markObject(gc, from, minv);
	if (enqueued) {
		b->touch = true;
	}
}

#if defined(__clang__) || defined (__GNUC__)
#define ATTRIBUTE_NO_SANITIZE_ADDRESS __attribute__((no_sanitize_address))
#else
#define ATTRIBUTE_NO_SANITIZE_ADDRESS
#endif

ATTRIBUTE_NO_SANITIZE_ADDRESS static void
gcCStack(struct GC *gc) {
	TRACE_SCOPE("gcStack");
	// Get current stack pointer
	uintptr_t *stackAddr = (uintptr_t *) & stackAddr;

	// Save register state to stack
	jmp_buf ctx;
	memset(&ctx, 0, sizeof(jmp_buf));
	setjmp(ctx);

	// Verify stack boundaries
	assert(stackAddr < gc->baseStackAddr);
	assert(((uintptr_t) stackAddr & 0x7) == 0);
	assert(((uintptr_t) gc->baseStackAddr & 0x7) == 0);

	// Scan each potential pointer in stack space
	for (uintptr_t * p = stackAddr; p < (uintptr_t *) gc->baseStackAddr;
	     p++) {
		uintptr_t stackValue = *p;
		gcMark(gc, stackValue, 0);
	}
}

extern void gcGlobal(struct GC *gc);
extern void gcRSet(struct GC *gc);

static void
gcRunMark(struct GC *gc) {
	TRACE_SCOPE("gcRunMark");
	// Reset counters
	gcStatsReset(&gc->stats);

	// Initialize gray object queue
	gcQueueInit(gc);

	// Mark all root objects
	gcGlobal(gc);		// Mark global variables
	gcCStack(gc);		// Mark stack variables
	gcRSet(gc);

	// Switch to incremental marking phase
	gc->state = gcStateIncremental;
}

static void
checkBlockAssert(struct GC *gc, struct Block *b) {
	int live = 0;
	for (int i=0; i<MEM_BLOCK_SIZE; i+=b->sizeClass) {
		scmHead *h = (scmHead*)(b->base+i);
		if(inuse(gc, h) == 2) {
			live++;
		}
	}
	if (b->touch == false && live != 0) {
		/* printf("block %p, sizeClass%d, b->inuse=%d, actual inuse=%d\n", b, b->sizeClass, b->inuse, inuse_count); */
		assert(false);
	}
	if (live == 0 && b->touch != 0) {
		printf("block %p, sizeClass%d, is not used, but not recycled\n", b, b->sizeClass);
	}
}

static void
gcFlip(struct GC *gc) {
	TRACE_SCOPE("gcFlip");
	// Reset the current large list and sizeClass list.
	for (struct heapArena * p = gc->large; p != NULL; p = p->next) {
		p->curr = 0;
	}
	for (int i = 0; i < sizeClassSZ; i++) {
		struct Block *b = gc->sizeClass[i];
		gc->sizeClass[i] = NULL;
		while(b != NULL) {
			b->touch = true;
			b = b->next;
		}
	}

	int freeBlockCnt = 0;
	size_t sysSize = 0;
	// Put back the heap blocks to sizeClass list or large objects list.
	struct heapArena *prev = NULL;
	struct heapArena *h = gc->heap;
	while (h != NULL) {
		if (h->forLargeObjects) {
			sysSize += h->curr * MEM_BLOCK_SIZE;
			// unlink p from heap list.
			struct heapArena *p = h;
			h = p->next;

			if (prev == NULL) {
				gc->heap = p->next;
			} else {
				prev->next = p->next;
				p->next = NULL;
			}

			// reset p and link it to large list.
			p->curr = 0;
			p->next = gc->large;
			gc->large = p;
			continue;
		}

		sysSize += h->idx * MEM_BLOCK_SIZE;
		for (int i = 0; i < h->idx; i++) {
			struct Block *b = &h->blocks[i];
			if (b->sizeClass == 0) {
				// Skip the freelist blocks which is generated by GC gray queue.
				freeBlockCnt++;
				continue;
			}
			if (b->touch == false) {
				/* checkBlockAssert(gc, b); */
				// recycle to freelist
				b->curr = 0;
				b->sizeClass = 0;
				blockReset(gc, b);
				freeBlockCnt++;
				continue;
			}

			// recycle to sizeClass list
			int slot = getSlotBySize(b->sizeClass);
			assert(b->sizeClass == sizeClass[slot]);
			b->curr = 0;
			b->next = gc->sizeClass[slot];
			gc->sizeClass[slot] = b;
		}
		prev = h;
		h = h->next;
	}

	// GC Statistics
	char *gen = "";
	if (gc->version % 24 == 0) {
		gc->stats.oldGenSize = gc->stats.markSize;
		gen = "***";
	} else if (gc->version % 8 == 0) {
		gc->stats.middleGenSize = gc->stats.markSize;
		gen = "**";
	} else if (gc->version % 4 == 0) {
		gc->stats.youngGenSize = gc->stats.markSize;
		gen = "*";
	}
	char *coraDebug = getenv("CORADEBUG");
	if (coraDebug != NULL) {
		printf("gc%" PRIu64
		       "%s, trigger=%zusz, mark=%zusz %dcnt, skip=%dcnt, incremental=%zusz, freeBlock=%dcnt, sys=%zusz\n",
		       gc->version, gen, gc->stats.nextSize,
		       gc->stats.markSize, gc->stats.markCount,
		       gc->stats.markSkip, gc->stats.allocated,
		       freeBlockCnt, sysSize);
	}

	gc->version = gc->version + 2;
	gc->state = gcStateNone;

	// Calculate for the next GC trigger size.
	// old algorithm:
	/* gc->stats.nextSize = 2 * gc->stats.markSize + gc->stats.allocated; */

	// new algorithm: smooth the next trigger size dynamically
	int base =
		(gc->stats.youngGenSize + gc->stats.middleGenSize +
		 gc->stats.oldGenSize);
	gc->stats.avgAllocated =
		(gc->stats.allocated + 3 * gc->stats.avgAllocated) / 4;

	/* printf("base=%d, avgAllocated=%d, prevTrigger=%d\n", base, gc->stats.avgAllocated, gc->stats.prevTrigger); */

	gc->stats.nextSize =
		(int) (0.4 * (base + gc->stats.avgAllocated) +
		       0.6 * gc->stats.prevTrigger);

	// limit the maxinum growth
	if (gc->stats.nextSize > gc->stats.prevTrigger * 1.5) {
		gc->stats.nextSize = gc->stats.prevTrigger * 1.5;
	}
	// Because a block is at least that size, GC smaller then this is meanless.
	if (gc->stats.nextSize < MEM_BLOCK_SIZE) {
		gc->stats.nextSize = MEM_BLOCK_SIZE;
	}
	gc->stats.prevTrigger = gc->stats.nextSize;
}

static void
gcRunIncremental(struct GC *gc) {
	TRACE_SCOPE("gcRunIncremental");
	const int STEPS_PER_INCREMENT = 20;
	int steps = STEPS_PER_INCREMENT;

	while (steps > 0) {
		scmHead *curr = gcDequeue(gc);
		if (curr == NULL) {
			// Queue is empty, check whether we need to enter gcStateSweep
			if (gc->version % 30 == 0) {
				gc->state = gcStateSweep;
				gc->progress.sizeClassPos = 0;
				gc->progress.b = gc->sizeClass[0];
				gc->progress.ha = gc->large;
				return;
			}
			// Otherwise proceed to flip
			gcFlip(gc);
			return;
		}

		gcFunc fn = registry[curr->type];
		if (fn != NULL) {
			assert((curr->version & 1) == 1);
			fn(gc, curr);
			curr->version =
				(curr->
				 version & (3 << 6)) | ((curr->version +
							 1) % 64);
			gcInuseSizeInc(gc, curr->size);
		}
		steps--;
	}
}

static void
sweepSizeClass(struct GC *gc, struct runDoneProgress *pg) {
	while (pg->sizeClassPos < sizeClassSZ) {
		if (pg->b == NULL) {
			pg->sizeClassPos++;
			pg->b = gc->sizeClass[pg->sizeClassPos];
			continue;
		}
		// Small step to finish one block in size class
		for (int j = pg->b->curr; j < MEM_BLOCK_SIZE;
		     j += pg->b->sizeClass) {
			scmHead *p = (scmHead *) (pg->b->base + j);
			if (!inuse(gc, p)) {
				p->type = scmHeadUnused;
			}
		}
		pg->b = pg->b->next;
		return;
	}
}

static void
sweepLargeObjects(struct GC *gc, struct runDoneProgress *pg) {
	while (pg->ha != NULL) {
		int j = pg->ha->curr;
		while (j < pg->ha->idx) {
			scmHead *p =
				(scmHead *) (pg->ha->ptr +
					     j * MEM_BLOCK_SIZE);
			int slots;

			if (p->type == scmHeadUnused) {
				slots = ((struct scmFreeNode *) p)->slots;
			} else {
				slots = (p->size + MEM_BLOCK_SIZE -
					 1) / MEM_BLOCK_SIZE;
				if ((p->version & VERSION_MASK) ==
				    ((gc->version - 2) & VERSION_MASK)) {
					struct scmFreeNode *n =
						(struct scmFreeNode *) p;
					n->head.type = scmHeadUnused;
					n->slots = slots;
					updateLargeObjectMeta(pg->ha, j,
							      slots,
							      &n->head);
				}
			}

			assert(slots > 0);
			j += slots;
		}
		pg->ha = pg->ha->next;
		return;
	}
	// All objects have been cleaned, proceed to flip
	gcFlip(gc);
}

static void
gcRunSweep(struct GC *gc) {
	TRACE_SCOPE("gcRunSweep");
	struct runDoneProgress *pg = &gc->progress;
	// First handle size classes
	if (pg->sizeClassPos < sizeClassSZ) {
		sweepSizeClass(gc, pg);
		return;
	}
	// Then handle large objects
	sweepLargeObjects(gc, pg);
}

static void
gcRun(struct GC *gc) {
	TRACE_SCOPE("gcRun");
	// | gcStateNone | gcStateMark | gcStateIncremental | gcStateSweep | gcFlip     |
	// | ---         | --          | --                 | --          | --         |
	// | version  <- | version <-  | version            | version     | stale      |
	// |             |             | gray               |             |            |
	// |             |             | black  <-          | black <-    | version <- |

	// gcStateNone -> gcStateMark: start a new round of GC, mark root
	// gcStateMark -> gcStateIncremental: mark root done, start incremental GC
	// gcStateIncremental -> gcStateSweep: incremental GC done, wait for white to be exhausted
	// gcStateSweep -> gcFlip: now only ecru and black, flip

	switch (gc->state) {
	case gcStateNone:
		assert(false);
	case gcStateMark:
		gcRunMark(gc);
		break;
	case gcStateIncremental:
		gcRunIncremental(gc);
		break;
	case gcStateSweep:
		gcRunSweep(gc);
		break;
	}
}

void
writeBarrierForIncremental(struct GC *gc, uintptr_t *slot, uintptr_t val) {
	// Yuasa-style deletion barrier
	if (gc->state == gcStateIncremental) {
		uintptr_t old = *slot;
		gcMark(gc, old, 0);
	}
	*slot = val;
}

void
writeBarrierForGeneration(struct GC *gc, scmHeadEx *v, uintptr_t val) {
	// skip if not a pointer
	if (tag(val) != TAG_PTR) {
		return;
	}

	scmHead *h = ptr(val);
	if (versionCmp(v->version % 64, h->version % 64) <= 0) {
		return;
	}

	switch (gc->state) {
	case gcStateNone:
	case gcStateMark:
	case gcStateSweep:
		// add to rset
		if (!v->inRSet) {
			v->rset = gc->rset;
			gc->rset = v;
			v->inRSet = true;
		}
		break;
	case gcStateIncremental:
		if (((v->version & 1) == 1) &&
		    ((h->version + 1) % 64) == (v->version % 64)) {
			return;
		}
		// add vec to rset and enqueue val
		// The next round it will be mark
		if (!v->inRSet) {
			v->rset = gc->rset;
			gc->rset = v;
			v->inRSet = true;
		}
		gcMark(gc, val, 0);
	}
}

void
gcRSet(struct GC *gc) {
	if (gc->rset == NULL) {
		return;
	}

	scmHeadEx *prev = NULL;
	scmHeadEx *p = gc->rset;
	while (p != NULL) {
		scmHead *h = (scmHead *) p;
		if (versionCmp
		    (gc->version & VERSION_MASK,
		     h->version & VERSION_MASK) >= 0) {
			// remove this from remember set.
			if (prev == NULL) {
				gc->rset = p->rset;
			} else {
				prev->rset = p->rset;
			}

			scmHeadEx *tmp = p;
			p = p->rset;
			tmp->rset = NULL;
			tmp->inRSet = false;
		} else {
			switch (p->type) {
			case scmHeadVector:
				{
					struct scmVector *pv =
						(struct scmVector *) p;
					for (int i = 0; i < pv->size; i++) {
						gcMark(gc, pv->data[i], 0);
					}
					break;
				}
			case scmHeadSymbol:
				{
					struct scmSymbol *pv =
						(struct scmSymbol *) p;
					gcMark(gc, pv->value, 0);
					break;
				}
			}
			prev = p;
			p = p->rset;
		}
	}
}
