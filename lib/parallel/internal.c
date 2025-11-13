#include "runtime.h"
#include "str.h"
#include "types.h"
#include <errno.h>
#include <fcntl.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static void *
startRoutine(void *arg) {
	uintptr_t dummy;
	struct Cora *co = coraInit(&dummy);
	Obj fn = globalRef(intern("import"));
	Obj arg1 = makeCString("cora/init");
	coraCall1(co, fn, arg1);
	coraRun(co);

	arg1 = makeCString("cora/lib/toc");
	coraCall1(co, fn, arg1);
	coraRun(co);

	strBuf path1 = arg;
	str path = toStr(path1);
	Obj filePath = makeString(path.str, path.len);
	strFree(path1);

	fn = globalRef(intern("load"));
	arg1 = filePath;
	coraCall1(co, fn, arg1);
	coraRun(co);
	printf("newProc exit\n");
	coraExit(co);
	return NULL;
}

static void
newProc(struct Cora *co, int label, Obj *R) {
	Obj arg = R[1];
	str path1 = stringStr(arg);
	strBuf path2 = strDup(path1);
	pthread_t *thread = malloc(sizeof(pthread_t));
	int ret = pthread_create(thread, NULL, startRoutine, path2);
	if (ret != 0) {
		coraReturn(co, Nil);
		return;
	}
	coraReturn(co, makeCObj(thread));
	return;
}

static void
procJoin(struct Cora *co, int label, Obj *R) {
	pthread_t *t = mustCObj(R[1]);
	void *ignore;
	int ret = pthread_join(*t, &ignore);
	if (ret != 0) {
		perror("pthread_join");
	}
	coraReturn(co, makeNumber(ret));
}

static void
pipeImpl(struct Cora *co, int label, Obj *R) {
	int fds[2];
	int succ = pipe(fds);
	if (succ < 0) {
		perror("pipe");
		coraReturn(co, Nil);
		return;
	}
	fcntl(fds[0], F_SETFL, O_NONBLOCK);
	fcntl(fds[1], F_SETFL, O_NONBLOCK);
	coraReturn(co, cons(makeNumber(fds[0]), makeNumber(fds[1])));
	return;
}

struct node {
	struct node *next;
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

static struct nodeData *
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
mailboxQueueLen(struct Cora *co, int label, Obj *R) {
	struct mailbox *m = mustCObj(R[1]);
	int len = queueLen(&m->data);
	coraReturn(co, makeNumber(len));
}

static void
mailboxLock(struct Cora *co, int label, Obj *R) {
	struct mailbox *m = mustCObj(R[1]);
	pthread_mutex_lock(&m->mu);
	coraReturn(co, True);
}

static void
mailboxUnlock(struct Cora *co, int label, Obj *R) {
	struct mailbox *m = mustCObj(R[1]);
	pthread_mutex_unlock(&m->mu);
	coraReturn(co, True);
}

static void
mailboxDequeue(struct Cora *co, int label, Obj *R) {
	struct mailbox *m = mustCObj(R[1]);
	struct nodeData *data = dequeueData(&m->data);
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
mailboxEnqueueBlocked(struct Cora *co, int label, Obj *R) {
	struct mailbox *m = mustCObj(R[1]);
	Obj conn = R[2];
	struct nodeBlocked *n = (struct nodeBlocked *)malloc(sizeof(struct nodeBlocked));
	n->conn = conn;
	enqueueBlocked(&m->blocked, n);
	coraReturn(co, Nil);
}

static struct nodeBlocked *
dequeueBlocked(struct queue *q) {
	assert(q->len > 0);
	struct nodeBlocked *b = (struct nodeBlocked *)q->head;
	q->head = q->head->next;
	b->h.next = NULL;
	q->len--;
	return b;
}

static void
wakeupBlocked(struct nodeBlocked *n, Obj val) {
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
	// TODO: close write conn here?
}

static void
mailboxMake(struct Cora *co, int label, Obj *R) {
	struct mailbox *m = (struct mailbox *)malloc(sizeof(struct mailbox));
	pthread_mutex_init(&m->mu, NULL);
	queueInit(&m->data);
	queueInit(&m->blocked);
	coraReturn(co, makeCObj(m));
}

static void
mailboxSend(struct Cora *co, int label, Obj *R) {
	struct mailbox *m = mustCObj(R[1]);
	Obj val = R[2];
	pthread_mutex_lock(&m->mu);
	if (queueLen(&m->blocked) > 0) {
		struct nodeBlocked *co = dequeueBlocked(&m->blocked);
		wakeupBlocked(co, val);
	} else {
		enqueueData(&m->data, val);
	}
	pthread_mutex_unlock(&m->mu);
	coraReturn(co, val);
}

static void
mailboxRecvTry(struct Cora *co, int label, Obj *R) {
	struct mailbox *m = mustCObj(R[1]);
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
	unsigned long hash = 2166136261u; // FNV offset basis
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
mailboxPublish(struct Cora *co, int label, Obj *R) {
	Obj arg1 = R[1];
	Obj m = R[2];
	str name = stringStr(arg1);
	int idx = fnv1aHash(name.str) % NUM_SLOTS;
	struct mailboxRegistrySlot *slot = &registry.slots[idx];
	int start = (idx + NUM_SLOTS - 1) % NUM_SLOTS;
	while (slot->m != NULL && idx != start) {
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
mailboxResolve(struct Cora *co, int label, Obj *R) {
	Obj arg1 = R[1];
	str name = stringStr(arg1);
	int idx = fnv1aHash(name.str) % NUM_SLOTS;
	struct mailboxRegistrySlot *slot = &registry.slots[idx];
	// locate the slot
	int try = 0;
	while (slot->m != NULL && strCmp(name, toStr(slot->name)) != 0 && try < NUM_SLOTS) {
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

void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	char *module = bytesData(pkg);
	coraRegisterAPI(co, module, "new-proc", newProc, 1);
	coraRegisterAPI(co, module, "proc-join", procJoin, 1);
	coraRegisterAPI(co, module, "mailbox-make", mailboxMake, 0);
	coraRegisterAPI(co, module, "mailbox-lock", mailboxLock, 1);
	coraRegisterAPI(co, module, "mailbox-unlock", mailboxUnlock, 1);
	coraRegisterAPI(co, module, "pipe", pipeImpl, 0);
	coraRegisterAPI(co, module, "mailbox-send", mailboxSend, 2);
	coraRegisterAPI(co, module, "mailbox-recv-try", mailboxRecvTry, 1);
	coraRegisterAPI(co, module, "mailbox-queue-len", mailboxQueueLen, 1);
	coraRegisterAPI(co, module, "mailbox-dequeue", mailboxDequeue, 1);
	coraRegisterAPI(co, module, "mailbox-enqueue-blocked", mailboxEnqueueBlocked, 2);
	coraRegisterAPI(co, module, "mailbox-publish", mailboxPublish, 2);
	coraRegisterAPI(co, module, "mailbox-resolve", mailboxResolve, 1);
	coraReturn(co, intern("internal"));
}
