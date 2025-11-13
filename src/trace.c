#include "trace.h"
#include <assert.h>
#include <stdint.h>
#include <stdio.h>

FILE *trace_file = NULL;
size_t trace_offset = 0;
uint8_t trace_buffer[TRACE_BUFFER_SIZE];

void
traceClose() {
	traceFlush();
	if (trace_file)
		fclose(trace_file);
	trace_file = NULL;
}

void
traceInit(const char *path) {
	trace_file = fopen(path, "wb");
	trace_offset = 0;
	atexit(traceClose);
}
