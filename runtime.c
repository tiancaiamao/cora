#include "scheme.h"
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>

Value InitClosure(struct Closure *addr, Lambda lam, Value env) {
    struct Closure *v = (struct Closure *)addr;
    v->t = CLOSURE;
    v->lam = lam;
    v->env = env;
    return (Value)v;
}

Value MakeInt(int n) { return (Value)(((intptr_t)n << 1) | 0x1); }

Value MakeBoolean(unsigned int b) { return b == 0 ? ValueFalse : ValueTrue; }

Value InitVector(struct Vector *addr, int n, ...) {
    va_list ap;
    addr->t = VECTOR;
    addr->size = n;

    va_start(ap, n);
    for (int i = 0; i < n; i++) {
        addr->value[i] = va_arg(ap, Value);
    }
    va_end(ap);

    return (Value)addr;
}

Value InitEnv(struct Env *addr, int n, ...) {
    va_list ap;
    addr->t = ENV;
    addr->size = n;

    va_start(ap, n);
    for (int i = 0; i < n; i++) {
        addr->value[i] = va_arg(ap, Value);
    }
    va_end(ap);

    return (Value)addr;
}

Value VectorGet(Value v, int n) {
    assert((long)v->t == VECTOR);
    assert(((struct Vector *)v)->size > n);
    return ((struct Vector *)v)->value[n];
}

Value VectorRef(Value n, Value e) {
    assert((long)e->t == VECTOR);
    assert(((long)n & 1) == 1);

    int nn = (long)n >> 1;
    assert(((struct Vector *)e)->size > nn);

    return ((struct Vector *)e)->value[nn];
}

Value EnvRef(Value n, Value e) {
    assert(e->t == ENV);
    assert(((Tag)n & 1) == 1);

    int nn = (Tag)n >> 1;
    assert(((struct Vector *)e)->size > nn);

    return ((struct Vector *)e)->value[nn];
}

Value ValueEqual(Value v1, Value v2) {
    if (v1 == v2) {
        return ValueTrue;
    }
    return ValueFalse;
}

Value __product(Value v1, Value v2) { return (Value)(((((Tag)v1 >> 1) * ((Tag)v2 >> 1)) << 1) | 0x1); }
Value __sub(Value v1, Value v2) { return (Value)(((Tag)v1 - (Tag)v2) | 0x1); }
void __set(Value *var, Value val, Value cont) {
    *var = val;
        ((struct Closure*)cont)->lam((struct Closure*)cont)->env, ValueVoid);
}

static void printValue(Value obj);

Value ValueTrue = (Value)0xa;
Value ValueFalse = (Value)0x2;
Value ValueVoid = (Value)0xe;

Value saved_cont_call;
jmp_buf empty_stack_state;
char *stackBottom;
char *stackTop;
// static int MinorGCSize = 4 << 10;
static int MinorGCSize = 440;

char *heapStart;
char *heapEnd;
char *heapGuard;
char *scanStart;

// DriverLoop接受的参数是一个可以直接执行的Closure
void DriverLoop(Value call) {
    stackTop = (char *)&call;
    // setjmp将当前上下文保存起来并返回0
    if (setjmp(empty_stack_state)) {
        call = saved_cont_call;
    }

    ((struct Closure *)call)->lam(((struct Closure *)call)->env);
}

void EntryPoint(Value halt) {
    // 初始化部分可以写到这里

    // 初始4M的堆空间
    // const int heapSize = 4 << 20;
    const int heapSize = 1 << 10;
    heapStart = malloc(heapSize);
    heapEnd = heapStart;
    heapGuard = heapStart + heapSize;
    scanStart = heapStart;

    struct Closure tmp;
    InitClosure(&tmp, TopLevel, halt);

    DriverLoop((Value)&tmp);
}

// --------------垃圾回收相关的一组函数--------------
// 参数是一个vector，vector中第一个是closure，后面的是这个closure的参数
static void _lambda_save_call(Value v) {
    assert((((Tag)v & 7) == 0) && (v->t == VECTOR));
    struct Vector *vec = (struct Vector *)v;
    assert(vec->size > 0);
    assert((((long)(vec->value[0]) & 7) == 0) && (((long)((struct Vector *)vec->value[0])->t) == CLOSURE));

    struct Closure *clo = (struct Closure *)vec->value[0];

    // 真的好ugly
    switch (vec->size) {
    case 0:
        clo->lam();
        break;
    case 1:
        clo->lam(vec->value[1]);
        break;
    case 2:
        clo->lam(vec->value[1], vec->value[2]);
        break;
    case 3:
        clo->lam(vec->value[1], vec->value[2], vec->value[3]);
        break;
    case 4:
        clo->lam(vec->value[1], vec->value[2], vec->value[3], vec->value[4]);
        break;
    case 5:
        clo->lam(vec->value[1], vec->value[2], vec->value[3], vec->value[4], vec->value[5]);
        break;
    case 6:
        clo->lam(vec->value[1], vec->value[2], vec->value[3], vec->value[4], vec->value[5], vec->value[6]);
        break;
    case 7:
        clo->lam(vec->value[1], vec->value[2], vec->value[3], vec->value[4], vec->value[5], vec->value[6], vec->value[7]);
        break;
    case 8:
        clo->lam(vec->value[1], vec->value[2], vec->value[3], vec->value[4], vec->value[5], vec->value[6], vec->value[7], vec->value[8]);
        break;
    case 9:
        clo->lam(clo->env, vec->value[1], vec->value[2], vec->value[3], vec->value[4], vec->value[5], vec->value[6], vec->value[7], vec->value[8],
                 vec->value[9]);
        break;
    case 10:
        clo->lam(clo->env, vec->value[1], vec->value[2], vec->value[3], vec->value[4], vec->value[5], vec->value[6], vec->value[7], vec->value[8],
                 vec->value[9], vec->value[10]);
        break;
    default:
        assert(0);
    }
}

