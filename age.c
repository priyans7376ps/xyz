#include <stdio.h>

int main() {
    int low = 1, high = 100, guess;
    char reply;

    printf("Think of your age (between 1 and 100) and I will try to guess it!\n");
    printf("Replyed with:\n");
    printf("'l' if my guess is too low\n");
    printf("'h' if my guess is too high\n");
    printf("'c' if my guess is correct\n");

    while (low <= high) {
        guess = (low + high) / 2;
        printf("Is your age %d? (l/h/c): ", guess);
        scanf(" %c", &reply);

        if (reply == 'l') {
            low = guess + 1;
        } else if (reply == 'h') {
            high = guess - 1;
        } else if (reply == 'c') {
            printf("Yay! I guessed your age: %d\n", guess);
            break;
        } else {
            printf("Invalid input. Please enter l, h, or c.\n");
        }
    }

    if (low > high) {
        printf("Oops! It seems something went wrong.\n");
    }

    return 0;
}