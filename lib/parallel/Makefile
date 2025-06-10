all: internal.so

CC = gcc
CFLAGS := -I../../src -fPIC -g
DEPDIR = .deps
SRCS := internal.c
OBJS = $(SRCS:%.c=%.o)
DEPS := $(SRCS:%.c=$(DEPDIR)/%.d)
DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$*.d
COMPILE.c = $(CC) $(DEPFLAGS) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c

clean:
	rm -rf *.o *.so

%.so : %.o
	gcc -shared -o $@ $^ -fPIC -I../../src -L../../src -lcora -lpthread

%.o : %.c
%.o : %.c $(DEPDIR)/%.d | $(DEPDIR)
	$(COMPILE.c) $(OUTPUT_OPTION) $<

$(DEPDIR): ; @mkdir -p $@

$(DEPS):
include $(wildcard $(DEPS))
