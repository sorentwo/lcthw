#include <stdio.h>

int main(int argc, char *argv[]) {
  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at the rate of %f.\n", bugs, bug_rate);

  long universe_of_defects = 1024L * 1024L * 1024L * 1024L;
  printf("The entire universe has %1d bugs.\n", universe_of_defects);

  double expected_bugs = universe_of_defects * bug_rate;
  printf("You are extpected to have %f bugs.\n", expected_bugs);

  char null_byte = '\0';
  int care_percentage = bugs * null_byte;
  printf("Which means you should care %d%%. \n", care_percentage);

  return 0;
}
