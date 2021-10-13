#include <stdio.h>
#include <string.h>

int main() {
  /* your code */
  char normalWord[50];
  int i, j;
  scanf("%s", &normalWord);

  j = 0;
  for (i = strlen(normalWord); i >= 0; i--) {
    printf("%c", normalWord[i]);

    if (i == 0) {
      printf("\n");
    }
  }

  return 0;
}