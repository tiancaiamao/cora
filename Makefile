.PHONY: libcora lib fmt test

CC = gcc
CFLAGS := -g -Wall

# Detect operating system
UNAME_S := $(shell uname -s)

ifeq ("${ENABLE_ASAN}", "1")
	CFLAGS += -fsanitize=address
endif

ifeq ("${ENABLE_TSAN}", "1")
	CFLAGS += -fsanitize=thread
endif

LD_FLAG	:=  -lcora -ldl
ifeq ("${ENABLE_ASAN}", "1")
	LD_FLAG = -lasan -lcora -ldl
endif

ifeq ("${ENABLE_TSAN}", "1")
	LD_FLAG = -ltsan -lcora -ldl
endif

all: cora

libcora:
	make -C src

lib:
	make -C lib

.c.o:
	$(CC) $(CFLAGS) -c -g $< -I src

# cora directly depends on lib/toc.so
cora: libcora main.o init.so lib
ifeq ($(UNAME_S),Darwin)
	# macOS: Use rpath for flexible library loading
	$(CC) main.o -Lsrc $(LD_FLAG) -Wl,-rpath,@executable_path/src -o $@
else
	# Linux: Use rpath for flexible library loading
	$(CC) main.o -Lsrc $(LD_FLAG) -Wl,-rpath,\$$ORIGIN/src -o $@
endif

clean:
	rm -f *.o *.so *.bin test/*.so
	make clean -C src
	make clean -C lib

init.so: init.c libcora
	gcc -shared -o init.so -g -fPIC init.c -Isrc -I. -Lsrc -lcora

fmt:
	cd src; indent -npcs -bap -br -ce -brf -ut -i8 -nbbo -nhnl *.c

test: cora
	make test -C src
	./test/script.cora

FAIL_ON_STDOUT := awk '{ print } END { if (NR > 0) { exit 1 } }'

bootstrap:
	@make clean
	@make CFLAGS='-D_BOOTSTRAP_TEST_ -fPIC' -C src
	@make
	@./test/bootstrap.cora;
	@diff init.c init.c.tmp | $(FAIL_ON_STDOUT)
	@diff lib/toc.c lib/toc.c.tmp | $(FAIL_ON_STDOUT)
	rm -f init.c.tmp lib/toc.c.tmp

install-local:
	mkdir -p ${HOME}/.local/share/cora/pkg/; \
	ln -s `pwd` ${HOME}/.local/share/cora/pkg/cora
