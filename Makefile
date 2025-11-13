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

all: cora.bin lib

libcora:
	make -C src

lib:
	make -C lib

.c.o:
	$(CC) $(CFLAGS) -c -g $< -I src

cora.bin: libcora main.o init.so
ifeq ($(UNAME_S),Darwin)
	# macOS: Use rpath for flexible library loading
	$(CC) main.o -Lsrc $(LD_FLAG) -Wl,-rpath,@executable_path/src -o $@
else
	# Linux: Use rpath for flexible library loading
	$(CC) main.o -Lsrc $(LD_FLAG) -Wl,-rpath,\$$ORIGIN/src -o $@
endif

clean:
	rm -f *.o *.so *.bin test/*.so debug.sh
	make clean -C src
	make clean -C lib

init.so: init.c libcora
	gcc -shared -o init.so -g -fPIC init.c -Isrc -I. -Lsrc -lcora

fmt:
	cd src; indent -npcs -bap -br -ce -brf -ut -i8 -nbbo -nhnl *.c

test:
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

# Debug wrapper for IDE/debugger use
debug: cora.bin
	@echo '#!/bin/bash' > debug.sh
	@echo 'BASE_DIR=$$(dirname "$$0")' >> debug.sh
	@echo 'case "$$(uname -s)" in' >> debug.sh
	@echo '  Darwin*) export DYLD_LIBRARY_PATH=$${BASE_DIR}/src:$$DYLD_LIBRARY_PATH ;;' >> debug.sh
	@echo '  Linux*) export LD_LIBRARY_PATH=$${BASE_DIR}/src:$$LD_LIBRARY_PATH ;;' >> debug.sh
	@echo 'esac' >> debug.sh
	@echo 'export CORAPATH=$${BASE_DIR}/../' >> debug.sh
	@echo 'if [ $$# -eq 0 ]; then exec ./cora.bin; else exec "$$1" ./cora.bin "$${@:2}"; fi' >> debug.sh
	@chmod +x debug.sh
ifeq ($(UNAME_S),Darwin)
	@echo "Debug script created. Note: cora.bin can also run directly on macOS"
else
	@echo "Debug script created. Use ./debug.sh to run with proper library paths on Linux"
endif

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
	@echo "  Development: ./cora.bin (direct) or ./debug.sh [debugger]"
	@echo "  Third-party: Link with -lcora and set appropriate rpath"
	@echo "  System: make install (copies to $(INSTALL_PREFIX))"

# Install target for system-wide installation
install: all
	@echo "Installing cora to /usr/local/bin and /usr/local/lib"
	sudo cp src/libcora.so /usr/local/lib/
	sudo cp cora.bin /usr/local/bin/cora
	@echo "Installation complete. You can now run 'cora' from anywhere."

# Uninstall target
uninstall:
	sudo rm -f /usr/local/lib/libcora.so
	sudo rm -f /usr/local/bin/cora
	@echo "Uninstallation complete."
