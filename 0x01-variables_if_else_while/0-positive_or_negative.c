#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program assigns a random number to the variable n each time it is executed.
 * It then prints whether the number stored in the variable n is positive, negative, or zero.
 *
 * Return: 0 on success
 */
int main(void)
{
    srand(time(0));  /* Seed the random number generator */

    int n = rand() % RAND_MAX;  /* Generate a random number and store it in n */

    printf("The number %d is ", n);  /* Output the initial message */

    if (n > 0)
    {
        printf("positive");  /* Output "positive" if n is greater than 0 */
    }
    else if (n < 0)
    {
        printf("negative");  /* Output "negative" if n is less than 0 */
    }
    else
    {
        printf("zero");  /* Output "zero" if n is equal to 0 */
    }

    printf("\n");  /* Insert a new line */

    return 0;  /* Return 0 to indicate successful program execution */
}

