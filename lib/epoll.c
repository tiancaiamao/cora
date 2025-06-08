#include <sys/epoll.h>

static int
pollCreate() {
  return epoll_create(1);
}

static void
pollReadAdd(int pollfd, int fd, Obj conn) {
	struct epoll_event ev;
	ev.events = EPOLLIN;
	ev.data.u64 = conn;
	/* ev.data.fd = fd; */
	/* printf("netRecv, epoll_ctl add fd = %d\n", fd); */
	if (epoll_ctl(pollfd, EPOLL_CTL_ADD, fd, &ev) < 0) {
		printf("epoll ctl add read fail %d, err=%s\n", fd, strerror(errno));
	}
}

static void
pollWriteAdd(int pollfd, int fd, Obj conn) {
	struct epoll_event ev;
	ev.events = EPOLLOUT;
	ev.data.u64 = conn;
	/* printf("netSend, epoll_ctl add fd = %d\n", fd); */
	if (epoll_ctl(pollfd, EPOLL_CTL_ADD, fd, &ev) < 0) {
		// TODO
		printf("epoll ctl add write fail\n");
	}
}

static void
pollCtlMod(int pollfd, int fd, uint32_t events, Obj conn) {
	struct epoll_event ev;
	ev.events = events;
	ev.data.u64 = conn;
	/* printf("netSend, epoll_ctl add fd = %d\n", fd); */
	if (epoll_ctl(pollfd, EPOLL_CTL_MOD, fd, &ev) < 0) {
		// TODO
		printf("epoll ctl mod fail\n");
	}
}

static void
pollCtlDel(int pollfd, int fd) {
  int succ = epoll_ctl(pollfd, EPOLL_CTL_DEL, fd, NULL);
  if (succ != 0) {
	  perror("epoll_ctl EPOLL_CTL_DEL");
  }
}

static Obj
poll(int pollfd, int timeout) {
  const int MAX_EVENTS = 64;
  struct epoll_event events[MAX_EVENTS];
  int nfds = epoll_wait(pollfd, events, MAX_EVENTS, timeout);
  if (nfds < 0) {
    // TODO
    printf("netpoll fail?????\n");
    perror("epoll_wait");
    /* coraReturn(ctx, ) */
  }

  Obj ret = Nil;
  for (int i=0; i<nfds; i++) {
	  if ((events[i].events & EPOLLIN) == EPOLLIN) {
		  Obj conn = events[i].data.u64;
		  ret = cons(cons(conn, intern("read")), ret);
	  }
	  if ((events[i].events & EPOLLOUT) == EPOLLOUT) {
		  Obj conn = events[i].data.u64;
		  ret = cons(cons(conn, intern("write")), ret);
	  }
  }
  return ret;
}
