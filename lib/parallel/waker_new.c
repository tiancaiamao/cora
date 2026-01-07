#include "coroutine.h"
#include "waker.h"
#include <stdatomic.h>
#include <stdlib.h>

static atomic_int next_mailbox_id = 0;

void
ReadyQueueInit(ReadyQueue *q, ReadyNode *stub) {
	atomic_init(&q->head, stub);
	q->tail = stub;
}

bool
ReadyQueueIsEmpty(ReadyQueue *q) {
	return atomic_load(&q->head) == q->tail;
}

void
ReadyQueueEnqueue(ReadyQueue *q, ReadyNode *node) {
	node->next = NULL;
	ReadyNode *prev = atomic_exchange(&q->head, node);
	prev->next = node;
}

ReadyNode *
ReadyQueueDequeue(ReadyQueue *q) {
	ReadyNode *tail = q->tail;
	ReadyNode *next = tail->next;

	if (next == NULL) {
		return NULL;
	}

	q->tail = next;
	return next;
}

void
MailBoxInit(MailBox *mb) {
	pthread_mutex_init(&mb->lock, NULL);
	mb->state = MAILBOX_EMPTY;
	mb->message = NULL;
	mb->sender_waker = NULL;
	mb->receiver_waker = NULL;
	mb->id = atomic_fetch_add(&next_mailbox_id, 1);
}

void
MailBoxDestroy(MailBox *mb) {
	pthread_mutex_destroy(&mb->lock);
}

bool
message_is_allowed(Obj msg) {
	if (isfixnum(msg))
		return true;
	if (msg == True || msg == False)
		return true;
	if (msg == Nil)
		return true;
	if (isBytes(msg))
		return true;
	return false;
}

MailBoxResult
MailBoxSend(MailBox *mb, void *msg, Waker *waker) {
	pthread_mutex_lock(&mb->lock);

	if (mb->state == MAILBOX_CLOSED) {
		pthread_mutex_unlock(&mb->lock);
		return MAILBOX_CLOSED;
	}

	if (mb->state == MAILBOX_HAS_RECEIVER) {
		pthread_mutex_unlock(&mb->lock);
		return MAILBOX_WOULD_BLOCK;
	}

	if (mb->state == MAILBOX_HAS_SENDER) {
		Waker *receiver = mb->receiver_waker;
		mb->state = MAILBOX_EMPTY;
		mb->message = NULL;
		mb->sender_waker = NULL;
		mb->receiver_waker = NULL;
		pthread_mutex_unlock(&mb->lock);

		WakerNotify(receiver);
		return MAILBOX_OK;
	}

	mb->state = MAILBOX_HAS_SENDER;
	mb->message = msg;
	mb->sender_waker = waker;

	pthread_mutex_unlock(&mb->lock);
	return MAILBOX_OK;
}

MailBoxResult
MailBoxReceive(MailBox *mb, void **msg_out, Waker *waker) {
	pthread_mutex_lock(&mb->lock);

	if (mb->state == MAILBOX_CLOSED) {
		pthread_mutex_unlock(&mb->lock);
		return MAILBOX_CLOSED;
	}

	if (mb->state == MAILBOX_HAS_SENDER) {
		*msg_out = mb->message;
		Waker *sender = mb->sender_waker;
		mb->state = MAILBOX_EMPTY;
		mb->message = NULL;
		mb->sender_waker = NULL;
		mb->receiver_waker = NULL;
		pthread_mutex_unlock(&mb->lock);

		WakerNotify(sender);
		return MAILBOX_OK;
	}

	mb->state = MAILBOX_HAS_RECEIVER;
	mb->receiver_waker = waker;

	pthread_mutex_unlock(&mb->lock);
	return MAILBOX_OK;
}

void
MailBoxClose(MailBox *mb) {
	pthread_mutex_lock(&mb->lock);

	if (mb->state == MAILBOX_CLOSED) {
		pthread_mutex_unlock(&mb->lock);
		return;
	}

	if (mb->state == MAILBOX_HAS_SENDER && mb->sender_waker) {
		WakerNotify(mb->sender_waker);
	}

	if (mb->state == MAILBOX_HAS_RECEIVER && mb->receiver_waker) {
		WakerNotify(mb->receiver_waker);
	}

	mb->state = MAILBOX_CLOSED;
	mb->message = NULL;
	mb->sender_waker = NULL;
	mb->receiver_waker = NULL;

	pthread_mutex_unlock(&mb->lock);
}

bool
MailBoxIsClosed(MailBox *mb) {
	pthread_mutex_lock(&mb->lock);
	bool closed = (mb->state == MAILBOX_CLOSED);
	pthread_mutex_unlock(&mb->lock);
	return closed;
}

void
WakerNotify(Waker *waker) {
	if (!atomic_load(&waker->notified)) {
		atomic_store(&waker->notified, true);

		extern void vm_enqueue_coroutine(VM * vm, Coroutine * co);
		vm_enqueue_coroutine(waker->vm, waker->co);

		extern void vm_enqueue_global(VM * vm);
		vm_enqueue_global(waker->vm);
	}
}
