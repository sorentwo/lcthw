#include <stdio.h>

int main(int argc, char *argv[]) {
  int areas[] = { 10, 12, 13, 14, 20 };
  char name[] = "Parker";
  char full_name[] = { 'P', 'a', 'r', 'k', 'e', 'r', '\0' };

  printf("The size of an int %1d.\n", sizeof(int));
  printf("The size of areas (int[]): %1d.\n", sizeof(areas));
  printf("The number of ints in areas: %1d.\n",
      sizeof(areas) / sizeof(int));

  areas[0] = 6;
  areas[20] = 200;

  printf("A bit of array access %d, and %d.\n", areas[0], areas[20]);

  return 0;
}
