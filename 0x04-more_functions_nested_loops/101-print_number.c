#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 * Return: always 0
 */
void print_number(int i)
{
if (i < 0)
{
putchar('-');
i = -i;
}

if (i / 10)
{
print_number(i / 10);
}
{
putchar((i % 10) + '0');
}
}
