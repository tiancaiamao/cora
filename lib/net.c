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

static int pollfd = -1;

#ifdef __APPLE__
    #include "kqueue.c"
#elif __linux__
    #include "epoll.c"
#endif

static bool
splitHostAndPort(Obj str, Obj *host, Obj *port) {
  char* s = stringStr(str);
  int sz = stringLen(str);
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
  }
  char *host = stringStr(ret1);
  char *portStr = stringStr(ret2);
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
  }

  if (listen(fd, 200) < 0) {
    fprintf(stderr, "listen error\n");
    coraReturn(ctx, Nil);
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
  }
  char* host = stringStr(ret1);
  char* port = stringStr(ret2);
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
  }
  freeaddrinfo(result);           /* No longer needed */
  setNonBlock(fd);

  coraReturn(ctx, makeNumber(fd));
}

// input: (net-send fd buf pos k)
// output: [block] or [ok] or [err errno]
static void
netSend(struct Cora *ctx) {
  Obj arg1 = coraGet(ctx, 1);
  Obj arg2 = coraGet(ctx, 2);
  Obj arg3 = coraGet(ctx, 3);
  Obj k = coraGet(ctx, 4);
  int fd = fixnum(arg1);
  char *buf = stringStr(arg2);
  int len = stringLen(arg2);
  int pos = fixnum(arg3);

  /* printf("call net send fd ===%d\n", fd); */

  while(pos < len) {
    int ret = send(fd, buf+pos, len-pos, 0);
    if (ret < 0) {
      if (errno == EAGAIN || errno == EWOULDBLOCK) {
	printf("EAGAIN here...%d\n", pos);
	// ['Send fd buf pos k]
	void* udata = (void*)cons(intern("'Send"), cons(arg1, cons(arg2, cons(makeNumber(pos), cons(k, Nil)))));
	pollWriteAdd(pollfd, fd, udata);
	// [block]
	coraReturn(ctx, cons(makeSymbol("block"), Nil));
      }
      // [err errno]
      printf("netSend error %d\n", errno);
      coraReturn(ctx, cons(makeSymbol("err"), cons(makeNumber(errno), Nil)));
    }
    pos = pos + ret;
  }
  // [ok]
  /* printf("netSend success\n"); */
  coraReturn(ctx, cons(makeSymbol("ok"), Nil));
}

static void
netPoll(struct Cora *ctx) {
  Obj ret = poll(pollfd);
  coraReturn(ctx, ret);
}


// input: (net-recv fd buf pos k)
// output: [block] or [ok] or [err errno]
static void
netRecv(struct Cora *ctx) {
  Obj arg1 = coraGet(ctx, 1);
  Obj arg2 = coraGet(ctx, 2);
  Obj arg3 = coraGet(ctx, 3);
  Obj k = coraGet(ctx, 4);
  int fd = fixnum(arg1);
  char *buf = stringStr(arg2);
  int len = stringLen(arg2);
  int pos = fixnum(arg3);

  /* printf("in netRecv... fd=%d, len=%d, pos=%d\n", fd, len, pos); */

  while(pos < len) {
    int ret = recv(fd, buf+pos, len-pos, 0);
    if (ret < 0) {
      if (errno == EAGAIN || errno == EWOULDBLOCK) {
	// [block pos]
	/* printf("EAGAIN here...%d\n", pos); */
	void* udata = (void*)cons(intern("'Recv"), cons(arg1, cons(arg2, cons(makeNumber(fd), cons(k, Nil)))));
	pollReadAdd(pollfd, fd, udata);
	coraReturn(ctx, cons(makeSymbol("block"), Nil));
      }
      // [err errno]
      printf("netRecv error %d\n", errno);
      perror("recv error");
      coraReturn(ctx, cons(makeSymbol("err"), cons(makeNumber(errno), Nil)));
    }
    pos = pos + ret;
  }
  // [ok]
  /* printf("netRecv success\n"); */
  coraReturn(ctx, cons(makeSymbol("ok"), Nil));
}

static void
netAcceptStep1(struct Cora *ctx) {
  Obj arg1 = coraGet(ctx, 1);
  int fd = fixnum(arg1);
  Obj k = coraGet(ctx, 2);

  void *udata = (void*)cons(intern("'Accept"), cons(makeNumber(fd), cons(k, Nil)));
  pollReadAdd(pollfd, fd, udata);
  coraReturn(ctx, Nil);
}

static void
netAcceptStep2(struct Cora *ctx) {
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
  coraReturn(ctx, makeString(NULL, size));
}

static void
netInit() {
  pollfd = pollCreate();
  // TOO
  if (pollfd == -1) {
    perror("epoll_create1");
    return;
  }
}

struct registerModule netModule = {
  netInit,
  {
   {"make-buffer", makeBuffer, 1},
   {"dial", netDial, 1},
   {"poll", netPoll, 0},
   {"send", netSend, 4},
   {"recv", netRecv, 4},
   {"listen", netListen, 1},
   {"accept-1", netAcceptStep1, 2},
   {"accept-2", netAcceptStep2, 1},
   {"close", netClose, 1},
   {NULL, NULL, 0}
  }
};

void
entry(struct Cora *co) {
  Obj pkg = co->args[2];
  registerAPI(&netModule, toStr(stringStr(pkg)));
  coraReturn(co, intern("net"));
}
