#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0 through 9)
 * @c: the character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return 1; /* Digit character */

return 0; /* Not a digit character */
}

