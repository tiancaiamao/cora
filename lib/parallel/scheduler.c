#include "scheduler.h"
#include "coroutine.h"
#include "vm.h"
#include "../../src/runtime.h"
#include <assert.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ============================================================================
// VM Scheduler - manages coroutines within a single VM
// ============================================================================

// Scheduler state per VM
typedef struct VMScheduler {
	VM *vm;
	Cora *co; // The Cora VM instance

	// Ready queue (local, not thread-safe)
	Coroutine *ready_head;
	Coroutine *ready_tail;
	int ready_count;

	// Thread-safe ready queue (for cross-VM wakeups)
	Coroutine *shared_ready_head;
	Coroutine *shared_ready_tail;
	int shared_ready_count;
	pthread_mutex_t shared_lock;

	// Currently running coroutine
	Coroutine *current;

	// Coroutine ID counter
	int next_coroutine_id;
} VMScheduler;

// ============================================================================
// Coroutine Implementation
// ============================================================================

Coroutine *
coroutine_new(VM *vm, Obj thunk) {
	Coroutine *co = malloc(sizeof(Coroutine));
	co->thunk = thunk;
	co->vm = vm;
	co->state = COROUTINE_READY;
	co->ready.next = NULL;

	// Get scheduler from VM
	VMScheduler *sched = (VMScheduler *)vm->impl.self;
	co->id = __sync_fetch_and_add(&sched->next_coroutine_id, 1);

	return co;
}

void
coroutine_free(Coroutine *co) {
	if (co) {
		free(co);
	}
}

void
coroutine_resume(Coroutine *co) {
	if (!co || !co->vm) {
		return;
	}

	VMScheduler *sched = (VMScheduler *)co->vm->impl.self;
	if (!sched || !sched->co) {
		return;
	}

	// Mark as running
	co->state = COROUTINE_RUNNING;
	sched->current = co;

	// TODO: Fix thread-safety issue with Cora VM execution
	// The problem: coraRun() expects to be called in the same thread where
	// the Cora VM was created, because GC may use thread-local storage.
	// Current workaround: Skip execution to avoid segfault.
	// 
	// Original code that should work once GC is truly VM-bound:
	/*
	Cora *cora_vm = sched->co;
	coraCall0(cora_vm, co->thunk);
	coraRun(cora_vm);
	*/
	//
	// Possible solutions:
	// 1. Ensure each VM runs only on one specific worker thread (thread affinity)
	// 2. Make Cora VM/GC truly thread-independent
	// 3. Use a different execution model (e.g., message passing to main thread)

	// Coroutine finished
	co->state = COROUTINE_READY;
	sched->current = NULL;
}

// ============================================================================
// Scheduler Queue Operations
// ============================================================================

static void
enqueue_ready_local(VMScheduler *sched, Coroutine *co) {
	co->ready.next = NULL;
	if (sched->ready_tail) {
		sched->ready_tail->ready.next = co;
		sched->ready_tail = co;
	} else {
		sched->ready_head = co;
		sched->ready_tail = co;
	}
	sched->ready_count++;
}

static Coroutine *
dequeue_ready_local(VMScheduler *sched) {
	if (!sched->ready_head) {
		return NULL;
	}

	Coroutine *co = sched->ready_head;
	sched->ready_head = co->ready.next;
	if (!sched->ready_head) {
		sched->ready_tail = NULL;
	}
	co->ready.next = NULL;
	sched->ready_count--;
	return co;
}

// Thread-safe enqueue (for cross-VM wakeups)
void
vm_enqueue_coroutine(VM *vm, Coroutine *co) {
	if (!vm || !co) {
		return;
	}

	VMScheduler *sched = (VMScheduler *)vm->impl.self;
	if (!sched) {
		return;
	}

	pthread_mutex_lock(&sched->shared_lock);

	co->ready.next = NULL;
	if (sched->shared_ready_tail) {
		sched->shared_ready_tail->ready.next = co;
		sched->shared_ready_tail = co;
	} else {
		sched->shared_ready_head = co;
		sched->shared_ready_tail = co;
	}
	sched->shared_ready_count++;

	pthread_mutex_unlock(&sched->shared_lock);

	// Wake up the VM if not already running
	vm_enqueue_global(vm);
}

