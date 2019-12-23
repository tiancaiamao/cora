#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "gc.h"

const int MEM_BLOCK_SIZE = 4*1024*1024;

struct GC {
  int offset;
  char data[];
};

struct GC*
gcNew() {
  struct GC* gc = malloc(MEM_BLOCK_SIZE);
  gc->offset = offsetof(struct GC, data);
  return gc;
}

static bool
gcAlloced(struct GC* gc, uintptr_t i) {
  if (tag(i) != TAG_PTR && tag(i) != TAG_CONS && tag(i) != TAG_SYMBOL) {
    return false;
  }
  void *p = ptr(i);
  if (p < (void*)&gc->data[offsetof(struct GC, data)] || p >= (void*)&gc->data[gc->offset]) {
    return true;
  }
  return false;
}

#define alignto(p, bits)      (((p) >> bits) << bits)
#define aligntonext(p, bits)  alignto(((p) + (1 << bits) - 1), bits)

void*
gcAlloc(struct GC* gc, int size) {
  if (gc->offset + size > MEM_BLOCK_SIZE) {
    return NULL;
  }

  size = aligntonext(size, TAG_SHIFT);
  void *ret = &gc->data[gc->offset];
  gc->offset += size;
  return ret;
}

static gcFunc registry[256];

bool
gcRegistForType(uint8_t idx, gcFunc fn) {
  if (registry[idx] != NULL) {
    return false;
  }
  registry[idx] = fn;
  return true;
}

void*
gcCopy(void* p, struct GC *gc) {
  scmHead *head = p;
  if (head->visited != 0) {
    return head->forwarding;
  }

  // Copy the data of itself to the new place.
  void* to = gcAlloc(gc, head->size);
  memcpy(to, head, head->size);

  // Copy the children to the new place.
  // And update the reference of the new object.
  gcFunc gcCopyChildren = registry[head->type];
  if (gcCopyChildren != NULL) {
    gcCopyChildren(head, to, gc);
  }

  // Update the forwarding and leave it as a tombstone.
  head->forwarding = to;
  head->visited = true;
  return to;
}
