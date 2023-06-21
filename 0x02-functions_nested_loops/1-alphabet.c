#include "main.h"
#include <stdio.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, returns the character printed.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
    return putchar(c);
}

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
    char letter;
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter);
    }
    _putchar('\n');
}
