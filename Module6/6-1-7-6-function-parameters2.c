/**
 * @file 6-1-7-6-function-parameters2.c
 * @author your name (you@domain.com)
 * @brief Scenario
Write a function that checks whether or not a given string is a valid IP address
(in human-readable form, of course).
This function should return 1 if the address is valid, and 0 if not.

Your function should check if:

there are four parts in the string, separated by dots;
each part contains only digits,
each number is in the range of 0 to 255, inclusive.
For converting string fragments to integer values you can use the strtol, atoi
or sscanf functions. Separate the declaration of the function from its full
definition.

Write a second function that calls the first one and then prints an appropriate
message: 127.0.0.1 is a valid IP address or a.b.c.d is not a valid IP address.

Write a test code to test the function with some values - call a second
function. Do not limit yourself only to those values we've provided you.

Expected output
127.0.0.1 is a valid IP address
127.0.01 is not a valid IP address
127.0..1 is not a valid IP address
127.zero.0.1 is not a valid IP address
127.297.0.1 is not a valid IP address
127.2555.0.1 is not a valid IP address
 * @version 0.1
 * @date 2021-12-04
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int checkIP(char *ip);
int strOnlyDigits(char *s);
void testIp(char testingValues[][16], int arrSize);

int main() {
  int nOfElements = 9;
  char testingValues[][16] = {"127.0.0.1",    "127.0.01",       "127.0..1",
                              "127.zero.0.1", "127.297.0.1",    "127.2555.0.1",
                              "192.168.2.5",  "168.154.523.16", "abc.123.4568"};

  testIp(testingValues, nOfElements);
  return 0;
}

/**
 * @brief Checks the IP address
 * 
 * @param ip 
 * @return int 0 if invalid, 1 if valid 
 */
int checkIP(char *ip) {
  char fragment[4] = "";
  char i = 0, dotsCounted = 0;
  int fragmentNum = 0;

  while (*ip) {

    if (*ip == '\n') {
      ip++;
      continue;
    }

    fragment[i++] = *(ip++);

    // check fragment valuen
    if (*ip == '.' || i > 2) {

      if (*ip == '.') {
        dotsCounted++;
      }

      // convert fragment to num
      if (strOnlyDigits(fragment)) {
        fragmentNum = strtol(fragment, NULL, 10);
      } else {
        return 0;
      }

      if (fragmentNum < 0 || fragmentNum > 255) {
        return 0;
      }

      // reset index if more than 3 chars passed
      if (i > 2) {
        i = 0;
        memset(fragment, 0, sizeof(fragment));
      }

      ip++;
      continue;
    }
  }

  if (dotsCounted != 3) {
    return 0;
  }

  return 1;
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

/**
 * @brief Tets the values
 * 
 * @param testingValues 
 * @param arrSize 
 */
void testIp(char testingValues[][16], int arrSize) {
  for (int i = 0; i < arrSize; i++) {
    if (checkIP(testingValues[i])) {
      printf("%s is valid IP add\n", testingValues[i]);
      continue;
    }

    printf("%s is not valid IP address.\n", testingValues[i]);
  }
}