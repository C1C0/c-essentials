#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  /* your code */
  char ipaddress[16], numberOfDots = 0, numberOfCharactersBeforeDot = 0;
  char part1[4], part2[4], part3[4], part4[4];
  int i, j = 0;

  // get the string
  scanf("%s", &ipaddress);
  // strcpy(subbtmi, ipaddress);

  // check number of dots
  for (i = 0; i < sizeof ipaddress; i++) {
    // count, how many numbers there is before dot
    // printf("iteration: %d, character: %d\n", i, ipaddress[i]);

    // if NULL char 0 reached
    if (ipaddress[i] == 0) {
      break;
    }

    // count number of dots
    if (ipaddress[i] == '.') {
      j = 0;
      numberOfDots++;
      numberOfCharactersBeforeDot = 0;
      continue;
    }

    numberOfCharactersBeforeDot++;

    if (numberOfCharactersBeforeDot > 3) {
      printf("Error: not a valid address. - more than 3 numbers");
      return 1;
    }

    // check if is digit
    if (!isdigit(ipaddress[i])) {
      printf("Error: not a valid address. - is not digit");
      return 1;
    }

    // assigning number to the parts based on switch
    switch (numberOfDots) {
    case 0:
      part1[j] = ipaddress[i];
      break;
    case 1:
      part2[j] = ipaddress[i];
      break;
    case 2:
      part3[j] = ipaddress[i];
      break;
    case 3:
      part4[j] = ipaddress[i];
      break;
    default:
      break;
    }
    j++;
  }

  if (numberOfDots != 3) {
    printf("Error: not a valid address.");
    return 1;
  }

  // print parts
  printf("\n\nOUTPUT:\n\n");

  printf("\nLast 3 parts:");
  for (i = 0; i < sizeof part2; i++) {

    // if NULL char 0 reached
    if (!isdigit(part2[i])) {
      break;
    }
    printf("%c", part2[i]);
  }
  printf(".");

  for (i = 0; i < sizeof part3; i++) {

    // if NULL char 0 reached
    if (!isdigit(part3[i])) {
      break;
    }
    printf("%c", part3[i]);
  }
  printf(".");

  for (i = 0; i < sizeof part4; i++) {
    // if NULL char 0 reached
    if (!isdigit(part4[i])) {
      break;
    }
    printf("%c", part4[i]);
  }

  printf("\nLast 2 parts:");
  for (i = 0; i < sizeof part3; i++) {

    // if NULL char 0 reached
    if (!isdigit(part3[i])) {
      break;
    }
    printf("%c", part3[i]);
  }
  printf(".");

  for (i = 0; i < sizeof part4; i++) {
    // if NULL char 0 reached
    if (!isdigit(part4[i])) {
      break;
    }
    printf("%c", part4[i]);
  }

  printf("\nLast 1 part:");
  for (i = 0; i < sizeof part4; i++) {
    // if NULL char 0 reached
    if (!isdigit(part4[i])) {
      break;
    }
    printf("%c", part4[i]);
  }

  // // check every fourth character, if it's a dot
  // for (int i = 1; i <= sizeof ipaddress; i++) {
  //   if (i % 4 == 0 && i < 14) {
  //     if (ipaddress[i - 1] != '.') {
  //       printf("Error: not a valid address.");
  //       return 1;
  //     }
  //   }
  // }

  // scanf("%d");
  return 0;
}