all: lib.a string.so

CC = gcc
CFLAGS := -I../src -fPIC -g
DEPDIR = .deps
# SRCS := codegen.c setjump.c io.c generator.c net.c string.c
SRCS := codegen.c string.c
OBJS = $(SRCS:%.c=%.o)
DEPS := $(SRCS:%.c=$(DEPDIR)/%.d)
DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$*.d
COMPILE.c = $(CC) $(DEPFLAGS) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c

lib.a: $(OBJS)
	ar -rc $@ $^
clean:
	rm -rf *.o lib.a

string.so: string.o
	gcc -shared -o $@ $^

%.o : %.c
%.o : %.c $(DEPDIR)/%.d | $(DEPDIR)
	$(COMPILE.c) $(OUTPUT_OPTION) $<

$(DEPDIR): ; @mkdir -p $@

$(DEPS):
include $(wildcard $(DEPS))
