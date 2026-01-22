#include "mailbox.h"
#include "vm.h"
#include <pthread.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#define container_of(ptr, type, member) \
	((type *)((char *)(ptr) - offsetof(type, member)))

typedef struct ListNode {
	struct ListNode *next;
} ListNode;

typedef struct {
	ListNode head;
	ListNode *tail;
} Queue;

static void
queue_init(Queue *q) {
	q->head.next = NULL;
	q->tail = &q->head;
}

static bool
queue_is_empty(Queue *q) {
	return q->head.next == NULL;
}

static void
queue_enqueue(Queue *q, ListNode *node) {
	node->next = NULL;
	q->tail->next = node;
	q->tail = node;
}

static ListNode *
queue_dequeue(Queue *q) {
	ListNode *n = q->head.next;
	if (n == NULL) {
		return NULL;
	}
	q->head.next = n->next;
	if (q->tail == n) {
		q->tail = &q->head;
	}
	n->next = NULL;
	return n;
}

struct Waker {
	ListNode node;
	CoraVM *vm;
	int handle;
	Obj data;
};

struct Mailbox {
	pthread_mutex_t lock;
	Queue sendq;
	Queue recvq;
	bool closed;
	Obj *messages;
	int msg_capacity;
	int msg_count;
	int msg_head;
	int msg_tail;
	int id;
};

static int next_mailbox_id = 1;

Mailbox *
mailbox_new(int capacity) {
	Mailbox *mb = malloc(sizeof(Mailbox));
	if (!mb) {
		return NULL;
	}

	pthread_mutex_init(&mb->lock, NULL);
	queue_init(&mb->sendq);
	queue_init(&mb->recvq);
	mb->closed = false;
	mb->messages = NULL;
	mb->msg_capacity = 0;
	mb->msg_count = 0;
	mb->msg_head = 0;
	mb->msg_tail = 0;
	mb->id = __sync_fetch_and_add(&next_mailbox_id, 1);

	if (capacity > 0) {
		mb->messages = calloc((size_t)capacity, sizeof(Obj));
		if (!mb->messages) {
			pthread_mutex_destroy(&mb->lock);
			free(mb);
			return NULL;
		}
		mb->msg_capacity = capacity;
	}

	return mb;
}

void
mailbox_free(Mailbox *mb) {
	if (!mb) {
		return;
	}

	pthread_mutex_lock(&mb->lock);
	ListNode *node = NULL;
	while ((node = queue_dequeue(&mb->sendq)) != NULL) {
		Waker *w = container_of(node, Waker, node);
		free(w);
	}
	while ((node = queue_dequeue(&mb->recvq)) != NULL) {
		Waker *w = container_of(node, Waker, node);
		free(w);
	}
	pthread_mutex_unlock(&mb->lock);

	pthread_mutex_destroy(&mb->lock);
	free(mb->messages);
	free(mb);
}

void
mailbox_close(Mailbox *mb) {
	if (!mb) {
		return;
	}

	pthread_mutex_lock(&mb->lock);
	mb->closed = true;
	pthread_mutex_unlock(&mb->lock);
}

bool
mailbox_is_closed(Mailbox *mb) {
	if (!mb) {
		return true;
	}

	pthread_mutex_lock(&mb->lock);
	bool closed = mb->closed;
	pthread_mutex_unlock(&mb->lock);
	return closed;
}

Waker *
waker_create(CoraVM *vm, int handle, Obj value) {
	Waker *w = malloc(sizeof(Waker));
	if (!w) {
		return NULL;
	}
	w->node.next = NULL;
	w->vm = vm;
	w->handle = handle;
	w->data = value;
	return w;
}

void
mailbox_sendq_enqueue(Mailbox *mb, Waker *w) {
	if (!mb || !w) {
		return;
	}

	pthread_mutex_lock(&mb->lock);
	queue_enqueue(&mb->sendq, &w->node);
	pthread_mutex_unlock(&mb->lock);
}

void
mailbox_recvq_enqueue(Mailbox *mb, Waker *w) {
	if (!mb || !w) {
		return;
	}

	pthread_mutex_lock(&mb->lock);
	queue_enqueue(&mb->recvq, &w->node);
	pthread_mutex_unlock(&mb->lock);
}

