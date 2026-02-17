#ifndef PARALLEL_NET_H
#define PARALLEL_NET_H

#include <stdbool.h>
#include <stddef.h>
#include "poller.h"

#ifdef __cplusplus
extern "C" {
#endif

// Socket wrapper for async operations
typedef struct AsyncSocket AsyncSocket;

typedef enum {
	SOCK_OK = 0,
	SOCK_WOULD_BLOCK = 1,
	SOCK_ERROR = -1,
	SOCK_CLOSED = -2
} SocketResult;

// ============================================================================
// Socket lifecycle
// ============================================================================

// Create an async TCP socket (client or server)
AsyncSocket *async_socket_new(int fd);
void async_socket_free(AsyncSocket *sock);

// Get underlying file descriptor
int async_socket_get_fd(AsyncSocket *sock);

// Get event handle for integration with poller
EventHandle *async_socket_get_event_handle(AsyncSocket *sock);

// ============================================================================
// Network operations
// ============================================================================

// Create and bind a listening socket
// Returns fd on success, -1 on error
int net_listen(const char *host, int port);

// Connect to a remote host
// Returns fd on success, -1 on error
int net_dial(const char *host, const char *port);

// Accept a connection from a listening socket
// Returns fd on success, -1 on error (including EAGAIN)
int net_accept(int listen_fd);

// Set socket to non-blocking mode
bool net_set_nonblocking(int fd);

// ============================================================================
// Async I/O operations
// ============================================================================

// Send data (non-blocking)
// Returns:
//   > 0: number of bytes sent
//   SOCK_WOULD_BLOCK: operation would block
//   SOCK_ERROR: error occurred
//   SOCK_CLOSED: connection closed
SocketResult async_socket_send(AsyncSocket *sock, const void *buf, size_t len, size_t *sent);

// Receive data (non-blocking)
// Returns:
//   > 0: number of bytes received
//   SOCK_WOULD_BLOCK: operation would block
//   SOCK_ERROR: error occurred
//   SOCK_CLOSED: connection closed
SocketResult async_socket_recv(AsyncSocket *sock, void *buf, size_t len, size_t *received);

// Accept a connection (non-blocking)
SocketResult async_socket_accept(int listen_fd, int *out_fd);

// Check non-blocking connect completion
SocketResult async_socket_connect_check(AsyncSocket *sock, int *out_errno);

// Send all data (may require multiple calls to complete)
// Returns true if all data sent, false if would block or error
bool async_socket_send_all(AsyncSocket *sock, const void *buf, size_t len, size_t *sent);

// Receive all data (may require multiple calls to complete)
// Returns true if all data received, false if would block or error
bool async_socket_recv_all(AsyncSocket *sock, void *buf, size_t len, size_t *received);

// ============================================================================
// Helper utilities
// ============================================================================

// Parse "host:port" string
bool net_parse_address(const char *addr, char **host, char **port);

// Close a file descriptor
void net_close(int fd);

#ifdef __cplusplus
}
#endif

#endif
