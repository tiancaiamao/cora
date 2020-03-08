#ifndef _EVENT_LOOP_H_
#define _EVENT_LOOP_H_

#include <stdint.h>

struct eventLoop;

struct eventHandle {
  int32_t fd;
  int32_t watch;
  void (*onEvents)(void* this, int32_t events);
};

struct eventLoop* eventLoopCreate();
void eventLoopRelease();
void eventLoopRun(struct eventLoop *el);
void eventLoopPoll(struct eventLoop *el, uint32_t ms);

int eventLoopAddHandle(struct eventLoop *el, struct handle *h);
int eventLoopRemoveHandle(struct eventLoop *el, struct handle *h);

#endif
