#include "poller.h"
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#if defined(__linux__)
#include <sys/epoll.h>
#elif defined(__APPLE__)
#include <sys/event.h>
#else
#error "Unsupported platform"
#endif

// Simplified wake queue - just a placeholder for now
typedef struct ReadyNode {
	struct ReadyNode *next;
} ReadyNode;

typedef struct ReadyQueue {
	ReadyNode *head;
	ReadyNode *tail;
} ReadyQueue;

static void
ReadyQueueInit(ReadyQueue *q, ReadyNode *stub) {
	q->head = stub;
	q->tail = stub;
	stub->next = NULL;
}

static bool
ReadyQueueIsEmpty(ReadyQueue *q) {
	return q->head == q->tail;
}

static ReadyNode *
ReadyQueueDequeue(ReadyQueue *q) {
	if (ReadyQueueIsEmpty(q)) {
		return NULL;
	}
	ReadyNode *node = q->head;
	q->head = node->next;
	return node;
}

Poller *
poller_new(void) {
	Poller *p = (Poller *)malloc(sizeof(Poller));
	if (!p) {
		return NULL;
	}

#if defined(__APPLE__)
	p->epoll_fd = kqueue();
	p->events = calloc(1024, sizeof(struct kevent));
#elif defined(__linux__)
	p->epoll_fd = epoll_create1(0);
	p->events = calloc(1024, sizeof(struct epoll_event));
#endif
	p->max_events = 1024;

	ReadyNode *stub = malloc(sizeof(ReadyNode));
	ReadyQueue *queue = malloc(sizeof(ReadyQueue));
	ReadyQueueInit(queue, stub);
	p->wake_queue = queue;
	pthread_mutex_init(&p->wake_lock, NULL);

	return p;
}

void
poller_free(Poller *p) {
	if (!p) {
		return;
	}

	if (p->epoll_fd >= 0) {
		close(p->epoll_fd);
	}

	if (p->events) {
		free(p->events);
	}

	pthread_mutex_destroy(&p->wake_lock);
	free(p);
}

EventHandle *
event_handle_new(int fd, void (*read_cb)(struct EventHandle *),
	void (*write_cb)(struct EventHandle *),
	void *user_data) {
	EventHandle *eh = (EventHandle *)malloc(sizeof(EventHandle));
	if (!eh) {
		return NULL;
	}

	eh->fd = fd;
	eh->read_callback = read_cb;
	eh->write_callback = write_cb;
	eh->user_data = user_data;
	eh->listen_events = 0;
	eh->ready_events = 0;
	eh->exist = false;

	return eh;
}

void
event_handle_free(EventHandle *eh) {
	if (eh) {
		free(eh);
	}
}

void
event_handle_enable_read(EventHandle *eh) {
	if (!eh) {
		return;
	}
	eh->listen_events |= EVENT_READ;
}

void
event_handle_enable_write(EventHandle *eh) {
	if (!eh) {
		return;
	}
	eh->listen_events |= EVENT_WRITE;
}

void
event_handle_disable_all(EventHandle *eh) {
	if (!eh) {
		return;
	}
	eh->listen_events = 0;
}

int
event_handle_get_fd(EventHandle *eh) {
	if (!eh) {
		return -1;
	}
	return eh->fd;
}

void *
event_handle_get_user_data(EventHandle *eh) {
	if (!eh) {
		return NULL;
	}
	return eh->user_data;
}

void
event_handle_set_ready_event(EventHandle *eh, int ev) {
	if (!eh) {
		return;
	}
	eh->ready_events |= ev;
}

bool
event_handle_get_exist(EventHandle *eh) {
	if (!eh) {
		return false;
	}
	return eh->exist;
}

void
event_handle_set_exist(EventHandle *eh, bool in) {
	if (!eh) {
		return;
	}
	eh->exist = in;
}

