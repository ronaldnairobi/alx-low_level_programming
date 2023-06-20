#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
        _putchar(letter);

    _putchar('\n');
}

/**
 * _putchar - Custom putchar function
 * @c: The character to be printed
 *
 * Return: On success, return the character.
 * On error, return -1 and errno is set appropriately.
 */
int _putchar(char c)
{
    return putchar(c);
}

int main(void)
{
    print_alphabet();
    return 0;
}

