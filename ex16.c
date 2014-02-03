#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {
  struct Person *who = malloc(sizeof(struct Person));
  assert(who != NULL);

  who->name   = strdup(name);
  who->age    = age;
  who->height = height;
  who->weight = weight;

  return who;
}

void Person_destroy(struct Person *who) {
  assert(who != NULL);

  free(who->name);
  free(who);
}

void Person_print(struct Person *who) {
  printf("Name: %s\n", who->name);
  printf("\tAge: %d\n", who->age);
  printf("\tHeight: %d\n", who->height);
  printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char **argv) {
  struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
  struct Person *amy = Person_create("Amy Joe", 20, 72, 108);

  printf("Joe is in memory at %p:\n", joe);
  Person_print(joe);

  printf("Amy is in memory at %p:\n", amy);
  Person_print(amy);

  joe->age    += 20;
  joe->height -= 2;
  joe->weight += 20;
  Person_print(joe);

  amy->age    += 20;
  amy->weight += 10;
  Person_print(amy);

  Person_destroy(joe);
  Person_destroy(amy);

  return 0;
}
