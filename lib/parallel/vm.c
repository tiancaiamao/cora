#include "vm.h"
#include "../poller/poller.h"
#include "../../src/runtime.h"
#include <assert.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	// I/O Poller
	Poller *poller;

	// Runtime state (using volatile for atomic access)
	volatile int shutdown;	 // 0/1
	volatile int next_vm_id; // Next VM ID to assign
	volatile int running_vms;
};

typedef struct WakeupNode {
	struct WakeupNode *next;
	int handle;
	Obj value;
} WakeupNode;

struct CoraVM {
	Cora *cora;
	VM *owner;
	pthread_mutex_t wake_lock;
	WakeupNode *wake_head;
	WakeupNode *wake_tail;
	bool initialized;
	bool owns_cora;
	char *init_file;
	size_t init_len;
};

// static __thread VM *current_vm = NULL;

static inline GlobalRuntime *
vm_runtime_state(void) {
	return (GlobalRuntime *)coraParallelRuntimeGet();
}

static void cora_vm_schedule_once(void *ptr);
static bool cora_vm_has_work(void *ptr);
static void cora_vm_exit(void *ptr);
static Obj cora_vm_get_resume_fn(Cora *co);

// Time utilities
uint64_t
get_current_time_ms(void) {
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (uint64_t)(tv.tv_sec * 1000 + tv.tv_usec / 1000);
}

static void
cora_vm_wakeup_init(CoraVM *vm) {
	pthread_mutex_init(&vm->wake_lock, NULL);
	vm->wake_head = NULL;
	vm->wake_tail = NULL;
}

static void
cora_vm_wakeup_destroy(CoraVM *vm) {
	pthread_mutex_lock(&vm->wake_lock);
	WakeupNode *node = vm->wake_head;
	vm->wake_head = NULL;
	vm->wake_tail = NULL;
	pthread_mutex_unlock(&vm->wake_lock);

	while (node) {
		WakeupNode *next = node->next;
		free(node);
		node = next;
	}

	pthread_mutex_destroy(&vm->wake_lock);
}

static void
cora_vm_set_init_file(CoraVM *vm, str fileName) {
	if (!vm) {
		return;
	}

	free(vm->init_file);
	vm->init_file = NULL;
	vm->init_len = 0;

	if (fileName.str && fileName.len > 0) {
		vm->init_file = malloc((size_t)fileName.len + 1);
		if (!vm->init_file) {
			return;
		}
		memcpy(vm->init_file, fileName.str, (size_t)fileName.len);
		vm->init_file[fileName.len] = '\0';
		vm->init_len = (size_t)fileName.len;
	}

	vm->initialized = false;
}

CoraVM *
cora_vm_self(Cora *co) {
	if (!co) {
		return NULL;
	}

	Obj sym = intern("*cora-vm*");
	Binding bind = bindSymbol(co, sym);
	Obj existing = vecGet(&co->globals, bind.idx);
	if (existing != Undef && iscobj(existing)) {
		return mustCObj(existing);
	}

	CoraVM *vm = malloc(sizeof(CoraVM));
	if (!vm) {
		return NULL;
	}
	memset(vm, 0, sizeof(CoraVM));
	vm->cora = co;
	vm->owner = NULL;
	vm->initialized = true;
	vm->owns_cora = false;
	vm->init_file = NULL;
	vm->init_len = 0;
	cora_vm_wakeup_init(vm);

	primSet(co, sym, makeCObj(vm));
	return vm;
}

static WakeupNode *
cora_vm_wakeup_take(CoraVM *vm) {
	pthread_mutex_lock(&vm->wake_lock);
	WakeupNode *head = vm->wake_head;
	vm->wake_head = NULL;
	vm->wake_tail = NULL;
	pthread_mutex_unlock(&vm->wake_lock);
	return head;
}

