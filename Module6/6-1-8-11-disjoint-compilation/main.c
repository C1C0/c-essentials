#include <stdio.h>
#include "triangles.h"

void floydsTriangle(int size);
void normalTriangle(int size);

int main()
{
	int size;
	scanf("%d", &size);
	normalTriangle(size);
	floydsTriangle(size);
	return 0;
}

/* triangles.h */
void floydsTriangle(int size);
void normalTriangle(int size);


/* floydsTriangles.c */
#include <stdio.h>
void floydsTriangle(int size)
{
	int i, j, k=1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j<i; j++)
		{
			printf("%4d", k);
			k++;
		}
		printf("\n");
	}
}


/* normalTriangles.c */
#include <stdio.h>
void normalTriangle(int size)
{
	int i, j;
	for(i = 0 ; i < size ; i++)
	{
		for(j=0; j<i ; j++)
		{
			printf("\\");
		}
		printf("\n");
	}
}