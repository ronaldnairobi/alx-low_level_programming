#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints exters of a string
 * @str: used string reference
 * Return: 0
 */

void puts2(char *str)
{
int z = 0;
while (str[z] != '\0')
{
if (z % 2 == 0)
{
putchar(str[z]);
}
z++;
}
putchar('\n');
}
