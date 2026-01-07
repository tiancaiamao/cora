#include "../../src/runtime.h"
#include <stdlib.h>

void parallel_init(Cora *co, int label, Obj *R) {
    (void)R;
    coraReturn(co, True);
}

void parallel_shutdown(Cora *co, int label, Obj *R) {
    (void)R;
    coraReturn(co, True);
}

void spawn(Cora *co, int label, Obj *R) {
    (void)R;
    Obj thunk = R[1];
    coraCall0(co, thunk);
    coraRun(co);
    coraReturn(co, True);
}

void vm_get_current(Cora *co, int label, Obj *R) {
    (void)R;
    coraReturn(co, Nil);
}

void vm_get_current_id(Cora *co, int label, Obj *R) {
    (void)R;
    coraReturn(co, makeNumber(-1));
}

void register_parallel_runtime(void) {
    static struct registerEntry entries[6];
    entries[0] = (struct registerEntry){"parallel-runtime-init", parallel_init, 1};
    entries[1] = (struct registerEntry){"parallel-shutdown", parallel_shutdown, 0};
    entries[2] = (struct registerEntry){"spawn", spawn, 1};
    entries[3] = (struct registerEntry){"vm-get-current", vm_get_current, 0};
    entries[4] = (struct registerEntry){"vm-get-current-id", vm_get_current_id, 0};
    entries[5] = (struct registerEntry){NULL, NULL, 0};
    
    struct registerModule module;
    module.init = NULL;
    module.entries = entries;
    
    coraRegisterAPI((Cora*)0, &module, cstr("cora/lib/parallel"), cstr("register_parallel_runtime"), register_parallel_runtime, 5);
}
