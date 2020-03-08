#include "network.h"
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/epoll.h>

// connector is an eventHandle.
struct connector {
  struct eventHandle handle;
  void *ud;
  void (*cb)(void *ud, int fd);
};

static void
processConnect(void* handle, int events) {
  struct connector* c = (void*)handle;
  c->cb(c->ud, c->handle.fd);
}

static struct connector*
connectorNew(int fd, void(*cb)(void* ud, int fd),void *ud) {
  struct connector *c = (struct connector*)malloc(sizeof(struct connector));
  memset(c, 0, sizeof(sizeof(struct connector)));
  c->handle.fd = fd;
  c->handle.onEvents = processConnect;
  c->handle.watch = EPOLLIN | EPOLLOUT;
  c->ud = ud;
  return c;
}

void
netDial(int fd, struct eventLoop *el,
             void(*cb)(void *ud, int fd),
             void *ud) {

  struct sockaddr_in addr;
  int ret = connect(fd, (struct sockaddr*)&addr, sizeof(addr));
  if (ret == 0) {
    /* printf("=== connect return 0! exec callbacck()"); */
    return;
  }

  if (errno != EINPROGRESS) {
    /* printf("some error happen"); */
    return;
  }

  struct connector* c = connectorNew(fd, cb, ud);
  eventLoopAddHandle(el, &c->handle);
  return;
}

// acceptor is a kind of eventHandle.
struct acceptor {
  struct eventHandle handle;
  void *ud;
  void (*cb)(void *ud, int fd);
};

static void
processAccept(void *ud, int events) {
  struct acceptor *a = ud;
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
streamConnOnEvents(void* ud, int events) {
  struct streamConn* conn = (struct streamConn*)ud;
  if (events & EPOLLIN) {
    processRead(conn);
  }
  if (events & EPOLLOUT) {
    processWrite(conn);
  }
}

struct streamConn*
streamConnNew(int fd) {
  struct streamConn* conn = (struct streamConn*)malloc(sizeof(struct streamConn));
  memset(conn, 0, sizeof(struct streamConn));
  conn->handle.fd = fd;
  conn->handle.onEvents = streamConnOnEvents;
  return conn;
}

void
netRead(struct streamConn *conn, char *data, int size,
        void (*cb)(void *ud), void *ud) {
  resetByteBuf(&conn->recv, data, size);
  conn->handle.watch |= EPOLLIN;
  eventLoopAddHandle(conn->loop, &conn->handle);
}


void
netWrite(struct streamConn *conn, char *data, int size,
         void (*cb)(void *ud), void *ud) {
  resetByteBuf(&conn->send, data, size);
  conn->handle.watch |= EPOLLOUT;
  eventLoopAddHandle(conn->loop, &conn->handle);
}
