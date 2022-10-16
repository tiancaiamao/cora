.POSIX:
.SUFFIXES:

SRCS= types.c gc.c reader.c vm.c eval.c instr.c builtin.c
OBJS = $(SRCS:%.c=%.o)
CC = gcc
CFLAGS = -g -Wall -fPIC

all: libcora.a libcora.so

test: eval_test instr_test

eval_test: eval.test
	./eval.test

eval.test: gc.c eval.c types.c builtin.c vm.c instr.c reader.c
	gcc -g -D_EVAL_TEST_ $^ -o eval.test

instr_test: instr.test
	./instr.test > gen.c;
	gcc -g *.c -o a.out;
	./a.out

instr.test: gc.c eval.c types.c builtin.c vm.c instr.c reader.c
	gcc -g -D_INSTR_TEST_ $^ -o instr.test

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


