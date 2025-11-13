#include "runtime.h"
#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

__thread int pollfd = -1;

#ifdef __APPLE__
#include "kqueue.c"
#elif __linux__
#include "epoll.c"
#endif

static bool
splitHostAndPort(Cora* co, Obj str1, Obj* host, Obj* port) {
	char* s = bytesData(str1);
	int sz = bytesLen(str1);
	int i = 0;
	char* p = s;
	while (i < sz && p[i] != ':') {
		i++;
	}
	if (i == sz) {
		return false;
	}

	*host = makeString(co->gc, s, i);
	*port = makeString(co->gc, s + i + 1, sz - i - 1);
	return true;
}

static void
setNonBlock(int fd) {
	int flags = fcntl(fd, F_GETFL, 0);
	int r = fcntl(fd, F_SETFL, flags | O_NONBLOCK);
}

static void
netListen(struct Cora* ctx, int label, Obj* R) {
	Obj str = R[1];
	Obj ret1, ret2;
	if (!splitHostAndPort(ctx, str, &ret1, &ret2)) {
		// TODO?
		printf("invalid host:port string");
		coraReturn(ctx, Nil);
		return;
	}
	char* host = bytesData(ret1);
	char* portStr = bytesData(ret2);
	int port = atoi(portStr);
	/* printf("host = %s, port = %d\n", host, port); */

	int fd = socket(AF_INET, SOCK_STREAM, 0);
	/* printf("listen fd = %d\n", fd); */

	struct sockaddr_in addr;
	memset(&addr, 0, sizeof(struct sockaddr_in));
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = INADDR_ANY; // 0.0.0.0
	addr.sin_port = htons(port);
	if (bind(fd, (struct sockaddr*)&addr, sizeof(struct sockaddr_in)) < 0) {
		fprintf(stderr, "bind error\n");
		coraReturn(ctx, Nil);
		return;
	}

	if (listen(fd, 200) < 0) {
		fprintf(stderr, "listen error\n");
		coraReturn(ctx, Nil);
		return;
	}
	setNonBlock(fd);

	coraReturn(ctx, makeNumber(fd));
}

static void
netDial(struct Cora* ctx, int label, Obj* R) {
	Obj str = R[1];
	Obj ret1, ret2;
	if (!splitHostAndPort(ctx, str, &ret1, &ret2)) {
		// TODO?
		printf("invalid host:port string");
		coraReturn(ctx, Nil);
		return;
	}
	char* host = bytesData(ret1);
	char* port = bytesData(ret2);
	/* printf("host = %s, port = %s\n", host, port); */

	struct addrinfo hint;
	memset(&hint, 0, sizeof(struct addrinfo));
	hint.ai_family = AF_INET;
	hint.ai_socktype = SOCK_STREAM;
	struct addrinfo *result, *rp;
	int s = getaddrinfo(host, port, &hint, &result);
	if (s != 0) {
		fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(s));
		coraReturn(ctx, Nil);
		return;
	}
	int fd;
	for (rp = result; rp != NULL; rp = rp->ai_next) {
		fd = socket(rp->ai_family, rp->ai_socktype, rp->ai_protocol);
		if (fd == -1)
			continue;
		if (connect(fd, rp->ai_addr, rp->ai_addrlen) != -1)
			break;
		close(fd);
	}
	if (rp == NULL) {
		fprintf(stderr, "Could not connect\n");
		coraReturn(ctx, Nil);
		return;
	}
	freeaddrinfo(result); /* No longer needed */
	setNonBlock(fd);

	coraReturn(ctx, makeNumber(fd));
}

// input: (net-send fd buf pos)
// output: [block pos] or [ok] or [err errno]
static void
netSend(struct Cora* ctx, int label, Obj* R) {
	Obj arg1 = R[1];
	Obj arg2 = R[2];
	Obj arg3 = R[3];
	int fd = fixnum(arg1);
	char* buf = bytesData(arg2);
	int len = bytesLen(arg2);
	int pos = fixnum(arg3);

	/* printf("call net send fd ===%d\n", fd); */

	while (pos < len) {
		int ret = send(fd, buf + pos, len - pos, 0);
		if (ret < 0) {
			if (errno == EAGAIN || errno == EWOULDBLOCK) {
				/* printf("EAGAIN here...%d\n", pos); */
				// ['Send fd buf pos k]
				/* pollWriteAdd(pollfd, fd); */
				// [block pos]
				coraReturn(ctx, makeCons(ctx->gc, intern("block"), makeCons(ctx->gc, makeNumber(pos), Nil)));
				return;
			}
			// [err errno]
			printf("netSend error %d\n", errno);
			coraReturn(ctx, makeCons(ctx->gc, intern("err"), makeCons(ctx->gc, makeNumber(errno), Nil)));
			return;
		}
		pos = pos + ret;
	}
	// [ok]
	/* printf("netSend success\n"); */
	coraReturn(ctx, makeCons(ctx->gc, intern("ok"), Nil));
	return;
}

