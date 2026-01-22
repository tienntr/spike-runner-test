#include <unistd.h>

int main(void) {
  const char msg[] = "Hello, world!\n";
  (void)write(1, msg, sizeof(msg) - 1);
  return 0;
}
