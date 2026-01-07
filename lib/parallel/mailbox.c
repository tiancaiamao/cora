#include "mailbox.h"
#include "vm.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>

// Static counter for mailbox IDs
static int next_mailbox_id = 1;

// ============================================================================
// Waker Implementation
// ============================================================================

Waker *
waker_new(VM *vm, Coroutine *co) {
	Waker *waker = malloc(sizeof(Waker));
	waker->vm = vm;
	waker->co = co;
	waker->notified = false;
	return waker;
}

void
waker_free(Waker *waker) {
	if (waker) {
		free(waker);
	}
}

void
waker_notify(Waker *waker) {
	if (!waker || waker->notified) {
		return;
	}

	waker->notified = true;

	// Enqueue the coroutine to its VM's ready queue
	// This is the key operation: we don't directly execute,
	// we just push the coroutine back to the VM's queue
	// The VM will be woken up (if not already running) by vm_enqueue_global

	if (waker->co) {
		// TODO: Implement VM_enqueue_coroutine or similar
		// For now, we'll need to integrate with the VM's internal scheduler
		// This is a placeholder - will be implemented when we add scheduler
		// vm_enqueue_coroutine(waker->vm, waker->co);
	}

	// Wake up the VM itself (add to global queue if not already there)
	vm_enqueue_global(waker->vm);
}

// ============================================================================
// Mailbox Implementation
// ============================================================================

Mailbox *
mailbox_new(int capacity) {
	Mailbox *mb = malloc(sizeof(Mailbox));
	pthread_mutex_init(&mb->lock, NULL);

	// Initialize message queue
	mb->msg_capacity = capacity;
	if (capacity > 0) {
		mb->messages = malloc(sizeof(Obj) * capacity);
	} else {
		mb->messages = NULL;
	}
	mb->msg_head = 0;
	mb->msg_tail = 0;
	mb->msg_count = 0;

	// Initialize sender queue
	mb->sender_capacity = 16; // Initial capacity
	mb->blocked_senders = malloc(sizeof(Waker *) * mb->sender_capacity);
	mb->sender_head = 0;
	mb->sender_tail = 0;
	mb->sender_count = 0;

	// Initialize receiver queue
	mb->receiver_capacity = 16;
	mb->blocked_receivers = malloc(sizeof(Waker *) * mb->receiver_capacity);
	mb->receiver_head = 0;
	mb->receiver_tail = 0;
	mb->receiver_count = 0;

	mb->closed = false;
	mb->id = __sync_fetch_and_add(&next_mailbox_id, 1);

	return mb;
}

void
mailbox_free(Mailbox *mb) {
	if (!mb) {
		return;
	}

	pthread_mutex_destroy(&mb->lock);
	if (mb->messages) {
		free(mb->messages);
	}
	if (mb->blocked_senders) {
		free(mb->blocked_senders);
	}
	if (mb->blocked_receivers) {
		free(mb->blocked_receivers);
	}
	free(mb);
}

void
mailbox_close(Mailbox *mb) {
	pthread_mutex_lock(&mb->lock);

	mb->closed = true;

	// Wake up all blocked senders
	for (int i = 0; i < mb->sender_count; i++) {
		int idx = (mb->sender_head + i) % mb->sender_capacity;
		waker_notify(mb->blocked_senders[idx]);
		waker_free(mb->blocked_senders[idx]);
	}
	mb->sender_count = 0;

	// Wake up all blocked receivers
	for (int i = 0; i < mb->receiver_count; i++) {
		int idx = (mb->receiver_head + i) % mb->receiver_capacity;
		waker_notify(mb->blocked_receivers[idx]);
		waker_free(mb->blocked_receivers[idx]);
	}
	mb->receiver_count = 0;

	pthread_mutex_unlock(&mb->lock);
}

bool
mailbox_is_closed(Mailbox *mb) {
	pthread_mutex_lock(&mb->lock);
	bool closed = mb->closed;
	pthread_mutex_unlock(&mb->lock);
	return closed;
}

// Try to send without blocking
bool
mailbox_send_try(Mailbox *mb, Obj msg) {
	pthread_mutex_lock(&mb->lock);

	if (mb->closed) {
		pthread_mutex_unlock(&mb->lock);
		return false;
	}

	// If there are blocked receivers, wake one up
	if (mb->receiver_count > 0) {
		Waker *receiver = mb->blocked_receivers[mb->receiver_head];
		mb->receiver_head = (mb->receiver_head + 1) % mb->receiver_capacity;
		mb->receiver_count--;

		pthread_mutex_unlock(&mb->lock);

		// TODO: Pass the message to the receiver
		// For now, we just wake it up
		waker_notify(receiver);
		waker_free(receiver);
		return true;
	}

	// If mailbox is buffered and has space, enqueue message
	if (mb->msg_capacity > 0 && mb->msg_count < mb->msg_capacity) {
		mb->messages[mb->msg_tail] = msg;
		mb->msg_tail = (mb->msg_tail + 1) % mb->msg_capacity;
		mb->msg_count++;
		pthread_mutex_unlock(&mb->lock);
		return true;
	}

	// Would block
	pthread_mutex_unlock(&mb->lock);
	return false;
}

