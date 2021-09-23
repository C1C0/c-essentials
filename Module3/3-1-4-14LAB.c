#include <stdio.h>

int main() {
  /* your code */
  int rows, i, j;

  scanf("%d", &rows);

  if(rows > 20){
    rows = 20;
  }

  i = 0;
  do {

    j = 0;
    do
    {
      printf("*#");
      j++;
    } while (j <= i);
    

    i++;
    printf("\n");
  } while (i < rows);

  return 0;
}