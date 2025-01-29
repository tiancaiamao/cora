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
	gcStateDone,
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
	h->idx++;

	/* printf("allocate new block, current idx==%d\n", h->idx); */
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
	int slot;
	if (size < 128) {
		int sizeDiv8 = ((size + 7) / 8);
		slot = smallSizeClassIdx[sizeDiv8];
	} else {
		int sizeDiv64 = ((size + 63) / 64);
		slot = mediumSizeClassIdx[sizeDiv64];
	}
// assert(sizeClass[slot] >= size);
// if (slot > 0) {
//                       assert(sizeClass[slot-1] < size);
// }
	return slot;
}

struct runDoneProgress {
  int sizeClassPos;
  struct Block *b;
  struct heapArena *ha;
};

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
	version_t version;

	// the GC queue, all objects in this queue are gray.
	struct doubleLinkList gray;
	int start;
	int end;

  // Save the current progress of gcRunDone state.
  struct runDoneProgress progress;

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
	if (ha->freelist == NULL) {
		ha->freelist = block;
	} else {
		block->next = ((struct Block *) ha->freelist)->next;
		((struct Block *) ha->freelist)->next = block;
	}
}

__thread struct GC *threadLocalGC;

void
gcInit(uintptr_t * baseStackAddr) {
	struct GC *gc = malloc(sizeof(struct GC));
	gc->heap = NULL;
	gc->large = NULL;
	gc->state = gcStateNone;
	gc->baseStackAddr = baseStackAddr;
	// the first version start from 2 so uninitialized block can be treat the same
	// as the garbage.
	gc->version.val = 1;

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
inuse(struct GC *gc, scmHead * h) {
	// h is an unused obj
	if (h->type == 0) {
		return false;
	}
	return !versionEQ(h->version, versionSub(gc->version, 1));
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

static void
allocDone(struct GC *gc, int size, scmHead * ret) {
	ret->size = size;
	if (gc->state == gcStateNone) {
		ret->version = gc->version;
	} else {
	  ret->version = versionAdd(gc->version, 1);
	}
	gc->allocated += size;
	// should trigger the next round of GC.
	if (gc->allocated > gc->nextSize && gc->state == gcStateNone) {
		gc->state = gcStateMark;
	}
}

static int
getLargeObjSlots(scmHead * n) {
	if (n->type == scmHeadUnused) {
		return ((struct scmFreeNode *) n)->slots;
	}
	return (n->size + MEM_BLOCK_SIZE - 1) / MEM_BLOCK_SIZE;
}

static void
updateLargeObjectMeta(struct heapArena *ha, int start, int slots, scmHead * h) {
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
		// This one is full, remove it from large list.
		gc->large = ha->next;
		if (gc->state == gcStateDone) {
		  if (gc->progress.ha == ha) {
		    gc->progress.ha = gc->large;
		    printf("update gc progress in alloc large object");
		  }
		}

		// Link it to heap list, wait GC to recycle them.
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
	if (gc->state != gcStateNone) {
		gcRun(gc);
	}
	if (size >= MEM_BLOCK_SIZE) {
		return gcAllocLargeObject(gc, size);
	}
	// calculate the size class for the allocation.
	int slot = getSlotBySize(size);

	scmHead *ret = NULL;
	while (true) {
		struct Block *b = getBlock(gc, slot);
		ret = blockAlloc(gc, b);
		if (ret != NULL) {
		  assert(versionEQ(ret->version, versionSub(gc->version, 1)) ||
			       ret->type == 0);
			break;
		}

		// Remove full block from the sizeClass list, wait GC to recycle them
		gc->sizeClass[slot] = b->next;
		b->next = NULL;
		b->curr = 0;

		// Help to update the progress.
		if (gc->state == gcStateDone) {
		  if (gc->progress.b == b) {
		    gc->progress.b = gc->sizeClass[slot];
		    printf("update gc progress in alloc object\n");
		  }
		}
	}
	allocDone(gc, size, ret);

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
		gc->gray.tail->next = b;
		gc->gray.tail = b;
		gc->end = 0;
	}
	// printf("gcEnqueue --%p %d %d %d\n", p, p->size, p->type, p->version);
	p->version = versionAdd(p->version, 2);
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

	scmHead *from;
	// Large object?
	if (h->forLargeObjects) {
		from = (scmHead *) b->base;
		assert(from != NULL);
	} else {
		// Special block?
		if (b->sizeClass == 0) {
			return false;
		}

		int pos = ((char *) addr - b->base) / b->sizeClass;
		assert(pos >= 0);
		from = (scmHead *) (b->base + (pos * b->sizeClass));
		if (from != addr) {
			printf("WARNING: the ptr %p is inside scmHead object! {type=%d, size=%d, version=%d}\n", (void *) p, from->type, from->size, from->version.val);
		}
	}

	// black or gray object? avoid handle it repeatly
	if ((versionEQ(versionSub(from->version, 1), gc->version)) ||
	    (versionEQ(versionSub(from->version, 2), gc->version))) {
	  return false;
	}
	// stale object? it should have been sweeped, but we defer the sweep lazily
	if (from->type == scmHeadUnused || versionEQ(versionSub(gc->version, 1), from->version)) {
		// This could happen, for example, stack expand and shrink, the 'dead' object leave in the stack is not reset.
	  return false;
	} 

	if (from->type > scmHeadUnused && from->type < scmHeadMax) {
		return true;
	}
	// Not a cora Object?
	printf("WARNING: some thing is wrong when checkPointer? %p {type=%d, size=%d, version=%d}\n", from, from->type, from->size, from->version.val);
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
	gc->allocated = 0;
	gc->inuseSize = 0;
	gcQueueInit(gc);
	// enqueue the root.
	gcGlobal(gc);
	gcStack(gc);

	gc->state = gcStateIncremental;
}

static void
gcRunIncremental(struct GC *gc) {
	int N = 20;
	// breadth first.
	scmHead *curr = gcDequeue(gc);
	while (curr != NULL) {
		gcFunc fn = registry[curr->type];
		if (fn != NULL) {
		  assert(versionEQ(curr->version, versionAdd(gc->version, 2)));
		  fn(gc, curr);
		  /* printf("gcMark handle %p ==%ld, sz=%d tp=%d version=%d\n", curr, curr, curr->size, curr->type, curr->version); */
		}
		N--;
		if (N == 0) {
			return;
		}
		curr = gcDequeue(gc);
	}

	gc->state = gcStateDone;
	gc->progress.sizeClassPos = 0;
	gc->progress.b = NULL;
	gc->progress.ha = gc->large;
	return;
}

static void
gcFlip(struct GC *gc) {
	// printf("run gc, before size = %d, inuse size = %d, incremental size=%d\n", gc->nextSize, gc->inuseSize, gc->allocated);
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
	gc->version = versionAdd(gc->version, 1);
	gc->state = gcStateNone;
}

static void
gcRunDone(struct GC *gc) {
  struct runDoneProgress *pg = &gc->progress;
  while (pg->sizeClassPos < sizeClassSZ) {
    if (pg->b == NULL) {
      pg->b = gc->sizeClass[pg->sizeClassPos];
    }
    if (pg->b == NULL) {
      pg->sizeClassPos++;
      continue;
    }

    // Small step to finish one block in size class.
    for (int j = pg->b->curr; j < MEM_BLOCK_SIZE; j += pg->b->sizeClass) {
      scmHead *p = (scmHead *) (pg->b->base + j);
      if (versionEQ(p->version, versionSub(gc->version, 1))) {
	p->type = scmHeadUnused;
      }
    }

    pg->b = pg->b->next;
    return;
  }

  while(pg->ha != NULL) {
    int j = pg->ha->curr;
    while (j < pg->ha->idx) {
      scmHead *p = (scmHead *) (pg->ha->ptr + j * MEM_BLOCK_SIZE);
      int slots;
      if (p->type == scmHeadUnused) {
	slots = ((struct scmFreeNode *) p)->slots;
      } else {
	slots = (p->size + MEM_BLOCK_SIZE -
		 1) / MEM_BLOCK_SIZE;
	if (versionEQ(p->version, versionSub(gc->version, 1))) {
	  struct scmFreeNode *n =
	    (struct scmFreeNode *) p;
	  n->head.type = scmHeadUnused;
	  n->slots = slots;
	  updateLargeObjectMeta(pg->ha, j, slots,
				&n->head);
	}
      }
      assert(slots > 0);
      j += slots;
    }
    pg->ha = pg->ha->next;
    return;
  }

  gcFlip(gc);
}

static void
gcRun(struct GC *gc) {
	// The object color is inspired by the Treadmill GC, HG Baker 1992
	// The difference is that here version is used instead of colors
	// ecru is gc->version, which is the color of currently inuse objects

	// | gcStateNone | gcStateMark | gcStateIncremental | gcStateDone | gcFlip  |
	// | ---         | --          | --                 | --          | --      |
	// | white       | white       | white              | white       |         |
	// | ecru  <-    | ecru <-     | ecru <-            | ecru  <-    | white   |
	// |             |             | black              | black       | ecru <- |
	// |             |             | gray               |             |         |

	// gcStateNone -> gcStateMark: start a new round of GC, mark root
	// gcStateMark -> gcStateIncremental: mark root done, start incremental GC
	// gcStateIncremental -> gcStateDone: incremental GC done, wait for white to be exhausted
	// gcStateDone -> gcFlip: now only ecru and black, flip

	switch (gc->state) {
	case gcStateNone:
		assert(false);
	case gcStateMark:
		gcRunMark(gc);
		break;
	case gcStateIncremental:
		gcRunIncremental(gc);
		break;
	case gcStateDone:
		gcRunDone(gc);
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
