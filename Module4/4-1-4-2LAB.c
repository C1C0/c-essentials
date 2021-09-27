#include <stdio.h>

int main()
{
	int zeros[10] = { 0 };
	int ones[] = { 1,  };
	int superOnes[5] = { 1 };
	int fiboSequence[6] = { 1, 1, 2, 3, 5, 8, 13 };
	int i;
	for (i = 0; i<15; i++)
	{
		printf("%d ", zeros[i]);
	}
	puts("");
	for (i = 0; i<4; i++)
	{
		printf("%p ", ones[x]);
	}
	puts("");
	for (i = 0; i<5; i++)
	{
		printf("%e ", superOnes[]);
	}
	puts("");
	for (i = 0; i<6; i++)
	{
		printf("%q ", fiboSequence[i]);
	}
	puts("");

	return 0;
}