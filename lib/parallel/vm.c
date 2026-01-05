#include "vm.h"
#include "../../src/runtime.h"
#include <assert.h>
#include <pthread.h>
#include <stdint.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

// Use GCC builtin atomics for compatibility with int types
#define atomic_load(ptr) __atomic_load_n(ptr, __ATOMIC_SEQ_CST)
#define atomic_store(ptr, val) __atomic_store_n(ptr, val, __ATOMIC_SEQ_CST)
#define atomic_init(ptr, val) __atomic_store_n(ptr, val, __ATOMIC_SEQ_CST)
#define atomic_fetch_add(ptr, val) __atomic_fetch_add(ptr, val, __ATOMIC_SEQ_CST)

// Global runtime state
struct GlobalRuntime {
	// VM queue
	VM **vm_queue;
	int queue_head;
	int queue_tail;
	int queue_size;
	int queue_capacity;
	pthread_mutex_t queue_lock;
	pthread_cond_t queue_cond;

	// Worker threads
	pthread_t *worker_threads;
	int num_threads;

	// VM registry
	VM **vms;
	int vm_count;
	int vm_capacity;
	pthread_mutex_t vm_registry_lock;

	// Runtime state (using volatile for atomic access)
	volatile int shutdown;	 // 0/1
	volatile int next_vm_id; // Next VM ID to assign
};

static GlobalRuntime *g_runtime = NULL;
static __thread VM *current_vm = NULL;

// Time utilities
uint64_t
get_current_time_ms(void) {
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (uint64_t)(tv.tv_sec * 1000 + tv.tv_usec / 1000);
}

// VM queue operations
static void
vm_queue_init(GlobalRuntime *runtime, int capacity) {
	runtime->vm_queue = malloc(sizeof(VM *) * capacity);
	runtime->queue_head = 0;
	runtime->queue_tail = 0;
	runtime->queue_size = 0;
	runtime->queue_capacity = capacity;
	pthread_mutex_init(&runtime->queue_lock, NULL);
	pthread_cond_init(&runtime->queue_cond, NULL);
}

static void
vm_queue_destroy(GlobalRuntime *runtime) {
	free(runtime->vm_queue);
	pthread_mutex_destroy(&runtime->queue_lock);
	pthread_cond_destroy(&runtime->queue_cond);
}

void
vm_enqueue_global(VM *vm) {
	if (!g_runtime)
		return;

	pthread_mutex_lock(&g_runtime->queue_lock);

	// Check if already in queue
	if (atomic_load(&vm->in_global_queue)) {
		pthread_mutex_unlock(&g_runtime->queue_lock);
		return;
	}

	// Expand queue if needed
	if (g_runtime->queue_size >= g_runtime->queue_capacity) {
		int new_capacity = g_runtime->queue_capacity * 2;
		VM **new_queue = malloc(sizeof(VM *) * new_capacity);

		// Copy existing items
		for (int i = 0; i < g_runtime->queue_size; i++) {
			int idx = (g_runtime->queue_head + i) % g_runtime->queue_capacity;
			new_queue[i] = g_runtime->vm_queue[idx];
		}

		free(g_runtime->vm_queue);
		g_runtime->vm_queue = new_queue;
		g_runtime->queue_head = 0;
		g_runtime->queue_tail = g_runtime->queue_size;
		g_runtime->queue_capacity = new_capacity;
	}

	// Add to queue
	g_runtime->vm_queue[g_runtime->queue_tail] = vm;
	g_runtime->queue_tail = (g_runtime->queue_tail + 1) % g_runtime->queue_capacity;
	g_runtime->queue_size++;
	atomic_store(&vm->in_global_queue, 1);

	pthread_cond_signal(&g_runtime->queue_cond);
	pthread_mutex_unlock(&g_runtime->queue_lock);
}

