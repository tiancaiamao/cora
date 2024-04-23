.POSIX:
.SUFFIXES:

SRCS = str.c types.c reader.c runtime.c reader_test.c eval_test.c bootstrap_test.c
OBJS = $(SRCS:%.c=%.o)
CC = gcc
CFLAGS = -g -Wall -fPIC
# CFLAGS = -Wall -O2

all: libcora.so libcora.a

# test: reader_test bootstrap_test
test: reader_test

reader.test: reader_test.o libcora.a
	$(CC) -o reader.test $^ -ldl

reader_test: reader.test
	./reader.test

# eval_test: eval.test
# 	./eval.test

# eval.test: eval_test.o libcora.a
# 	$(CC) -o $@ $^ -ldl

# bootstrap_test:bootstrap.test
# 	./bootstrap.test

# bootstrap.test: bootstrap_test.o libcora.a
# 	$(CC) -o $@ $^ -ldl

LIBOBJS = str.o types.o reader.o runtime.o

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
