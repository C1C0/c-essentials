#include <stdio.h>
#include <stdlib.h>

int main() {
  /* your code */
  char matrixSize;
  int **matrix, r, c;

  scanf("%d", &matrixSize);

  if (matrixSize > 20) {
    puts("Matrix too big.");
    return 1;
  }

  // fill in the matrix
  matrix = (int **)malloc(matrixSize * sizeof(int *));

  // first row
  printf("%4c", ' ');
  for (r = 0; r < matrixSize; r++) {
    printf("%4d", r + 1);
  }
  printf("\n");

  for (r = 0; r < matrixSize; r++) {
    matrix[r] = (int *)malloc(matrixSize * (sizeof(int)));

    for (c = 0; c < matrixSize; c++) {
      matrix[r][c] = (r + 1) * (c + 1);
    }
  }

  // display the matrix
  for (r = 0; r < matrixSize; r++) {
    printf("%4d", r + 1);
    for (c = 0; c < matrixSize; c++) {
      printf("%4d", matrix[r][c]);
    }
    printf("\n");
    free(matrix[r]);
  }

  free(matrix);

  return 0;
}