#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include "network.h"

void readCallback(void *ud) {
  printf("read callback\n");
  printf("%s\n", (char*)ud);
  exit(0);
}

void dialCallback(void *ud, int32_t fd) {
  printf("dial callback.. new connection, fd = %d\n", fd);

  struct eventLoop *el = ud;
  struct streamConn* conn = streamConnNew(fd, el);

  char buf[10];
  netRead(conn, buf, 10, readCallback, buf);

  eventLoopPoll(el, -1);
}

int main(int argc, char *argv[]) {
  struct eventLoop *el = eventLoopCreate();
  if (el == NULL) {
    printf("eventloopCreate\n");
    exit(-1);
  }

  int fd = socket(AF_INET, SOCK_STREAM, 0);
  if (fd < 0) {
    perror("socket");
    exit(-1);
  }

  struct addrinfo hint, *res;
  memset(&hint, 0, sizeof(hint));
  hint.ai_family = AF_INET;
  hint.ai_socktype = SOCK_STREAM;
  if (getaddrinfo("127.0.0.1", "6666", &hint, &res) < 0) {
    perror("getaddrinfo");
    exit(-1);
  }

  struct sockaddr *addr;
  socklen_t addrLen;
  for(struct addrinfo* p = res; p != NULL; p = p->ai_next) {
    if (p->ai_family == AF_INET) {
      addr = p->ai_addr;
      addrLen = p->ai_addrlen;
      break;
    }
  }
  /* if (bind(fd, addr, addrLen) < 0) { */
  /*   perror("bind"); */
  /*   exit(-1); */
  /* } */

  if (netDial(fd, el, addr, addrLen, dialCallback, el) < 0) {
    perror("netDial");
    exit(-1);
  }

  eventLoopPoll(el, -1);

  freeaddrinfo(res);
}
