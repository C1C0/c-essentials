#include <stdio.h>

int main() {
  float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 2.0};
  /* your code */
  int swapped;
  float aux;

  do {
    swapped = 0;

    for (int i = 0; i < sizeof(numbers) / sizeof(float); i++) {
      if (numbers[i] < numbers[i + 1]) {
        swapped = 1;
        aux = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = aux;
      }
    }

    for (int i = 0; i < sizeof(numbers) / sizeof(float); i++) {
      printf("%.2f ", numbers[i]);
    }
    printf("\n");

  } while (swapped);

  for (int i = 0; i < sizeof(numbers) / sizeof(float); i++) {
    printf("%.2f ", numbers[i]);
  }
  printf("\n");

  return 0;
}