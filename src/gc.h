#ifndef _GC_H_
#define _GC_H_

#include <stdbool.h>
#include <stdint.h>

typedef uint8_t scmHeadType;

enum {
  scmHeadUnused = 0,
  // Instant values.
  scmHeadBoolean,
  scmHeadNull,
  // There are two kinds of symbol: intern and gensym.
  // interned symbols are global and never GC, while gensym are temporary.
  scmHeadSymbol,
  // Number may be or may not be pointer.
  scmHeadNumber,
  // The followings are all pointer types.
  scmHeadCons,
  scmHeadBytes,
  scmHeadVector,
  scmHeadNative,
  scmHeadContinuation,

  scmHeadMax,
};

// 2bits generation and 6bits version
typedef uint8_t version_t;

typedef struct {
  uint32_t size;
  scmHeadType type;
  version_t version;
} scmHead;

struct scmHeadEx_t {
	uint32_t size;
	scmHeadType type;
	version_t version;
	// remember set for generational GC
	struct scmHeadEx_t *rset;
	bool inRSet;
};

typedef struct scmHeadEx_t scmHeadEx;

#define TAG_SHIFT 3
#define TAG_MASK 0x7
#define TAG_PTR 0x7

#define ptr(x) ((void*)((x)&~TAG_PTR))
#define tag(x) ((x) & TAG_MASK)

void gcInit(uintptr_t* mark);
struct GC *getGC();

void* gcAlloc(struct GC* gc, int size);

void writeBarrierForIncremental(struct GC *gc, uintptr_t *slot, uintptr_t val);
void gcMark(struct GC *gc, uintptr_t head, version_t minv);

typedef void (*gcFunc)(struct GC *gc, void* from);
bool gcRegistForType(uint8_t type, gcFunc fn);

typedef uintptr_t Obj;

// cora stack can be simplify using a vector.
struct scmVector {
	scmHeadEx head;
	int size;
	int cap;
	Obj data[];
};

struct scmSymbol {
	scmHeadEx head;
	Obj value;
};

void writeBarrierForGeneration(struct GC *gc, scmHeadEx *v, uintptr_t val);

#endif
