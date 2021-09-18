#include <stdio.h>

int main() {
  /**
   * @param int[28|29} recommended use values either 28 or 29
   */
  int daysInCurrentFebruary = 29;

  int daysInJanuary = 31;
  int daysInFebruary = daysInCurrentFebruary;
  int daysInMarch = 31;
  int daysInApril = 30;
  int daysInMay = 31;
  int daysInJune = 30;
  int daysInJuly = 31;
  int daysInAugust = 31;
  int daysInSeptember = 30;
  int daysInOctober = 31;
  int daysInNovember = 30;
  int daysInDecember = 31;

  int Q1 = daysInJanuary + daysInFebruary + daysInMarch;
  int Q2 = daysInApril + daysInMay + daysInJune;
  int Q3 = daysInJuly + daysInAugust + daysInSeptember;
  int Q4 = daysInOctober + daysInNovember + daysInDecember;

  printf("Days in the Q1 of the current year: %d\n", Q1);
  printf("Days in the Q2 of the current year: %d\n", Q2);
  printf("Days in the Q3 of the current year: %d\n", Q3);
  printf("Days in the Q4 of the current year: %d\n", Q4);

  return 0;
}