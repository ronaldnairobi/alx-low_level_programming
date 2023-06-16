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
	int n;
	int lastDigit;

	srand(time(0)); /* Seed the random number generator with current time */

	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}

	return 0;
}

