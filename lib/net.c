#include "runtime.h"
#include <stdio.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/epoll.h>

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
  printf("host = %s, port = %s\n", host, port);

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

static int epollfd = -1;

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

  while(pos < len) {
    int ret = send(fd, buf+pos, len-pos, 0);
    if (ret < 0) {
      if (errno == EAGAIN || errno == EWOULDBLOCK) {
	// [block pos]
	printf("EAGAIN here...%d\n", pos);
 
	struct epoll_event ev;
	ev.events = EPOLLOUT;
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
  printf("netSend success\n");
  ctxReturn(ctx, cons(makeSymbol("ok"), Nil));
}

static void
netPoll(struct controlFlow *ctx) {
  const int MAX_EVENTS = 10;
  struct epoll_event events[MAX_EVENTS];
  int nfds = epoll_wait(epollfd, events, MAX_EVENTS, -1);
  if (nfds == -1) {
    // TODO
    perror("epoll_wait");
    /* ctxReturn(ctx, ) */
  }

  Obj ret = Nil;
  for (int i=0; i<nfds; i++) {
    ret = cons(makeNumber(events[i].data.fd), ret);
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

  printf("in netRecv... fd=%d, len=%d, pos=%d\n", fd, len, pos);

  while(pos < len) {
    int ret = recv(fd, buf+pos, len-pos, 0);
    if (ret < 0) {
      if (errno == EAGAIN || errno == EWOULDBLOCK) {
	// [block pos]
	printf("EAGAIN here...%d\n", pos);
 
	struct epoll_event ev;
	ev.events = EPOLLIN;
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
  printf("netRecv success\n");
  ctxReturn(ctx, cons(makeSymbol("ok"), Nil));
}

static void
makeBuffer(struct controlFlow *ctx) {
  Obj arg1 = ctxGet(ctx, 1);
  int size = fixnum(arg1);
  ctxReturn(ctx, makeString(NULL, size));
}

static void
netInit() {
  int epollfd = epoll_create(1);
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
   {NULL, NULL, 0}
  }
};
