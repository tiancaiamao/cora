#include "../../src/runtime.h"
#include "vm.h"
#include "mailbox.h"
#include "scheduler.h"
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
	
	// Initialize mailbox registry
	mailbox_registry_init();

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

static bool
coraAsVMHasWork(void *ptr) {
	Cora *co = (Cora *)ptr;
	(void)co;
	// TODO: Check if Cora VM has ready tasks in its queue
	// For now, assume it always has work (will be refined when integrating scheduler)
	return true;
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
	impl->HasWork = coraAsVMHasWork;
	impl->Init = coraAsVMInit;
	impl->ScheduleOnce = coraAsVMScheduleOnce;
	impl->Exit = coraAsVMExit;
	return;
}

// Spawn VM with thunk
static void
cora_spawn_vm_native(Cora *co, int label, Obj *R) {
	Obj thunk = R[1];

	// Create VM with integrated scheduler
	VM *vm = vm_create_with_scheduler();
	if (!vm) {
		// Runtime not initialized or creation failed
		coraReturn(co, makeNumber(-1));
		return;
	}

	// Spawn the initial coroutine in the VM
	vm_spawn_coroutine(vm, thunk);

	// Enqueue VM for execution
	vm_enqueue_global(vm);

	coraReturn(co, makeNumber(vm->id));
}

// Spawn coroutine in current VM
static void
cora_spawn_coroutine(Cora *co, int label, Obj *R) {
	(void)label;
	Obj thunk = R[1];

	VM *vm = get_current_vm();
	if (!vm) {
		// Not in a VM context
		coraReturn(co, False);
		return;
	}

	vm_spawn_coroutine(vm, thunk);
	coraReturn(co, True);
}

// Wait for all VMs to complete (placeholder)
static void
cora_vm_runtime_wait_all(Cora *co, int label, Obj *R) {
	// This is a placeholder implementation
	// In reality, we'd need to track active VMs and wait for them

	// For now, just return immediately
	coraReturn(co, True);
}

// ============================================================================
// Mailbox API
// ============================================================================

// Create a new mailbox
static void
cora_mailbox_new(Cora *co, int label, Obj *R) {
	(void)label;
	Obj capacity_obj = R[1];
	
	// Check if capacity_obj is a valid number
	if (!isfixnum(capacity_obj)) {
		coraReturn(co, False);
		return;
	}
	
	int capacity = fixnum(capacity_obj);

	Mailbox *mb = mailbox_new(capacity);
	coraReturn(co, makeCObj(mb));
}

// Close a mailbox
static void
cora_mailbox_close(Cora *co, int label, Obj *R) {
	(void)label;
	Mailbox *mb = mustCObj(R[1]);
	mailbox_close(mb);
	coraReturn(co, True);
}

// Check if mailbox is closed
static void
cora_mailbox_is_closed(Cora *co, int label, Obj *R) {
	(void)label;
	Mailbox *mb = mustCObj(R[1]);
	bool closed = mailbox_is_closed(mb);
	coraReturn(co, closed ? True : False);
}

// Try to send to mailbox (non-blocking)
static void
cora_mailbox_send_try(Cora *co, int label, Obj *R) {
	(void)label;
	Mailbox *mb = mustCObj(R[1]);
	Obj msg = R[2];

	bool success = mailbox_send_try(mb, msg);
	coraReturn(co, success ? True : False);
}

// Try to receive from mailbox (non-blocking)
static void
cora_mailbox_recv_try(Cora *co, int label, Obj *R) {
	(void)label;
	Mailbox *mb = mustCObj(R[1]);
	Obj msg;

	bool success = mailbox_recv_try(mb, &msg);
	if (success) {
		coraReturn(co, msg);
	} else {
		coraReturn(co, False);
	}
}

// Publish mailbox to registry
static void
cora_mailbox_publish(Cora *co, int label, Obj *R) {
	(void)label;
	Obj name_obj = R[1];
	Mailbox *mb = mustCObj(R[2]);

	const char *name = bytesData(name_obj);
	bool success = mailbox_publish(name, mb);
	coraReturn(co, success ? True : False);
}

// Resolve mailbox from registry
static void
cora_mailbox_resolve(Cora *co, int label, Obj *R) {
	(void)label;
	Obj name_obj = R[1];
	const char *name = bytesData(name_obj);

	Mailbox *mb = mailbox_resolve(name);
	if (mb) {
		coraReturn(co, makeCObj(mb));
	} else {
		coraReturn(co, False);
	}
}

void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	char *module = bytesData(pkg);

	// VM runtime management
	coraRegisterAPI(co, module, "vm-runtime-init", cora_vm_runtime_init, 1);
	coraRegisterAPI(co, module, "vm-runtime-shutdown", cora_vm_runtime_shutdown, 0);
	coraRegisterAPI(co, module, "vm-get-current", cora_vm_get_current, 0);
	coraRegisterAPI(co, module, "vm-get-current-id", cora_vm_get_current_id, 0);
	coraRegisterAPI(co, module, "spawn-vm-native", cora_spawn_vm_native, 1);
	coraRegisterAPI(co, module, "spawn-coroutine", cora_spawn_coroutine, 1);
	coraRegisterAPI(co, module, "vm-runtime-wait-all", cora_vm_runtime_wait_all, 0);

	// Mailbox API
	coraRegisterAPI(co, module, "mailbox-new", cora_mailbox_new, 1);
	coraRegisterAPI(co, module, "mailbox-close", cora_mailbox_close, 1);
	coraRegisterAPI(co, module, "mailbox-is-closed", cora_mailbox_is_closed, 1);
	coraRegisterAPI(co, module, "mailbox-send-try", cora_mailbox_send_try, 2);
	coraRegisterAPI(co, module, "mailbox-recv-try", cora_mailbox_recv_try, 1);
	coraRegisterAPI(co, module, "mailbox-publish", cora_mailbox_publish, 2);
	coraRegisterAPI(co, module, "mailbox-resolve", cora_mailbox_resolve, 1);

	coraReturn(co, intern("parallel"));
}