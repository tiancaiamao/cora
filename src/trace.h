/* Lightweight C trace utilities compatible with Perfetto/Chrome Trace */
// trace.h
#ifndef TRACE_H
#define TRACE_H

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

typedef enum {
	PH_B = 'B', PH_E = 'E', PH_b = 'b', PH_e = 'e',
	PH_s = 's', PH_f = 'f'
} trace_phase_t;

typedef struct __attribute__((packed)) {
	uint8_t  ph;
	uint8_t  name_len;
	uint16_t tid;
	uint32_t id;
	uint64_t ts;
	// char name[] follows
} trace_event_t;

extern FILE* trace_file;
extern size_t  trace_offset;

#define TRACE_BUFFER_SIZE (1 << 20) // 1MB
static uint8_t trace_buffer[TRACE_BUFFER_SIZE];

static inline uint64_t
trace_now() {
	struct timespec ts;
	clock_gettime(CLOCK_MONOTONIC, &ts);
	return (uint64_t)ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
}

static inline void
trace_flush() {
	if (trace_file && trace_offset > 0) {
		fwrite(trace_buffer, 1, trace_offset, trace_file);
		trace_offset = 0;
	}
}

static inline void
trace_emit_event(trace_phase_t ph, const char* name, uint16_t tid, uint32_t id) {
	if (!trace_file) return;

	size_t name_len = strlen(name);
	size_t total_size = sizeof(trace_event_t) + name_len;
	if (trace_offset + total_size >= TRACE_BUFFER_SIZE) {
		trace_flush();
	}

	trace_event_t* evt = (trace_event_t*)(trace_buffer + trace_offset);
	evt->ph = ph;
	evt->name_len = name_len;
	evt->tid = tid;
	evt->id = id;
	evt->ts = trace_now();

	memcpy((char*)evt + sizeof(trace_event_t), name, name_len);
	trace_offset += total_size;
}


void trace_close();
void trace_init(const char* path);

#ifdef __GNUC__
#define TRACE_CLEANUP(func) __attribute__((cleanup(func)))
#else
#error "Only GCC/Clang supported for cleanup attribute"
#endif

static inline int trace_tid() {
	return (int)(uintptr_t)pthread_self();
}

// Basic BEGIN/END trace macros
#define TRACE_BEGIN(name) trace_emit_event('B', name, trace_tid(), 0)
#define TRACE_END(name)   trace_emit_event('E', name, trace_tid(), 0)

// FLOW trace macros
/* #define TRACE_FLOW_START(flow_id) trace_emit_flow('s', flow_id, trace_tid()) */
/* #define TRACE_FLOW_END(flow_id)   trace_emit_flow('f', flow_id, trace_tid()) */

// Scoped tracing with cleanup attribute
typedef struct {
const char* name;
int tid;
} TraceScope;

static inline void trace_scope_end(TraceScope* scope) {
	trace_emit_event('E', scope->name, scope->tid, 0);
}

static inline TraceScope trace_scope_begin(const char* name) {
	int tid = trace_tid();
	trace_emit_event('B', name, tid, 0);
	return (TraceScope){ .name = name, .tid = tid };
}

#define TRACE_SCOPE(name) \
TRACE_CLEANUP(trace_scope_end) TraceScope __trace_scope = trace_scope_begin(name)


#endif