void
cora_vm_enqueue(CoraVM *vm, int handle, Obj value) {
	if (!vm) {
		return;
	}

	if (!vm_runtime_state()) {
		Obj resume_fn = cora_vm_get_resume_fn(vm->cora);
		if (resume_fn == Undef) {
			return;
		}
		coraCall2(vm->cora, resume_fn, makeNumber(handle), value);
		coraRun(vm->cora);
		return;
	}

	if (!vm->owner) {
		return;
	}

	WakeupNode *node = malloc(sizeof(WakeupNode));
	if (!node) {
		return;
	}
	node->handle = handle;
	node->value = value;
	node->next = NULL;

	pthread_mutex_lock(&vm->wake_lock);
	if (vm->wake_tail) {
		vm->wake_tail->next = node;
	} else {
		vm->wake_head = node;
	}
	vm->wake_tail = node;
	pthread_mutex_unlock(&vm->wake_lock);

	vm_enqueue_global(vm->owner);
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
	GlobalRuntime *runtime = vm_runtime_state();
	if (!runtime)
		return;

	pthread_mutex_lock(&runtime->queue_lock);

	// Check if already in queue
	if (atomic_load(&vm->in_global_queue)) {
		pthread_mutex_unlock(&runtime->queue_lock);
		return;
	}

	// Expand queue if needed
	if (runtime->queue_size >= runtime->queue_capacity) {
		int new_capacity = runtime->queue_capacity * 2;
		VM **new_queue = malloc(sizeof(VM *) * new_capacity);

		// Copy existing items
		for (int i = 0; i < runtime->queue_size; i++) {
			int idx = (runtime->queue_head + i) % runtime->queue_capacity;
			new_queue[i] = runtime->vm_queue[idx];
		}

		free(runtime->vm_queue);
		runtime->vm_queue = new_queue;
		runtime->queue_head = 0;
		runtime->queue_tail = runtime->queue_size;
		runtime->queue_capacity = new_capacity;
	}

	// Add to queue
	runtime->vm_queue[runtime->queue_tail] = vm;
	runtime->queue_tail = (runtime->queue_tail + 1) % runtime->queue_capacity;
	runtime->queue_size++;
	atomic_store(&vm->in_global_queue, 1);

	pthread_cond_signal(&runtime->queue_cond);
	pthread_mutex_unlock(&runtime->queue_lock);
}

VM *
vm_dequeue_global(void) {
	GlobalRuntime *runtime = vm_runtime_state();
	if (!runtime)
		return NULL;

	pthread_mutex_lock(&runtime->queue_lock);

	for (;;) {
		while (runtime->queue_size == 0 && !atomic_load(&runtime->shutdown)) {
			pthread_cond_wait(&runtime->queue_cond, &runtime->queue_lock);
		}

		if (atomic_load(&runtime->shutdown)) {
			pthread_mutex_unlock(&runtime->queue_lock);
			return NULL;
		}

		VM *vm = runtime->vm_queue[runtime->queue_head];
		runtime->queue_head = (runtime->queue_head + 1) % runtime->queue_capacity;
		runtime->queue_size--;
		atomic_store(&vm->in_global_queue, 0);

		/*
		 * Mark VM running while queue lock is still held, so a duplicate
		 * queue entry cannot race and start the same VM concurrently.
		 */
		pthread_mutex_lock(&vm->lock);
		if (vm->is_running) {
			pthread_mutex_unlock(&vm->lock);
			continue;
		}
		vm->is_running = true;
		pthread_mutex_unlock(&vm->lock);

		pthread_mutex_unlock(&runtime->queue_lock);
		return vm;
	}
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
	(void)thread_id;
	free(arg);

	for (;;) {
		GlobalRuntime *runtime = vm_runtime_state();
		if (!runtime || atomic_load(&runtime->shutdown)) {
			break;
		}
		VM *vm = vm_dequeue_global();
		if (!vm)
			break;

		// set_current_vm(vm);

		atomic_fetch_add(&runtime->running_vms, 1);
		VMRunResult result = vm_run_time_slice(vm, 50); // 50ms time slice
		atomic_fetch_add(&runtime->running_vms, -1);

		pthread_mutex_lock(&vm->lock);
		vm->is_running = false;
		pthread_mutex_unlock(&vm->lock);

		switch (result) {
		case VM_TIME_EXPIRED:
		case VM_CONTINUE:
			// VM has more work, re-enqueue for next time slice
			vm_enqueue_global(vm);
			break;

		case VM_NO_WORK:
			// VM has no ready tasks, don't re-enqueue
			// It will be woken up by external events (mailbox/poller/waker)
			break;

		case VM_TERMINATED:
			// VM lifecycle ended, destroy it
			vm_destroy(vm);
			break;
		}

		// set_current_vm(NULL);
	}

	return NULL;
}

