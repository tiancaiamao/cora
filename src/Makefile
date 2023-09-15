.POSIX:
.SUFFIXES:

SRCS= str.c types.c reader.c builtin.c vm.c
OBJS = $(SRCS:%.c=%.o)
CC = gcc
CFLAGS = -g -Wall -fPIC -O2

all: libcora.a

test: reader_test eval_test bootstrap_test

reader.test: reader.c
	gcc -g -D_READER_TEST_ -o reader.test reader.c builtin.c types.c gc.c vm.c str.c

reader_test: reader.test
	./reader.test

eval_test: eval.test
	./eval.test

eval.test: gc.c vm.c types.c str.c builtin.c reader.c
	gcc -g -O2 -D_EVAL_TEST_ $^ -ldl -o eval.test

bootstrap_test:bootstrap.test
	./bootstrap.test

bootstrap.test: gc.c vm.c types.c str.c builtin.c reader.c
	gcc -g -O2 -D_BOOTSTRAP_TEST_ $^ -ldl -o $@

libcora.a: $(OBJS)
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
