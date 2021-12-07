/**
 * @file floydsTriangle.c
 * @author your name (you@domain.com)
 * @brief Floyds triangle
 * @version 0.1
 * @date 2021-12-07
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
void floydsTriangle(int nOfRows) {
    int output = 1;
  for (int i = 0; i < nOfRows; i++) {
    for (int j = 0; j < i; j++) {
      printf(" %3d ", output++);
    }
    printf("\n");
  }
}