// Try to receive without blocking
bool
mailbox_recv_try(Mailbox *mb, Obj *msg_out) {
	pthread_mutex_lock(&mb->lock);

	if (mb->closed) {
		pthread_mutex_unlock(&mb->lock);
		return false;
	}

	// If there are messages in the queue, dequeue one
	if (mb->msg_count > 0) {
		*msg_out = mb->messages[mb->msg_head];
		mb->msg_head = (mb->msg_head + 1) % mb->msg_capacity;
		mb->msg_count--;

		// If there are blocked senders, wake one up
		if (mb->sender_count > 0) {
			Waker *sender = mb->blocked_senders[mb->sender_head];
			mb->sender_head = (mb->sender_head + 1) % mb->sender_capacity;
			mb->sender_count--;
			pthread_mutex_unlock(&mb->lock);
			waker_notify(sender);
			waker_free(sender);
		} else {
			pthread_mutex_unlock(&mb->lock);
		}
		return true;
	}

	// If there are blocked senders, take from one directly
	if (mb->sender_count > 0) {
		Waker *sender = mb->blocked_senders[mb->sender_head];
		mb->sender_head = (mb->sender_head + 1) % mb->sender_capacity;
		mb->sender_count--;

		pthread_mutex_unlock(&mb->lock);

		// TODO: Get the message from the sender
		// For now, we just wake it up
		*msg_out = Nil;
		waker_notify(sender);
		waker_free(sender);
		return true;
	}

	// Would block
	pthread_mutex_unlock(&mb->lock);
	return false;
}

// Send with blocking support (register waker if blocked)
bool
mailbox_send(Mailbox *mb, Obj msg, Waker *waker) {
	// First try non-blocking send
	if (mailbox_send_try(mb, msg)) {
		return true;
	}

	// If closed, fail
	if (mb->closed) {
		return false;
	}

	// Block: add waker to blocked senders queue
	pthread_mutex_lock(&mb->lock);

	// Expand sender queue if needed
	if (mb->sender_count >= mb->sender_capacity) {
		int new_capacity = mb->sender_capacity * 2;
		Waker **new_queue = malloc(sizeof(Waker *) * new_capacity);

		// Copy existing wakers
		for (int i = 0; i < mb->sender_count; i++) {
			int idx = (mb->sender_head + i) % mb->sender_capacity;
			new_queue[i] = mb->blocked_senders[idx];
		}

		free(mb->blocked_senders);
		mb->blocked_senders = new_queue;
		mb->sender_head = 0;
		mb->sender_tail = mb->sender_count;
		mb->sender_capacity = new_capacity;
	}

	// Add waker to queue
	mb->blocked_senders[mb->sender_tail] = waker;
	mb->sender_tail = (mb->sender_tail + 1) % mb->sender_capacity;
	mb->sender_count++;

	pthread_mutex_unlock(&mb->lock);
	return false; // Return false to indicate blocked
}

// Receive with blocking support
bool
mailbox_recv(Mailbox *mb, Obj *msg_out, Waker *waker) {
	// First try non-blocking receive
	if (mailbox_recv_try(mb, msg_out)) {
		return true;
	}

	// If closed, fail
	if (mb->closed) {
		return false;
	}

	// Block: add waker to blocked receivers queue
	pthread_mutex_lock(&mb->lock);

	// Expand receiver queue if needed
	if (mb->receiver_count >= mb->receiver_capacity) {
		int new_capacity = mb->receiver_capacity * 2;
		Waker **new_queue = malloc(sizeof(Waker *) * new_capacity);

		// Copy existing wakers
		for (int i = 0; i < mb->receiver_count; i++) {
			int idx = (mb->receiver_head + i) % mb->receiver_capacity;
			new_queue[i] = mb->blocked_receivers[idx];
		}

		free(mb->blocked_receivers);
		mb->blocked_receivers = new_queue;
		mb->receiver_head = 0;
		mb->receiver_tail = mb->receiver_count;
		mb->receiver_capacity = new_capacity;
	}

	// Add waker to queue
	mb->blocked_receivers[mb->receiver_tail] = waker;
	mb->receiver_tail = (mb->receiver_tail + 1) % mb->receiver_capacity;
	mb->receiver_count++;

	pthread_mutex_unlock(&mb->lock);
	return false; // Return false to indicate blocked
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

	// Check if name already exists
	RegistryEntry *entry = registry_buckets[bucket];
	while (entry) {
		if (strcmp(entry->name, name) == 0) {
			pthread_mutex_unlock(&registry_lock);
			return false; // Already exists
		}
		entry = entry->next;
	}

	// Create new entry
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
