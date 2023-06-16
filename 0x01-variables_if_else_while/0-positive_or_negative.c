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

    srand(time(NULL)); /* Seed the random number generator with the current time */

    /* Generate a random number and store it in n */
    n = rand() % RAND_MAX;

    printf("The number is %d\n", n);

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

