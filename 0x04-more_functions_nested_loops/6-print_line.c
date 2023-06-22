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
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character '_' should be printed
 */
void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }

    _putchar('\n');
}
