#include <stdio.h>
void printBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]); 
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---+---+---\n");
    }
    printf("\n");
}
int checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return 1;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1;
    }
    return 0;
}
int main() {
    char board[3][3];
    char players[2] = {'X', 'O'};
    int currentPlayer = 0;
    int row, col;
    int moves = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
    printf("Welcome to Tic-Tac-Toe!\n");
    while (1) {
        printBoard(board);
        printf("Player %c, enter row and column (e.g., 1 1 for row 1, col 1): ", players[currentPlayer]);
        scanf("%d %d", &row, &col);
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }
        board[row - 1][col - 1] = players[currentPlayer];
        moves++;
        if (checkWin(board, players[currentPlayer])) {
            printBoard(board);
            printf("Player %c wins!\n", players[currentPlayer]);
            break;
        }
        if (moves == 9) {
            printBoard(board);
            printf("It's a draw!\n");
            break;
        }
        currentPlayer = (currentPlayer + 1) % 2;
    }
    return 0;
}