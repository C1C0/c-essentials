#include <stdio.h>

void printStars(int numberOfSpaces) {
  printf("*");

  for (int j = 0; j < numberOfSpaces; j++) {
    printf(" ");
  }

  printf("*");
}

int main() {
  /* your code */

  int x;

  scanf("%d", &x);

  /**
   * @brief
   * "when the user inputs a number greater than 20, the program prints only
   * forty lines."
   */
  if (x > 20) {
    x = 40;
  }

  if(x <= 1){
	  return 0;
  }

  // first half
  for (int i = 0; i <= x; i++) {
    printStars(i);
    printf("\n");
  }

  // second half
  for (int i = x; i >= 0; i--) {
    printStars(i);
    printf("\n");
  }

  return 0;
}