#ifndef PARALLEL_MAILBOX_H
#define PARALLEL_MAILBOX_H

#include "../../src/runtime.h"
#include <pthread.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Mailbox Mailbox;
typedef struct Waker Waker;
typedef struct CoraVM CoraVM;

// Mailbox functions
Mailbox *mailbox_new(int capacity); // capacity=0 for unbuffered (CML-style)
void mailbox_free(Mailbox *mb);
void mailbox_close(Mailbox *mb);
bool mailbox_is_closed(Mailbox *mb);

// Send/Recv operations
// Returns true if successful, false if would block or closed
bool mailbox_send_try(Mailbox *mb, Obj msg);
bool mailbox_recv_try(Mailbox *mb, Obj *msg_out);

// Enqueue blocked senders/receivers
void mailbox_sendq_enqueue(Mailbox *mb, Waker *w);
void mailbox_recvq_enqueue(Mailbox *mb, Waker *w);

// Waker lifecycle
Waker *waker_create(CoraVM *vm, int handle, Obj value);

// Mailbox registry for cross-VM lookup
void mailbox_registry_init(void);
bool mailbox_publish(const char *name, Mailbox *mb);
Mailbox *mailbox_resolve(const char *name);

#ifdef __cplusplus
}
#endif

#endif // PARALLEL_MAILBOX_H
