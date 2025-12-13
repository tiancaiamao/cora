.POSIX:
.SUFFIXES:

SRCS = str.c gc.c types.c reader.c runtime.c trace.c reader_test.c eval_test.c gc_test.c export.c
OBJS = $(SRCS:%.c=%.o)
CC = gcc
CFLAGS = -g -Wall -fPIC
# CFLAGS = -g -DNDEBUG -O2 -Wall


# Detect operating system
UNAME_S := $(shell uname -s)

ifeq ("${ENABLE_ASAN}", "1")
	CFLAGS += -fsanitize=address
endif

ifeq ("${ENABLE_TSAN}", "1")
	LD_FLAG = -ltsan -lcora -ldl
endif

all: libcora.so

test: reader_test gc_test

reader.test: reader_test.o libcora.a
	$(CC) -o reader.test $^ -ldl -lm

reader_test: reader.test
	./reader.test

gc.test: gc_test.o libcora.a
	$(CC) -o gc.test $^ -ldl -lm

gc_test: gc.test
	./gc.test


CORA_SRC_DIR ?= $(shell pwd)

config.o: config.c
	$(CC) -o config.o -c config.c -DCORA_SRC_DIR=\"$(CORA_SRC_DIR)\"

LIBOBJS = str.o gc.o types.o reader.o config.o runtime.o trace.o export.o

libcora.a: $(LIBOBJS)
	ar -rc $@ $^

libcora.so: $(LIBOBJS)
ifeq ($(UNAME_S),Darwin)
	# macOS: Use @rpath for flexible third-party usage
	gcc -shared -o $@ $^ -ldl -lm -Wl,-install_name,@rpath/$@
else ifeq ($(UNAME_S),Linux)
	# Linux: Use soname, absolute paths don't work the same way
	gcc -shared -o $@ $^ -ldl -lm -Wl,-soname,$@
else
	# Other Unix systems: basic shared library
	gcc -shared -o $@ $^ -ldl -lm
endif

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
