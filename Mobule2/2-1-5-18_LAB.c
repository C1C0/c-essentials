#include <stdio.h>
#include <stdbool.h>

int main() {

  int day, month, year;
  bool leapYear = false;

  if (year % 400 == 0)
    leapYear = true;
  else if (year % 100 == 0)
    leapYear = false;
  else if (year % 4 == 0)
    leapYear = true;
  /* your code */

  // get data
  scanf("%d", &day);
  scanf("%d", &month);
  scanf("%d", &year);

  // check, if day is higher than 0
  if (day <= 0 || day > 31) {
    return 1;
  }

  if (month <= 0 || month > 12) {
    return 1;
  }

  int numberOfDays = day;

  // to get number of days passed in former months
  // the number of months before * 30
  // plus half of the number of months without fraction - the rest of the days
  // from the 31-like months
  int monthsBefore = month - 1;
  int _31DaysMonthsBefore = 0;
  int minusLeapYeardays = 0;

  if (monthsBefore == 1) {
    _31DaysMonthsBefore = 1;
  }

  if (monthsBefore > 1) {
    _31DaysMonthsBefore = monthsBefore / 2;
  }

  if (month > 8) {
    _31DaysMonthsBefore++;
  }

  if (month > 2) {
    minusLeapYeardays = leapYear ? 1 : 2;
  }

  numberOfDays += monthsBefore * 30 + _31DaysMonthsBefore - minusLeapYeardays;

  printf("The day of the year: %d", numberOfDays);

  return 0;
}