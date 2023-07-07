#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - calculate length of string
 * @s: string to count
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
