#include <stdio.h>

int main()
{
	/* your code */
    char day;
    char *days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

    scanf("%d", &day);

    if(day < 0 || day >= 7){
        printf("Error, no such day");
        return -1;
    }

    printf("Pointer version: %s\n", *(days + day));
    printf("Array index version: %s", days[day]);


	return 0;
}