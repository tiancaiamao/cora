#include "runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/epoll.h>
#include <arpa/inet.h>

static int epollfd = -1;

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
netListen(struct controlFlow *ctx) {
  Obj str = ctxGet(ctx, 1);
  Obj ret1, ret2;
  if (!splitHostAndPort(str, &ret1, &ret2)) {
    // TODO?
    printf("invalid host:port string");
    ctxReturn(ctx, Nil);
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
    ctxReturn(ctx, Nil);
  }

  if (listen(fd, 200) < 0) {
    fprintf(stderr, "listen error\n");
    ctxReturn(ctx, Nil);
  }

  ctxReturn(ctx, makeNumber(fd));
}

static void
netDial(struct controlFlow *ctx) {
  Obj str = ctxGet(ctx, 1);
  Obj ret1, ret2;
  if (!splitHostAndPort(str, &ret1, &ret2)) {
    // TODO?
    printf("invalid host:port string");
    ctxReturn(ctx, Nil);
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
    ctxReturn(ctx, Nil);
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
    ctxReturn(ctx, Nil);
  }
  freeaddrinfo(result);           /* No longer needed */

  ctxReturn(ctx, makeNumber(fd));
}

// input: (net-send fd buf pos)
// output: [block pos] or [ok] or [err errno]
static void
netSend(struct controlFlow *ctx) {
  Obj arg1 = ctxGet(ctx, 1);
  Obj arg2 = ctxGet(ctx, 2);
  Obj arg3 = ctxGet(ctx, 3);
  int fd = fixnum(arg1);
  char *buf = stringStr(arg2);
  int len = stringLen(arg2);
  int pos = fixnum(arg3);

  /* printf("call net send fd ===%d\n", fd); */

  while(pos < len) {
    int ret = send(fd, buf+pos, len-pos, 0);
    if (ret < 0) {
      if (errno == EAGAIN || errno == EWOULDBLOCK) {
	// [block pos]
	printf("EAGAIN here...%d\n", pos);
 
	struct epoll_event ev;
	ev.events = EPOLLOUT;
  ev.data.fd = fd;
  printf("netSend, epoll_ctl add fd = %d\n", fd);
	if (epoll_ctl(epollfd, EPOLL_CTL_ADD, fd, &ev) < 0) {
	  // TODO
	  printf("epoll ctl add fail");
	}

	ctxReturn(ctx, cons(makeSymbol("block"), cons(makeNumber(pos), Nil)));
      }
      // [err errno]
      printf("netSend error %d\n", errno);
      ctxReturn(ctx, cons(makeSymbol("err"), cons(makeNumber(errno), Nil)));
    }
    pos = pos + ret;
  }
  // [ok]
  /* printf("netSend success\n"); */
  ctxReturn(ctx, cons(makeSymbol("ok"), Nil));
}

static void
netPoll(struct controlFlow *ctx) {
  const int MAX_EVENTS = 10;
  struct epoll_event events[MAX_EVENTS];
  int nfds = epoll_wait(epollfd, events, MAX_EVENTS, -1);
  if (nfds < 0) {
    // TODO
    printf("netpoll fail?????\n");
    perror("epoll_wait");
    /* ctxReturn(ctx, ) */
  }

  Obj ret = Nil;
  for (int i=0; i<nfds; i++) {
    int fd = events[i].data.fd;
    ret = cons(makeNumber(fd), ret);
    epoll_ctl(epollfd, EPOLL_CTL_DEL, fd, NULL);
  }
  ctxReturn(ctx, ret);
}

static void
netRecv(struct controlFlow *ctx) {
  Obj arg1 = ctxGet(ctx, 1);
  Obj arg2 = ctxGet(ctx, 2);
  Obj arg3 = ctxGet(ctx, 3);
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
 
	struct epoll_event ev;
	ev.events = EPOLLIN;
  ev.data.fd = fd;
  /* printf("netRecv, epoll_ctl add fd = %d\n", fd); */
	if (epoll_ctl(epollfd, EPOLL_CTL_ADD, fd, &ev) < 0) {
	  // TODO
	  printf("epoll ctl add fail");
	}

	ctxReturn(ctx, cons(makeSymbol("block"), cons(makeNumber(pos), Nil)));
      }
      // [err errno]
      printf("netRecv error %d\n", errno);
      perror("recv error");
      ctxReturn(ctx, cons(makeSymbol("err"), cons(makeNumber(errno), Nil)));
    }
    pos = pos + ret;
  }
  // [ok]
  /* printf("netRecv success\n"); */
  ctxReturn(ctx, cons(makeSymbol("ok"), Nil));
}

static void
netAcceptStep1(struct controlFlow *ctx) {
  Obj arg1 = ctxGet(ctx, 1);
  int fd = fixnum(arg1);

  struct epoll_event ev;
  ev.events = EPOLLIN;
  ev.data.fd = fd;
  /* printf("netAccept, epoll_ctl add fd = %d\n", fd); */
  if (epoll_ctl(epollfd, EPOLL_CTL_ADD, fd, &ev) < 0) {
    // TODO
    printf("epoll ctl add fail epfd=%d, fd=%d, err=%s\n", epollfd, fd, strerror(errno));
  }

  ctxReturn(ctx, Nil);
}

static void
netAcceptStep2(struct controlFlow *ctx) {
  Obj arg1 = ctxGet(ctx, 1);
  int ln = fixnum(arg1);

  struct sockaddr_in addr;
  socklen_t len = sizeof(struct sockaddr_in);
  memset(&addr, 0, sizeof(addr));
  int fd = accept(ln, (struct sockaddr*)&addr, &len);
  if (fd < 0) {
    // TODO
    printf("accept error: %s\n", strerror(errno));
    ctxReturn(ctx, Nil);
  }
  /* printf("accept a handle ==== %d\n", fd); */

  ctxReturn(ctx, makeNumber(fd));
}

static void
netClose(struct controlFlow *ctx) {
  Obj arg1 = ctxGet(ctx, 1);
  int fd = fixnum(arg1);
  close(fd);
  ctxReturn(ctx, Nil);
}

static void
makeBuffer(struct controlFlow *ctx) {
  Obj arg1 = ctxGet(ctx, 1);
  int size = fixnum(arg1);
  ctxReturn(ctx, makeString(NULL, size));
}

static void
netInit() {
  epollfd = epoll_create(1);
  // TOO
  if (epollfd == -1) {
    perror("epoll_create1");
    return;
  }
}

struct registModule netModule = {
  netInit,
  {
   {"make-buffer", makeBuffer, 1},
   {"net-dial", netDial, 1},
   {"net-poll", netPoll, 0},
   {"net-send", netSend, 3},
   {"net-recv", netRecv, 3},
   {"net-listen", netListen, 1},
   {"net-accept-1", netAcceptStep1, 1},
   {"net-accept-2", netAcceptStep2, 1},
   {"net-close", netClose, 1},
   {NULL, NULL, 0}
  }
};
