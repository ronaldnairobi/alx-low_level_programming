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
	putchar(',');
	putchar(' ');
	putchar('0');
	putchar('1');

	for (int first = 0; first < 9; first++)
	{
		for (int second = first + 1; second < 10; second++)
		{
			putchar(',');
			putchar(' ');
			putchar('0' + first);
			putchar('0' + second);
		}
	}

	putchar('\n');

	return (0);
}

