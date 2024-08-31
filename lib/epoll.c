#include <sys/epoll.h>

static int
pollCreate() {
  epollfd = epoll_create(1);
}

static void
pollReadAdd(int pollfd, int fd, void* udata) {
  struct epoll_event ev;
  ev.events = EPOLLIN;
  ev.data.ptr = udata;
  /* printf("netRecv, epoll_ctl add fd = %d\n", fd); */
  if (epoll_ctl(epollfd, EPOLL_CTL_ADD, fd, &ev) < 0) {
    printf("epoll ctl add fail\n");
  }
}

static void
pollWriteAdd(int pollfd, int fd, void* udata) {
  struct epoll_event ev;
  ev.events = EPOLLOUT;
  ev.data.ptr = udata;
  printf("netSend, epoll_ctl add fd = %d\n", fd);
  if (epoll_ctl(epollfd, EPOLL_CTL_ADD, fd, &ev) < 0) {
    // TODO
    printf("epoll ctl add fail");
  }
}

static void
pollDel(int pollfd, int fd) {
  epoll_ctl(pollfd, EPOLL_CTL_DEL, fd, NULL);
}

static Obj
poll(int pollfd) {
  const int MAX_EVENTS = 10;
  struct epoll_event events[MAX_EVENTS];
  int nfds = epoll_wait(pollfd, events, MAX_EVENTS, -1);
  if (nfds < 0) {
    // TODO
    printf("netpoll fail?????\n");
    perror("epoll_wait");
    /* coraReturn(ctx, ) */
  }

  Obj ret = Nil;
  for (int i=0; i<nfds; i++) {
    Obj data = events[i].data.ptr;
    Obj fd = cadr(data);
    ret = cons(fd, ret);
    pollDel(epollfd, fd);
  }
}