// Initialize global runtime
void
vm_runtime_init(int num_threads) {
	// Ensure runtime is not already initialized
	if (vm_runtime_state() != NULL) {
		// Already initialized, ignore or assert based on policy
		return;
	}

	GlobalRuntime *runtime = calloc(1, sizeof(GlobalRuntime));
	if (!runtime) {
		return;
	}

	// Initialize VM queue
	vm_queue_init(runtime, 64);

	// Initialize VM registry
	runtime->vm_capacity = 64;
	runtime->vms = calloc(runtime->vm_capacity, sizeof(VM *));
	runtime->vm_count = 0;
	pthread_mutex_init(&runtime->vm_registry_lock, NULL);

	// Initialize runtime state
	atomic_init(&runtime->shutdown, 0);
	atomic_init(&runtime->next_vm_id, 1);
	atomic_init(&runtime->running_vms, 0);

	// Initialize I/O Poller
	runtime->poller = poller_new();
	coraParallelPollerSet(runtime->poller);

	// Start worker threads
	runtime->num_threads = 0;
	runtime->worker_threads = malloc(sizeof(pthread_t) * num_threads);
	if (!runtime->vms || !runtime->worker_threads) {
		if (runtime->poller) {
			poller_free(runtime->poller);
		}
		free(runtime->worker_threads);
		free(runtime->vms);
		pthread_mutex_destroy(&runtime->vm_registry_lock);
		vm_queue_destroy(runtime);
		free(runtime);
		return;
	}

	if (!coraParallelRuntimeSetIfAbsent(runtime)) {
		if (runtime->poller) {
			poller_free(runtime->poller);
		}
		free(runtime->worker_threads);
		free(runtime->vms);
		pthread_mutex_destroy(&runtime->vm_registry_lock);
		vm_queue_destroy(runtime);
		free(runtime);
		return;
	}

	for (int i = 0; i < num_threads; i++) {
		int *thread_id = malloc(sizeof(int));
		if (!thread_id) {
			continue;
		}
		*thread_id = i;
		if (pthread_create(&runtime->worker_threads[runtime->num_threads], NULL,
			worker_thread, thread_id) == 0) {
			runtime->num_threads++;
		} else {
			free(thread_id);
		}
	}
}

// Shutdown runtime
void
vm_runtime_shutdown(void) {
	GlobalRuntime *runtime = vm_runtime_state();
	if (!runtime)
		return;

	atomic_store(&runtime->shutdown, 1);

	// Wake up all worker threads
	pthread_mutex_lock(&runtime->queue_lock);
	pthread_cond_broadcast(&runtime->queue_cond);
	pthread_mutex_unlock(&runtime->queue_lock);

	// Wait for worker threads
	for (int i = 0; i < runtime->num_threads; i++) {
		pthread_join(runtime->worker_threads[i], NULL);
	}

	// Cleanup poller
	coraParallelPollerSet(NULL);
	if (runtime->poller) {
		poller_free(runtime->poller);
		runtime->poller = NULL;
	}

	// Cleanup
	if (runtime->vm_count > 0) {
		int vm_count = runtime->vm_count;
		VM **vm_list = malloc(sizeof(VM *) * vm_count);
		if (vm_list) {
			memcpy(vm_list, runtime->vms, sizeof(VM *) * vm_count);
			for (int i = 0; i < vm_count; i++) {
				vm_destroy(vm_list[i]);
			}
			free(vm_list);
		}
	}
	free(runtime->worker_threads);
	free(runtime->vms);
	pthread_mutex_destroy(&runtime->vm_registry_lock);
	vm_queue_destroy(runtime);
	coraParallelMailboxRegistryReset();

	coraParallelRuntimeClearIfMatch(runtime);
	free(runtime);
}

