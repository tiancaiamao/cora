#ifndef PARALLEL_COROUTINE_H
#define PARALLEL_COROUTINE_H

#include "../../src/runtime.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Coroutine Coroutine;
typedef struct VM VM;

typedef enum {
	COROUTINE_READY,
	COROUTINE_RUNNING,
	COROUTINE_BLOCKED
} CoroutineState;

struct Coroutine {
	struct {
		struct Coroutine *next;
	} ready;

	Obj thunk;
	VM *vm;
	CoroutineState state;
	int id;
};

Coroutine *coroutine_new(VM *vm, Obj thunk);
void coroutine_free(Coroutine *co);
void coroutine_resume(Coroutine *co);

#ifdef __cplusplus
}
#endif

#endif
