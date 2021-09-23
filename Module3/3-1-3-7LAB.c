#include <stdio.h>

void printState(int number) {
  if (number >= 1 && number < 2) {
    printf("\n Very bad");
  } else if (number >= 2 && number < 3) {
    printf("\n Bad");
  } else if (number >= 3 && number < 4) {
    printf("\n Neutral");
  } else if (number >= 4 && number < 5) {
    printf("\n Good");
  } else if (number >= 5 && number < 6) {
    printf("\n Very good");
  } else {
    printf("I dunno man ...");
  }
}

int main() {
  /* your code */
  float userInput;

  scanf("%f", &userInput);

  int userInputAsint = (int)userInput;

  // If it's out of range
  if (userInputAsint < 1 || userInputAsint >= 6) {
    return 1;
  }

  printState(userInputAsint);

  return 0;
}