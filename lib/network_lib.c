#include "runtime.h"


struct netConnectCallbackData {
  struct eventLoop *el;
  Obj cb;
};

static void
coraNetDialCallback(void *ud, int32_t fd) {
  struct netConnctCallbackData *data = ud;
  struct streamConn* conn = streamConnNew(fd, data->el);
  Call(2, data->cb, conn);
}

static void
coraNetDial(struct controlFlow *ctx) {
  // (connect "127.0.0.1:2222" el callback)
  Obj addr = ctxGet(ctx, 1);
  Obj arg2 = ctxGet(ctx, 2);
  Obj cb = ctxGet(ctx, 3);

  char *host;
  char *port;
  splitHostAndPort(stringStr(addr), &host, &port);
  struct eventLoop *el = ptr(arg2);

  int fd = socket(AF_INET, SOCK_STREAM, 0);
  if (fd < 0) {
    perror("socket");
    ctxReturn(makeNumber(-1));
  }

  struct addrinfo hint, *res;
  memset(&hint, 0, sizeof(hint));
  hint.ai_family = AF_INET;
  hint.ai_socktype = SOCK_STREAM;
  if (getaddrinfo(host, port, &hint, &res) < 0) {
    perror("getaddrinfo");
    ctxReturn(makeNumber(-1));
  }

  struct sockaddr *addr;
  socklen_t addrLen;
  for(struct addrinfo* p = res; p != NULL; p = p->ai_next) {
    if (p->ai_family == AF_INET) {
      addr = p->ai_addr;
      addrLen = p->ai_addrlen;
      break;
    }
  }

  struct netConnectCallbackData data;
  data.ctx = ctx;
  data.cb = cb;
  data.el = el;

  if (netDial(fd, el, addr, addrLen, coraNetDialCallback, (void*)&data) < 0) {
    perror("netDial");
    ctxReturn(makeNumber(-1));
  }
}

static void
coraNetRecvCallback(void *ud) {
  struct coraNetRecvCallbackData* data = ud;
  Call(2, data->cb, ud->data);
}

static void
coraNetRecv(struct controlFlow *ctx) {
  // (net-recv conn len callback)
  Obj conn = ctxGet(ctx, 1);
  Obj len = ctxGet(ctx, 2);
  Obj cb = ctxGet(ctx, 3);

  struct coraNetRecvCallbackData ud;
  char *data = malloc(len);
  memset(data, 0, len);
  ud.data = data;
  ud.cb;
  netRead(conn, data, len, coraNetRecvCallback, &ud);
}

struct coraNetSendCallbackData {
  Obj cb;
};

static void
coraNetSendCallback(void *ud) {
  struct coraNetSendCallbackData *data = ud;
  Call(1, data->cb);
}

static void
coraNetSend(struct controlFlow *ctx) {
  // (net-send conn data callback)
  Obj conn = ctxGet(ctx, 1);
  Obj data = ctxGet(ctx, 2);
  Obj cb = ctxGet(ctx, 3);

  struct coraNetSendCallbackData data;
  struct streamConn *c = ptr(conn);
  data.cb = cb;
  netSend(conn, data, strlen(data), &data);
}


void
entry(struct controlFlow *ctx) {
  symbolSet(intern("net-dial"), makeBuiltin(coraNetDial, 3));
  symbolSet(intern("net-recv"), makeBuiltin(coraNetRecv, 3));
  symbolSet(intern("net-send"), makeBuiltin(coraNetSend, 3));
}
