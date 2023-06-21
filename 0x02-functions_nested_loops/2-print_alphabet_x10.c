#include "main2.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
    int i;
    char letter;

    for (i = 0; i < 10; i++)
    {
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            putchar(letter);
        }
        putchar('\n');
    }
}

