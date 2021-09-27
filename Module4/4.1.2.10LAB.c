#include <stdio.h>

int main() {
  /* your code */
  int fibonnaci[10];

  // fill fibonnaci sequence
  for (int i = 0; i < sizeof(fibonnaci) / sizeof(int); i++) {
    int number = 1;

    // check, if previous arent out of scope of array
    if (i - 2 >= 0 && i - 1 > 0) {
      number = fibonnaci[i - 2] + fibonnaci[i - 1];
    }

    fibonnaci[i] = number;
  }

  // print the array
  for (int i = 0; i < sizeof(fibonnaci) / sizeof(int); i++) {
    printf("%d\n", fibonnaci[i]);
  }

  // print only evem positions
  for (int i = 0; i < sizeof(fibonnaci) / sizeof(int); i++) {
    if (i % 2 == 0) {
      printf("%d\n", fibonnaci[i]);
    }
  }

  // print only odd positions
  for (int i = 0; i < sizeof(fibonnaci) / sizeof(int); i++) {
    if (i % 2 != 0) {
      printf("%d\n", fibonnaci[i]);
    }
  }

  return 0;
}