/**
 * @file 6-1-7-8-main-parameters.c
 * @author your name (you@domain.com)
 * @brief Scenario
Write a program that allows the user to pass the parameters to be executed and
compute the results of some mathematical operations.

Your program should support the following operations:

add
sub
mul
All operations require additional two arguments. Some examples of program calls
inlude:

program.exe add 1 3
program.exe sub 2 3
program.exe mul 2 5
When there are no parameters, the parameters contain the wrong numbers or a
parameter is invalid,
 the program should print the message: Wrong parameters (or you can think about
your own message with regard to the proper form of program execution).

The first parameter must be one of the three previous strings, while the second
and third
 parameters must be integer numbers. To find out which of the commands has been
passed, you may use the strcmp function.

Your version of the program must print the same result as the expected output.

This is one of the tasks which can only be executed in your personal
environment. If you use an IDE, you can check the options of debug/execute to
pass the arguments.

You don't always need to run the program from outside the IDE.

Sample input
add 1 3

Expected output
add 1 3: 4

Sample input
sub 2 3

Expected output
sub 2 3: -1

Sample input
mul 2 5

Expected output
mul 2 5: 10
 * @version 0.1
 * @date 2021-12-07
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int add(int, int);
int sub(int, int);
int mul(int, int);

int strOnlyDigits(char *);

int main(int argc, char *argv[]) {
  int arg1, arg2;

  if (argc != 4) {
    fprintf(stderr, "Wrong number of parameters");
    exit(EXIT_FAILURE);
  }

  // check armunet one if is integer
  if (!strOnlyDigits(argv[2])) {
    fprintf(stderr, "Wrong parameter: Argument 2 expects only integer value");
    exit(EXIT_FAILURE);
  }

  // check armunet one if is integer
  if (!strOnlyDigits(argv[3])) {
    fprintf(stderr, "Wrong parameter: Argument 3 expects only integer value");
    exit(EXIT_FAILURE);
  }

  arg1 = strtol(argv[2], NULL, 10);
  arg2 = strtol(argv[3], NULL, 10);

  if (strcmp("add", argv[1]) == 0) {
    printf("%d", arg1 + arg2);
    return 0;
  }

  if (strcmp("sub", argv[1]) == 0) {
    printf("%d", arg1 - arg2);
    return 0;
  }

  if (strcmp("mul", argv[1]) == 0) {
    printf("%d", arg1 * arg2);
    return 0;
  }


  fprintf(stderr, "Wrong parameter: allowed operations are 'add', 'sub', 'mul'");
  return EXIT_FAILURE;
}

/**
 * @brief Checks if string contains ONLY digits
 *
 * @param s
 * @return int
 */
int strOnlyDigits(char *s) {
  while (*s) {
    if (!isdigit(*s)) {
      return 0;
    }

    s++;
  }

  return 1;
}