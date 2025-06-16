#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/eventfd.h>
#include "types.h"
#include "str.h"
#include "runtime.h"

static void*
startRoutine(void* arg) {
	uintptr_t dummy;
	struct Cora *co = coraInit(&dummy);
	strBuf path1 = arg;
	str path = toStr(path1);
	Obj filePath = makeString(path.str, path.len);
	strFree(path1);
	co->nargs = 2;
	/* co->args[0] = globalRef(intern("cora/lib/parallel#parallel-entry")); */
	co->args[0] = globalRef(intern("load"));
	co->args[1] = filePath;
	trampoline(co, 0, coraDispatch);
	printf("newProc exit\n");
}

static void
newProc(struct Cora *co) {
	Obj arg = co->args[1];
	str path1 = stringStr(arg);
	strBuf path2 = strDup(path1);
	pthread_t thread;
	int ret = pthread_create(&thread, NULL, startRoutine, path2);
	if (ret != 0) {
		coraReturn(co, Nil);
		return;
	}
	coraReturn(co, 42);
	return;
}

static void
eventFD(struct Cora *co) {
	int fd = eventfd(0, EFD_NONBLOCK | EFD_CLOEXEC);
	if (fd < 0) {
		perror("eventfd");
		coraReturn(co, Nil);
		return;
	}
	coraReturn(co, makeNumber(fd));
	return;
}

struct node {
	struct node* next;
};

struct queue {
	struct node *head;
	struct node *tail;
	int len;
};

static void
queueInit(struct queue *q) {
	q->len = 0;
	q->head = NULL;
	q->tail = NULL;
}

static int
queueLen(struct queue *q) {
	return q->len;
}

struct nodeData {
	struct node h;
	Obj v;
};

static void
enqueueData(struct queue *q, Obj v) {
	struct nodeData *n = malloc(sizeof(struct nodeData));
	n->v = v;
	if (q->len == 0) {
		q->head = &n->h;
		q->tail = &n->h;
		q->len = 1;
	} else {
		q->tail->next = &n->h;
		n->h.next = NULL;
		q->tail = &n->h;
		q->len++;
	}
}

static struct nodeData*
dequeueData(struct queue *q) {
	assert(q->len > 0);
	struct nodeData *b = (struct nodeData *)q->head;
	q->head = q->head->next;
	b->h.next = NULL;
	q->len--;
	return b;
}

struct nodeBlocked {
	struct node h;
	Obj conn;
};

struct mailbox {
	pthread_mutex_t mu;
	struct queue data;
	struct queue blocked;
};

static void
mailboxQueueLen(struct Cora *co) {
	struct mailbox *m = mustCObj(co->args[1]);
	int len = queueLen(&m->data);
	coraReturn(co, makeNumber(len));
}

static void
mailboxLock(struct Cora *co) {
	struct mailbox *m = mustCObj(co->args[1]);
	pthread_mutex_lock(&m->mu);
	coraReturn(co, True);
}

static void
mailboxUnlock(struct Cora *co) {
	struct mailbox *m = mustCObj(co->args[1]);
	pthread_mutex_unlock(&m->mu);
	coraReturn(co, True);
}

static void
mailboxDequeue(struct Cora *co) {
	struct mailbox *m = mustCObj(co->args[1]);
	struct nodeData* data = dequeueData(&m->data);
	coraReturn(co, data->v);
}

static void
enqueueBlocked(struct queue *q, struct nodeBlocked *n) {
	if (q->len == 0) {
		q->head = &n->h;
		q->tail = &n->h;
		q->len = 1;
	} else {
		q->tail->next = &n->h;
		n->h.next = NULL;
		q->tail = &n->h;
		q->len++;
	}
}

static void
mailboxEnqueueBlocked(struct Cora *co) {
	struct mailbox* m = mustCObj(co->args[1]);
	Obj conn = co->args[2];
	struct nodeBlocked *n = (struct nodeBlocked*)malloc(sizeof(struct nodeBlocked));
	n->conn = conn;
	enqueueBlocked(&m->blocked, n);
	coraReturn(co, Nil);
}

static struct nodeBlocked*
dequeueBlocked(struct queue *q) {
	assert(q->len > 0);
	struct nodeBlocked *b = (struct nodeBlocked*)q->head;
	q->head = q->head->next;
	b->h.next = NULL;
	q->len--;
	return b;
}

static void
wakeupBlocked(struct nodeBlocked* n, Obj val) {
	Obj conn = n->conn;
	// NOTE: this is a **ugly hack** here, definition of conn is in cora/lib/async
	// vector index must be correct
	Obj fd = vectorRef(conn, 4);
	vectorSet(conn, 7, val);
	uint64_t i = 1;
	int ret = write(fixnum(fd), &i, 8);
	if (ret < 0) {
		printf("wakeupBlocked failed on %ld: %s\n", fixnum(fd), strerror(errno));
	}
}

