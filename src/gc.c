#include <sys/mman.h>
#include <stdlib.h>
#include <stdint.h>
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
	gcStateSweep,
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

	// Link the block into sizeClass or freelist.
// Or point to the scmHead for large objects.
	struct Block *next;
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

	// freelist is used for recycling and fast allocation.
	// For large objects, the type is scmFreeNode, otherwise the type is blocks.
	void *freelist;

	bool forLargeObjects;
	// curr is used when this heapArena is for large objects.
	int curr;

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
	ha->curr = 0;
	ha->forLargeObjects = false;
	return ha;
}

static bool
heapArenaFull(struct heapArena *ha) {
	return ha->freelist == NULL && ha->idx >= BLOCKS_PER_HEAP;
}

static struct Block *
heapArenaAlloc(struct heapArena *h) {
	if (h->freelist != NULL) {
		struct Block *b = h->freelist;
		h->freelist = b->next;
		b->next = NULL;
		b->ha = h;
		return b;
	}

	struct Block *b = &h->blocks[h->idx];
	b->ha = h;
	b->base = h->ptr + h->idx * MEM_BLOCK_SIZE;
	b->sizeClass = 0;
	b->curr = 0;
	b->next = NULL;
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

struct GC {
	enum gcState state;
	uintptr_t *baseStackAddr;

	// Small objects are allocated from sizeClass blocks.
	// Each Block can be belongs to one size class. After Block initialization,
	// all objects allocated from that specific Block are with the same size.
	struct Block *sizeClass[sizeClassSZ];
	struct heapArena *heap;

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

	int allocated;
	int nextSize;
	// inuseSize is calculated in each GC mark round.
	int inuseSize;
};

static void
gcInuseSizeInc(struct GC *gc, int size) {
	gc->inuseSize += size;
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

	// Insert at the head of freelist
	block->next = ha->freelist;
	ha->freelist = block;
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

	h = gc->large;
	while (h != NULL) {
		if (heapArenaContains(h, p)) {
			return h;
		}
		h = h->next;
	}
	return NULL;
}

static bool
inuse(struct GC *gc, scmHead *h) {
	if (h->type == scmHeadUnused) {
		return false;
	}
	return versionCmp(gc->version & VERSION_MASK,
			  h->version & VERSION_MASK) <= 0;
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

// Helper function to check if GC should be triggered
static bool
shouldTriggerGC(struct GC *gc) {
	return gc->allocated > gc->nextSize && gc->state == gcStateNone;
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

	gc->allocated += size;

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

static scmHead *
tryMergeAndAllocate(struct heapArena *ha, struct GC *gc, int slots,
		    int curr_pos) {
	scmHead *n = (scmHead *) (ha->ptr + (curr_pos * MEM_BLOCK_SIZE));
	int slots1 = getLargeObjSlots(n);

	while (slots1 < slots) {
		// If reached uninitialized area, extend directly
		if (curr_pos + slots1 == ha->idx) {
			ha->idx = curr_pos + slots;
			n->type = scmHeadUnused;
			((struct scmFreeNode *) n)->slots = slots;
			updateLargeObjectMeta(ha, curr_pos + slots1,
					      slots - slots1, n);
			slots1 = slots;
			break;
		}
		// Try to merge with next block
		scmHead *next =
			(scmHead *) (ha->ptr +
				     ((curr_pos + slots1) * MEM_BLOCK_SIZE));
		if (inuse(gc, next)) {
			break;
		}

		int slots2 = getLargeObjSlots(next);
		n->type = scmHeadUnused;
		updateLargeObjectMeta(ha, curr_pos + slots1, slots2, n);
		slots1 += slots2;
		((struct scmFreeNode *) n)->slots = slots1;
	}

	return (slots1 >= slots) ? n : NULL;
}

scmHead *
heapArenaAllocLarge(struct heapArena *ha, struct GC *gc, int slots) {
	while (ha->curr + slots <= BLOCKS_PER_HEAP) {
		// Allocate from uninitialized area
		if (ha->curr == ha->idx) {
			if (ha->curr + slots >= BLOCKS_PER_HEAP) {
				return NULL;
			}
			scmHead *n =
				(scmHead *) (ha->ptr +
					     (ha->curr * MEM_BLOCK_SIZE));
			n->type = scmHeadUnused;
			((struct scmFreeNode *) n)->slots = slots;
			updateLargeObjectMeta(ha, ha->curr, slots, n);
			ha->curr += slots;
			ha->idx += slots;
			return n;
		}
		// Try to allocate from existing space
		scmHead *n =
			(scmHead *) (ha->ptr + (ha->curr * MEM_BLOCK_SIZE));
		if (!inuse(gc, n)) {
			n = tryMergeAndAllocate(ha, gc, slots, ha->curr);
			if (n != NULL) {
				ha->curr += slots;
				return n;
			}
		}
		// Skip current object
		int skip = getLargeObjSlots(n);
		ha->curr += skip;
	}
	return NULL;
}

static void *
gcAllocLargeObject(struct GC *gc, int size) {
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
		// skip the inuse object
		if (!inuse(gc, p)) {
			return p;
		}
	}
	return NULL;
}

void *
gcAlloc(struct GC *gc, int size) {
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
	struct Block *b = blockNew(gc);
	gc->gray.head = b;
	gc->gray.tail = b;
	gc->start = 0;
	gc->end = 0;
}

static void
gcEnqueue(struct GC *gc, scmHead *p) {
	struct Block *b = gc->gray.tail;
	if (gc->end + sizeof(scmHead *) > MEM_BLOCK_SIZE) {
		b = blockNew(gc);
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

// checkPointer checks whether an arbitrary pointer p is
// 1. allocated from heap
// 2. and point to an in use cora object
static scmHead *
checkPointer(struct GC *gc, uintptr_t p) {
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
static const int GEN_INCREMENTS[] = { 3, 5, 11, 31 };

// A smart generational GC strategy
// Here 2bits are for generation mark and 6bits are for version,
// Instead of next version = version + 1, using next version = version + N
// +N can make the object be skipped in next several rounds of GC.
// i.e. using a lower GC frequency for older generation.
static version_t
nextVersion(version_t ver) {
	int gen = (ver >> GEN_SHIFT) & GEN_MASK;
	int curr_version = ver & VERSION_MASK;

	// Calculate new version
	// !! Disable generational GC temporarily !!
	/* int new_version = (curr_version + GEN_INCREMENTS[gen]) & VERSION_MASK; */
	int new_version = (curr_version + 1) & VERSION_MASK;

	// If not the last generation, upgrade to next generation
	int new_gen = (gen < GEN_MASK) ? gen + 1 : gen;

	return new_version | (new_gen << GEN_SHIFT);
}

static void
markObject(struct GC *gc, scmHead *from, version_t minv) {
	// Skip if already a gray object
	if ((from->version & 1) == 1) {
		return;
	}

	version_t curr_version = from->version & VERSION_MASK;

	// Generational GC barrier check
	if ((minv & 1) == 1) {
		// Barrier for generational GC
		// Old generation to young generation is forbidden
		if (versionCmp(minv & VERSION_MASK, curr_version) > 0) {
			from->version = minv;
			gcEnqueue(gc, from);
			return;
		}
	}
	// Normal marking logic
	if (curr_version == (gc->version & VERSION_MASK)) {
		from->version = nextVersion(from->version);
		gcEnqueue(gc, from);
	}
}

void
gcMark(struct GC *gc, uintptr_t p, version_t minv) {
	scmHead *from = checkPointer(gc, p);
	if (from == NULL) {
		return;
	}
	assert(from->type > scmHeadUnused && from->type < scmHeadMax);
	markObject(gc, from, minv);
}

#if defined(__clang__) || defined (__GNUC__)
#define ATTRIBUTE_NO_SANITIZE_ADDRESS __attribute__((no_sanitize_address))
#else
#define ATTRIBUTE_NO_SANITIZE_ADDRESS
#endif

ATTRIBUTE_NO_SANITIZE_ADDRESS static void
gcStack(struct GC *gc) {
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

static void
gcRunMark(struct GC *gc) {
	// Reset counters
	gc->allocated = 0;
	gc->inuseSize = 0;

	// Initialize gray object queue
	gcQueueInit(gc);

	// Mark all root objects
	gcGlobal(gc);		// Mark global variables
	gcStack(gc);		// Mark stack variables

	// Switch to incremental marking phase
	gc->state = gcStateIncremental;
}

static void
gcFlip(struct GC *gc) {
	/* printf("run gc, before size = %d, inuse size = %d, incremental size=%d\n", gc->nextSize, gc->inuseSize, gc->allocated); */
	gc->nextSize = 2 * gc->inuseSize + gc->allocated;
	if (gc->nextSize < MEM_BLOCK_SIZE) {
		// Because a block is at least that size, GC smaller then this is meanless.
		gc->nextSize = MEM_BLOCK_SIZE;
	}
	// Reset the current large list and sizeClass list.
	for (struct heapArena * p = gc->large; p != NULL; p = p->next) {
		p->curr = 0;
	}
	for (int i = 0; i < sizeClassSZ; i++) {
		gc->sizeClass[i] = NULL;
	}

	// Put back the heap blocks to sizeClass list or large objects list.
	struct heapArena *prev = NULL;
	struct heapArena *h = gc->heap;
	while (h != NULL) {
		if (h->forLargeObjects) {
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

		for (int i = 0; i < h->idx; i++) {
			struct Block *b = &h->blocks[i];
			if (b->sizeClass == 0) {
				// Skip the freelist blocks which is generated by GC gray queue.
				continue;
			}
			// for (int x=0; x<MEM_BLOCK_SIZE; x+=b->sizeClass) {
			//   scmHead* xx = (scmHead*)(b->base + x);
			//   if (xx->type != scmHeadUnused) {
			//     assert(xx->version + 1 >= gc->version);
			//   }
			// }

			int slot = getSlotBySize(b->sizeClass);
			assert(b->sizeClass == sizeClass[slot]);
			b->curr = 0;
			b->next = gc->sizeClass[slot];
			gc->sizeClass[slot] = b;
		}
		prev = h;
		h = h->next;
	}
	gc->version = gc->version + 2;
	gc->state = gcStateNone;
}

static void
gcRunIncremental(struct GC *gc) {
	const int STEPS_PER_INCREMENT = 20;
	int steps = STEPS_PER_INCREMENT;

	while (steps > 0) {
		scmHead *curr = gcDequeue(gc);
		if (curr == NULL) {
			// Queue is empty, check whether we need to enter gcStateSweep
			if (gc->version % 30 == 0) {
				gc->state = gcStateSweep;
				gc->progress.sizeClassPos = 0;
				gc->progress.b = NULL;
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
			curr->version = (curr->version + 1) % 64;
			gcInuseSizeInc(gc, curr->size);
		}
		steps--;
	}
}

static void
sweepSizeClass(struct GC *gc, struct runDoneProgress *pg) {
	if (pg->b == NULL) {
		pg->b = gc->sizeClass[pg->sizeClassPos];
	}
	while (pg->sizeClassPos < sizeClassSZ) {
		if (pg->b == NULL) {
			pg->sizeClassPos++;
			continue;
		}
		// Small step to finish one block in size class
		for (int j = pg->b->curr; j < MEM_BLOCK_SIZE;
		     j += pg->b->sizeClass) {
			scmHead *p = (scmHead *) (pg->b->base + j);
			if ((p->version & VERSION_MASK) ==
			    ((gc->version - 2) & VERSION_MASK)) {
				p->type = scmHeadUnused;
			}
		}
		pg->b = pg->b->next;
		if (pg->b == NULL) {
			pg->sizeClassPos++;
		}
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
	struct runDoneProgress *pg = &gc->progress;
	// First handle size classes
	sweepSizeClass(gc, pg);
	// Then handle large objects
	sweepLargeObjects(gc, pg);
}

static void
gcRun(struct GC *gc) {
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
writeBarrierForGeneration(scmHead *v, uintptr_t val) {
	// Skip if not a pointer
	if (tag(val) != TAG_PTR) {
		return;
	}
	scmHead *h = ptr(val);
	// Update version if necessary for generational GC
	if (versionCmp(v->version & VERSION_MASK, h->version & VERSION_MASK) >
	    0) {
		h->version = v->version;
	}
}
