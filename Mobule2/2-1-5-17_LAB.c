#include <stdio.h>

int main(void) {
  /* your code */
  int dayOfWeek;
  scanf("%d", &dayOfWeek);

  if(dayOfWeek <= 0 || dayOfWeek > 7){
	  return 1;
  }

  if (dayOfWeek == 1) {
    puts("The day of week is: Monday");
  }

  if (dayOfWeek == 2) {
    puts("The day of week is: Tuesday");
  }

  if (dayOfWeek == 3) {
    puts("The day of week is: Wednesday");
  }

  if (dayOfWeek == 4) {
    puts("The day of week is: Thursday");
  }

  if (dayOfWeek == 5) {
    puts("The day of week is: Friday");
  }

  if (dayOfWeek == 6) {
    puts("The day of week is: Saturday");
  }

  if (dayOfWeek == 7) {
    puts("The day of week is: Sunday");
  }

  return 0;
}