bool
mailbox_send_try(Mailbox *mb, Obj msg) {
	if (!mb) {
		return false;
	}

	Waker *w = NULL;

	pthread_mutex_lock(&mb->lock);
	if (mb->closed) {
		pthread_mutex_unlock(&mb->lock);
		return false;
	}

	ListNode *node = queue_dequeue(&mb->recvq);
	if (node) {
		w = container_of(node, Waker, node);
		pthread_mutex_unlock(&mb->lock);
		cora_vm_enqueue(w->vm, w->handle, msg);
		free(w);
		return true;
	}

	if (mb->msg_capacity > 0 && mb->msg_count < mb->msg_capacity) {
		mb->messages[mb->msg_tail] = msg;
		mb->msg_tail = (mb->msg_tail + 1) % mb->msg_capacity;
		mb->msg_count++;
		pthread_mutex_unlock(&mb->lock);
		return true;
	}

	pthread_mutex_unlock(&mb->lock);
	return false;
}

bool
mailbox_recv_try(Mailbox *mb, Obj *msg_out) {
	if (!mb || !msg_out) {
		return false;
	}

	Waker *wakeup = NULL;
	Waker *refill = NULL;
	Obj msg = Nil;

	pthread_mutex_lock(&mb->lock);
	if (mb->msg_count > 0) {
		msg = mb->messages[mb->msg_head];
		mb->msg_head = (mb->msg_head + 1) % mb->msg_capacity;
		mb->msg_count--;

		if (mb->msg_capacity > 0 && !queue_is_empty(&mb->sendq)) {
			ListNode *node = queue_dequeue(&mb->sendq);
			if (node) {
				refill = container_of(node, Waker, node);
				mb->messages[mb->msg_tail] = refill->data;
				mb->msg_tail = (mb->msg_tail + 1) % mb->msg_capacity;
				mb->msg_count++;
			}
		}

		pthread_mutex_unlock(&mb->lock);

		if (refill) {
			cora_vm_enqueue(refill->vm, refill->handle, Nil);
			free(refill);
		}

		*msg_out = msg;
		return true;
	}

	ListNode *node = queue_dequeue(&mb->sendq);
	if (node) {
		wakeup = container_of(node, Waker, node);
		msg = wakeup->data;
		pthread_mutex_unlock(&mb->lock);
		cora_vm_enqueue(wakeup->vm, wakeup->handle, Nil);
		free(wakeup);
		*msg_out = msg;
		return true;
	}

	pthread_mutex_unlock(&mb->lock);
	return false;
}

// ============================================================================
// Mailbox Registry
// ============================================================================

#define MAX_REGISTRY_SIZE 256

typedef struct RegistryEntry {
	char *name;
	Mailbox *mailbox;
	struct RegistryEntry *next;
} RegistryEntry;

static RegistryEntry *registry_buckets[MAX_REGISTRY_SIZE];
static pthread_mutex_t registry_lock = PTHREAD_MUTEX_INITIALIZER;
static bool registry_initialized = false;

static unsigned int
hash_string(const char *str) {
	unsigned int hash = 5381;
	int c;
	while ((c = *str++)) {
		hash = ((hash << 5) + hash) + c;
	}
	return hash % MAX_REGISTRY_SIZE;
}

void
mailbox_registry_init(void) {
	pthread_mutex_lock(&registry_lock);
	if (!registry_initialized) {
		memset(registry_buckets, 0, sizeof(registry_buckets));
		registry_initialized = true;
	}
	pthread_mutex_unlock(&registry_lock);
}

bool
mailbox_publish(const char *name, Mailbox *mb) {
	if (!registry_initialized) {
		mailbox_registry_init();
	}

	unsigned int bucket = hash_string(name);

	pthread_mutex_lock(&registry_lock);

	RegistryEntry *entry = registry_buckets[bucket];
	while (entry) {
		if (strcmp(entry->name, name) == 0) {
			pthread_mutex_unlock(&registry_lock);
			return false;
		}
		entry = entry->next;
	}

	entry = malloc(sizeof(RegistryEntry));
	entry->name = strdup(name);
	entry->mailbox = mb;
	entry->next = registry_buckets[bucket];
	registry_buckets[bucket] = entry;

	pthread_mutex_unlock(&registry_lock);
	return true;
}

Mailbox *
mailbox_resolve(const char *name) {
	if (!registry_initialized) {
		return NULL;
	}

	unsigned int bucket = hash_string(name);

	pthread_mutex_lock(&registry_lock);

	RegistryEntry *entry = registry_buckets[bucket];
	while (entry) {
		if (strcmp(entry->name, name) == 0) {
			Mailbox *mb = entry->mailbox;
			pthread_mutex_unlock(&registry_lock);
			return mb;
		}
		entry = entry->next;
	}

	pthread_mutex_unlock(&registry_lock);
	return NULL;
}
