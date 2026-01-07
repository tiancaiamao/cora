#include "../../src/runtime.h"
#include "coroutine.h"
#include "vm.h"
#include <stdatomic.h>
#include <stdlib.h>

static atomic_int next_vm_id = 0;

static void
cora_parallel_init(Cora *co, int label, Obj *R) {
	Obj num_threads = R[1];
	int n = fixnum(num_threads);

	vm_runtime_init(n);
	coraReturn(co, True);
}

static void
cora_spawn(Cora *co, int label, Obj *R) {
	VM *vm = get_current_vm();
	if (!vm) {
		coraReturn(co, False);
		return;
	}

	Obj thunk = R[1];
	Coroutine *coro = coroutine_new(vm, thunk);

	if (!coro) {
		coraReturn(co, False);
		return;
	}

	spawn_in_current_vm(thunk);
	coraReturn(co, True);
}

static void
cora_vm_get_current_id(Cora *co, int label, Obj *R) {
	VM *vm = get_current_vm();
	if (vm) {
		coraReturn(co, makeNumber(vm->id));
	} else {
		coraReturn(co, makeNumber(-1));
	}
}

void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	char *module = bytesData(pkg);	
    struct registerModule module = {NULL, 
	coraRegisterAPI(co, module, "parallel-runtime-init", cora_parallel_init, 1);
    coraRegisterAPI(co, module, "spawn", cora_spawn, 1);
    coraRegisterAPI(co, module, "vm-get-current-id", cora_vm_get_current_id, 0);
    coraReturn(co, intern("parallel"));
}
