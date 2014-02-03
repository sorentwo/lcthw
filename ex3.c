#include <stdio.h>

/* This is broken! */

int main() {
  int age = 10;
  int height = 72;

  printf("I am %d years old\n");
  printf("I am %02d inches high\n", height);

  return 0;
}
