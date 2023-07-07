#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - return value of x raised to power of y
 * @x: value to multiply
 * @y: times to multiply
 * Return: value multiplied n times
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