void **
poller_poll(Poller *p, int timeout_ms, int *out_nfds) {
	if (!p || !out_nfds) {
		*out_nfds = 0;
		return NULL;
	}

	*out_nfds = 0;

#if defined(__linux__)
	int nfds = epoll_wait(p->epoll_fd, (struct epoll_event *)p->events,
		p->max_events, timeout_ms);
#elif defined(__APPLE__)
	struct timespec ts;
	ts.tv_sec = timeout_ms / 1000;
	ts.tv_nsec = (timeout_ms % 1000) * 1000000;
	int nfds = kevent(p->epoll_fd, NULL, 0, (struct kevent *)p->events,
		p->max_events, &ts);
#endif

	if (nfds < 0) {
		if (errno == EINTR) {
			*out_nfds = 0;
			return NULL;
		}
		*out_nfds = -1;
		return NULL;
	}

	*out_nfds = nfds;

	if (nfds == 0) {
		return NULL;
	}

	void **active = malloc(sizeof(void *) * nfds);
	for (int i = 0; i < nfds; i++) {
#if defined(__linux__)
		struct epoll_event *ev = &((struct epoll_event *)p->events)[i];
		int events = 0;
		if (ev->events & (EPOLLIN | EPOLLPRI)) {
			events |= EVENT_READ;
		}
		if (ev->events & EPOLLOUT) {
			events |= EVENT_WRITE;
		}
		EventHandle *eh = (EventHandle *)ev->data.ptr;
		eh->ready_events = events;
		active[i] = eh;
#elif defined(__APPLE__)
		struct kevent *ev = &((struct kevent *)p->events)[i];
		int events = 0;
		if (ev->filter == EVFILT_READ) {
			events |= EVENT_READ;
		}
		if (ev->filter == EVFILT_WRITE) {
			events |= EVENT_WRITE;
		}
		EventHandle *eh = (EventHandle *)ev->udata;
		eh->ready_events = events;
		active[i] = eh;
#endif
	}

	return active;
}

void
poller_add_handle(Poller *p, EventHandle *eh) {
	if (!p || !eh) {
		return;
	}

#if defined(__linux__)
	struct epoll_event ev;
	memset(&ev, 0, sizeof(ev));
	ev.events = 0;
	if (eh->listen_events & EVENT_READ) {
		ev.events |= EPOLLIN | EPOLLPRI;
	}
	if (eh->listen_events & EVENT_WRITE) {
		ev.events |= EPOLLOUT;
	}
	ev.data.ptr = eh;

	if (!eh->exist) {
		if (epoll_ctl(p->epoll_fd, EPOLL_CTL_ADD, eh->fd, &ev) < 0) {
			return;
		}
		eh->exist = true;
	} else {
		if (epoll_ctl(p->epoll_fd, EPOLL_CTL_MOD, eh->fd, &ev) < 0) {
			return;
		}
	}
#elif defined(__APPLE__)
	struct kevent kev[2];
	int n = 0;
	if (eh->listen_events & EVENT_READ) {
		EV_SET(&kev[n++], eh->fd, EVFILT_READ, EV_ADD, 0, 0, eh);
	}
	if (eh->listen_events & EVENT_WRITE) {
		EV_SET(&kev[n++], eh->fd, EVFILT_WRITE, EV_ADD, 0, 0, eh);
	}

	if (n > 0) {
		if (kevent(p->epoll_fd, kev, n, NULL, 0, NULL) < 0) {
			return;
		}
	}
	eh->exist = true;
#endif
}

void
poller_remove_handle(Poller *p, EventHandle *eh) {
	if (!p || !eh) {
		return;
	}

#if defined(__linux__)
	epoll_ctl(p->epoll_fd, EPOLL_CTL_DEL, eh->fd, NULL);
#elif defined(__APPLE__)
	struct kevent kev[2];
	int n = 0;
	if (eh->listen_events & EVENT_READ) {
		EV_SET(&kev[n++], eh->fd, EVFILT_READ, EV_DELETE, 0, 0, eh);
	}
	if (eh->listen_events & EVENT_WRITE) {
		EV_SET(&kev[n++], eh->fd, EVFILT_WRITE, EV_DELETE, 0, 0, eh);
	}

	if (n > 0) {
		kevent(p->epoll_fd, kev, n, NULL, 0, NULL);
	}
#endif

	eh->exist = false;
}

void
poller_update_handle(Poller *p, EventHandle *eh) {
	if (!p || !eh) {
		return;
	}

	poller_remove_handle(p, eh);
	poller_add_handle(p, eh);
}

void
poller_process_wake_queue(Poller *p) {
	if (!p) {
		return;
	}

	pthread_mutex_lock(&p->wake_lock);

	ReadyQueue *queue = (ReadyQueue *)p->wake_queue;
	ReadyNode *node = NULL;

	while (!ReadyQueueIsEmpty(queue)) {
		node = ReadyQueueDequeue(queue);
		if (node) {
			free(node);
		}
	}

	pthread_mutex_unlock(&p->wake_lock);
}
