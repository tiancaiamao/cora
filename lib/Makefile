all: toc.so os.so string.so io.so net.so hash-h.so rand.so toc/internal.so

extra: md4c/include.so json.so

md4c/include.so:
	make -C md4c

CC = gcc
CFLAGS := -I../src -fPIC -g
DEPDIR = .deps
SRCS := toc.c string.c os.c io.c hash-h.c net.c rand.c
OBJS = $(SRCS:%.c=%.o)
DEPS := $(SRCS:%.c=$(DEPDIR)/%.d)
DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$*.d
COMPILE.c = $(CC) $(DEPFLAGS) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c

clean:
	rm -rf *.o *.so toc/internal.so

json.so: json.c
	gcc -shared -o json.so -g json.c -fPIC -I../src -L../src -lcora -ljansson

%.so : %.o
	gcc -shared -o $@ $^ -fPIC -I../src -L../src -lcora

%.o : %.c
%.o : %.c $(DEPDIR)/%.d | $(DEPDIR)
	$(COMPILE.c) $(OUTPUT_OPTION) $<

$(DEPDIR): ; @mkdir -p $@

$(DEPS):
include $(wildcard $(DEPS))

toc/internal.so:
	make -C toc
