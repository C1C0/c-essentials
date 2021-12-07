/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief Scenario
Write a program that prints two triangles: one is a normal triangle consisting of backslashes and the other is a Floyd's triangle.

Remember to escape the backslash with a backslash (not a play on words!).

A Floyd's triangle consisting of numbers in consecutive order: in the first row, 
we have only one number: 1; in the second row, two numbers: 2 3; in the third row: 4 5 6 and so on.

Your program should ask the user for the size of both triangles (just one number - the triangles should be the same size).

After that, your program should print both triangles. To print the Floyd's triangle, you may use the "%3d" format in the printf function.

Divide your program into files: one file for the classic triangle function, one for the Floyd's
 triangle function, one header file with the prototypes of both functions, and finally a file with the main function.

Practice adding and removing files from your program/project/solution. If you can, test it in different environments (different OS/different IDE/no IDE).

Your version of the program must print the same result as the expected output.

Note: not all online compilers allow you to create a project of many files.
 * @version 0.1
 * @date 2021-12-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include "triangles.h"

int main()
{

	int rows;

	scanf("%d", &rows);

	classicTriangle(rows);
	floydsTriangle(rows);
	
	return 0;
}