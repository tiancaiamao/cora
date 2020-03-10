#ifndef _SOCKET_H_
#define _SOCKET_H_

#include "event_loop.h"
#include <stdint.h>
#include	<netinet/in.h>

int netDial(int fd, struct eventLoop *el,
            struct sockaddr *addr, socklen_t addrLen,
            void(*cb)(void *ud, int32_t fd), void *ud);

struct acceptor* netListen(struct eventLoop *el, struct sockaddr *addr, void(*cb)(void *ud), void *ud);


struct streamConn;

struct streamConn* streamConnNew(int fd, struct eventLoop *el);

void netRead(struct streamConn *conn, char *data, int size, void (*cb)(void *ud), void *ud);

void netWrite(struct streamConn *conn, char *data, int size, void (*cb)(void *ud), void *ud);

#endif
