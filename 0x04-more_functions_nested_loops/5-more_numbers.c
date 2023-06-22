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
 * more_numbers - prints numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
    int i, j;

    for (j = 0; j < 10; j++)
    {
        for (i = 0; i <= 14; i++)
        {
            if (i > 9)
            {
                _putchar('1');
            }
            _putchar(i % 10 + '0');
        }
        _putchar('\n');
    }
}
