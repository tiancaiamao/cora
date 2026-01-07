#ifndef PARALLEL_POLLER_H
#define PARALLEL_POLLER_H

#include <pthread.h>
#include <stdbool.h>
#include <stddef.h>

// Event type flags
#define EVENT_READ  (1 << 0)
#define EVENT_WRITE (1 << 1)

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Poller Poller;
typedef struct EventHandle EventHandle;

typedef struct EventHandle {
	int fd;
	void (*read_callback)(struct EventHandle *);
	void (*write_callback)(struct EventHandle *);
	void *user_data;
	int listen_events;
	int ready_events;
	bool exist;
} EventHandle;

struct Poller {
	int epoll_fd;
	void *events;
	int max_events;
	void *wake_queue;
	pthread_mutex_t wake_lock;
};

Poller *poller_new(void);
void poller_free(Poller *p);

EventHandle *event_handle_new(int fd, void (*read_cb)(struct EventHandle *),
	void (*write_cb)(struct EventHandle *),
	void *user_data);
void event_handle_free(EventHandle *eh);

void event_handle_enable_read(EventHandle *eh);
void event_handle_enable_write(EventHandle *eh);
void event_handle_disable_all(EventHandle *eh);
int event_handle_get_fd(EventHandle *eh);
void *event_handle_get_user_data(EventHandle *eh);
void event_handle_set_ready_event(EventHandle *eh, int ev);
bool event_handle_get_exist(EventHandle *eh);
void event_handle_set_exist(EventHandle *eh, bool in);

void **poller_poll(Poller *p, int timeout_ms, int *out_nfds);
void poller_add_handle(Poller *p, EventHandle *eh);
void poller_remove_handle(Poller *p, EventHandle *eh);
void poller_update_handle(Poller *p, EventHandle *eh);

void poller_process_wake_queue(Poller *p);

#ifdef __cplusplus
}
#endif

#endif
