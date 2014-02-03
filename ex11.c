#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 0;

  for(i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  int num_states = 3;
  char *states[] = {
    "Illinois", "Wisconsin", NULL, "Michigan"
  };

  for(i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}
