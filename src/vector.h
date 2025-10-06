#ifndef C_VECTOR_H
#define C_VECTOR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Vector {
	void *data;
	int len;
	int cap;
} Vector;

#define vector(T) union { Vector v; T type; }

static inline void
_vector_append(Vector *v, const void *element, size_t elem_size) {
	if (v->len >= v->cap) {
		int new_cap = v->cap > 0 ? v->cap * 2 : 1;
		void *new_data = realloc(v->data, new_cap * elem_size);
		if (new_data == NULL) {
			fprintf(stderr, "Memory allocation failed.\n");
			exit(1);
		}
		v->data = new_data;
		v->cap = new_cap;
	}
    
	memcpy((char *)v->data + v->len * elem_size, element, elem_size);
	v->len++;
}

static inline void
_vector_init(Vector *v, int initial_cap, size_t elem_size) {
	v->len = 0;
	v->cap = initial_cap;
	v->data = malloc(initial_cap * elem_size);
}

static inline void
_vector_free(Vector *v) {
	if (v->data != NULL) {
		free(v->data);
		v->data = NULL;
	}
	v->len = 0;
	v->cap = 0;
}

#define vecAppend(ptr, value)						\
	do {								\
		typeof((ptr)->type) tmp = (value);			\
		_vector_append(&(ptr)->v, &tmp, sizeof((ptr)->type));	\
	} while (0)

#define vecLen(ptr) ((ptr)->v.len)

#define vecCap(ptr) ((ptr)->v.cap)

#define vecRef(ptr, idx) \
	(((typeof((ptr)->type) *)((ptr)->v.data))+(idx))

#define vecGet(ptr, idx) \
	(((typeof((ptr)->type) *)((ptr)->v.data))[idx])

#define vecPop(ptr) (((typeof((ptr)->type) *)((ptr)->v.data))[--(ptr)->v.len])

#define vecSet(ptr, idx, value) \
	do {								\
		(((typeof((ptr)->type) *)((ptr)->v.data))[idx] = value); \
	} while (0)

#define vecInit(ptr, initial_cap) \
	_vector_init(&(ptr)->v, (initial_cap), sizeof((ptr)->type))

#define vecFree(ptr) \
	_vector_free(&(ptr)->v)

#endif // C_VECTOR_H
