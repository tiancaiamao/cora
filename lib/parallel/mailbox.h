#ifndef PARALLEL_MAILBOX_H
#define PARALLEL_MAILBOX_H

#include "../../src/runtime.h"
#include "coroutine.h"
#include "vm.h"
#include <pthread.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

// Forward declarations
typedef struct Mailbox Mailbox;
typedef struct Waker Waker;

// Waker: Reference to a VM and Coroutine that should be woken up
// This is the key abstraction from the blog post
struct Waker {
	VM *vm;		   // Which VM owns the coroutine
	Coroutine *co; // Which coroutine to wake up (can be NULL for VM-level wake)
	bool notified; // Has this waker been notified?
};

// Mailbox: Thread-safe message passing between VMs
// Based on the blog's design - doesn't store coroutines directly,
// only stores Waker references
struct Mailbox {
	pthread_mutex_t lock;

	// Message queue (for buffered messages)
	Obj *messages;
	int msg_head;
	int msg_tail;
	int msg_count;
	int msg_capacity;

	// Blocked senders/receivers (using Waker references)
	Waker **blocked_senders;
	int sender_head;
	int sender_tail;
	int sender_count;
	int sender_capacity;

	Waker **blocked_receivers;
	int receiver_head;
	int receiver_tail;
	int receiver_count;
	int receiver_capacity;

	bool closed;
	int id;
};

// Waker functions
Waker *waker_new(VM *vm, Coroutine *co);
void waker_free(Waker *waker);
void waker_notify(Waker *waker); // Wake up the coroutine by enqueueing to VM

// Mailbox functions
Mailbox *mailbox_new(int capacity); // capacity=0 for unbuffered (CML-style)
void mailbox_free(Mailbox *mb);
void mailbox_close(Mailbox *mb);
bool mailbox_is_closed(Mailbox *mb);

// Send/Recv operations
// Returns true if successful, false if would block or closed
bool mailbox_send_try(Mailbox *mb, Obj msg);
bool mailbox_recv_try(Mailbox *mb, Obj *msg_out);

// Blocking operations - register a waker and return false if blocked
bool mailbox_send(Mailbox *mb, Obj msg, Waker *waker);
bool mailbox_recv(Mailbox *mb, Obj *msg_out, Waker *waker);

// Mailbox registry for cross-VM lookup
void mailbox_registry_init(void);
bool mailbox_publish(const char *name, Mailbox *mb);
Mailbox *mailbox_resolve(const char *name);

#ifdef __cplusplus
}
#endif

#endif // PARALLEL_MAILBOX_H
