#include <stdio.h>

int main() {
  /* your code */
  unsigned char userInput, firstPart, secondPart;

  scanf("%d", &userInput);

  unsigned char nibble1 = 240;
  firstPart = (userInput & nibble1) >> 4;

  unsigned char nibble2 = 15;
  secondPart = (userInput & nibble2);

  printf("H nibble: %d", firstPart);
  printf("\nL nibble: %d", secondPart);

  return 0;
}