Poller *
vm_runtime_get_poller(void) {
	GlobalRuntime *runtime = vm_runtime_state();
	if (!runtime) {
		return NULL;
	}
	return runtime->poller;
}

void
vm_runtime_wait_all(void) {
	GlobalRuntime *runtime = vm_runtime_state();
	if (!runtime) {
		return;
	}

	int idle_poller_loops = 0;
	for (;;) {
		if (atomic_load(&runtime->shutdown)) {
			return;
		}

		pthread_mutex_lock(&runtime->queue_lock);
		int queue_size = runtime->queue_size;
		pthread_mutex_unlock(&runtime->queue_lock);
		int running = atomic_load(&runtime->running_vms);
		int active_handles = 0;
		if (runtime->poller) {
			active_handles = poller_active_handle_count(runtime->poller);
		}

		if (queue_size == 0 && running == 0 && active_handles == 0) {
			break;
		}

		// If no descriptors are being monitored, yield briefly to avoid busy spin.
		if (!runtime->poller || active_handles == 0) {
			usleep(1000);
			continue;
		}

		// Execute poller operations (100ms timeout)
		// This detects I/O events and delivers wakeups to VM queues.
		int nfds = 0;
		void **active = poller_poll(runtime->poller, 100, &nfds);
		if (nfds < 0) {
			usleep(1000);
			if (active) {
				free(active);
			}
			continue;
		}

		// Process active handles and wake up VMs
		for (int i = 0; i < nfds; i++) {
			EventHandle *eh = (EventHandle *)active[i];
			if (!eh) {
				continue;
			}
			if (eh->target_vm && eh->wakeup_handle >= 0) {
				// We pass True as an event token; coroutine resume logic reads state from handle.
				cora_vm_enqueue((CoraVM *)eh->target_vm, eh->wakeup_handle, True);
			}
		}

		if (queue_size == 0 && running == 0) {
			if (nfds == 0) {
				idle_poller_loops++;
			} else {
				idle_poller_loops = 0;
			}
			/*
			 * If runtime is otherwise idle but poller keeps reporting no events
			 * while active handles remain, treat them as stale registrations.
			 */
			if (idle_poller_loops > 50) {
				break;
			}
		} else {
			idle_poller_loops = 0;
		}

		if (active) {
			free(active);
		}
	}
}

static void vm_impl_init(VMImpl *impl);

// Create a new VM
VM *
vm_create(void) {
	GlobalRuntime *runtime = vm_runtime_state();
	// Runtime must be initialized before creating VMs
	if (runtime == NULL) {
		return NULL;
	}

	VM *vm = malloc(sizeof(VM));
	vm->id = atomic_fetch_add(&runtime->next_vm_id, 1);
	vm->is_running = false;
	vm->time_slice_start = 0;
	atomic_init(&vm->in_global_queue, 0);
	atomic_init(&vm->should_terminate, 0);
	vm_impl_init(&vm->impl);
	if (vm->impl.self) {
		((CoraVM *)vm->impl.self)->owner = vm;
	}

	pthread_mutex_init(&vm->lock, NULL);
	// Register VM globally
	pthread_mutex_lock(&runtime->vm_registry_lock);
	// Expand registry if needed
	if (runtime->vm_count >= runtime->vm_capacity) {
		runtime->vm_capacity *= 2;
		runtime->vms = realloc(runtime->vms,
			sizeof(VM *) * runtime->vm_capacity);
	}
	runtime->vms[runtime->vm_count++] = vm;
	pthread_mutex_unlock(&runtime->vm_registry_lock);
	return vm;
}

void
vm_set_init_file(VM *vm, str fileName) {
	if (!vm || !vm->impl.self) {
		return;
	}
	cora_vm_set_init_file((CoraVM *)vm->impl.self, fileName);
}

