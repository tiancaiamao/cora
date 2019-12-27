#include <stdio.h>
#include <stdint.h>

void f(void* p) {
  int oom[6];
  f(oom);
}

int main() {
  f(NULL);
}
