.POSIX:
.SUFFIXES:

SRCS = str.c types.c reader.c builtin.c vm.c reader_test.c eval_test.c bootstrap_test.c
OBJS = $(SRCS:%.c=%.o)
CC = gcc
CFLAGS = -g -Wall -O2

all: libcora.a

test: reader_test eval_test bootstrap_test

reader.test: reader_test.o libcora.a
	$(CC) -o reader.test $^

reader_test: reader.test
	./reader.test

eval_test: eval.test
	./eval.test

eval.test: eval_test.o libcora.a
	$(CC) -o $@ $^

bootstrap_test:bootstrap.test
	./bootstrap.test

bootstrap.test: bootstrap_test.o libcora.a
	$(CC) -o $@ $^

libcora.a: str.o types.o reader.o builtin.o vm.o
	ar -rc $@ $^

libcora.so: $(OBJS)
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
