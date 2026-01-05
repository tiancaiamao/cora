#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <pthread.h>
#include "vm.h"

typedef struct Waker Waker;

typedef struct {
    VM *vm;
    Coroutine *co;
    _Atomic(bool) notified;
} Waker;

typedef enum {
    MAILBOX_EMPTY,
    MAILBOX_HAS_SENDER,
    MAILBOX_HAS_RECEIVER,
    MAILBOX_CLOSED
} MailBoxState;

typedef enum {
    MAILBOX_OK,
    MAILBOX_CLOSED,
    MAILBOX_WOULD_BLOCK
} MailBoxResult;

typedef struct MailBox {
    pthread_mutex_t lock;
    MailBoxState state;
    void *message;
    Waker *sender_waker;
    Waker *receiver_waker;
    int id;
} MailBox;

void MailBoxInit(MailBox *mb) {
    pthread_mutex_init(&mb->lock, NULL);
    mb->state = MAILBOX_EMPTY;
    mb->message = NULL;
    mb->sender_waker = NULL;
    mb->receiver_waker = NULL;
    mb->id = 0;
}

void MailBoxDestroy(MailBox *mb) {
    pthread_mutex_destroy(&mb->lock);
}

bool message_is_allowed(Obj msg) {
    if (isfixnum(msg)) return true;
    if (msg == True || msg == False) return true;
    if (msg == Nil) return true;
    if (isBytes(msg)) return true;
    return false;
}

static MailBoxResult MailBoxSend(MailBox *mb, void *msg, Waker *waker) {
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

static MailBoxResult MailBoxReceive(MailBox *mb, void **msg_out, Waker *waker) {
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

void MailBoxClose(MailBox *mb) {
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

bool MailBoxIsClosed(MailBox *mb) {
    pthread_mutex_lock(&mb->lock);
    bool closed = (mb->state == MAILBOX_CLOSED);
    pthread_mutex_unlock(&mb->lock);
    return closed;
}

void WakerNotify(Waker *waker) {
    if (!atomic_load(&waker->notified)) {
        atomic_store(&waker->notified, true);
        VMEnqueueCoroutine(waker->vm, waker->co);
    }
}
