#include <stdio.h>

int main(void) 
{
	struct person person1 = {"Mary", "Smith"};
	struct person person2 = {"James", "Johnson"};
	struct person person3 = {"Patricia", "Williams"};
	struct person person4 = {"John", "Brown"};
	printf("%s %s\n", person1.firstName, person1.lastName);
	printf("%s %s\n", person2.firstName, person2.lastName);
	printf("%s %s\n", person3.firstName, person3.lastName);
	printf("%s %s\n", person4.firstName, person4.lastName);
	return 0;
}