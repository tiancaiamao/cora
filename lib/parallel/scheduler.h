#ifndef PARALLEL_SCHEDULER_H
#define PARALLEL_SCHEDULER_H

#include "../../src/runtime.h"
#include "coroutine.h"
#include "vm.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

// VM creation with integrated scheduler
VM *vm_create_with_scheduler(void);

// Spawn a coroutine in the VM
void vm_spawn_coroutine(VM *vm, Obj thunk);

// Enqueue a coroutine to VM's ready queue (thread-safe, for cross-VM wakeup)
void vm_enqueue_coroutine(VM *vm, Coroutine *co);

// Get the Cora VM instance from a VM
Cora *vm_get_cora(VM *vm);

#ifdef __cplusplus
}
#endif

#endif
