#ifndef PARALLEL_CHANNEL_H
#define PARALLEL_CHANNEL_H

#include "../../src/runtime.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Channel Channel;

Channel *channel_new(void);
void channel_free(Channel *ch);

bool channel_send(Channel *ch, Obj msg);
Obj channel_recv(Channel *ch);

#ifdef __cplusplus
}
#endif

#endif
