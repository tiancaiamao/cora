#include "net.h"
#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

// ============================================================================
// AsyncSocket implementation
// ============================================================================

struct AsyncSocket {
	int fd;
	EventHandle *event_handle;
	
	// Send/recv state
	size_t send_pos;
	size_t recv_pos;
};

AsyncSocket *
async_socket_new(int fd) {
	if (fd < 0) {
		return NULL;
	}
	
	AsyncSocket *sock = (AsyncSocket *)malloc(sizeof(AsyncSocket));
	if (!sock) {
		return NULL;
	}
	
	sock->fd = fd;
	sock->event_handle = NULL;  // Created on demand
	sock->send_pos = 0;
	sock->recv_pos = 0;
	
	return sock;
}

void
async_socket_free(AsyncSocket *sock) {
	if (!sock) {
		return;
	}
	
	if (sock->event_handle) {
		event_handle_free(sock->event_handle);
	}
	
	free(sock);
}

int
async_socket_get_fd(AsyncSocket *sock) {
	if (!sock) {
		return -1;
	}
	return sock->fd;
}

EventHandle *
async_socket_get_event_handle(AsyncSocket *sock) {
	if (!sock) {
		return NULL;
	}
	
	// Lazy creation of event handle
	if (!sock->event_handle) {
		sock->event_handle = event_handle_new(sock->fd, NULL, NULL, sock);
	}
	
	return sock->event_handle;
}

// ============================================================================
// Network operations
// ============================================================================

bool
net_set_nonblocking(int fd) {
	if (fd < 0) {
		return false;
	}
	
	int flags = fcntl(fd, F_GETFL, 0);
	if (flags < 0) {
		return false;
	}
	
	if (fcntl(fd, F_SETFL, flags | O_NONBLOCK) < 0) {
		return false;
	}
	
	return true;
}

int
net_listen(const char *host, int port) {
	int fd = socket(AF_INET, SOCK_STREAM, 0);
	if (fd < 0) {
		return -1;
	}
	
	// Set SO_REUSEADDR
	int optval = 1;
	setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof(optval));
	
	struct sockaddr_in addr;
	memset(&addr, 0, sizeof(struct sockaddr_in));
	addr.sin_family = AF_INET;
	addr.sin_port = htons(port);
	
	if (host == NULL || strcmp(host, "0.0.0.0") == 0) {
		addr.sin_addr.s_addr = INADDR_ANY;
	} else {
		if (inet_pton(AF_INET, host, &addr.sin_addr) <= 0) {
			close(fd);
			return -1;
		}
	}
	
	if (bind(fd, (struct sockaddr *)&addr, sizeof(struct sockaddr_in)) < 0) {
		close(fd);
		return -1;
	}
	
	if (listen(fd, 128) < 0) {
		close(fd);
		return -1;
	}
	
	if (!net_set_nonblocking(fd)) {
		close(fd);
		return -1;
	}
	
	return fd;
}

int
net_dial(const char *host, const char *port) {
	struct addrinfo hint;
	memset(&hint, 0, sizeof(struct addrinfo));
	hint.ai_family = AF_INET;
	hint.ai_socktype = SOCK_STREAM;
	
	struct addrinfo *result, *rp;
	int s = getaddrinfo(host, port, &hint, &result);
	if (s != 0) {
		return -1;
	}
	
	int fd = -1;
	for (rp = result; rp != NULL; rp = rp->ai_next) {
		fd = socket(rp->ai_family, rp->ai_socktype, rp->ai_protocol);
		if (fd == -1) {
			continue;
		}

		if (!net_set_nonblocking(fd)) {
			close(fd);
			fd = -1;
			continue;
		}

		if (connect(fd, rp->ai_addr, rp->ai_addrlen) != -1) {
			break;
		}

		if (errno == EINPROGRESS) {
			break;
		}

		close(fd);
		fd = -1;
	}
	
	freeaddrinfo(result);
	
	if (fd < 0) {
		return -1;
	}

	return fd;
}

int
net_accept(int listen_fd) {
	struct sockaddr_in addr;
	socklen_t len = sizeof(struct sockaddr_in);
	memset(&addr, 0, sizeof(addr));
	
	int fd = accept(listen_fd, (struct sockaddr *)&addr, &len);
	if (fd < 0) {
		return -1;
	}
	
	if (!net_set_nonblocking(fd)) {
		close(fd);
		return -1;
	}
	
	return fd;
}

void
net_close(int fd) {
	if (fd >= 0) {
		close(fd);
	}
}

// ============================================================================
// Async I/O operations
// ============================================================================

SocketResult
async_socket_send(AsyncSocket *sock, const void *buf, size_t len, size_t *sent) {
	if (!sock || !buf || !sent) {
		return SOCK_ERROR;
	}

	const char *ptr = (const char *)buf;
	if (sock->send_pos > len) {
		sock->send_pos = 0;
	}

	while (sock->send_pos < len) {
		ssize_t ret = send(sock->fd, ptr + sock->send_pos,
			len - sock->send_pos, 0);
		if (ret < 0) {
			if (errno == EAGAIN || errno == EWOULDBLOCK) {
				*sent = sock->send_pos;
				return SOCK_WOULD_BLOCK;
			}
			*sent = sock->send_pos;
			sock->send_pos = 0;
			return SOCK_ERROR;
		}

		if (ret == 0) {
			*sent = sock->send_pos;
			sock->send_pos = 0;
			return SOCK_CLOSED;
		}

		sock->send_pos += (size_t)ret;
	}

	*sent = sock->send_pos;
	sock->send_pos = 0;
	return SOCK_OK;
}

