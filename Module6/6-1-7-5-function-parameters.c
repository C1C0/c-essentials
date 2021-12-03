/**
 * @file 6-1-7-5-function-parameters.c
 * @author your name (you@domain.com)
 * @brief Scenario
Write a function that computes the square of a given floating-point number and
returns its value. Separate the declaration of the function from its full
definition.

Write a test code to test the function with some values. Do not limit yourself
only to those values we've provided you.

Expected output
square of 2.00 is 4.00
square of 6.00 is 36.00
square of 2.50 is 6.25
square of 12.12 is 146.89
square of 345.68 is 119493.29
 * @version 0.1
 * @date 2021-12-03
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

float sqrFloat(float x);
float roundHundreth(float x);
void testSqrFloat(float testingValues[][2], int arrSize, char *messPos,
                  char *messNeg);

int main() {
  int nOfElements = 6;
  float testingValues[][2] = {{2., 4.},        {6., 36.},           {2.5, 6.25},
                              {12.12, 146.89}, {345.68, 119493.29}, {5., 25.}};

  testSqrFloat(testingValues, nOfElements, "square of %.2f is %.2f",
               "square of %.2f is NOT %.2f");

  return 0;
}

float sqrFloat(float x) { return roundHundreth(x * x); }

float roundHundreth(float value) {
  char str[40];

  sprintf(str, "%.2f", value);
  sscanf(str, "%f", &value);
  return value;
}

void testSqrFloat(float testingValues[][2], int arrSize, char *messPos,
                  char *messNeg) {
  for (int i = 0; i < arrSize; i++) {
    printf(sqrFloat(testingValues[i][0]) == testingValues[i][1] ? messPos
                                                                : messNeg,
           testingValues[i][0], testingValues[i][1]);
    puts("\n");
  }
}