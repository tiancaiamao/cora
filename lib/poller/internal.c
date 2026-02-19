#include "../../src/runtime.h"
#include "poller.h"
#include <stdlib.h>

static Obj
poller_symbol(void) {
	return intern("cora/lib/poller/internal#*poller*");
}

static Obj
global_get_if_bound(Cora *co, Obj sym) {
	strBuf name_buf = ptr(sym);
	str name = toStr(name_buf);
	Binding *binding = mapGet(&co->env, name);
	if (!binding) {
		return Undef;
	}
	return vecGet(&co->globals, binding->idx);
}

static Poller *
local_poller_get(Cora *co) {
	Binding bind = bindSymbol(co, poller_symbol());
	Obj value = globalRef(co, bind);
	if (value != Undef && iscobj(value)) {
		return mustCObj(value);
	}
	return NULL;
}

static void
local_poller_set(Cora *co, Poller *poller) {
	Binding bind = bindSymbol(co, poller_symbol());
	globalSet(co, bind, poller ? makeCObj(poller) : Nil);
}

static Poller *
get_active_poller(Cora *co) {
	Poller *runtime_poller = coraParallelPollerGet();
	if (runtime_poller) {
		return runtime_poller;
	}
	return local_poller_get(co);
}

static void
cora_poller_init(Cora *co, int label, Obj *R) {
	(void)label;
	(void)R;

	if (coraParallelPollerGet()) {
		coraReturn(co, True);
		return;
	}

	Poller *poller = local_poller_get(co);
	if (!poller) {
		poller = poller_new();
		if (!poller) {
			coraReturn(co, False);
			return;
		}
		local_poller_set(co, poller);
	}

	coraReturn(co, True);
}

static void
cora_poller_shutdown(Cora *co, int label, Obj *R) {
	(void)label;
	(void)R;

	if (coraParallelPollerGet()) {
		coraReturn(co, True);
		return;
	}

	Poller *poller = local_poller_get(co);
	if (poller) {
		poller_free(poller);
		local_poller_set(co, NULL);
	}

	coraReturn(co, True);
}

static void
cora_event_handle_new(Cora *co, int label, Obj *R) {
	(void)label;
	Obj fd_obj = R[1];

	if (!isfixnum(fd_obj)) {
		coraReturn(co, False);
		return;
	}

	int fd = fixnum(fd_obj);
	EventHandle *eh = event_handle_new(fd, NULL, NULL, NULL);
	coraReturn(co, eh ? makeCObj(eh) : False);
}

static void
cora_event_handle_enable_read(Cora *co, int label, Obj *R) {
	(void)label;
	EventHandle *eh = mustCObj(R[1]);
	event_handle_enable_read(eh);
	coraReturn(co, True);
}

static void
cora_event_handle_enable_write(Cora *co, int label, Obj *R) {
	(void)label;
	EventHandle *eh = mustCObj(R[1]);
	event_handle_enable_write(eh);
	coraReturn(co, True);
}

static void
cora_event_handle_disable_all(Cora *co, int label, Obj *R) {
	(void)label;
	EventHandle *eh = mustCObj(R[1]);
	event_handle_disable_all(eh);
	coraReturn(co, True);
}

static void
cora_event_handle_set_wakeup_info(Cora *co, int label, Obj *R) {
	(void)label;
	if (!iscobj(R[1])) {
		coraReturn(co, False);
		return;
	}

	EventHandle *eh = mustCObj(R[1]);
	void *vm = NULL;
	if (iscobj(R[2])) {
		vm = mustCObj(R[2]);
	} else if (R[2] != False && R[2] != Nil) {
		coraReturn(co, False);
		return;
	}
	Obj handle_obj = R[3];
	if (!isfixnum(handle_obj)) {
		coraReturn(co, False);
		return;
	}

	event_handle_set_wakeup_info(eh, vm, fixnum(handle_obj));
	coraReturn(co, True);
}

static void
cora_poller_poll_wakeup_handles(Cora *co, int label, Obj *R) {
	(void)label;
	Obj timeout_obj = R[1];

	if (!isfixnum(timeout_obj)) {
		coraReturn(co, False);
		return;
	}

	Poller *poller = get_active_poller(co);
	if (!poller) {
		coraReturn(co, False);
		return;
	}

	int nfds = 0;
	void **active = poller_poll(poller, fixnum(timeout_obj), &nfds);
	if (nfds < 0) {
		coraReturn(co, False);
		return;
	}
	if (nfds == 0) {
		coraReturn(co, Nil);
		return;
	}

	Obj result = Nil;
	for (int i = nfds - 1; i >= 0; i--) {
		EventHandle *eh = (EventHandle *)active[i];
		if (!eh || eh->wakeup_handle < 0) {
			continue;
		}
		result = makeCons(co->gc, makeNumber(eh->wakeup_handle), result);
	}

	free(active);
	coraReturn(co, result);
}

