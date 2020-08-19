#include <setjmp.h>
#include <string.h>
#include "runtime.h"

struct jumpBuf {
  scmHead head;
  Obj val;
  jmp_buf env;
};

static void
builtinSetJump(struct controlFlow *ctx) {
  // (set-jump
  //  (lambda (buf)
  //   ...
  //   (long-jump buf val))
  //  (lambda (val) ...))
  Obj try = ctxGet(ctx, 1);
  Obj catch = ctxGet(ctx, 2);

  struct jumpBuf cc;
  memset(&cc, 0, sizeof(cc));
  cc.head.type = 66; // TODO??

  if (setjmp(cc.env) == 0) {
    // The call in tail position but TailApply cannot be used.
    // As the jumpBuf is allocated on this stack, it's overwritten if the trampoline return and reenter.
    Obj res = Call(2, try, ((Obj)(&cc.head) | TAG_PTR));
    ctxReturn(ctx, res);
  } else {
    ctxResize(ctx, 2);
    ctxSet(ctx, 0, catch);
    ctxSet(ctx, 1, cc.val);
    ctxTailApply(ctx);
  }
}

static void
builtinLongJump(struct controlFlow *ctx) {
  // (long-jump buf val)
  Obj buf = ctxGet(ctx, 1);
  Obj val = ctxGet(ctx, 2);
  struct jumpBuf *cc = ptr(buf);
  cc->val = val;
  longjmp(cc->env, 1);
}

struct registModule exceptionModule = {
				      NULL,
				      {
				       {"set-jump", builtinSetJump, 2},
				       {"long-jump", builtinLongJump, 2},
				       {NULL, NULL, 0}
				      }
};
