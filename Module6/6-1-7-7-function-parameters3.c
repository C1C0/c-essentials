/**
 * @file 6-1-7-7-function-parameters3.c
 * @author your name (you@domain.com)
 * @brief Scenario
Write a function that checks which of two given matrices is greater. To simplify
the function parameter list, you can assume that both matrices are equal in size
and are square.

This function should return:

1 if the first matrix is greater than the second;
-1 if the first matrix is smaller than the second;
0 if both matrices are equal - this means they have exactly the same values.
For this task, we assume that a matrix is smaller than another matrix when the
first element which is different is smaller in that matrix.

We analyze matrices from left to right and from top to bottom. Separate the
declaration of the function from its full definition.

Write a second function that calls the first one and then prints an appropriate
message: matrixA is smaller than matrixB, matrixA is greater than matrixB, or
Both matrices are equal.

Write a code to test it with some values - create three matrices, fill them with
values and compare them in all possible (six) cases. Call a second function. As
always, do not limit yourself only to the cases already given.

Note: you can use a single pointer to int type to pass the array.

Expected output
Both matrices are equal.
matrixA is smaller than matrixB
matrixA is greater than matrixB
Both matrices are equal.
matrixA is smaller than matrixB
matrixA is greater than matrixB
 * @version 0.1
 * @date 2021-12-07
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
#include <stdlib.h>

int checkMatrixes(int **, int **, int);
void printCompareMatrixes(int, int **, int, int **, int);
void fillInMatrix(int **, int, int);
void testMatrix(int, int **, int);

int main() {
  int sizeOfMatrix = 5;

  int *matrix1[sizeOfMatrix];
  int *matrix2[sizeOfMatrix];
  int *matrix3[sizeOfMatrix];

  fillInMatrix(matrix1, sizeOfMatrix, 1);
  fillInMatrix(matrix2, sizeOfMatrix, 1);
  fillInMatrix(matrix3, sizeOfMatrix, 2);

  testMatrix(1, matrix1, sizeOfMatrix);
  testMatrix(2, matrix2, sizeOfMatrix);
  testMatrix(3, matrix3, sizeOfMatrix);

  printf("\n\nTESTING\n\n");

  printCompareMatrixes(1, matrix1, 2, matrix2, sizeOfMatrix);
  printCompareMatrixes(1, matrix1, 3, matrix3, sizeOfMatrix);

  printCompareMatrixes(2, matrix2, 1, matrix1, sizeOfMatrix);
  printCompareMatrixes(2, matrix2, 3, matrix3, sizeOfMatrix);

  printCompareMatrixes(3, matrix3, 1, matrix1, sizeOfMatrix);
  printCompareMatrixes(3, matrix3, 2, matrix2, sizeOfMatrix);

  return 0;
}

int checkMatrixes(int **matrix1, int **matrix2, int size) {
  int **tmp1, **tmp2, *tmp3, *tmp4;

  tmp1 = matrix1;
  tmp2 = matrix2;
  for (int i = 0; i < size; i++) {
    tmp3 = *matrix1;
    tmp4 = *matrix2;

    for (int j = 0; j < size; j++) {
      if (**matrix1 > **matrix2) {
        return 1;
      }

      if (**matrix1 < **matrix2) {
        return -1;
      }

      (*matrix1)++;
      (*matrix2)++;
    }
    // reset pointers
    *matrix1 = tmp3;
    *matrix2 = tmp4;

    matrix1++;
    matrix2++;
  }

  // reset pointers
  matrix1 = tmp1;
  matrix2 = tmp2;

  return 0;
}

void printCompareMatrixes(int num1, int **matrix1, int num2, int **matrix2,
                          int size) {

  int result = checkMatrixes(matrix1, matrix2, size);

  switch (result) {
  case 1:
    printf("matrix %d is greater than matrix %d\n", num1, num2);
    break;
  case 0:
    printf("Both matrices (%d and %d) are equal.\n", num1, num2);
    break;
  case -1:
    printf("matrix %d is smaller than matrix %d\n", num1, num2);
    break;
  default:
    puts("I'm lost same as you ...");
    break;
  }
}

void fillInMatrix(int **matrix, int size, int valueShift) {
  for (int i = 0; i < size; i++) {
    // init pointer to array of ints
    matrix[i] = (int *)malloc(size * sizeof(int));

    // fill in array
    for (int j = 0; j < size; j++) {
      matrix[i][j] = j + valueShift;
    }
  }
}

void testMatrix(int num, int **matrix, int size) {
  printf("------------\nPrinting matrix %d:\n", num);
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%d ", matrix[i][j]);
    }

    printf("\n");
  }
}