// 闭包+闭包的参数，就等于一个可恢复的Call了。注意到GC堆上分配
void SaveCall(Lambda lam, int n, ...) {
    va_list ap;
    struct Closure *clo = (struct Closure *)heapEnd;
    InitClosure(clo, lam, NULL);
    heapEnd += sizeof(struct Closure);

    struct Vector *vec = (struct Vector *)heapEnd;
    vec->t = VECTOR;
    vec->size = n + 1;
    heapEnd += sizeof(struct Vector);
    vec->value = (Value *)heapEnd;
    heapEnd += vec->size * sizeof(Value);

    vec->value[0] = (Value)clo;
    va_start(ap, n);
    for (int i = 0; i < n; i++) {
        vec->value[i + 1] = va_arg(ap, Value);
    }
    va_end(ap);

    struct Closure *save = (struct Closure *)heapEnd;
    heapEnd += sizeof(struct Closure);
    saved_cont_call = InitClosure(save, _lambda_save_call, (Value)vec);
}

int CheckMinorGC() {
    char *ptr = (char *)&ptr;
    if (stackTop - ptr > MinorGCSize) {
        printf("当前执行%p,执行了gc\n", ptr);
        return 1;
    }
    return 0;
}

static int objectCount(Value obj) {
    if (((Tag)obj & 7) == 0) {
        switch (obj->t) {
        case VECTOR:
            return ((struct Vector *)obj)->size;
        case CLOSURE:
            return 1;
        case CONS:
            return 2;
        case ENV:
            return ((struct Env *)obj)->size;
        }
    }
    return 0;
}

static Value getSlot(Value obj, int i) {
    switch (obj->t) {
    case VECTOR:
        return ((struct Vector *)obj)->value[i];
    case CLOSURE:
        assert(i == 0);
        return ((struct Closure *)obj)->env;
    case CONS:
        assert(i == 0 || i == 1);
        return i == 0 ? ((struct Cons *)obj)->car : ((struct Cons *)obj)->cdr;
    case ENV:
        return ((struct Env *)obj)->value[i];
    }
    assert(0);
    return NULL;
}

static void setSlot(Value obj, int i, Value v) {
    switch (obj->t) {
    case VECTOR:
        ((struct Vector *)obj)->value[i] = v;
        return;
    case CLOSURE:
        assert(i == 0);
        ((struct Closure *)obj)->env = v;
        return;
    case CONS:
        assert(i == 0 || i == 1);
        if (i == 0) {
            ((struct Cons *)obj)->car = v;
        } else {
            ((struct Cons *)obj)->cdr = v;
        }
        return;
    case ENV:
        ((struct Env *)obj)->value[i] = v;
        return;
    }
    assert(0);
}

static int existsInStack(Value obj) { return (char *)obj <= stackTop && (char *)obj >= stackBottom; }

static int isForwardingPtr(Value obj) { return (obj->t & FORWARD_BIT) != 0; }
static int isImmediate(Value obj) { return ((Tag)obj & 7) != 0; }

static Value forwardingPtrTarget(Value obj) {
    switch (((long)((struct Env *)obj)->t) & INTERMEDIA_TYPE_MASK) {
    case CLOSURE:
        return ((struct Closure *)obj)->env;
    case CONS:
        return ((struct Cons *)obj)->car;
    case ENV:
        return (Value)((struct Env *)obj)->value;
    case VECTOR:
        return (Value)((struct Vector *)obj)->value;
    }
    assert(0);
    return NULL;
}

static int objectSize(Value obj) {
    if (((Tag)obj & 7) != 0) {
        // return sizeof(Tag);
        return 0;
    }

    switch ((Tag)obj->t) {
    case CLOSURE:
        return sizeof(struct Closure);
    case ENV:
        return sizeof(struct Env) + ((struct Env *)obj)->size * sizeof(Value);
    case CONS:
        return sizeof(struct Cons);
    case VECTOR:
        return sizeof(struct Vector) + ((struct Vector *)obj)->size * sizeof(Value);
    }
    assert(0);
}

