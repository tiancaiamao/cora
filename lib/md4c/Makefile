include.so: md4c.c md4c_wrap.c md4c.h
	gcc -shared -o $@ -g -fPIC md4c_wrap.c md4c.c -lcora  -I. -I../../src -L ../../src

a.out: md4c.c md4c_wrap.c md4c.h
	gcc -o $@ -DDEBUG -g md4c_wrap.c md4c.c -lcora  -I. -I../../src -L ../../src
