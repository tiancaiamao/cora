#ifndef PARALLEL_MAILBOX_H
#define PARALLEL_MAILBOX_H

#include "../../src/runtime.h"
#include "vm.h"
#include <pthread.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

// Forward declarations
typedef struct Mailbox Mailbox;

// Mailbox: Thread-safe message passing between VMs
// NOTE: This is a simplified version for now.
// In the future, we'll integrate with Cora layer's task queue properly.
struct Mailbox {
	pthread_mutex_t lock;

	// Message queue (for buffered messages)
	Obj *messages;
	int msg_head;
	int msg_tail;
	int msg_count;
	int msg_capacity;

	bool closed;
	int id;
};

// Mailbox functions
Mailbox *mailbox_new(int capacity); // capacity=0 for unbuffered (CML-style)
void mailbox_free(Mailbox *mb);
void mailbox_close(Mailbox *mb);
bool mailbox_is_closed(Mailbox *mb);

// Send/Recv operations
// Returns true if successful, false if would block or closed
bool mailbox_send_try(Mailbox *mb, Obj msg);
bool mailbox_recv_try(Mailbox *mb, Obj *msg_out);

// Mailbox registry for cross-VM lookup
void mailbox_registry_init(void);
bool mailbox_publish(const char *name, Mailbox *mb);
Mailbox *mailbox_resolve(const char *name);

#ifdef __cplusplus
}
#endif

#endif // PARALLEL_MAILBOX_H
