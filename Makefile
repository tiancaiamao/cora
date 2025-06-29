.PHONY: libcora lib fmt

CC = gcc
CFLAGS := -g -Wall
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
	$(CC) $(CFLAGS) -c $< -I src

cora.bin: libcora main.o init.so
	# $(CC) main.o -Wl,-rpath src -Lsrc -lcora -ldl -o $@
	# $(CC) main.o -Lsrc -l:libcora.a -ldl -o $@
	# $(CC) main.o -Lsrc -l:libcora.a lib/lib.a -ldl -o $@
	$(CC) main.o -Lsrc $(LD_FLAG) -o $@

clean:
	rm -f *.o *.so *.bin
	make clean -C src
	make clean -C lib

init.so: init.c libcora
	gcc -shared -o init.so -g -fPIC init.c -Isrc -I. -Lsrc -lcora

fmt:
	cd src; indent -npcs -bap -br -ce -brf -ut -i8 -nbbo -nhnl *.c
