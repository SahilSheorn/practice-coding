#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYERS 4
#define BOARD_SIZE 40
#define WINNING_POSITION 39

// Function to roll the dice
int rollDice() {
    return (rand() % 6) + 1;
}

// Function to move a player's piece
int movePiece(int currentPosition, int steps) {
    int newPosition = currentPosition + steps;
    if (newPosition > BOARD_SIZE) {
        newPosition = BOARD_SIZE - (newPosition - BOARD_SIZE);
    }
    return newPosition;
}

int main() {
    srand(time(0)); // Seed the random number generator

    // Define player positions and their symbols
    int playerPositions[PLAYERS] = {0};
    char playerSymbols[PLAYERS] = {'A', 'B', 'C', 'D'};
    
    int currentPlayer = 0; // Player 0 starts the game

    printf("Welcome to Ludo!\n");

    while (1) {
        // Print the current state of the board
        printf("\nBoard:\n");
        for (int i = 0; i < BOARD_SIZE; i++) {
            char cellSymbol = ' ';
            for (int j = 0; j < PLAYERS; j++) {
                if (playerPositions[j] == i) {
                    cellSymbol = playerSymbols[j];
                }
            }
            printf("%c ", cellSymbol);
        }
        printf("\n");

        // Roll the dice for the current player
        printf("\nPlayer %c, press Enter to roll the dice: ", playerSymbols[currentPlayer]);
        getchar(); // Wait for Enter key
        int diceRoll = rollDice();
        printf("You rolled: %d\n", diceRoll);

        // Move the player's piece
        playerPositions[currentPlayer] = movePiece(playerPositions[currentPlayer], diceRoll);

        // Check if the player wins
        if (playerPositions[currentPlayer] == WINNING_POSITION) {
            printf("\nPlayer %c wins!\n", playerSymbols[currentPlayer]);
            break;
        }

        // Switch to the next player
        currentPlayer = (currentPlayer + 1) % PLAYERS;
    }

    return 0;
}
