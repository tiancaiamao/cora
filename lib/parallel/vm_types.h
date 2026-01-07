#ifndef VM_TYPES_H
#define VM_TYPES_H

#include "../../src/runtime.h"
#include <pthread.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct Coroutine Coroutine;

typedef struct ReadyNode {
	struct ReadyNode *next;
} ReadyNode;

typedef struct CoroutineQueue {
	struct Coroutine *head;
	struct Coroutine *tail;
} CoroutineQueue;

typedef enum {
	VM_CONTINUE,
	VM_TIME_EXPIRED,
	VM_NO_WORK,
	VM_TERMINATED
} VMRunResult;

typedef struct {
	void *self;
	bool (*HasWork)(void *ptr);
	void (*Init)(void *ptr);
	void (*ScheduleOnce)(void *ptr);
	void (*Exit)(void *ptr);
} VMImpl;

typedef struct VM VM;

typedef struct GlobalRuntime GlobalRuntime;

struct VM {
	int id;
	VMImpl impl;
	Cora *co;
	pthread_mutex_t lock;
	bool is_running;
	uint64_t time_slice_start;
	volatile int in_global_queue;
	volatile int should_terminate;
};

struct GlobalRuntime {
	VM **vm_queue;
	int queue_head;
	int queue_tail;
	int queue_size;
	int queue_capacity;
	pthread_mutex_t queue_lock;
	pthread_cond_t queue_cond;

	pthread_t *worker_threads;
	int num_threads;

	VM **vms;
	int vm_count;
	int vm_capacity;
	pthread_mutex_t vm_registry_lock;

	volatile int shutdown;
	volatile int next_vm_id;
};

#endif
