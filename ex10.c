#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = argc - 1;

  while(i) {
    printf("arg %d: %s\n", i, argv[i]);
    i--;
  }

  char *states[] = {
    "Illinois", "Wisconsin", "Michigan"
  };

  i = 2;
  while(i) {
    printf("state %d: %s\n", i, states[i]);
    i--;
  }

  return 0;
}