static int copyObject(Value obj, char *ptr) {
    if (((Tag)obj & 7) != 0) {
        // *((Tag *)ptr) = (Tag)obj;
        // printf("复制一个直接对象 %p\n", obj);
        // return sizeof(Tag);
        return 0; // 直接数不需要复制
    }

    switch (obj->t) {
    case CLOSURE:
        *((struct Closure *)ptr) = *((struct Closure *)obj);
        ((struct Closure *)obj)->env = (Value)ptr;
        obj->t |= FORWARD_BIT;
        printf("复制一个Closure %p 到 %p\n", obj, ptr);
        printf("Closure中的env是 %p\n", ((struct Closure *)ptr)->env);
        return sizeof(struct Closure);
    case ENV:
        *((struct Env *)ptr) = *((struct Env *)obj);
        // NOTE, 结构体内有一个指向数组的指针，这个数组要算作ENV的一部分，需要拷贝!
        ((struct Env *)ptr)->value = (Value *)(ptr + sizeof(struct Env));
        for (int i = 0; i < ((struct Env *)obj)->size; i++) {
            ((struct Env *)ptr)->value[i] = ((struct Env *)obj)->value[i];
        }
        ((struct Env *)obj)->value = (Value *)ptr;
        obj->t |= FORWARD_BIT;
        printf("复制一个Env %p 到 %p\n", obj, ptr);
        for (int i = 0; i < ((struct Env *)obj)->size; i++) {
            printf("Env中第%d个对象是 %p\n", i, ((struct Env *)ptr)->value[i]);
        }
        return sizeof(struct Env) + ((struct Env *)ptr)->size * sizeof(Value);
    case CONS:
        *((struct Cons *)ptr) = *((struct Cons *)obj);
        ((struct Cons *)obj)->car = (Value)ptr;
        obj->t |= FORWARD_BIT;
        printf("复制一个Env %p 到 %p\n", obj, ptr);
        return sizeof(struct Cons);
    case VECTOR:
        *((struct Vector *)ptr) = *((struct Vector *)obj);
        ((struct Vector *)ptr)->value = (Value *)(ptr + sizeof(struct Vector));
        for (int i = 0; i < ((struct Vector *)obj)->size; i++) {
            ((struct Vector *)ptr)->value[i] = ((struct Vector *)obj)->value[i];
        }
        ((struct Vector *)obj)->value = (Value *)ptr;
        obj->t |= FORWARD_BIT;
        printf("复制一个Vector %p 到 %p\n", obj, ptr);
        for (int i = 0; i < ((struct Vector *)obj)->size; i++) {
            printf("Env中第%d个对象是 %p\n", i, ((struct Vector *)ptr)->value[i]);
        }
        return sizeof(struct Vector) + ((struct Vector *)ptr)->size * sizeof(Value);
    }
    assert(0);
}

void MinorGC() {
    int i, bytes, count;
    Value obj, slot;
    stackBottom = (char *)&i;

    printf("运行到了MinorGC中...\n");

    scanStart = heapStart;
    while (scanStart < heapEnd) {
        obj = (Value)scanStart;
        printf("-------\n拿到一个对象 %p\n", obj);
        printValue(obj);
        printf("-------\n");

        if (isImmediate(obj)) {
            scanStart += sizeof(Value);
            printf("还是有立即数啦\n");
            continue;
        }

        if (isForwardingPtr(obj)) {
            printf("funk了@\n");
        }

        count = objectCount(obj);
        for (i = 0; i < count; ++i) {
            slot = getSlot(obj, i);
            // printf("取对象的第%d个元素是 %p\n", i, slot);
            // 只需要处理在栈上的对象
            if (existsInStack(slot)) {
                if (isForwardingPtr(slot)) {
                    setSlot(obj, i, forwardingPtrTarget(slot));
                } else {
                    bytes = copyObject(slot, heapEnd);
                    setSlot(obj, i, (Value)heapEnd);
                    heapEnd += bytes;
                }
            }
        }
        scanStart += objectSize(obj);
    }

    longjmp(empty_stack_state, 1);
}

// 辅助调试的
static void printValue(Value obj) {
    Tag lowbit;
    lowbit = (Tag)obj & 7;
    if (lowbit == 0) {
        switch (obj->t & INTERMEDIA_TYPE_MASK) {
        case VECTOR:
            printf("VECTOR:size=%d, value=%p\n", ((struct Vector *)obj)->size, ((struct Vector *)obj)->value);
            for (int i = 0; i < ((struct Vector *)obj)->size; i++) {
                printf("vector[%d] = %p\n", i, ((struct Vector *)obj)->value[i]);
            }
            return;
        case ENV:
            printf("ENV:size=%d, value=%p\n", ((struct Env *)obj)->size, ((struct Env *)obj)->value);
            for (int i = 0; i < ((struct Env *)obj)->size; i++) {
                printf("env[%d] = %p\n", i, ((struct Env *)obj)->value[i]);
            }
        case CONS:
            printf("CONS:car=%p, cdr=%p\n", ((struct Cons *)obj)->car, ((struct Cons *)obj)->cdr);
            return;
        case CLOSURE:
            printf("CLOSURE:lam=%p, env=%p\n", ((struct Closure *)obj)->lam, ((struct Closure *)obj)->env);
            return;
        }
    }
    if ((lowbit & 1) != 0) {
        printf("fixnum:%ld\n", (Tag)obj >> 1);
    } else {
        // TODO
    }
}