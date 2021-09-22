#include <stdio.h>

int main() {
  /* your code */
  float value1, value2;

  scanf("%f", &value1);
  scanf("%f", &value2);

  printf("Valua A: %f\n", value1);
  printf("Valua B: %f\n", value2);

  /*
  5.500000 + 5.600000 = 11.100000.
5.500000 - 5.600000 = -0.100000.
5.500000 * 5.600000 = 30.799999.
  */

  // sum
  printf("%f + %f = %f\n", value1, value2, value1 + value2);

  // difference
  printf("%f - %f = %f\n", value1, value2, value1 - value2);

  // multiplication
  printf("%f * %f = %f\n", value1, value2, value1 * value2);

  return 0;
}