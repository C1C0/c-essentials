#include <stdio.h>

int getValue(int paramA, float paramB)
{
	int result = 0;
	if (paramA>10)
	{
		result += 2;
	}
	else
	{
		result += 1;
	}
	if (paramB>5.5)
	{
		result += 4;
	}
	else
	{
		result += 3;
	}
	return result;
}

int getOneOrTwo(int param)
{
	if(param > 5)
		return 2;
	return 1;
}

int main(void)
{
	int fiveValue = getValue(11, 5.4); /* your code */
	int sixValue = getValue(11, 5.6); /* your code */
	int sevenValue = getValue(11, 5.6) + getOneOrTwo(0); /* your code */
	int eightValue = getValue(11, 5.6) + getOneOrTwo(6); /* your code */
	int nineValue = getValue(11, 5.6) + getOneOrTwo(6) + getOneOrTwo(0) ; /* your code */
	
	printf("Five: %d\n", fiveValue);
	printf("Six: %d\n", sixValue);
	printf("Seven: %d\n", sevenValue);
	printf("Eight: %d\n", eightValue);
	printf("Nine: %d\n", nineValue);
	return 0;
}