#include <stdio.h>

/**
 * @brief Scenario
Write a program that creates the first names and last names of four people and
then prints them. Create the appropriate structure.

Then create one variable for each person, initialize their values with a
constant value (from the code - don't interact with the user this time).

Finally, print each of them on a separate line.

Your version of the program must print the same result as the expected output.

Expected output
Mary Smith
James Johnson
Patricia Williams
John Brown
 *
 */
int main() {

  struct PERSON {
    char *firstName;
    char *lastName;
  };

  struct PERSON ms = {"Mary", "Smith"};
  struct PERSON jj = {"James", "Johnson"};
  struct PERSON pw = {"Patricia", "Williams"};
  struct PERSON jb = {"John", "Brown"};

  printf("%s %s\n", ms.firstName, ms.lastName);
  printf("%s %s\n", jj.firstName, jj.lastName);
  printf("%s %s\n", pw.firstName, pw.lastName);
  printf("%s %s\n", jb.firstName, jb.lastName);

  return 0;
}