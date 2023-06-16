#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * determineSign - Determines if a number is positive, negative, or zero
 * @number: The number to check
 *
 * Return: A string indicating the sign of the number
 */
const char *determineSign(int number)
{
	if (number > 0)
		return "is positive";
	else if (number == 0)
		return "is zero";
	else
		return "is negative";
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	srand(time(0)); /* Seed the random number generator with current time */

	int n = rand() - RAND_MAX / 2;

	printf("The number %d %s\n ", n, determineSign(n));

	return 0;
}

