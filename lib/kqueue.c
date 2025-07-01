#include <sys/event.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

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
pollReadAdd(int kq, int fd, Obj conn) {
    struct kevent ev;
    EV_SET(&ev, fd, EVFILT_READ, EV_ADD | EV_ENABLE, 0, 0, (void*)conn);
    if (kevent(kq, &ev, 1, NULL, 0, NULL) < 0) {
        printf("kevent add read fail %d, err=%s\n", fd, strerror(errno));
    }
}

static void
pollWriteAdd(int kq, int fd, Obj conn) {
    struct kevent ev;
    EV_SET(&ev, fd, EVFILT_WRITE, EV_ADD | EV_ENABLE, 0, 0, (void*)conn);
    if (kevent(kq, &ev, 1, NULL, 0, NULL) < 0) {
        printf("kevent add write fail %d, err=%s\n", fd, strerror(errno));
    }
}

// kqueue does not distinguish ADD and MOD，use EV_ADD | EV_ENABLE to overwrite the previous behavior
static void
pollCtlMod(int kq, int fd, Obj modes, Obj conn) {
	struct kevent ev[2];
	int n = 0;
	while (modes != Nil) {
		Obj val = car(modes);
		if (val == intern("read")) {
			EV_SET(&ev[n++], fd, EVFILT_READ, EV_ADD | EV_ENABLE, 0, 0, (void*)conn);
		} else if (val == intern("write")) {
			EV_SET(&ev[n++], fd, EVFILT_WRITE, EV_ADD | EV_ENABLE, 0, 0, (void*)conn);
		}
		modes = cdr(modes);
	}
	if (kevent(kq, ev, n, NULL, 0, NULL) < 0) {
		printf("kevent mod fail %d, err=%s\n", fd, strerror(errno));
	}
}

static void
pollCtlDel(int kq, int fd) {
    struct kevent ev[2];
    EV_SET(&ev[0], fd, EVFILT_READ, EV_DELETE, 0, 0, NULL);
    EV_SET(&ev[1], fd, EVFILT_WRITE, EV_DELETE, 0, 0, NULL);
    if (kevent(kq, ev, 2, NULL, 0, NULL) < 0) {
        perror("kevent delete");
    }
}

static Obj
poll(int kq, int timeout) {
    const int MAX_EVENTS = 64;
    struct kevent events[MAX_EVENTS];
    struct timespec ts;
    struct timespec *tsp = NULL;

    if (timeout >= 0) {
        ts.tv_sec = timeout / 1000;
        ts.tv_nsec = (timeout % 1000) * 1000000;
        tsp = &ts;
    }

    int nfds;
again:
    nfds = kevent(kq, NULL, 0, events, MAX_EVENTS, tsp);
    if (nfds < 0) {
        if (errno == EINTR) goto again;
        printf("kqueue wait fail?????\n");
        perror("kevent");
    }

    Obj ret = Nil;
    for (int i = 0; i < nfds; i++) {
        struct kevent *e = &events[i];
        Obj conn = (Obj)e->udata;
        if (e->filter == EVFILT_READ) {
            ret = cons(cons(conn, intern("read")), ret);
        }
        if (e->filter == EVFILT_WRITE) {
            ret = cons(cons(conn, intern("write")), ret);
        }
    }
    return ret;
}