static void
mailboxMake(struct Cora *co) {
	struct mailbox* m = (struct mailbox*)malloc(sizeof(struct mailbox));
	pthread_mutex_init(&m->mu, NULL);
	queueInit(&m->data);
	queueInit(&m->blocked);
	coraReturn(co, makeCObj(m));
}

static void
mailboxSend(struct Cora *co) {
	struct mailbox* m = mustCObj(co->args[1]);
	Obj val = co->args[2];
	pthread_mutex_lock(&m->mu);
	if (queueLen(&m->blocked) > 0) {
		struct nodeBlocked* co = dequeueBlocked(&m->blocked);
		wakeupBlocked(co, val);
	} else {
		enqueueData(&m->data, val);
	}
	pthread_mutex_unlock(&m->mu);
	coraReturn(co, val);
}

static void
mailboxRecvTry(struct Cora *co) {
	struct mailbox *m = mustCObj(co->args[1]);
	Obj v;
	pthread_mutex_lock(&m->mu);
	if (queueLen(&m->data) > 0) {
		struct nodeData *n = dequeueData(&m->data);
		v = n->v;
	} else {
		v = False;
	}
	pthread_mutex_unlock(&m->mu);
	coraReturn(co, v);
}

struct mailboxRegistrySlot {
	struct mailbox *m;
	strBuf name;
};


#define NUM_SLOTS 256

struct mailboxRegistry {
	struct mailboxRegistrySlot slots[NUM_SLOTS];
};


static unsigned long
fnv1aHash(const char *str) {
    unsigned long hash = 2166136261u;  // FNV offset basis
    while (*str)
        hash = (hash ^ (unsigned char)(*str++)) * 16777619;
    return hash;
}

static struct mailboxRegistry registry;

static void
mailboxRegistryInit(struct mailboxRegistry *registry) {
	memset(registry->slots, 0, NUM_SLOTS * sizeof(struct mailboxRegistry));
}

static void
mailboxPublish(struct Cora *co) {
	Obj arg1 = co->args[1];
	Obj m = co->args[2];
	str name = stringStr(arg1);
	int idx = fnv1aHash(name.str) % NUM_SLOTS;
	struct mailboxRegistrySlot *slot = &registry.slots[idx];
	int start = (idx + NUM_SLOTS - 1) % NUM_SLOTS;
	while(slot->m != NULL && idx != start) {
		idx = (idx + 1) % NUM_SLOTS;
		slot = &registry.slots[idx];
	}
	if (idx == start) {
		printf("fuck, hash full!\n");
		assert(false);
		coraReturn(co, False);
		return;
	}
	slot->m = mustCObj(m);
	slot->name = strDup(name);
	coraReturn(co, True);
}

static void
mailboxResolve(struct Cora *co) {
	Obj arg1 = co->args[1];
	str name = stringStr(arg1);
	int idx = fnv1aHash(name.str) % NUM_SLOTS;
	struct mailboxRegistrySlot *slot = &registry.slots[idx];
	// locate the slot
	int try = 0;
	while(slot->m != NULL && strCmp(name, toStr(slot->name)) != 0 && try < NUM_SLOTS) {
		idx = (idx + 1) % NUM_SLOTS;
		slot = &registry.slots[idx];
		try++;
	}
	if (slot->m == NULL || try == NUM_SLOTS) {
		// not found
		coraReturn(co, Nil);
		return;
	}
	assert(strCmp(name, toStr(slot->name)) == 0);
	coraReturn(co, makeCObj(slot->m));
	return;
}

static struct registerModule parallelModule = {
  NULL,
  {
    {"new-proc", newProc, 1},
    {"mailbox-make", mailboxMake, 0},
    {"mailbox-lock", mailboxLock, 1},
    {"mailbox-unlock", mailboxUnlock, 1},
    {"event-fd", eventFD, 0},
    {"mailbox-send", mailboxSend, 2},
    {"mailbox-recv-try", mailboxRecvTry, 1},
    {"mailbox-queue-len", mailboxQueueLen, 1},
    {"mailbox-dequeue", mailboxDequeue, 1},
    {"mailbox-enqueue-blocked", mailboxEnqueueBlocked, 2},
    {"mailbox-publish", mailboxPublish, 2},
    {"mailbox-resolve", mailboxResolve, 1},
    {NULL, NULL, 0},
  }
};

void
entry(struct Cora *co) {
  Obj pkg = co->args[2];
  registerAPI(co, &parallelModule, stringStr(pkg));
  coraReturn(co, intern("internal"));
}
