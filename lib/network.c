#include "network.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/epoll.h>

static int
setNonBlock(int fd) {
  int flags = fcntl(fd, F_GETFL, 0);
  if (flags < 0) {
    return flags;
  }
  flags |= O_NONBLOCK;
  return fcntl(fd, F_SETFL, flags);
}

// connector is an eventHandle.
struct connector {
  struct eventHandle handle;
  void *ud;
  void (*cb)(void *ud, int fd);
};

static void
processConnect(struct eventHandle* h, struct eventLoop *el, int events) {
  printf("connect done, handle = %p\n", h);
  struct connector* c = (void*)h;
  if (eventLoopRemoveHandle(el, h) < 0) {
    // TODO: what the fuck?
  }
  c->cb(c->ud, c->handle.fd);
}

static struct connector*
connectorNew(int fd, void(*cb)(void* ud, int fd),void *ud) {
  struct connector *c = (struct connector*)malloc(sizeof(struct connector));
  memset(c, 0, sizeof(sizeof(struct connector)));
  c->handle.fd = fd;
  c->handle.onEvents = processConnect;
  c->handle.watch = EPOLLIN;
  c->cb = cb;
  c->ud = ud;
  return c;
}

int
netDial(int fd, struct eventLoop *el,
        struct sockaddr *addr, socklen_t addrLen,
        void(*cb)(void *ud, int fd),
        void *ud) {
  int res = setNonBlock(fd);
  if (res < 0) {
    return res;
  }
  res = connect(fd, addr, addrLen);
  if (res < 0 && errno != EINPROGRESS) {
      return res;
  }

  struct connector* c = connectorNew(fd, cb, ud);
  eventLoopAddHandle(el, &c->handle);
  return 0;
}

// acceptor is a kind of eventHandle.
struct acceptor {
  struct eventHandle handle;
  void *ud;
  void (*cb)(void *ud, int fd);
};

static void
processAccept(struct eventHandle *h, struct eventLoop* el, int events) {
  struct acceptor *a = (void*)h;
  while (1) {
    struct sockaddr addr;
    socklen_t addrlen;
    int fd = accept(a->handle.fd, &addr, &addrlen);
    if (fd < 0) {
      if (errno == EAGAIN || errno == EWOULDBLOCK) {
        break;
      } else {
        // TODO:
      }
    }

    a->cb(a->ud, fd);
  }
}

static struct acceptor*
acceptorNew(int fd, void *ud) {
  struct acceptor* ret = (void*)malloc(sizeof(struct acceptor));
  memset(ret, 0, sizeof(struct acceptor));
  ret->handle.fd = fd;
  ret->handle.onEvents = processAccept;
  ret->ud = ud;
  return ret;
}

struct acceptor*
netListen(struct eventLoop *el,
                           struct sockaddr *addr,
                           void (*cb)(void *ud),
                           void *ud) {
  int fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  if (fd < 0) {
    return NULL;
  }
  int succ = bind(fd, addr, sizeof(struct sockaddr_in));
  if (succ < 0) {
    return NULL;
  }
  if (listen(fd, SOMAXCONN) != 0) {
    return NULL;
  }

  struct acceptor* ret = acceptorNew(fd, ud);
  eventLoopAddHandle(el, &ret->handle);
  return ret;
}

struct byteBuf {
  char *data;
  int len;
  int cap;
};

static void
resetByteBuf(struct byteBuf *buf, char *data, int count) {
  buf->data = data;
  buf->len = 0;
  buf->cap = count;
}

// streamConn is a TCP connection, implements eventHandle.
struct streamConn {
  struct eventHandle handle;
  struct eventLoop *loop;
  struct byteBuf recv;
  void (*recvCB)(void *ud);
  void *ud1;

  struct byteBuf send;
  void (*sendCB)(void *ud);
  void *ud2;
};

static void
processRead(struct streamConn *conn) {
  struct byteBuf *recv = &conn->recv;
  while(recv->len < recv->cap) {
    char *buf = recv->data + recv->len;
    size_t count = recv->cap - recv->len;
    ssize_t n = read(conn->handle.fd, buf, count);
    if (n < 0) {
      if (errno == EAGAIN || errno == EWOULDBLOCK) {
      } else {
        // TODO: handle error.
      }
      return;
    }

    if (n == 0) {
      // TODO: handle EOF
      return;
    }

    recv->len += n;
  }

  conn->recvCB(conn->ud1);
}

static void
processWrite(struct streamConn *conn) {
  struct byteBuf *send = &conn->send;
  while(send->len < send->cap) {
    char *buf = send->data + send->len;
    size_t remain = send->cap - send->len;
    ssize_t n = write(conn->handle.fd, buf, remain);
    if (n < 0) {
      if (errno == EAGAIN || errno == EWOULDBLOCK) {
        return;
      }
    }
    if (n == 0) {
      // TODO: disk full?
      return;
    }
    send->len += n;
  }
  conn->sendCB(conn->ud2);
}

static void
streamConnOnEvents(struct eventHandle* h, struct eventLoop *el, int events) {
  struct streamConn* conn = (void*)h;
  if (events & EPOLLIN) {
    processRead(conn);
  }
  if (events & EPOLLOUT) {
    processWrite(conn);
  }
}

struct streamConn*
streamConnNew(int fd, struct eventLoop *el) {
  if (setNonBlock(fd) < 0) {
    return NULL;
  }

  struct streamConn* conn = (struct streamConn*)malloc(sizeof(struct streamConn));
  memset(conn, 0, sizeof(struct streamConn));
  conn->handle.fd = fd;
  conn->handle.onEvents = streamConnOnEvents;
  conn->loop = el;
  return conn;
}

void
netRead(struct streamConn *conn, char *data, int size,
        void (*cb)(void *ud), void *ud) {
  resetByteBuf(&conn->recv, data, size);
  conn->handle.watch |= EPOLLIN;
  conn->recvCB = cb;
  conn->ud1 = ud;
  eventLoopAddHandle(conn->loop, &conn->handle);
}

void
netWrite(struct streamConn *conn, char *data, int size,
         void (*cb)(void *ud), void *ud) {
  resetByteBuf(&conn->send, data, size);
  conn->handle.watch |= EPOLLOUT;
  conn->sendCB = cb;
  conn->ud2 = ud;
  eventLoopAddHandle(conn->loop, &conn->handle);
}
