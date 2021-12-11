/**
 * @file 7-1-8-6-file-operations-1.c
 * @author your name (you@domain.com)
 * @brief Scenario
Scenario
Write a program that will copy a file. However, if there is a destination file,
 then the program should try to create a new file (with a new file name) until the moment a destination file has been created.

Remember to close both files.

Note: in a real program, it's important to check whether all the files needed
actually exist and that you can create a copy. In our program, you should at least check that both files have been successfully opened.

If the fopen function for the source file fails, then the program should print
 the message Error opening file. and end the program. If the process of creating
 a file fails, then you should change the name of the destination file.

You can append an integer number to the old file name.

Think about a limit on the number of attempts to create a file (it depends on
 your operating system and, of course, on the specific needs of your program).
  If you create too many files, it could be hard to use a directory that contains these files.

If your program has reached this limit, then it should print the message:
 File count limit reached. and end the program.

Expected output
Copy of the source file with the new file name.
 * @version 0.1
 * @date 2021-12-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main()
{
	/* your code */
	return 0;
}