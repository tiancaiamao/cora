#ifndef VM_RUNTIME_H
#define VM_RUNTIME_H

#include "../../src/runtime.h"
#include <pthread.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Forward declarations
typedef struct VM VM;
typedef struct GlobalRuntime GlobalRuntime;

// VM execution results
typedef enum {
	VM_CONTINUE,	 // VM has more work to do
	VM_TIME_EXPIRED, // Time slice expired
	VM_NO_WORK,	 // No ready tasks
	VM_TERMINATED	 // VM should be destroyed
} VMRunResult;

// VMImpl is the interface definition, implemented by Cora
typedef struct {
	void *self;
	bool (*HasWork)(void *ptr);
	void (*Init)(void *ptr, str fileName);
	void (*ScheduleOnce)(void *ptr);
	void (*Exit)(void *ptr);
} VMImpl;

// VM structure
struct VM {
	int id;
	VMImpl impl;

	// Scheduling state
	bool is_running;	   // Currently being executed
	uint64_t time_slice_start; // Time slice start time

	// VM state (using volatile for atomic access)
	volatile int in_global_queue;  // Whether VM is in global queue (0/1)
	volatile int should_terminate; // VM should be terminated (0/1)

	pthread_mutex_t lock;
};

// Global runtime functions
void vm_runtime_init(int num_threads);
void vm_runtime_shutdown(void);

// VM management
VM *vm_create(void);
void vm_destroy(VM *vm);
VMRunResult vm_run_time_slice(VM *vm, int time_slice_ms);

// VM scheduling
void vm_enqueue_global(VM *vm);
VM *vm_dequeue_global(void);

// Spawn functions (called from Cora)
int spawn_vm_native(void *thunk); // Returns VM ID
void spawn_in_current_vm(void *thunk);

// Utility functions
uint64_t get_current_time_ms(void);
// VM *get_current_vm(void);
// void set_current_vm(VM *vm);

#endif // VM_RUNTIME_H
