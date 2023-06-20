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
 * print_alphabet_x10 - Prints the lowercase alphabet ten times followed by a new line
 */
void print_alphabet(void)
{
    int i;
    char letter;

    for (i = 0; i < 10; i++)
    {
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);
        }
    }

    _putchar('\n');
}

/* Implement the _putchar function */
int _putchar(char c)
{
    return _putchar(c);
}

