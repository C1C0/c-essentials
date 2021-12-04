/**
 * @file 6-1-7-6-function-parameters2.c
 * @author your name (you@domain.com)
 * @brief Scenario
Write a function that checks whether or not a given string is a valid IP address (in human-readable form, of course). This function should return 1 if the address is valid, and 0 if not.

Your function should check if:

there are four parts in the string, separated by dots;
each part contains only digits,
each number is in the range of 0 to 255, inclusive.
For converting string fragments to integer values you can use the strtol, atoi or sscanf functions. Separate the declaration of the function from its full definition.

Write a second function that calls the first one and then prints an appropriate message: 127.0.0.1 is a valid IP address or a.b.c.d is not a valid IP address.

Write a test code to test the function with some values - call a second function. Do not limit yourself only to those values we've provided you.

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

/* your code */

int main()
{
	/* your code */
	return 0;
}
/* your code */