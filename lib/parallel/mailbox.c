#include "mailbox.h"
#include "vm.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>

// ============================================================================
// Mailbox Implementation
// ============================================================================

static int next_mailbox_id = 1;

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
	free(mb);
}

void
mailbox_close(Mailbox *mb) {
	pthread_mutex_lock(&mb->lock);
	mb->closed = true;
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
		pthread_mutex_unlock(&mb->lock);
		return true;
	}

	// Would block
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
