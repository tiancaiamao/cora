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
typedef struct ListNode ListNode;

typedef struct {
	ListNode node; // to put it in queue
	CoraVM *vm; // which VM
	int handle; // coroutine object
	void *data;
} Waker;

struct Mailbox {
	pthread_mutex_t lock;
	Queue sendq;
	Queue recvq;

	// bool closed;
	int id;
};

// Mailbox functions
Mailbox *mailbox_new(); // capacity=0 for unbuffered (CML-style)
void mailbox_free(Mailbox *mb);
// void mailbox_close(Mailbox *mb);
// bool mailbox_is_closed(Mailbox *mb);

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
