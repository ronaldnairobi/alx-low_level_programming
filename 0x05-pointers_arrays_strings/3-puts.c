#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: pointer to the string
 * Return: string and a new line
 */

void _puts(char *str)
{
int i = 0;

while (str[i])
{
	putchar(str[i]);
	i++;
}
putchar('\n');
}