// Move coroutines from shared queue to local queue
static void
drain_shared_queue(VMScheduler *sched) {
	pthread_mutex_lock(&sched->shared_lock);

	Coroutine *head = sched->shared_ready_head;
	sched->shared_ready_head = NULL;
	sched->shared_ready_tail = NULL;
	sched->shared_ready_count = 0;

	pthread_mutex_unlock(&sched->shared_lock);

	// Add all to local queue
	while (head) {
		Coroutine *next = head->ready.next;
		head->ready.next = NULL;
		enqueue_ready_local(sched, head);
		head = next;
	}
}

// ============================================================================
// VMImpl Interface Implementation
// ============================================================================

static bool
vm_scheduler_has_work(void *ptr) {
	VMScheduler *sched = (VMScheduler *)ptr;
	if (!sched) {
		return false;
	}

	// Check local queue
	if (sched->ready_count > 0) {
		return true;
	}

	// Check shared queue
	pthread_mutex_lock(&sched->shared_lock);
	bool has_work = (sched->shared_ready_count > 0);
	pthread_mutex_unlock(&sched->shared_lock);

	return has_work;
}

static void
vm_scheduler_init(void *ptr) {
	VMScheduler *sched = (VMScheduler *)ptr;
	if (!sched || !sched->co) {
		return;
	}

	// Cora VM is already initialized in vm_create_with_scheduler
	// No additional initialization needed
}

static void
vm_scheduler_schedule_once(void *ptr) {
	VMScheduler *sched = (VMScheduler *)ptr;
	if (!sched) {
		return;
	}

	// First, drain shared queue
	drain_shared_queue(sched);

	// Get next ready coroutine
	Coroutine *co = dequeue_ready_local(sched);
	if (!co) {
		return; // No work
	}

	// Resume the coroutine
	coroutine_resume(co);

	// After execution, free the coroutine (simple approach)
	// In a real implementation, we'd check if it yielded or finished
	coroutine_free(co);
}

static void
vm_scheduler_exit(void *ptr) {
	VMScheduler *sched = (VMScheduler *)ptr;
	if (!sched) {
		return;
	}

	// Clean up Cora VM
	if (sched->co) {
		coraExit(sched->co);
		sched->co = NULL;
	}

	// Clean up local queue
	while (sched->ready_head) {
		Coroutine *co = dequeue_ready_local(sched);
		coroutine_free(co);
	}

	// Clean up shared queue
	pthread_mutex_lock(&sched->shared_lock);
	while (sched->shared_ready_head) {
		Coroutine *next = sched->shared_ready_head->ready.next;
		coroutine_free(sched->shared_ready_head);
		sched->shared_ready_head = next;
	}
	sched->shared_ready_count = 0;
	pthread_mutex_unlock(&sched->shared_lock);

	pthread_mutex_destroy(&sched->shared_lock);
	free(sched);
}

// ============================================================================
// Public Scheduler API
// ============================================================================

VM *
vm_create_with_scheduler(void) {
	VM *vm = vm_create();
	if (!vm) {
		return NULL;
	}

	// Create scheduler
	VMScheduler *sched = malloc(sizeof(VMScheduler));
	memset(sched, 0, sizeof(VMScheduler));
	sched->vm = vm;
	sched->co = coraInit();
	sched->next_coroutine_id = 1;
	pthread_mutex_init(&sched->shared_lock, NULL);

	// Set up VMImpl
	vm->impl.self = sched;
	vm->impl.HasWork = vm_scheduler_has_work;
	vm->impl.Init = vm_scheduler_init;
	vm->impl.ScheduleOnce = vm_scheduler_schedule_once;
	vm->impl.Exit = vm_scheduler_exit;

	return vm;
}

void
vm_spawn_coroutine(VM *vm, Obj thunk) {
	if (!vm) {
		return;
	}

	VMScheduler *sched = (VMScheduler *)vm->impl.self;
	if (!sched) {
		return;
	}

	// Create new coroutine
	Coroutine *co = coroutine_new(vm, thunk);

	// Enqueue to local ready queue
	enqueue_ready_local(sched, co);
}

Cora *
vm_get_cora(VM *vm) {
	if (!vm) {
		return NULL;
	}

	VMScheduler *sched = (VMScheduler *)vm->impl.self;
	if (!sched) {
		return NULL;
	}

	return sched->co;
}
