#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/epoll.h>

const maxEvents = 1024;

struct eventLoop {
  int fd;
  struct epoll_event events[maxEvents];
};

struct eventLoop*
eventLoopCreate() {
  struct eventLoop *ret;
  int epollfd = epoll_create(0);
  if (epollfd < 0) {
    return NULL;
  }
  ret = (struct eventLoop*)malloc(sizeof(struct eventLoop));
  ret.fd = fd;
  return ret;
}

void
eventLoopRelease(struct eventLoop* el) {
  close(el->fd);
  free(el);
  return;
}

int
eventLoopAddHandle(struct eventLoop* el, struct eventHandle *h) {
  struct epoll_event ev;
  ev.events = h->watch;
  ev.data.ptr = h;
  return epoll_ctl(el->fd, EPOLL_CTL_ADD, h->fd, &ev);
}

void
eventLoopPoll(struct eventLoop* el, uint32_t ms) {
  int n = epoll_wait(el->fd, el->events, maxEvents, ms);
  if (n == -1) {
    // TODO
    perror("epoll_wait");
    os.Exit(-1);
  }

  for (int i=0; i<n; i++) {
    struct epoll_event* e = &el->events[i];
    struct eventHandle* h = (struct eventHandle*)(e->data.ptr);
    h->onEvents(h, e->events);
  }
}

void
eventLoopRun(struct eventLoop* el) {
  eventLoopPoll(el, -1);
}