VM *
vm_attach_current(Cora *co) {
	GlobalRuntime *runtime = vm_runtime_state();
	if (!runtime || !co) {
		return NULL;
	}

	CoraVM *sched = cora_vm_self(co);
	if (!sched) {
		return NULL;
	}
	if (sched->owner) {
		return sched->owner;
	}

	VM *vm = malloc(sizeof(VM));
	vm->id = atomic_fetch_add(&runtime->next_vm_id, 1);
	vm->is_running = false;
	vm->time_slice_start = 0;
	atomic_init(&vm->in_global_queue, 0);
	atomic_init(&vm->should_terminate, 0);

	vm->impl.self = sched;
	vm->impl.HasWork = cora_vm_has_work;
	vm->impl.Init = NULL;
	vm->impl.ScheduleOnce = cora_vm_schedule_once;
	vm->impl.Exit = cora_vm_exit;

	sched->owner = vm;
	sched->cora = co;
	sched->initialized = true;
	sched->owns_cora = false;

	pthread_mutex_init(&vm->lock, NULL);
	// Register VM globally
	pthread_mutex_lock(&runtime->vm_registry_lock);
	if (runtime->vm_count >= runtime->vm_capacity) {
		runtime->vm_capacity *= 2;
		runtime->vms = realloc(runtime->vms,
			sizeof(VM *) * runtime->vm_capacity);
	}
	runtime->vms[runtime->vm_count++] = vm;
	pthread_mutex_unlock(&runtime->vm_registry_lock);

	vm_enqueue_global(vm);
	return vm;
}

// Destroy VM
void
vm_destroy(VM *vm) {
	if (!vm)
		return;
	GlobalRuntime *runtime = vm_runtime_state();

	// Remove from registry
	if (runtime) {
		pthread_mutex_lock(&runtime->vm_registry_lock);
		for (int i = 0; i < runtime->vm_count; i++) {
			if (runtime->vms[i] == vm) {
			// Move last element to this position
				runtime->vms[i] = runtime->vms[runtime->vm_count - 1];
				runtime->vm_count--;
				break;
			}
		}
		pthread_mutex_unlock(&runtime->vm_registry_lock);
	}

	// Cleanup VM
	if (vm->impl.self) {
		CoraVM *sched = (CoraVM *)vm->impl.self;
		if (!sched->owns_cora) {
			sched->owner = NULL;
		}
	}
	vm->impl.Exit(vm->impl.self);
	pthread_mutex_destroy(&vm->lock);
	free(vm);
}

// Run VM for a time slice
VMRunResult
vm_run_time_slice(VM *vm, int time_slice_ms) {
	if (!vm)
		return VM_TERMINATED;

	vm->time_slice_start = get_current_time_ms();

	// Check if VM should terminate
	if (atomic_load(&vm->should_terminate)) {
		return VM_TERMINATED;
	}

	if (vm->impl.Init && vm->impl.self) {
		CoraVM *sched = (CoraVM *)vm->impl.self;
		if (!sched->initialized) {
			str fileName = {0};
			if (sched->init_file && sched->init_len > 0) {
				fileName.str = sched->init_file;
				fileName.len = (int)sched->init_len;
			}
			vm->impl.Init(vm->impl.self, fileName);
			free(sched->init_file);
			sched->init_file = NULL;
			sched->init_len = 0;
			sched->initialized = true;
		}
	}

	// Call ScheduleOnce
	if (vm->impl.ScheduleOnce) {
		vm->impl.ScheduleOnce(vm->impl.self);
	}

	// Check elapsed time
	uint64_t elapsed = get_current_time_ms() - vm->time_slice_start;
	if (elapsed >= (uint64_t)time_slice_ms) {
		return VM_TIME_EXPIRED;
	}

	// Check if VM has more work
	bool has_work = vm->impl.HasWork && vm->impl.HasWork(vm->impl.self);
	if (has_work) {
		return VM_CONTINUE;
	} else {
		return VM_NO_WORK;
	}
}

// ==========================
// Cora implements VMImpl interface.
// ==========================

