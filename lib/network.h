#ifndef _SOCKET_H_
#define _SOCKET_H_

#include "event_loop.h"
#include <stdint.h>
#include	<netinet/in.h>

void netDial(int fd, struct eventLoop *el, void(*cb)(void *ud, int32_t fd), void *ud);

struct acceptor* netListen(struct eventLoop *el, struct sockaddr *addr, void(*cb)(void *ud), void *ud);


struct streamConn;

void netRead(struct streamConn *conn, char *data, int size, void (*cb)(void *ud), void *ud);

void netWrite(struct streamConn *conn, char *data, int size, void (*cb)(void *ud), void *ud);

#endif
