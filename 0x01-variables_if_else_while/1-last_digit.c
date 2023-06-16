#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	srand(time(0)); /* Seed the random number generator with current time */

	int n = rand() - RAND_MAX / 2;
	int lastDigit = abs(n % 10); /* Get the absolute value of the last digit of n */

	printf("The string Last digit of %d is ", n);

	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is 0\n", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}

	return 0;
}

