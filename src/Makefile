.POSIX:
.SUFFIXES:

SRCS = str.c gc.c types.c reader.c runtime.c trace.c reader_test.c eval_test.c gc_test.c export.c
OBJS = $(SRCS:%.c=%.o)
CC = gcc
CFLAGS = -g -Wall -fPIC
# CFLAGS = -g -DNDEBUG -O2 -Wall

ifeq ("${ENABLE_ASAN}", "1")
	CFLAGS += -fsanitize=address
endif

ifeq ("${ENABLE_TSAN}", "1")
	LD_FLAG = -ltsan -lcora -ldl
endif

all: libcora.so

test: reader_test gc_test

reader.test: reader_test.o libcora.a
	$(CC) -o reader.test $^ -ldl

reader_test: reader.test
	./reader.test

gc.test: gc_test.o libcora.a
	$(CC) -o gc.test $^ -ldl

gc_test: gc.test
	./gc.test

LIBOBJS = str.o gc.o types.o reader.o runtime.o trace.o export.o

libcora.a: $(LIBOBJS)
	ar -rc $@ $^

libcora.so: $(LIBOBJS)
	gcc -shared -o $@ $^ -ldl

clean:
	rm -rf *.o libcora.a libcora.so cora *.test

DEPDIR := .deps
DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$*.d

COMPILE.c = $(CC) $(DEPFLAGS) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c

%.o : %.c
%.o : %.c $(DEPDIR)/%.d | $(DEPDIR)
	$(COMPILE.c) $(OUTPUT_OPTION) $<

$(DEPDIR): ; @mkdir -p $@

DEPFILES := $(SRCS:%.c=$(DEPDIR)/%.d)
$(DEPFILES):

include $(wildcard $(DEPFILES))
