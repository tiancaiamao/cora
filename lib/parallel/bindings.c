#include "../../src/runtime.h"
#include "mailbox.h"
#include "net.h"
#include "poller.h"
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

	// Initialize mailbox registry
//	mailbox_registry_init();

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

static void
cora_vm_self_binding(Cora *co, int label, Obj *R) {
	(void)label;
	(void)R;
	CoraVM *vm = cora_vm_self(co);
	if (vm) {
		coraReturn(co, makeCObj(vm));
	} else {
		coraReturn(co, False);
	}
}

// Spawn VM with thunk (parallel mode)
static void
cora_spawn_vm_native(Cora *co, int label, Obj *R) {
	str fileName = stringStr(R[1]);

	VM *vm = vm_create();
	if (!vm) {
		coraReturn(co, makeNumber(-1));
		return;
	}
	vm_set_init_file(vm, fileName);

	// Enqueue VM for execution
	vm_enqueue_global(vm);
	coraReturn(co, makeNumber(vm->id));
}

// Wait for all VMs to complete (placeholder)
static void
cora_vm_runtime_wait_all(Cora *co, int label, Obj *R) {
	(void)label;
	(void)R;
	vm_runtime_wait_all();
	coraReturn(co, True);
}

// Attach current Cora VM to runtime
static void
cora_vm_attach_current(Cora *co, int label, Obj *R) {
	(void)label;
	(void)R;
	VM *vm = vm_attach_current(co);
	if (!vm) {
		coraReturn(co, makeNumber(-1));
		return;
	}
	coraReturn(co, makeNumber(vm->id));
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
	if (mb) {
		coraReturn(co, makeCObj(mb));
	} else {
		coraReturn(co, False);
	}
}

