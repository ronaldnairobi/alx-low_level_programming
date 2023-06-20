#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
    print_alphabet();
    return 0;
}

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
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

/* Implement the _putchar function */
int _putchar(char c)
{
    return _putchar(c);
}

