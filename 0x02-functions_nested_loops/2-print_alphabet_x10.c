#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
putchar('a' + j);
}
putchar('\n');
}
}

