#include "msfuncts.h"

// clears any gameboard
void clearGameBoard(char board[8][10]) {
    for (int i = 0; i <= 7; i++) {
        for (int j = 0; j <= 9; j++) {
            board[i][j] = ' ';
        }
    }
}