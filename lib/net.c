#include "runtime.h"


static void
netDial(struct controlFlow *ctx) {
  Obj o = ctx.Get(ctx, 1);
  char *s = stringStr(o);
  Obj strs[2] = strSplitBy(":");
  host = strs[0];
  port = strs[1];

  socket();
  int fd = listen();

  ctxReturn(ctx, fd);
}

struct registModule ioModule = {
  NULL,
  {
    {"net-dial", netDial, 1},
    {"net-poll", netPoll, 1},
    {"net-recv", netDial, 1},
    {"net-send", netDial, 1},
    {NULL, NULL, 0}
  }
};
