#ifndef _SOCKET_H_
#define _SOCKET_H_

int32_t asyncConnect(int fd, struct eventLoop *el, char *addr, void(*cb)(void *this, int32_t fd), uint32_t timeout);

#endif
