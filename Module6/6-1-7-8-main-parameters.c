#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		puts("Wrong parameters");
		return -1;
	}
	int number1 = atoi(argv[2]);
	int number2 = atoi(argv[3]);
	int result;
	if (!strcmp(argv[1], "add"))
		result = number1 + number2;
	else if (!strcmp(argv[1], "sub"))
		result = number1 - number2;
	else if (!strcmp(argv[1], "mul"))
		result = number1 * number2;
	else
	{
		puts("Wrong parameters");
		return -1;
	}
	printf("%s %d %d: %d\n", argv[1], number1, number2, result);
	return 0;
}