#ifndef PARALLEL_POLLER_H
#define PARALLEL_POLLER_H

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
typedef struct VM VM;
typedef struct Coroutine Coroutine;

// Callback type for waking up coroutines/VMs
typedef void (*WakeupCallback)(void *user_data, int events);

typedef struct EventHandle {
	int fd;
	void (*read_callback)(struct EventHandle *);
	void (*write_callback)(struct EventHandle *);
	WakeupCallback wakeup_callback;  // New: for waking up coroutines
	void *user_data;
	int listen_events;
	int ready_events;
	bool exist;

	// For coroutine/VM integration
	VM *target_vm;           // VM to wake up when events are ready
	Coroutine *target_coro;  // Coroutine to wake up when events are ready
} EventHandle;

struct Poller {
	int epoll_fd;
	void *events;
	int max_events;
	void *wake_queue;
	pthread_mutex_t wake_lock;

	// Thread control
	pthread_t thread;
	volatile bool running;
	volatile bool should_stop;
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

// Create event handle with wakeup callback for coroutine integration
EventHandle *event_handle_new_with_wakeup(int fd, WakeupCallback wakeup_cb,
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

// Set target VM/Coroutine for wakeup
void event_handle_set_target_vm(EventHandle *eh, VM *vm);
void event_handle_set_target_coroutine(EventHandle *eh, Coroutine *coro);

// ============================================================================
// Poller operations
// ============================================================================

void **poller_poll(Poller *p, int timeout_ms, int *out_nfds);
void poller_add_handle(Poller *p, EventHandle *eh);
void poller_remove_handle(Poller *p, EventHandle *eh);
void poller_update_handle(Poller *p, EventHandle *eh);

void poller_process_wake_queue(Poller *p);

#endif
