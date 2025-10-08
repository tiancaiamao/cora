.PHONY: libcora lib fmt test

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

libcora1:
	make -C src libcora1.so

lib:
	make -C lib

.c.o:
	$(CC) $(CFLAGS) -c $< -I src

cora.bin: libcora main.o init.so
	# $(CC) main.o -Lsrc $(LD_FLAG) -o $@
	$(CC) main1.o -Lsrc $(LD_FLAG) -o $@

# a.out: libcora1 main1.o init1.so lib/toc1.so
# 	$(CC) main.o -Lsrc $(LD_FLAG) -o $@

clean:
	rm -f *.o *.so *.bin test/*.so
	make clean -C src
	make clean -C lib

init.so: init.c libcora
	gcc -shared -o init.so -g -fPIC init.c -Isrc -I. -Lsrc -lcora

# init1.so: init1.c libcora1
# 	gcc -shared -o init1.so -g -fPIC init1.c -Isrc -I. -Lsrc -lcora1

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
