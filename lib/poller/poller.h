#ifndef CORA_POLLER_CORE_H
#define CORA_POLLER_CORE_H

#include <pthread.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Event type flags
#define EVENT_READ  (1 << 0)
#define EVENT_WRITE (1 << 1)
#define EVENT_ERROR (1 << 2)

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

	// For coroutine/VM integration
	void *target_vm;        // CoraVM to wake up when events are ready
	int wakeup_handle;       // handle-map handle for wakeup
} EventHandle;

struct Poller {
	int epoll_fd;
	void *events;
	int max_events;
	volatile int active_handles;
};

// ============================================================================
// Poller lifecycle management
// ============================================================================

Poller *poller_new(void);
void poller_free(Poller *p);

// ============================================================================
// EventHandle management
// ============================================================================

EventHandle *event_handle_new(int fd, void (*read_cb)(struct EventHandle *),
	void (*write_cb)(struct EventHandle *),
	void *user_data);

void event_handle_free(EventHandle *eh);

void event_handle_enable_read(EventHandle *eh);
void event_handle_enable_write(EventHandle *eh);
void event_handle_disable_all(EventHandle *eh);

// Set wakeup info for handle-map mechanism
void event_handle_set_wakeup_info(EventHandle *eh, void *vm, int handle);

// ============================================================================
// Poller operations
// ============================================================================

void **poller_poll(Poller *p, int timeout_ms, int *out_nfds);
bool poller_add_handle(Poller *p, EventHandle *eh);
bool poller_remove_handle(Poller *p, EventHandle *eh);
bool poller_update_handle(Poller *p, EventHandle *eh);
int poller_active_handle_count(Poller *p);

#endif