VM *
vm_dequeue_global(void) {
	if (!g_runtime)
		return NULL;

	pthread_mutex_lock(&g_runtime->queue_lock);

	while (g_runtime->queue_size == 0 && !atomic_load(&g_runtime->shutdown)) {
		pthread_cond_wait(&g_runtime->queue_cond, &g_runtime->queue_lock);
	}

	if (atomic_load(&g_runtime->shutdown)) {
		pthread_mutex_unlock(&g_runtime->queue_lock);
		return NULL;
	}

	VM *vm = g_runtime->vm_queue[g_runtime->queue_head];
	g_runtime->queue_head = (g_runtime->queue_head + 1) % g_runtime->queue_capacity;
	g_runtime->queue_size--;
	atomic_store(&vm->in_global_queue, 0);

	pthread_mutex_unlock(&g_runtime->queue_lock);
	return vm;
}

// Check if VM has work by calling Cora function
// bool vm_has_work(VM* vm) {
// if (!vm || !vm->cora) return false;

// Call Cora function to check if task queue is empty
// This is a simplified check - in reality we'd call into Cora
// For now, assume VM has work if it's not marked for termination
// return !atomic_load(&vm->should_terminate);
// }

// Worker thread function
static void *
worker_thread(void *arg) {
	int thread_id = *(int *)arg;
	(void)thread_id; // Suppress unused variable warning
	free(arg);

	while (!atomic_load(&g_runtime->shutdown)) {
		VM *vm = vm_dequeue_global();
		if (!vm)
			break;

		set_current_vm(vm);

		VMRunResult result = vm_run_time_slice(vm, 50); // 50ms time slice

		switch (result) {
		case VM_TIME_EXPIRED:
		case VM_NO_WORK:
			// Re-enqueue VM
			vm_enqueue_global(vm);
			break;

		case VM_TERMINATED:
			// Destroy VM
			vm_destroy(vm);
			break;

		case VM_CONTINUE:
			// Should not happen with time slice
			vm_enqueue_global(vm);
			break;
		}

		set_current_vm(NULL);
	}

	return NULL;
}

// Initialize global runtime
void
vm_runtime_init(int num_threads) {
	g_runtime = malloc(sizeof(GlobalRuntime));

	// Initialize VM queue
	vm_queue_init(g_runtime, 64);

	// Initialize VM registry
	g_runtime->vm_capacity = 64;
	g_runtime->vms = calloc(g_runtime->vm_capacity, sizeof(VM *));
	g_runtime->vm_count = 0;
	pthread_mutex_init(&g_runtime->vm_registry_lock, NULL);

	// Initialize runtime state
	atomic_init(&g_runtime->shutdown, 0);
	atomic_init(&g_runtime->next_vm_id, 1);

	// Start worker threads
	g_runtime->num_threads = num_threads;
	g_runtime->worker_threads = malloc(sizeof(pthread_t) * num_threads);

	for (int i = 0; i < num_threads; i++) {
		int *thread_id = malloc(sizeof(int));
		*thread_id = i;
		pthread_create(&g_runtime->worker_threads[i], NULL, worker_thread, thread_id);
	}
}

// Shutdown runtime
void
vm_runtime_shutdown(void) {
	if (!g_runtime)
		return;

	atomic_store(&g_runtime->shutdown, 1);

	// Wake up all worker threads
	pthread_mutex_lock(&g_runtime->queue_lock);
	pthread_cond_broadcast(&g_runtime->queue_cond);
	pthread_mutex_unlock(&g_runtime->queue_lock);

	// Wait for worker threads
	for (int i = 0; i < g_runtime->num_threads; i++) {
		pthread_join(g_runtime->worker_threads[i], NULL);
	}

	// Cleanup
	free(g_runtime->worker_threads);
	free(g_runtime->vms);
	pthread_mutex_destroy(&g_runtime->vm_registry_lock);
	vm_queue_destroy(g_runtime);

	free(g_runtime);
	g_runtime = NULL;
}

