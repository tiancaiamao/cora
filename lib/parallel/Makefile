# Makefile for parallel runtime

CC = gcc
CFLAGS = -Wall -fPIC -g -I../../src 
LDFLAGS = -shared -pthread -L../../src -lcora

# Source files
SOURCES = vm.c scheduler.c mailbox.c poller.c net.c bindings.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = internal.so

# Build target
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	rm -f $(OBJECTS) $(TARGET)

# Dependencies
vm.o: vm.c vm.h
scheduler.o: scheduler.c scheduler.h coroutine.h vm.h
mailbox.o: mailbox.c mailbox.h vm.h coroutine.h
poller.o: poller.c poller.h
net.o: net.c net.h poller.h
bindings.o: bindings.c vm.h mailbox.h scheduler.h poller.h net.h

.PHONY: all clean
