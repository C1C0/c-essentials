#include <stdio.h>

int main() {
  char zero = '0';

  /*Your code*/
  char others[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

  for (int i = 0; i < sizeof(others) / sizeof(char); i++) {
    printf("'%c' - '%c' is: %d\n", others[i], zero, others[i] - zero);
  }

  return 0;
}