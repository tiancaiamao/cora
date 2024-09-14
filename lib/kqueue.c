#include <sys/types.h>
#include <sys/event.h>
#include <sys/time.h>

static int
pollCreate() {
  int kq = kqueue();
  // TODO
  if (kq == -1) {
    perror("epoll_create1");
    return -1;
  }
  return kq;
}

static void
pollReadAdd(int pollfd, int fd, void* udata) {
  struct kevent ev;
  ev.udata = udata;
  EV_SET(&ev, fd, EVFILT_READ, EV_ADD, 0, 0, NULL);
  kevent(pollfd, &ev, 1, NULL, 0, NULL);
}

static void
pollWriteAdd(int pollfd, int fd, void* udata) {
  struct kevent ev;
  EV_SET(&ev, pollfd, EVFILT_WRITE, EV_ADD, 0, 0, NULL);
  kevent(pollfd, &ev, 1, NULL, 0, NULL);
}

static void
pollDel(int pollfd, int fd) {
  struct kevent ev;
  EV_SET(&ev, pollfd, EVFILT_READ|EVFILT_WRITE, EV_DELETE, 0, 0, 0);
  kevent(pollfd, &ev, 1, NULL, 0, NULL);
}

static Obj
poll(int pollfd) {
  const int MAX_EVENTS = 10;
  struct kevent events[MAX_EVENTS];
  int nfds = kevent(pollfd, NULL, 0, events, MAX_EVENTS, NULL);
  if (nfds < 0) {
    // TODO
    printf("netpoll fail?????\n");
    perror("epoll_wait");
    /* coraReturn(ctx, ) */
  }

  Obj ret = Nil;
  for (int i=0; i<nfds; i++) {
    Obj udata = (Obj)events[i].udata;
    Obj fd = cadr(udata);
    ret = cons(fd, ret);
    pollDel(pollfd, fd);
  }
  return ret;
}
