all: network.o event_loop.o network_lib.o

network.o: network.c
	gcc -I../src -fPIC -c $^ 

event_loop.o: event_loop.c
	gcc -I../src -fPIC -c $^ 

network_lib.o: network_lib.c
	gcc -I../src -fPIC -c $^ 
