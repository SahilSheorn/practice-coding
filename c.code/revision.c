#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    const int maxAttempts = 5;

    // Initialize the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    printf("Welcome to Guess the Number game!\n");
    printf("Try to guess the secret number between 1 and 100.\n");

    while (attempts < maxAttempts) {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);

        // Check if the guess is correct
        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number: %d\n", secretNumber);
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

        attempts++;
    }

    if (attempts == maxAttempts) {
        printf("Sorry, you've used all your attempts. The secret number was: %d\n", secretNumber);
    }

    return 0;
}
