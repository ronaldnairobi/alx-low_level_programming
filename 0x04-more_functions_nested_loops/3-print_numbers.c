#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: the character to be written
 *
 * Return: on success, the character written; on error, -1
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        _putchar(i + '0');
    }
    _putchar('\n');
}
