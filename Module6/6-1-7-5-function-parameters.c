#include <stdio.h>

float square(float);

int main(void)
{
	printf("square of %.2f is %.2f\n", 2.0, square(2.0));
	printf("square of %.2f is %.2f\n", 6.0, square(6.0));
	printf("square of %.2f is %.2f\n", 2.5, square(2.5));
	printf("square of %.2f is %.2f\n", 12.12, square(12.12));
	printf("square of %.2f is %.2f\n", 345.678, square(345.678));
	return 0;
}

float square(float value)
{
	return value*value;
}