#include <stdio.h>

int main(int argc, char *argv[]) {
  int ages[] = { 23, 43, 12, 89, 2 };
  char *names[] = {
    "Alen", "Frank", "Mary", "John", "Lisa"
  };

  // Safely get size
  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  // first way
  for(i = 0; i < count; i++) {
    printf("%s has %d years alive.\n", names[i], ages[i]);
  }

  printf("---\n");

  int *cur_age = ages;
  char **cur_name = names;

  // second way
  for(i = 0; i < count; i++) {
    printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
  }

  printf("---\n");

  // third way
  for(i = 0; i < count; i++) {
    printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
  }

  printf("---\n");

  // fourth way
  for(cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) {
    printf("%s lived %d years so far.\n", *cur_name, *cur_age);
  }

  return 0;
}
