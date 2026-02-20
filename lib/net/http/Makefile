# Makefile for Cora HTTP Library

# Compiler settings
CC = gcc
CFLAGS = -fPIC -O2 -I../../src -I.
LDFLAGS = -shared

# Source files
PARSER_SRCS = parser.c picohttpparser/picohttpparser.c
PARSER_OBJS = $(PARSER_SRCS:.c=.o)

# Target
TARGET = internal.so

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(PARSER_OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(PARSER_OBJS) $(TARGET)

# Dependencies
parser.o: parser.c parser.h picohttpparser/picohttpparser.h
picohttpparser/picohttpparser.o: picohttpparser/picohttpparser.c picohttpparser/picohttpparser.h