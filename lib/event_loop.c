#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/epoll.h>
#include "event_loop.h"

struct eventLoop {
  int fd;
  struct epoll_event *events;
  int maxEvents;
};

struct eventLoop*
eventLoopCreate() {
  struct eventLoop *ret;
  int epollfd = epoll_create(1);
  if (epollfd < 0) {
    return NULL;
  }
  ret = (struct eventLoop*)malloc(sizeof(struct eventLoop));
  ret->fd = epollfd;
  ret->maxEvents = 1024;
  ret->events = (struct epoll_event*)malloc(sizeof(struct epoll_event) * ret->maxEvents);
  return ret;
}

void
eventLoopRelease(struct eventLoop* el) {
  close(el->fd);
  free(el->events);
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

int
eventLoopRemoveHandle(struct eventLoop* el, struct eventHandle *h) {
  struct epoll_event ev;
  return epoll_ctl(el->fd, EPOLL_CTL_DEL, h->fd, &ev);
}

int
eventLoopPoll(struct eventLoop* el, uint32_t ms) {
  int n = epoll_wait(el->fd, el->events, el->maxEvents, ms);
  if (n < 0) {
    return n;
  }

  for (int i=0; i<n; i++) {
    struct epoll_event* e = &el->events[i];
    struct eventHandle* h = (struct eventHandle*)(e->data.ptr);
    h->onEvents(h, el, e->events);
  }
  return 0;
}

void
eventLoopRun(struct eventLoop* el) {
  eventLoopPoll(el, -1);
  return;
}
