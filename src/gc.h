#ifndef _GC_H_
#define _GC_H_

#include <stdbool.h>
#include <stdint.h>
#include <math.h>

typedef uint8_t scmHeadType;

enum {
  scmHeadUnused = 0,
  // Instant values.
  scmHeadBoolean,
  // There are two kinds of symbol: intern and gensym.
  // interned symbols are global and never GC, while gensym are temporary.
  scmHeadSymbol,
  // The followings are all pointer types.
  scmHeadCons,
  scmHeadBytes,
  scmHeadVector,
  scmHeadContinuation,
  scmHeadNative,
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

typedef struct GC GC;
GC* gcInit();
bool gcTriggerCheck(GC *gc);
typedef void (*gcMarkRootCallback)(GC *gc, void* data);
void gcMarkRoot(GC *gc, gcMarkRootCallback callback, void* data);

void* gcAlloc(GC* gc, int size);
void gcRun(GC *gc);

void writeBarrierForIncremental(struct GC *gc, uintptr_t *slot, uintptr_t val);
void gcMark(struct GC *gc, uintptr_t head, version_t minv);

typedef void (*gcFunc)(struct GC *gc, void* from);
bool gcRegistForType(uint8_t type, gcFunc fn);

// Obj: NaN-tagged value stored as distinct f64
//
// f64 bits: [ sign(1) | exp(11) | frac(52) ]
// - If exp != 0x7FF -> normal f64 number
// - If exp == 0x7FF -> NaN-space
typedef uintptr_t Obj;
// Bit masks and constants
// If all OBJ_MASK fields are set, it is a object, otherwise it is a f64
#define OBJ_MASK 0x7FF8000000000000 // 0111  1111 1111 1000

static inline void* ptr(Obj o) { return (void*)(o & (((uintptr_t)1 << 48) - 1)); }
#define tag(o) (((o) >> 48) & 7)

enum {
	TAG_IMMED  = 0b001,
	TAG_COBJ = 0b010,
	TAG_SYMBOL = 0b011,
	TAG_BYTES  = 0b100,
	TAG_CONS   = 0b101,
	TAG_NATIVE   = 0b110,
	TAG_PTR = 0b111, // general pointer, like vector etc
};

#define isobj(x) ((x & OBJ_MASK) == OBJ_MASK)

static inline bool isScmHead(Obj o) { return isobj(o) && tag(o) >= 4; }

// cora stack can be simplify using a vector.
struct scmVector {
	scmHeadEx head;
	int size;
	int cap;
	Obj data[];
};

struct scmSymbol {
	scmHeadEx head;
#ifdef _BOOTSTRAP_TEST_
	int unique;
#endif
	Obj value;
};

void writeBarrierForGeneration(GC *gc, scmHeadEx *v, uintptr_t val);

#endif