// Create a new VM
VM *
vm_create(void) {
	VM *vm = malloc(sizeof(VM));
	vm->id = atomic_fetch_add(&g_runtime->next_vm_id, 1);
	vm->is_running = false;
	vm->time_slice_start = 0;
	atomic_init(&vm->in_global_queue, 0);
	atomic_init(&vm->should_terminate, 0);
	pthread_mutex_init(&vm->lock, NULL);

	// Register VM globally
	pthread_mutex_lock(&g_runtime->vm_registry_lock);

	// Expand registry if needed
	if (g_runtime->vm_count >= g_runtime->vm_capacity) {
		g_runtime->vm_capacity *= 2;
		g_runtime->vms = realloc(g_runtime->vms,
			sizeof(VM *) * g_runtime->vm_capacity);
	}

	g_runtime->vms[g_runtime->vm_count++] = vm;

	pthread_mutex_unlock(&g_runtime->vm_registry_lock);

	return vm;
}

// Destroy VM
void
vm_destroy(VM *vm) {
	if (!vm)
		return;

	// Remove from registry
	pthread_mutex_lock(&g_runtime->vm_registry_lock);
	for (int i = 0; i < g_runtime->vm_count; i++) {
		if (g_runtime->vms[i] == vm) {
			// Move last element to this position
			g_runtime->vms[i] = g_runtime->vms[g_runtime->vm_count - 1];
			g_runtime->vm_count--;
			break;
		}
	}
	pthread_mutex_unlock(&g_runtime->vm_registry_lock);

	// Cleanup VM
	vm->impl.Exit(vm->impl.self);
	pthread_mutex_destroy(&vm->lock);
	free(vm);
}

// Run VM for a time slice
VMRunResult
vm_run_time_slice(VM *vm, int time_slice_ms) {
	if (!vm)
		return VM_TERMINATED;

	vm->is_running = true;
	vm->time_slice_start = get_current_time_ms();

	// Simple implementation: just call coraRun with time limit
	// In a real implementation, we'd need to modify coraRun to be interruptible

	// For now, we'll simulate by calling schedule() from CML
	// This is a placeholder - we need to integrate with the actual CML scheduling

	// Check if VM should terminate
	if (atomic_load(&vm->should_terminate)) {
		vm->is_running = false;
		return VM_TERMINATED;
	}

	// Simulate some work
	usleep(1000); // 1ms of "work"
	vm->impl.ScheduleOnce(vm->impl.self);
	// coraRun(vm->cora);

	vm->is_running = false;

	// Check elapsed time
	uint64_t elapsed = get_current_time_ms() - vm->time_slice_start;
	if (elapsed >= (uint64_t)time_slice_ms) {
		return VM_TIME_EXPIRED;
	}

	// Check if VM has more work
	if (vm->impl.HasWork(vm->impl.self)) {
		return VM_CONTINUE;
	} else {
		return VM_NO_WORK;
	}
}

// Current VM management
VM *
get_current_vm(void) {
	return current_vm;
}

void
set_current_vm(VM *vm) {
	current_vm = vm;
}

// Spawn functions (to be called from Cora)
int
spawn_vm_native(void *thunk) {
	(void)thunk; // Suppress unused parameter warning
	VM *vm = vm_create();

	// TODO: Add thunk to VM's task queue
	// This requires integration with CML's task queue system
	// Cora *co = vm->cora;
	// Obj fn = symbolGet(co, intern("import"));
	// Obj arg1 = makeCString(co->gc, "cora/init");
	// Obj args[1] = {arg1};
	// coraCall(co, fn, 1, args);
	// coraRun(co);
	vm->impl.Init(vm->impl.self);

	// Enqueue VM for execution
	vm_enqueue_global(vm);

	return vm->id;
}

void
spawn_in_current_vm(void *thunk) {
	(void)thunk; // Suppress unused parameter warning
	VM *vm = get_current_vm();
	if (!vm)
		return;

	// TODO: Add thunk to current VM's task queue
	// This requires integration with CML's enqueue-task function
}
