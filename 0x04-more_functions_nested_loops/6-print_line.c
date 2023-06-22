#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character '_' should be printed
 * Return: always 0
 */

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
putchar('_');
}

putchar('\n');
}
