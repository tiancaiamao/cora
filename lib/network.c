#include "network.h"
#include "event_loop.h"

// connector is an eventHandle.
struct connector {
  struct eventHandle handle;
  void *ud;
  void (*cb)(void *ud, int32_t fd);
};

static void
processConnect(struct connector* c, uint32_t events) {
  c->cb(c->ud, fd);
}

static struct connector*
connectorNew(int32_t fd, void *ud) {
  struct connector *c = (struct connector*)malloc(sizeof(struct connector));
  memset(c, 0, sizeof(sizeof(struct connector)));
  c->handle.fd = fd;
  c->watch = EPOLL_IN | EPOLL_OUT;
  c->onEvents = processConnect;
  c->ud = ud;
  return c;
}

int32_t
asyncConnect(int fd, struct eventLoop *el, char *addr,
                     void(*cb)(void *ud, int32_t fd),
void *ud, uint32_t timeout) {

  struct sockaddr *addr;

  int ret = connect(fd, addr, addrlen);
  if (ret == 0) {
    printf("=== connect return 0! exec callbacck()");
    return;
  }

  if (errno != EINPROGRESS) {
    printf("some error happen");
    return;
  }

  struct connector* handle = connectNew(fd);
  eventLoopAddHandle(handle);
}
