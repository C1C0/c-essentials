#include <stdio.h>
#include <stdlib.h>

int main() {
  /* your code */
  int requestedAllocatedMemoryB, i;
  char *letters, letter = 'A';

  scanf("%d", &requestedAllocatedMemoryB);

  // check max bytes available
  if (requestedAllocatedMemoryB > 1024 * 1024) {
    printf("Too much memory requested.");
    return 1;
  }

  // allocate needed size
  letters = (char *)malloc(requestedAllocatedMemoryB * sizeof(char));
  if (letters == NULL) {
    printf("Allocation failed – sorry.\n");
    return 1;
  }

  // fill in the array
  for (i = 0; i < requestedAllocatedMemoryB; i++) {
    if (letter > 'Z') {
      letter = 'A';
    }

    letters[i] = letter;

    letter++;
  }

  // print the numbers
  for (i = 0; i < 400; i++) {
    if (i == requestedAllocatedMemoryB) {
      break;
    }

    if (i >= 40 && i % 40 == 0) {
      printf("\n");
    }
    printf("%c", letters[i]);
  }

  return 0;
}