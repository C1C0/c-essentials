#include <stdio.h>

int main() {
  /* your code */
  char chessBoard[8][8] = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                           {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                           {},
                           {},
                           {},
                           {},
                           {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                           {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};


    for(int r = 0; r < sizeof(chessBoard) / (sizeof(char) * 8); r++){
        for(int c = 0; c < sizeof(chessBoard[r]) / sizeof(char); c++){
            printf("%c", chessBoard[r][c]);
        }

        printf("\n");
    }

  return 0;
}