#include <stdio.h>

int main(int argc, char *argv[]) {
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.456789;
  char initial = 'A';
  char first_name[] = "Parker";
  char last_name[] = "Selbert";

  printf("Thing %d distance\n", distance);
  printf("The power is %f, and super is %f \n", power, super_power);
  printf("My full name is %s %c %s. \n", first_name, initial, last_name);

  return 0;
}
