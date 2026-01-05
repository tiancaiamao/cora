#ifndef PARALLEL_SCHEDULER_H
#define PARALLEL_SCHEDULER_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Scheduler Scheduler;
typedef struct VM VM;

Scheduler *scheduler_new(int num_threads);
void scheduler_free(Scheduler *s);
void scheduler_start(Scheduler *s);
void scheduler_shutdown(Scheduler *s);

void scheduler_add_vm(Scheduler *s, VM *vm);
void scheduler_wake_vm(Scheduler *s, VM *vm);

#ifdef __cplusplus
}
#endif

#endif