static void
netPoll(struct Cora* ctx, int label, Obj* R) {
	Obj timeout = R[1];
	Obj ret = poll(ctx, pollfd, fixnum(timeout));
	coraReturn(ctx, ret);
}

// input: (net-recv fd buf pos)
// output: [block pos] or [ok] or [err errno]
static void
netRecv(struct Cora* ctx, int label, Obj* R) {
	Obj arg1 = R[1];
	Obj arg2 = R[2];
	Obj arg3 = R[3];
	int fd = fixnum(arg1);
	char* buf = bytesData(arg2);
	int len = bytesLen(arg2);
	int pos = fixnum(arg3);

	/* printf("in netRecv... fd=%d, len=%d, pos=%d\n", fd, len, pos); */

	while (pos < len) {
		int ret = recv(fd, buf + pos, len - pos, 0);
		if (ret < 0) {
			if (errno == EAGAIN || errno == EWOULDBLOCK) {
				// [block pos]
				/* printf("EAGAIN here...%d\n", pos); */
				/* pollReadAdd(pollfd, fd); */
				coraReturn(ctx, makeCons(ctx->gc, intern("block"), makeCons(ctx->gc, makeNumber(pos), Nil)));
				return;
			}
			// [err errno]
			printf("netRecv error %d\n", errno);
			perror("recv error");
			coraReturn(ctx, makeCons(ctx->gc, intern("err"), makeCons(ctx->gc, makeNumber(errno), Nil)));
			return;
		}
		pos = pos + ret;
	}
	// [ok]
	/* printf("netRecv success\n"); */
	coraReturn(ctx, makeCons(ctx->gc, intern("ok"), Nil));
}

static void
netAccept(struct Cora* ctx, int label, Obj* R) {
	Obj arg1 = R[1];
	int ln = fixnum(arg1);

	struct sockaddr_in addr;
	socklen_t len = sizeof(struct sockaddr_in);
	memset(&addr, 0, sizeof(addr));
	int fd = accept(ln, (struct sockaddr*)&addr, &len);
	if (fd < 0) {
		// TODO
		printf("accept error: %s\n", strerror(errno));
		coraReturn(ctx, Nil);
		return;
	}
	/* printf("accept a handle ==== %d\n", fd); */
	setNonBlock(fd);

	coraReturn(ctx, makeNumber(fd));
}

static void
netClose(struct Cora* ctx, int label, Obj* R) {
	Obj arg1 = R[1];
	int fd = fixnum(arg1);
	close(fd);
	coraReturn(ctx, Nil);
}

static void
makeBuffer(struct Cora* ctx, int label, Obj* R) {
	Obj arg1 = R[1];
	int size = fixnum(arg1);
	coraReturn(ctx, makeBytes(ctx->gc, size));
}

static void
pollAdd(struct Cora* ctx, int label, Obj* R) {
	Obj fd = R[1];
	Obj mode = R[2];
	Obj conn = R[3];
	/* printf("pollAdd ..%ld\n", fd); */
	if (mode == intern("read")) {
		pollReadAdd(pollfd, fixnum(fd), conn);
	} else if (mode == intern("write")) {
		pollWriteAdd(pollfd, fixnum(fd), conn);
	} else {
		printf("error argument for pollAdd\n");
	}
	coraReturn(ctx, Nil);
}

static void
pollMod(struct Cora* ctx, int label, Obj* R) {
	Obj fd = R[1];
	Obj modes = R[2];
	Obj conn = R[3];
	/* printf("pollMod ..%ld ... new mode %d\n", fd, newMode); */
	pollCtlMod(pollfd, fixnum(fd), modes, conn);
	coraReturn(ctx, Nil);
}

static void
pollDel(struct Cora* ctx, int label, Obj* R) {
	Obj fd = R[1];
	pollCtlDel(pollfd, fixnum(fd));
	coraReturn(ctx, Nil);
}

static void
netPollFDInit(struct Cora* co, int label, Obj* R) {
	if (pollfd > 0) {
		printf("net poll fd init must be call only once!\n");
		assert(false);
	}

	// init thread local variable
	pollfd = pollCreate();
	if (pollfd == -1) {
		perror("epoll_create1");
		// TODO
	}
	coraReturn(co, Nil);
	return;
}

struct registerModule netModule = {
	NULL,
	{{"net-poll-fd-init", netPollFDInit, 0},
		{"net-poll", netPoll, 1},
		{"net-poll-add", pollAdd, 3},
		{"net-poll-mod", pollMod, 3},
		{"net-poll-del", pollDel, 1},

		{"make-buffer", makeBuffer, 1},
		{"net-dial", netDial, 1},
		{"net-send", netSend, 3},
		{"net-recv", netRecv, 3},
		{"net-listen", netListen, 1},
		{"net-accept", netAccept, 1},
		{"net-close", netClose, 1},
		{NULL, NULL, 0}}};

void
entry(struct Cora* co, int label, Obj* R) {
	Obj pkg = R[2];
	registerAPI(co, &netModule, stringStr(pkg));
	coraReturn(co, intern("net"));
}
