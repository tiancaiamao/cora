#include "../../src/runtime.h"
#include "vm.h"
#include <stdio.h>

// Cora binding functions
// These functions provide the interface between Cora language and C runtime

// Initialize parallel runtime
static void
cora_vm_runtime_init(Cora *co, int label, Obj *R) {
	(void)label; // Suppress unused parameter warning
	Obj num_threads_obj = R[1];
	int num_threads = fixnum(num_threads_obj);

	vm_runtime_init(num_threads);

	coraReturn(co, makeNumber(0)); // Return success
}

// Shutdown parallel runtime
static void
cora_vm_runtime_shutdown(Cora *co, int label, Obj *R) {
	(void)label; // Suppress unused parameter warning
	(void)R;     // Suppress unused parameter warning
	vm_runtime_shutdown();
	coraReturn(co, makeNumber(0)); // Return success
}

// Get current VM
static void
cora_vm_get_current(Cora *co, int label, Obj *R) {
	VM *vm = get_current_vm();
	if (vm) {
		// Return VM as a pointer wrapped in a number
		// This is a simplified approach - in reality we'd want a proper object type
		coraReturn(co, makeNumber((intptr_t)vm));
	} else {
		coraReturn(co, False);
	}
}

// Get current VM ID
static void
cora_vm_get_current_id(Cora *co, int label, Obj *R) {
	VM *vm = get_current_vm();
	if (vm) {
		coraReturn(co, makeNumber(vm->id));
	} else {
		coraReturn(co, makeNumber(-1));
	}
}

static void
coraAsVMInit(void *ptr) {
	Cora *co = (Cora *)ptr;
	Obj fn = symbolGet(co, intern("import"));
	Obj arg1 = makeCString(co->gc, "cora/init");
	Obj args[1] = {arg1};
	coraCall(co, fn, 1, args);
}

static void
coraAsVMExit(void *ptr) {
	Cora *co = (Cora *)ptr;
	coraExit(co);
	return;
}

static void
coraAsVMScheduleOnce(void *ptr) {
	Cora *co = (Cora *)ptr;
	// TODO: run the real schedule function?
	coraRun(co);
}

static void
coraAsVMImpl(VMImpl *impl) {
	Cora *co = coraInit();
	impl->self = (void *)co;
	impl->Init = coraAsVMInit;
	impl->ScheduleOnce = coraAsVMScheduleOnce;
	impl->Exit = coraAsVMExit;
	return;
}

// Spawn VM with thunk
static void
cora_spawn_vm_native(Cora *co, int label, Obj *R) {
	// Obj thunk = R[1];

	// For now, we'll create a VM but not actually execute the thunk
	// This requires deeper integration with CML's task system
	VM *vm = vm_create();
	coraAsVMImpl(&vm->impl);

	// TODO: Add thunk to VM's task queue
	// This is where we'd integrate with CML's enqueue-task

	// Enqueue VM for execution
	vm_enqueue_global(vm);

	coraReturn(co, makeNumber(vm->id));
}

// Wait for all VMs to complete (placeholder)
static void
cora_vm_runtime_wait_all(Cora *co, int label, Obj *R) {
	// This is a placeholder implementation
	// In reality, we'd need to track active VMs and wait for them

	// For now, just return immediately
	coraReturn(co, True);
}

void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	char *module = bytesData(pkg);
	coraRegisterAPI(co, module, "vm-runtime-init", cora_vm_runtime_init, 1);
	coraRegisterAPI(co, module, "vm-runtime-shutdown", cora_vm_runtime_shutdown, 0);
	coraRegisterAPI(co, module, "vm-get-current", cora_vm_get_current, 0);
	coraRegisterAPI(co, module, "vm-get-current-id", cora_vm_get_current_id, 0);
	coraRegisterAPI(co, module, "spawn-vm-native", cora_spawn_vm_native, 1);
	coraRegisterAPI(co, module, "vm-runtime-wait-all", cora_vm_runtime_wait_all, 0);
	coraReturn(co, intern("parallel"));
}