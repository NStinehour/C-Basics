#include <stdio.h>
#include <stdlib.h>

int main() {

    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    while (guess != secretNumber && guessCount < guessLimit) {
        printf("Enter a number: ");
        scanf("%d", &guess);
        guessCount++;
    }

    if (guessCount == guessLimit) {
        printf("Out of guesses. You lose.");
    } else {
        printf("You win!");
    }
    
    return 0;
}