/**
 * main - Entry point of the program
 *
 * Description: This program assigns a random number to the variable n and
 *              prints whether the number is positive, negative, or zero.
 *
 * Return: 0 (Success)
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0)); /* Seed the random number generator with the current time */

    /* Generate a random number in the range of -100 to 100 */
    n = rand() - RAND_MAX / 2;

    printf("%d\n", n);

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n < 0)
    {
        printf("is negative\n");
    }
    else
    {
        printf("is zero\n");
    }

    printf("\n");

    return 0;
}

