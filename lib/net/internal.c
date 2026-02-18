#include "../../src/runtime.h"
#include "net.h"
#include <errno.h>
#include <stdlib.h>

// net-listen host port -> fd or -1
static void
cora_net_listen(Cora *co, int label, Obj *R) {
	(void)label;
	Obj host_obj = R[1];
	Obj port_obj = R[2];

	const char *host = NULL;
	if (host_obj != Nil && isBytes(host_obj)) {
		host = bytesData(host_obj);
	}

	int port = -1;
	if (isfixnum(port_obj)) {
		port = fixnum(port_obj);
	} else if (isBytes(port_obj)) {
		port = atoi(bytesData(port_obj));
	} else {
		coraReturn(co, makeNumber(-1));
		return;
	}
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

// async-socket-send sock buf -> [ok sent] or [block sent] or [closed sent] or [error errno]
static void
cora_async_socket_send(Cora *co, int label, Obj *R) {
	(void)label;
	if (!iscobj(R[1])) {
		Obj result = makeCons(co->gc, intern("error"),
			makeCons(co->gc, makeNumber(-2), Nil));
		coraReturn(co, result);
		return;
	}
	AsyncSocket *sock = mustCObj(R[1]);
	Obj buf_obj = R[2];

	if (!isBytes(buf_obj)) {
		Obj result = makeCons(co->gc, intern("error"),
			makeCons(co->gc, makeNumber(-1), Nil));
		coraReturn(co, result);
		return;
	}

	const char *buf = bytesData(buf_obj);
	size_t len = bytesLen(buf_obj);
	size_t sent = 0;

	SocketResult res = async_socket_send(sock, buf, len, &sent);

	Obj status = intern("error");
	Obj detail = makeNumber(-1);
	if (res == SOCK_OK) {
		status = intern("ok");
		detail = makeNumber(sent);
	} else if (res == SOCK_WOULD_BLOCK) {
		status = intern("block");
		detail = makeNumber(sent);
	} else if (res == SOCK_CLOSED) {
		status = intern("closed");
		detail = makeNumber(sent);
	} else {
		status = intern("error");
		detail = makeNumber(errno);
	}

	Obj result = makeCons(co->gc, status, makeCons(co->gc, detail, Nil));
	coraReturn(co, result);
}

// async-socket-recv sock buf -> [ok received] or [block received] or [closed received] or [error errno]
static void
cora_async_socket_recv(Cora *co, int label, Obj *R) {
	(void)label;
	if (!iscobj(R[1])) {
		Obj result = makeCons(co->gc, intern("error"),
			makeCons(co->gc, makeNumber(-2), Nil));
		coraReturn(co, result);
		return;
	}
	AsyncSocket *sock = mustCObj(R[1]);
	Obj buf_obj = R[2];

	if (!isBytes(buf_obj)) {
		Obj result = makeCons(co->gc, intern("error"),
			makeCons(co->gc, makeNumber(-1), Nil));
		coraReturn(co, result);
		return;
	}

	char *buf = bytesData(buf_obj);
	size_t len = bytesLen(buf_obj);
	size_t received = 0;

	SocketResult res = async_socket_recv(sock, buf, len, &received);

	Obj status = intern("error");
	Obj detail = makeNumber(-1);
	if (res == SOCK_OK) {
		status = intern("ok");
		detail = makeNumber(received);
	} else if (res == SOCK_WOULD_BLOCK) {
		status = intern("block");
		detail = makeNumber(received);
	} else if (res == SOCK_CLOSED) {
		status = intern("closed");
		detail = makeNumber(received);
	} else {
		status = intern("error");
		detail = makeNumber(errno);
	}

	Obj result = makeCons(co->gc, status, makeCons(co->gc, detail, Nil));
	coraReturn(co, result);
}

// async-socket-accept listen-fd -> [ok fd] or [block] or [error errno]
static void
cora_async_socket_accept(Cora *co, int label, Obj *R) {
	(void)label;
	Obj listen_fd_obj = R[1];

	if (!isfixnum(listen_fd_obj)) {
		Obj result = makeCons(co->gc, intern("error"),
			makeCons(co->gc, makeNumber(-1), Nil));
		coraReturn(co, result);
		return;
	}

	int listen_fd = fixnum(listen_fd_obj);
	int fd = -1;
	SocketResult res = async_socket_accept(listen_fd, &fd);

	if (res == SOCK_WOULD_BLOCK) {
		Obj result = makeCons(co->gc, intern("block"), Nil);
		coraReturn(co, result);
		return;
	}

	if (res != SOCK_OK || fd < 0) {
		Obj result = makeCons(co->gc, intern("error"),
			makeCons(co->gc, makeNumber(errno), Nil));
		coraReturn(co, result);
		return;
	}

	Obj result = makeCons(co->gc, intern("ok"),
		makeCons(co->gc, makeNumber(fd), Nil));
	coraReturn(co, result);
}

// async-socket-connect-check sock -> [ok] or [block] or [error errno]
static void
cora_async_socket_connect_check(Cora *co, int label, Obj *R) {
	(void)label;
	if (!iscobj(R[1])) {
		Obj result = makeCons(co->gc, intern("error"),
			makeCons(co->gc, makeNumber(-2), Nil));
		coraReturn(co, result);
		return;
	}
	AsyncSocket *sock = mustCObj(R[1]);
	int err = 0;
	SocketResult res = async_socket_connect_check(sock, &err);

	if (res == SOCK_OK) {
		coraReturn(co, makeCons(co->gc, intern("ok"), Nil));
		return;
	}

	if (res == SOCK_WOULD_BLOCK) {
		coraReturn(co, makeCons(co->gc, intern("block"), Nil));
		return;
	}

	Obj result = makeCons(co->gc, intern("error"),
		makeCons(co->gc, makeNumber(err), Nil));
	coraReturn(co, result);
}

// async-socket-get-event-handle sock -> EventHandle
static void
cora_async_socket_get_event_handle(Cora *co, int label, Obj *R) {
	(void)label;
	if (!iscobj(R[1])) {
		coraReturn(co, False);
		return;
	}
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
	(void)label;
	Obj pkg = R[2];
	char *module = bytesData(pkg);

	coraRegisterAPI(co, module, "net-listen", cora_net_listen, 2);
	coraRegisterAPI(co, module, "net-dial", cora_net_dial, 2);
	coraRegisterAPI(co, module, "net-accept", cora_net_accept, 1);
	coraRegisterAPI(co, module, "net-close", cora_net_close, 1);
	coraRegisterAPI(co, module, "async-socket-new", cora_async_socket_new, 1);
	coraRegisterAPI(co, module, "async-socket-send", cora_async_socket_send, 2);
	coraRegisterAPI(co, module, "async-socket-recv", cora_async_socket_recv, 2);
	coraRegisterAPI(co, module, "async-socket-accept", cora_async_socket_accept, 1);
	coraRegisterAPI(co, module, "async-socket-connect-check", cora_async_socket_connect_check, 1);
	coraRegisterAPI(co, module, "async-socket-get-event-handle", cora_async_socket_get_event_handle, 1);
	Obj export_sym = intern("cora/lib/net/internal#*ns-export*");
	primSet(co, export_sym, Nil);

	coraReturn(co, intern("net/internal"));
}
