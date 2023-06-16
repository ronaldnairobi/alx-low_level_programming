#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed the random number generator with the current time

    int n = rand();  // Generate a random number and assign it to variable n

    printf("The number is %d\n", n);

    if (n > 0) {
        printf("is positive\n");
    } else if (n < 0) {
        printf("is negative\n");
    } else {
        printf("is zero\n");
    }

    printf("\n");

    return 0;
}

