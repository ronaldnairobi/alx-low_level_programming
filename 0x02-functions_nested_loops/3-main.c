#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	int result = _islower(ch);

	if (result == 1)
		putchar(ch);
	else
		putchar(ch - 32);

	putchar('\n');

	return 0;
}

