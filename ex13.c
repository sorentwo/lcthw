#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("you need 1 argument");
    return 1;
  }

  int i = 0;
  char letter = '\0';

  for(i = 0, letter = argv[1][i]; argv[1][i] != '\0'; i++) {
    switch(letter) {
      case 'a':
      case 'A':
        printf("%d: 'A'\n", i);
        break;
      default:
        printf("%d: %c is not a vowel", i, letter);
    }
  }

  return 0;
}
