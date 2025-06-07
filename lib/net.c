#include "runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

__thread int pollfd = -1;

#ifdef __APPLE__
    #include "kqueue.c"
#elif __linux__
    #include "epoll.c"
#endif

static bool
splitHostAndPort(Obj str1, Obj *host, Obj *port) {
  char* s = bytesData(str1);
  int sz = bytesLen(str1);
  int i = 0;
  char *p = s;
  while(i < sz && p[i] != ':') { i++; }
  if (i == sz) {
    return false;
  }

  *host = makeString(s, i);
  *port = makeString(s+i+1, sz-i-1);
  return true;
}

static void
setNonBlock(int fd) {
  int flags = fcntl(fd, F_GETFL, 0);
  int r = fcntl(fd, F_SETFL, flags | O_NONBLOCK);
}

static void
netListen(struct Cora *ctx) {
  Obj str = coraGet(ctx, 1);
  Obj ret1, ret2;
  if (!splitHostAndPort(str, &ret1, &ret2)) {
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
netDial(struct Cora *ctx) {
  Obj str = coraGet(ctx, 1);
  Obj ret1, ret2;
  if (!splitHostAndPort(str, &ret1, &ret2)) {
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
    if (fd == -1) continue;
    if (connect(fd, rp->ai_addr, rp->ai_addrlen) != -1) break;
    close(fd);
  }
  if (rp == NULL) {
    fprintf(stderr, "Could not connect\n");
    coraReturn(ctx, Nil);
    return;
  }
  freeaddrinfo(result);           /* No longer needed */
  setNonBlock(fd);

  coraReturn(ctx, makeNumber(fd));
}

// input: (net-send fd buf pos)
// output: [block pos] or [ok] or [err errno]
static void
netSend(struct Cora *ctx) {
  Obj arg1 = coraGet(ctx, 1);
  Obj arg2 = coraGet(ctx, 2);
  Obj arg3 = coraGet(ctx, 3);
  int fd = fixnum(arg1);
  char* buf = bytesData(arg2);
  int len = bytesLen(arg2);
  int pos = fixnum(arg3);

  /* printf("call net send fd ===%d\n", fd); */

  while(pos < len) {
    int ret = send(fd, buf+pos, len-pos, 0);
    if (ret < 0) {
      if (errno == EAGAIN || errno == EWOULDBLOCK) {
	/* printf("EAGAIN here...%d\n", pos); */
	// ['Send fd buf pos k]
	/* pollWriteAdd(pollfd, fd); */
	// [block pos]
	coraReturn(ctx, cons(makeSymbol("block"), cons(makeNumber(pos), Nil)));
	return;
      }
      // [err errno]
      printf("netSend error %d\n", errno);
      coraReturn(ctx, cons(makeSymbol("err"), cons(makeNumber(errno), Nil)));
      return;
    }
    pos = pos + ret;
  }
  // [ok]
  /* printf("netSend success\n"); */
  coraReturn(ctx, cons(makeSymbol("ok"), Nil));
  return;
}

static void
netPoll(struct Cora *ctx) {
  Obj timeout = coraGet(ctx, 1);
  Obj ret = poll(pollfd, fixnum(timeout));
  coraReturn(ctx, ret);
}


// input: (net-recv fd buf pos)
// output: [block pos] or [ok] or [err errno]
static void
netRecv(struct Cora *ctx) {
  Obj arg1 = coraGet(ctx, 1);
  Obj arg2 = coraGet(ctx, 2);
  Obj arg3 = coraGet(ctx, 3);
  int fd = fixnum(arg1);
  char* buf = bytesData(arg2);
  int len = bytesLen(arg2);
  int pos = fixnum(arg3);

  /* printf("in netRecv... fd=%d, len=%d, pos=%d\n", fd, len, pos); */

  while(pos < len) {
    int ret = recv(fd, buf+pos, len-pos, 0);
    if (ret < 0) {
      if (errno == EAGAIN || errno == EWOULDBLOCK) {
	// [block pos]
	/* printf("EAGAIN here...%d\n", pos); */
	/* pollReadAdd(pollfd, fd); */
	coraReturn(ctx, cons(makeSymbol("block"), cons(makeNumber(pos), Nil)));
	return;
      }
      // [err errno]
      printf("netRecv error %d\n", errno);
      perror("recv error");
      coraReturn(ctx, cons(makeSymbol("err"), cons(makeNumber(errno), Nil)));
      return;
    }
    pos = pos + ret;
  }
  // [ok]
  /* printf("netRecv success\n"); */
  coraReturn(ctx, cons(makeSymbol("ok"), Nil));
}

static void
netAccept(struct Cora *ctx) {
  Obj arg1 = coraGet(ctx, 1);
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
netClose(struct Cora *ctx) {
  Obj arg1 = coraGet(ctx, 1);
  int fd = fixnum(arg1);
  close(fd);
  coraReturn(ctx, Nil);
}

static void
makeBuffer(struct Cora *ctx) {
  Obj arg1 = coraGet(ctx, 1);
  int size = fixnum(arg1);
  coraReturn(ctx, makeBytes(size));
}

static void
pollAdd(struct Cora *ctx) {
	Obj conn = coraGet(ctx, 1);
	Obj mode = coraGet(ctx, 2);
	int fd = vectorRef(conn, 2);
	if (mode == intern("read")) {
		pollReadAdd(pollfd, fixnum(fd), conn);
	} else if (mode == intern("write")) {
		pollWriteAdd(pollfd, fixnum(fd), conn);
	} else {
		printf("error argument for pollAdd\n");
	}
	coraReturn(ctx, Nil);
}

void
eventLoopInit() {
  pollfd = pollCreate();
  // TODO
  if (pollfd == -1) {
    perror("epoll_create1");
    return;
  }
}

struct registerModule netModule = {
  eventLoopInit,
  {
   {"make-buffer", makeBuffer, 1},
   {"net-dial", netDial, 1},
   {"net-poll", netPoll, 1},
   {"net-poll-add", pollAdd, 3},
   {"net-send", netSend, 3},
   {"net-recv", netRecv, 3},
   {"net-listen", netListen, 1},
   {"net-accept", netAccept, 1},
   {"net-close", netClose, 1},
   {NULL, NULL, 0}
  }
};

void
entry(struct Cora *co) {
  Obj pkg = co->args[2];
  registerAPI(co, &netModule, stringStr(pkg));
  coraReturn(co, intern("net"));
}