SocketResult
async_socket_recv(AsyncSocket *sock, void *buf, size_t len, size_t *received) {
	if (!sock || !buf || !received) {
		return SOCK_ERROR;
	}
	
	*received = 0;
	
	ssize_t ret = recv(sock->fd, buf, len, 0);
	if (ret < 0) {
		if (errno == EAGAIN || errno == EWOULDBLOCK) {
			return SOCK_WOULD_BLOCK;
		}
		return SOCK_ERROR;
	}
	
	if (ret == 0) {
		return SOCK_CLOSED;
	}
	
	*received = (size_t)ret;
	return SOCK_OK;
}

SocketResult
async_socket_accept(int listen_fd, int *out_fd) {
	if (listen_fd < 0 || !out_fd) {
		return SOCK_ERROR;
	}

	*out_fd = -1;
	struct sockaddr_in addr;
	socklen_t len = sizeof(struct sockaddr_in);
	memset(&addr, 0, sizeof(addr));

	int fd = accept(listen_fd, (struct sockaddr *)&addr, &len);
	if (fd < 0) {
		if (errno == EAGAIN || errno == EWOULDBLOCK) {
			return SOCK_WOULD_BLOCK;
		}
		return SOCK_ERROR;
	}

	if (!net_set_nonblocking(fd)) {
		close(fd);
		return SOCK_ERROR;
	}

	*out_fd = fd;
	return SOCK_OK;
}

SocketResult
async_socket_connect_check(AsyncSocket *sock, int *out_errno) {
	if (!sock) {
		return SOCK_ERROR;
	}

	int err = 0;
	socklen_t len = sizeof(err);
	if (getsockopt(sock->fd, SOL_SOCKET, SO_ERROR, &err, &len) < 0) {
		if (out_errno) {
			*out_errno = errno;
		}
		return SOCK_ERROR;
	}

	if (err == 0) {
		/*
		 * On some platforms, SO_ERROR may transiently report 0 while
		 * the non-blocking connect is still in progress. Confirm with
		 * getpeername before declaring connect complete.
		 */
		struct sockaddr_storage peer;
		socklen_t peer_len = sizeof(peer);
		if (getpeername(sock->fd, (struct sockaddr *)&peer, &peer_len) == 0) {
			if (out_errno) {
				*out_errno = 0;
			}
			return SOCK_OK;
		}
		if (errno == ENOTCONN || errno == EINPROGRESS || errno == EALREADY) {
			if (out_errno) {
				*out_errno = errno;
			}
			return SOCK_WOULD_BLOCK;
		}
		if (out_errno) {
			*out_errno = errno;
		}
		return SOCK_ERROR;
	}

	if (err == EINPROGRESS || err == EALREADY) {
		if (out_errno) {
			*out_errno = err;
		}
		return SOCK_WOULD_BLOCK;
	}

	if (out_errno) {
		*out_errno = err;
	}
	return SOCK_ERROR;
}

bool
async_socket_send_all(AsyncSocket *sock, const void *buf, size_t len, size_t *sent) {
	if (!sock || !buf || !sent) {
		return false;
	}
	
	size_t total = 0;
	const char *ptr = (const char *)buf;
	
	while (total < len) {
		size_t n = 0;
		SocketResult result = async_socket_send(sock, ptr + total, len - total, &n);
		
		total += n;
		
		if (result == SOCK_WOULD_BLOCK) {
			*sent = total;
			return false;  // Not all data sent yet
		}
		
		if (result != SOCK_OK) {
			*sent = total;
			return false;
		}
	}
	
	*sent = total;
	return true;
}

bool
async_socket_recv_all(AsyncSocket *sock, void *buf, size_t len, size_t *received) {
	if (!sock || !buf || !received) {
		return false;
	}
	
	size_t total = 0;
	char *ptr = (char *)buf;
	
	while (total < len) {
		size_t n = 0;
		SocketResult result = async_socket_recv(sock, ptr + total, len - total, &n);
		
		total += n;
		
		if (result == SOCK_WOULD_BLOCK) {
			*received = total;
			return false;  // Not all data received yet
		}
		
		if (result != SOCK_OK) {
			*received = total;
			return false;
		}
	}
	
	*received = total;
	return true;
}

// ============================================================================
// Helper utilities
// ============================================================================

bool
net_parse_address(const char *addr, char **host, char **port) {
	if (!addr || !host || !port) {
		return false;
	}
	
	const char *colon = strchr(addr, ':');
	if (!colon) {
		return false;
	}
	
	size_t host_len = colon - addr;
	size_t port_len = strlen(colon + 1);
	
	*host = (char *)malloc(host_len + 1);
	*port = (char *)malloc(port_len + 1);
	
	if (!*host || !*port) {
		free(*host);
		free(*port);
		return false;
	}
	
	memcpy(*host, addr, host_len);
	(*host)[host_len] = '\0';
	
	memcpy(*port, colon + 1, port_len);
	(*port)[port_len] = '\0';
	
	return true;
}
