#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	putchar('0');
	putchar('0');
	putchar('0');
	putchar(',');
	putchar(' ');
	putchar('0');
	putchar('0');
	putchar('1');

	for (int first = 0; first < 8; first++)
	{
		for (int second = first + 1; second < 9; second++)
		{
			for (int third = second + 1; third < 10; third++)
			{
				putchar(',');
				putchar(' ');
				putchar('0' + first);
				putchar('0' + second);
				putchar('0' + third);
			}
		}
	}

	putchar('\n');

	return (0);
}

