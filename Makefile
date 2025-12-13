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

# Show build configuration
info:
	@echo "Build Configuration:"
	@echo "  OS: $(UNAME_S)"
	@echo "  CC: $(CC)"
	@echo "  CFLAGS: $(CFLAGS)"
	@echo "  LD_FLAG: $(LD_FLAG)"
ifeq ($(UNAME_S),Darwin)
	@echo "  Library strategy: @rpath with install_name @rpath/libcora.so"
	@echo "  Binary rpath: @executable_path/src"
	@echo "  Third-party usage: Flexible - library can be placed anywhere with appropriate rpath"
else
	@echo "  Library strategy: soname with LD_LIBRARY_PATH/rpath support"
	@echo "  Binary rpath: \$$ORIGIN/src"
	@echo "  Third-party usage: Standard Linux shared library behavior"
endif
	@echo ""
	@echo "Usage modes:"
	@echo "  Development: ./cora (direct)
	@echo "  Third-party: Link with -lcora and set appropriate rpath"
	@echo "  System: make install (copies to $(INSTALL_PREFIX))"