// Free a mailbox
static void
cora_mailbox_free(Cora *co, int label, Obj *R) {
	(void)label;
	Mailbox *mb = mustCObj(R[1]);
	mailbox_free(mb);
	coraReturn(co, True);
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

// Enqueue a blocked sender
static void
cora_mailbox_sendq_enqueue(Cora *co, int label, Obj *R) {
	(void)label;
	Mailbox *mb = mustCObj(R[1]);
	Waker *w = mustCObj(R[2]);
	mailbox_sendq_enqueue(mb, w);
	coraReturn(co, True);
}

// Enqueue a blocked receiver
static void
cora_mailbox_recvq_enqueue(Cora *co, int label, Obj *R) {
	(void)label;
	Mailbox *mb = mustCObj(R[1]);
	Waker *w = mustCObj(R[2]);
	mailbox_recvq_enqueue(mb, w);
	coraReturn(co, True);
}

// Create a wakeup object
static void
cora_wakeup_create(Cora *co, int label, Obj *R) {
	(void)label;
	CoraVM *vm = mustCObj(R[1]);
	Obj handle_obj = R[2];
	Obj value = R[3];

	if (!isfixnum(handle_obj)) {
		coraReturn(co, False);
		return;
	}

	int handle = fixnum(handle_obj);
	Waker *w = waker_create(vm, handle, value);
	if (w) {
		coraReturn(co, makeCObj(w));
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

// ============================================================================
// Poller API
// ============================================================================

// Global poller (simplified - one poller for all VMs)
static Poller *g_poller = NULL;

// NOTE: Poller thread is now managed internally by poller.c

// Initialize global poller
static void
cora_poller_init(Cora *co, int label, Obj *R) {
	(void)label;
	(void)R;

	if (!g_poller) {
		g_poller = poller_new();
		if (!g_poller) {
			coraReturn(co, False);
			return;
		}
	}

	coraReturn(co, True);
}

// Shutdown global poller
static void
cora_poller_shutdown(Cora *co, int label, Obj *R) {
	(void)label;
	(void)R;

	if (g_poller) {
		poller_free(g_poller);
		g_poller = NULL;
	}

	coraReturn(co, True);
}

// Create an event handle
static void
cora_event_handle_new(Cora *co, int label, Obj *R) {
	(void)label;
	Obj fd_obj = R[1];

	if (!isfixnum(fd_obj)) {
		coraReturn(co, False);
		return;
	}

	int fd = fixnum(fd_obj);

	// TODO: Add support for callbacks
	// For now, create a simple event handle without callbacks
	EventHandle *eh = event_handle_new(fd, NULL, NULL, NULL);

	if (eh) {
		coraReturn(co, makeCObj(eh));
	} else {
		coraReturn(co, False);
	}
}

// Enable read events on handle
static void
cora_event_handle_enable_read(Cora *co, int label, Obj *R) {
	(void)label;
	EventHandle *eh = mustCObj(R[1]);
	event_handle_enable_read(eh);
	coraReturn(co, True);
}

// Enable write events on handle
static void
cora_event_handle_enable_write(Cora *co, int label, Obj *R) {
	(void)label;
	EventHandle *eh = mustCObj(R[1]);
	event_handle_enable_write(eh);
	coraReturn(co, True);
}

// Add event handle to poller
static void
cora_poller_add_handle(Cora *co, int label, Obj *R) {
	(void)label;
	EventHandle *eh = mustCObj(R[1]);

	if (!g_poller) {
		coraReturn(co, False);
		return;
	}

	poller_add_handle(g_poller, eh);
	coraReturn(co, True);
}

// Poll for events (blocking with timeout)
static void
cora_poller_poll(Cora *co, int label, Obj *R) {
	(void)label;
	Obj timeout_obj = R[1];

	if (!isfixnum(timeout_obj)) {
		coraReturn(co, False);
		return;
	}

	int timeout_ms = fixnum(timeout_obj);

	if (!g_poller) {
		coraReturn(co, False);
		return;
	}

	int nfds = 0;
	void **active = poller_poll(g_poller, timeout_ms, &nfds);

	if (nfds < 0) {
		// Error
		coraReturn(co, False);
		return;
	}

	if (nfds == 0) {
		// Timeout, no events
		coraReturn(co, Nil);
		return;
	}

	// Build list of active event handles
	Obj result = Nil;
	for (int i = nfds - 1; i >= 0; i--) {
		EventHandle *eh = (EventHandle *)active[i];
		Obj handle_obj = makeCObj(eh);
		result = makeCons(co->gc, handle_obj, result);
	}

	free(active);
	coraReturn(co, result);
}

// ============================================================================
// Network API bindings
// ============================================================================

// net-listen host port -> fd or -1
static void
cora_net_listen(Cora *co, int label, Obj *R) {
	(void)label;
	Obj host_obj = R[1];
	Obj port_obj = R[2];

	if (!isfixnum(port_obj)) {
		coraReturn(co, makeNumber(-1));
		return;
	}

	const char *host = NULL;
	if (host_obj != Nil && isBytes(host_obj)) {
		host = bytesData(host_obj);
	}

	int port = fixnum(port_obj);
	int fd = net_listen(host, port);

	coraReturn(co, makeNumber(fd));
}

// net-dial host port -> fd or -1
static void
cora_net_dial(Cora *co, int label, Obj *R) {
	(void)label;
	Obj host_obj = R[1];
	Obj port_obj = R[2];

	if (!isBytes(host_obj) || !isBytes(port_obj)) {
		coraReturn(co, makeNumber(-1));
		return;
	}

	const char *host = bytesData(host_obj);
	const char *port = bytesData(port_obj);

	int fd = net_dial(host, port);

	coraReturn(co, makeNumber(fd));
}

// net-accept listen-fd -> fd or -1
static void
cora_net_accept(Cora *co, int label, Obj *R) {
	(void)label;
	Obj listen_fd_obj = R[1];

	if (!isfixnum(listen_fd_obj)) {
		coraReturn(co, makeNumber(-1));
		return;
	}

	int listen_fd = fixnum(listen_fd_obj);
	int fd = net_accept(listen_fd);

	coraReturn(co, makeNumber(fd));
}

// net-close fd -> nil
static void
cora_net_close(Cora *co, int label, Obj *R) {
	(void)label;
	Obj fd_obj = R[1];

	if (isfixnum(fd_obj)) {
		int fd = fixnum(fd_obj);
		net_close(fd);
	}

	coraReturn(co, Nil);
}

// async-socket-new fd -> AsyncSocket object or false
static void
cora_async_socket_new(Cora *co, int label, Obj *R) {
	(void)label;
	Obj fd_obj = R[1];

	if (!isfixnum(fd_obj)) {
		coraReturn(co, False);
		return;
	}

	int fd = fixnum(fd_obj);
	AsyncSocket *sock = async_socket_new(fd);

	if (sock) {
		coraReturn(co, makeCObj(sock));
	} else {
		coraReturn(co, False);
	}
}

// async-socket-send sock buf -> [ok sent] or [block sent] or [error]
static void
cora_async_socket_send(Cora *co, int label, Obj *R) {
	(void)label;
	AsyncSocket *sock = mustCObj(R[1]);
	Obj buf_obj = R[2];

	if (!isBytes(buf_obj)) {
		// Return error
		Obj result = makeCons(co->gc, intern("error"), Nil);
		coraReturn(co, result);
		return;
	}

	const char *buf = bytesData(buf_obj);
	size_t len = bytesLen(buf_obj);
	size_t sent = 0;

	SocketResult res = async_socket_send(sock, buf, len, &sent);

	Obj status;
	if (res == SOCK_OK || res == SOCK_WOULD_BLOCK) {
		status = (res == SOCK_OK) ? intern("ok") : intern("block");
	} else {
		status = intern("error");
	}

	Obj sent_num = makeNumber(sent);
	Obj result = makeCons(co->gc, status, makeCons(co->gc, sent_num, Nil));

	coraReturn(co, result);
}

// async-socket-recv sock buf -> [ok received] or [block received] or [error]
static void
cora_async_socket_recv(Cora *co, int label, Obj *R) {
	(void)label;
	AsyncSocket *sock = mustCObj(R[1]);
	Obj buf_obj = R[2];

	if (!isBytes(buf_obj)) {
		// Return error
		Obj result = makeCons(co->gc, intern("error"), Nil);
		coraReturn(co, result);
		return;
	}

	char *buf = bytesData(buf_obj);
	size_t len = bytesLen(buf_obj);
	size_t received = 0;

	SocketResult res = async_socket_recv(sock, buf, len, &received);

	Obj status;
	if (res == SOCK_OK || res == SOCK_WOULD_BLOCK) {
		status = (res == SOCK_OK) ? intern("ok") : intern("block");
	} else {
		status = intern("error");
	}

	Obj received_num = makeNumber(received);
	Obj result = makeCons(co->gc, status, makeCons(co->gc, received_num, Nil));

	coraReturn(co, result);
}

// async-socket-get-event-handle sock -> EventHandle
static void
cora_async_socket_get_event_handle(Cora *co, int label, Obj *R) {
	(void)label;
	AsyncSocket *sock = mustCObj(R[1]);

	EventHandle *eh = async_socket_get_event_handle(sock);

	if (eh) {
		coraReturn(co, makeCObj(eh));
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
	coraRegisterAPI(co, module, "vm-self", cora_vm_self_binding, 0);
	coraRegisterAPI(co, module, "spawn-vm-native", cora_spawn_vm_native, 1);
	coraRegisterAPI(co, module, "vm-runtime-wait-all", cora_vm_runtime_wait_all, 0);
	coraRegisterAPI(co, module, "vm-attach-current", cora_vm_attach_current, 0);

	// Mailbox API
	coraRegisterAPI(co, module, "mailbox-new", cora_mailbox_new, 1);
	coraRegisterAPI(co, module, "mailbox-free", cora_mailbox_free, 1);
	coraRegisterAPI(co, module, "mailbox-close", cora_mailbox_close, 1);
	coraRegisterAPI(co, module, "mailbox-is-closed", cora_mailbox_is_closed, 1);
	coraRegisterAPI(co, module, "mailbox-send-try", cora_mailbox_send_try, 2);
	coraRegisterAPI(co, module, "mailbox-recv-try", cora_mailbox_recv_try, 1);
	coraRegisterAPI(co, module, "mailbox-publish", cora_mailbox_publish, 2);
	coraRegisterAPI(co, module, "mailbox-resolve", cora_mailbox_resolve, 1);
	coraRegisterAPI(co, module, "mailbox-sendq-enqueue", cora_mailbox_sendq_enqueue, 2);
	coraRegisterAPI(co, module, "mailbox-recvq-enqueue", cora_mailbox_recvq_enqueue, 2);
	coraRegisterAPI(co, module, "wakeup-create", cora_wakeup_create, 3);

	// Poller API
	coraRegisterAPI(co, module, "poller-init", cora_poller_init, 0);
	coraRegisterAPI(co, module, "poller-shutdown", cora_poller_shutdown, 0);
	coraRegisterAPI(co, module, "event-handle-new", cora_event_handle_new, 1);
	coraRegisterAPI(co, module, "event-handle-enable-read", cora_event_handle_enable_read, 1);
	coraRegisterAPI(co, module, "event-handle-enable-write", cora_event_handle_enable_write, 1);
	coraRegisterAPI(co, module, "poller-add-handle", cora_poller_add_handle, 1);
	coraRegisterAPI(co, module, "poller-poll", cora_poller_poll, 1);

	// Network API
	coraRegisterAPI(co, module, "net-listen", cora_net_listen, 2);
	coraRegisterAPI(co, module, "net-dial", cora_net_dial, 2);
	coraRegisterAPI(co, module, "net-accept", cora_net_accept, 1);
	coraRegisterAPI(co, module, "net-close", cora_net_close, 1);
	coraRegisterAPI(co, module, "async-socket-new", cora_async_socket_new, 1);
	coraRegisterAPI(co, module, "async-socket-send", cora_async_socket_send, 2);
	coraRegisterAPI(co, module, "async-socket-recv", cora_async_socket_recv, 2);
	coraRegisterAPI(co, module, "async-socket-get-event-handle", cora_async_socket_get_event_handle, 1);

	coraReturn(co, intern("parallel"));
}
