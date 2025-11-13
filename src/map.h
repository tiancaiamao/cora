#ifndef C_MAP_H
#define C_MAP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct HashTrie HashTrie;

struct HashTrie {
	HashTrie *child[4];
	int keySize;
	char data[];
};

typedef struct MapInternal Map;

struct MapInternal {
	HashTrie *root;
	uint64_t (*hash_func)(void *key);
	bool (*eq_func)(void *key1, void *key2);
};

// lookup finds the value with the given key, return the valueType* pointer.
// Return NULL if not found.
static inline void*
lookup(HashTrie *root, uint64_t (*hash64)(void *key), bool (*equals)(void *key1, void *key2), void *key, HashTrie*** forUpdate) {
    for (uint64_t h = hash64(key); root != NULL; h <<= 2) {
        if (equals(key, (root)->data)) {
            return (root)->data + (root)->keySize;  // return valueType*
        }
        if (forUpdate) {
        	*forUpdate = &((root)->child[h>>62]);
        }
        root = ((root)->child[h>>62]);
    }
    return NULL;
}

static inline void*
_map_get(Map *v, void *key) {
	return lookup(v->root, v->hash_func, v->eq_func, key, NULL);
}

static inline void*
_map_set(Map *v, void *key, void *value, int keySize, int valueSize) {
	HashTrie **forUpdate = &v->root;
	void *found = lookup(v->root, v->hash_func, v->eq_func, key, &forUpdate);
	if (found) {
		memcpy(found, value, valueSize);
		return found;
	}
	HashTrie* node = (HashTrie*)malloc(sizeof(HashTrie) + keySize + valueSize);
	node->keySize = keySize;
	memcpy(node->data, key, keySize);
	memcpy(node->data + keySize, value, valueSize);
	memset(node->child, 0, sizeof(node->child));
	*forUpdate = node;
	return (void*)(node->data + keySize);
}

static inline void
_map_init(Map *v, uint64_t (*hash_func)(void *key), bool (*eq_func)(void *key1, void *key2)) {
	v->root = NULL;
	v->hash_func = hash_func;
	v->eq_func = eq_func;
}

#define map(K, V) union { Map v; K keyType; V valueType; }
#define mapInit(ptr, hash_func, eq_func) _map_init(&(ptr)->v, hash_func, eq_func)
#define mapGet(ptr, key) ((typeof((ptr)->valueType) *)_map_get(&(ptr)->v, &(key)))
#define mapSet(ptr, key, value) \
	do { \
		typeof((ptr)->keyType) keyTmp = (key); \
		typeof((ptr)->valueType) valueTmp = (value); \
		_map_set(&(ptr)->v, &keyTmp, &valueTmp, sizeof((ptr)->keyType), sizeof((ptr)->valueType)); \
	} while (0)

// #define mapFree(ptr) _map_free(&(ptr)->v)

static inline uint32_t
lowbias32(uint32_t x) {
    x ^= x >> 16;
    x *= 0x7FEB352DU;
    x ^= x >> 15;
    x *= 0x846CA68BU;
    x ^= x >> 16;
    return x;
}

static inline uint64_t
mix64(uint64_t x) {
    x ^= x >> 30;
    x *= 0xBF58476D1CE4E5B9ULL;
    x ^= x >> 27;
    x *= 0x94D049BB133111EBULL;
    x ^= x >> 31;
    return x;
}

// default hash for string, simple and fast
static inline uint64_t
fnv1a64(void *data, size_t len) {
    uint64_t hash = 1469598103934665603ULL;   // offset basis
    unsigned char *p = (unsigned char *)data;
    for (size_t i = 0; i < len; i++) {
        hash ^= p[i];
        hash *= 1099511628211ULL;             // FNV prime
    }
    return hash;
}

// For extremely performance, xxHash3 is recommended, 10-30x faster than FNV1a64
// https://github.com/Cyan4973/xxHash
// But that introduce external dependency, so it's not the default hash function.

#endif
