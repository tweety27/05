#include <stdio.h>

int main() {
    const int answer = 59;

    int guess;
    int attempts = 0;

    do {
        printf("Guess a number: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < answer) {
            printf("low!\n");
        } else if (guess > answer) {
            printf("high!\n");
        } else {
            printf("Congratulation! trials: %d\n", attempts);
        }
    } while (guess != answer);

    return 0;
}

