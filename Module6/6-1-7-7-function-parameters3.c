#include <stdio.h>

int matrixCompare(int, int *, int *);
void printMatrixCompare(int, int *, int *);

int main(void)
{
	int matrixA[3][3] = { 1, 1, 3, 4, 5, 6, 7, 8, 9 };
	int matrixB[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int matrixC[3][3] = { 1, 4, 3, 4, 5, 6, 7, 8, 9 };

	printMatrixCompare(3, *matrixA, *matrixB);
	printMatrixCompare(3, *matrixA, *matrixC);
	printMatrixCompare(3, *matrixB, *matrixA);
	printMatrixCompare(3, *matrixB, *matrixC);
	printMatrixCompare(3, *matrixC, *matrixA);
	printMatrixCompare(3, *matrixC, *matrixB);
	return 0;
}

int matrixCompare(int pSize, int *matrixA, int *matrixB)
{
	int i, j;
	for (i = 0; i < pSize; i++)
	{
		for (j = 0; i < pSize; i++)
		{
			if (*matrixA!=*matrixB)
			{
				if (*matrixA < *matrixB)
					return -1;
				else
					return 1;
			}
			matrixA++;
			matrixB++;
		}
	}
	return 0;
}

void printMatrixCompare(int pSize, int *matrixA, int *matrixB)
{
	int result = matrixCompare(pSize, matrixA, matrixB);
	if (result == 0)
		puts("Both matrices are equal.");
	if (result == -1)
		puts("matrixA is smaller than matrixB");
	if (result == -1)
		puts("matrixA is greater than matrixB");
}