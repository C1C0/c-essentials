#include <stdio.h>

int main() {
  /* your code */
  int numberOfDays;
  float PI;

  printf("How many days in the week: ");
  scanf("%d", &numberOfDays);

  printf("The value of Pi to two points: ");
  scanf("%f", &PI);

  printf("There are %d days in the week. \nPi value is %f.", numberOfDays, PI);

  return 0;
}