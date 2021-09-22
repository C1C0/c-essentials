#include <stdio.h>

int main(void) {
  int n = -5;
  /* your code */

  if (n < 0) {
    printf("The absolute value of %d is %d\n", n, n * (-1));
    printf("The value of n is %d\n", n);
  }

  return 0;
}