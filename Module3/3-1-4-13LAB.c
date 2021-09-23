#include <stdio.h>

int main() {
  /* your code */

  int x, y, sum;

  while (1) {
    scanf("%d", &x);
    scanf("%d", &y);

    sum = x + y;

    printf("Sum: %d\n", sum);

    if(x == 0 || y == 0){
        break;
    }
  }

  printf("Finish.");

  return 0;
}