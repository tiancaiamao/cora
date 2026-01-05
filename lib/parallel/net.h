#ifndef PARALLEL_NET_H
#define PARALLEL_NET_H

#include "../../src/runtime.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NetConn NetConn;

NetConn *net_listen(const char *addr, void (*read_cb)(int, void *),
	void (*write_cb)(int, void *));
NetConn *net_dial(const char *addr, void (*read_cb)(int, void *),
	void (*write_cb)(int, void *));

int net_recv(NetConn *conn, char *buf, int len);
int net_send(NetConn *conn, const char *buf, int len);
void net_close(NetConn *conn);

#ifdef __cplusplus
}
#endif

#endif
