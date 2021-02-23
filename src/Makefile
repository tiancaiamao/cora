.POSIX:
.SUFFIXES:

SRCS= gc.c types.c reader.c builtin.c runtime.c
OBJS = $(SRCS:%.c=%.o)
CC = gcc
CFLAGS = -g -Wall -fPIC

all: libcora.a

libcora.a: $(OBJS)
	ar -rc $@ $^

libcora.so: $(OBJS)
	gcc -shared -o $@ $^ -ldl

clean:
	rm -rf *.o libcora.a libcora.so cora

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