static void
cora_event_handle_get_wakeup_handle(Cora *co, int label, Obj *R) {
	(void)label;
	EventHandle *eh = mustCObj(R[1]);
	coraReturn(co, makeNumber(eh ? eh->wakeup_handle : -1));
}

static void
cora_poller_add_handle(Cora *co, int label, Obj *R) {
	(void)label;
	EventHandle *eh = mustCObj(R[1]);
	Poller *poller = get_active_poller(co);
	if (!poller) {
		coraReturn(co, False);
		return;
	}
	coraReturn(co, poller_add_handle(poller, eh) ? True : False);
}

static void
cora_poller_update_handle(Cora *co, int label, Obj *R) {
	(void)label;
	EventHandle *eh = mustCObj(R[1]);
	Poller *poller = get_active_poller(co);
	if (!poller) {
		coraReturn(co, False);
		return;
	}
	coraReturn(co, poller_update_handle(poller, eh) ? True : False);
}

static void
cora_poller_remove_handle(Cora *co, int label, Obj *R) {
	(void)label;
	EventHandle *eh = mustCObj(R[1]);
	Poller *poller = get_active_poller(co);
	if (!poller) {
		coraReturn(co, False);
		return;
	}
	coraReturn(co, poller_remove_handle(poller, eh) ? True : False);
}

static void
cora_poller_poll(Cora *co, int label, Obj *R) {
	(void)label;
	Obj timeout_obj = R[1];

	if (!isfixnum(timeout_obj)) {
		coraReturn(co, False);
		return;
	}

	Poller *poller = get_active_poller(co);
	if (!poller) {
		coraReturn(co, False);
		return;
	}

	int nfds = 0;
	void **active = poller_poll(poller, fixnum(timeout_obj), &nfds);
	if (nfds < 0) {
		coraReturn(co, False);
		return;
	}
	if (nfds == 0) {
		coraReturn(co, Nil);
		return;
	}

	Obj result = Nil;
	for (int i = nfds - 1; i >= 0; i--) {
		EventHandle *eh = (EventHandle *)active[i];
		if (eh) {
			result = makeCons(co->gc, makeCObj(eh), result);
		}
	}

	free(active);
	coraReturn(co, result);
}

static void
cora_vm_self_binding(Cora *co, int label, Obj *R) {
	(void)label;
	(void)R;
	Obj vm = global_get_if_bound(co, intern("*cora-vm*"));
	if (vm != Undef && iscobj(vm)) {
		coraReturn(co, vm);
		return;
	}
	coraReturn(co, False);
}

void
entry(struct Cora *co, int label, Obj *R) {
	(void)label;
	Obj pkg = R[2];
	char *module = bytesData(pkg);
	primSet(co, poller_symbol(), Nil);

	coraRegisterAPI(co, module, "poller-init", cora_poller_init, 0);
	coraRegisterAPI(co, module, "poller-shutdown", cora_poller_shutdown, 0);
	coraRegisterAPI(co, module, "event-handle-new", cora_event_handle_new, 1);
	coraRegisterAPI(co, module, "event-handle-enable-read", cora_event_handle_enable_read, 1);
	coraRegisterAPI(co, module, "event-handle-enable-write", cora_event_handle_enable_write, 1);
	coraRegisterAPI(co, module, "event-handle-disable-all", cora_event_handle_disable_all, 1);
	coraRegisterAPI(co, module, "event-handle-set-wakeup-info", cora_event_handle_set_wakeup_info, 3);
	coraRegisterAPI(co, module, "event-handle-get-wakeup-handle", cora_event_handle_get_wakeup_handle, 1);
	coraRegisterAPI(co, module, "poller-add-handle", cora_poller_add_handle, 1);
	coraRegisterAPI(co, module, "poller-update-handle", cora_poller_update_handle, 1);
	coraRegisterAPI(co, module, "poller-remove-handle", cora_poller_remove_handle, 1);
	coraRegisterAPI(co, module, "poller-poll", cora_poller_poll, 1);
	coraRegisterAPI(co, module, "poller-poll-wakeup-handles", cora_poller_poll_wakeup_handles, 1);
	coraRegisterAPI(co, module, "vm-self", cora_vm_self_binding, 0);
	Obj export_sym = intern("cora/lib/poller/internal#*ns-export*");
	primSet(co, export_sym, Nil);

	coraReturn(co, intern("poller/internal"));
}