static void
cora_vm_init(void *self, str fileName) {
	CoraVM *vm = (CoraVM*)self;
	if (!vm) return;
	Cora *co = vm->cora;

	// So in cora, CoraVM object can be obtain by *cora-vm*
	primSet(co, intern("*cora-vm*"), makeCObj(vm));
	// primSet(co, intern("cora/lib/cml#*schedule-mode*"), intern("parallel"));

	// It's terrible to import so many things to make VM runnable.
	Obj fn = symbolGet(co, intern("import"));
	Obj arg1 = makeCString(co->gc, "cora/init");
	coraCall1(co, fn, arg1);
	coraRun(co);

	arg1 = makeCString(co->gc, "cora/lib/toc");
	coraCall1(co, fn, arg1);
	coraRun(co);

	if (fileName.str && fileName.len > 0) {
    	Obj s = makeString(co->gc, fileName.str, fileName.len);
    	fn = symbolGet(co, intern("load"));
    	coraCall1(co, fn, s);
	    coraRun(co);
    }
}

static Obj
cora_vm_get_resume_fn(Cora *co) {
	Obj resume_fn = symbolGet(co,
		intern("cora/lib/cml#resume-handle"));
	if (resume_fn != Undef) {
		return resume_fn;
	}

	Obj import_fn = symbolGet(co, intern("import"));
	if (import_fn == Undef) {
		return Undef;
	}

	Obj arg = makeCString(co->gc, "cora/lib/cml");
	coraCall1(co, import_fn, arg);
	coraRun(co);

	return symbolGet(co, intern("cora/lib/cml#resume-handle"));
}

static void
cora_vm_process_wakeups(CoraVM *vm) {
	if (!vm || !vm->cora) {
		return;
	}

	Obj resume_fn = cora_vm_get_resume_fn(vm->cora);
	if (resume_fn == Undef) {
		return;
	}

	WakeupNode *node = cora_vm_wakeup_take(vm);
	while (node) {
		WakeupNode *next = node->next;
		coraCall2(vm->cora, resume_fn,
			makeNumber(node->handle), node->value);
		coraRun(vm->cora);
		free(node);
		node = next;
	}
}

static void
cora_vm_schedule_once(void *ptr) {
	CoraVM *vm = (CoraVM*)ptr;
	if (!vm || !vm->cora) {
		return;
	}

	Cora *co = vm->cora;
	if (!co) {
		return;
	}

	cora_vm_process_wakeups(vm);

	// Get schedule-once function from Cora environment
	Obj schedule_once_fn = symbolGet(co, intern("cora/lib/cml#schedule-once"));
	if (schedule_once_fn == Undef) {
		// schedule-once not found, CML may not be loaded
		return;
	}

	// Call schedule-once to run one scheduling iteration
	// This will execute one task from the task queue and return
	coraCall0(co, schedule_once_fn);
	coraRun(co);
}

static bool
cora_vm_has_work(void *ptr) {
	CoraVM *vm = (CoraVM *)ptr;
	if (!vm || !vm->cora) {
		return false;
	}

	Obj queue = symbolGet(vm->cora, intern("cora/lib/cml#*task-queue*"));
	if (queue == Undef || queue == Nil) {
		return false;
	}

	Obj empty_fn = symbolGet(vm->cora, intern("cora/lib/queue#queue-empty?"));
	if (empty_fn == Undef) {
		return false;
	}

	coraCall1(vm->cora, empty_fn, queue);
	coraRun(vm->cora);
	return vm->cora->res != True;
}

static void
cora_vm_exit(void *ptr) {
	CoraVM *sched = (CoraVM *)ptr;
	if (!sched) {
		return;
	}

	if (!sched->owns_cora) {
		return;
	}

	// Clean up Cora VM
	if (sched->cora) {
		coraExit(sched->cora);
		sched->cora = NULL;
	}
	free(sched->init_file);
	sched->init_file = NULL;
	sched->init_len = 0;
	cora_vm_wakeup_destroy(sched);
	free(sched);
}

static void
vm_impl_init(VMImpl *impl) {
	CoraVM *sched = malloc(sizeof(CoraVM));
	memset(sched, 0, sizeof(CoraVM));
	sched->cora = coraInit();
	sched->initialized = false;
	sched->owns_cora = true;
	sched->init_file = NULL;
	sched->init_len = 0;
	cora_vm_wakeup_init(sched);

	impl->self = sched;
	impl->HasWork = cora_vm_has_work;
	impl->Init = cora_vm_init;
	impl->ScheduleOnce = cora_vm_schedule_once;
	impl->Exit = cora_vm_exit;
}
