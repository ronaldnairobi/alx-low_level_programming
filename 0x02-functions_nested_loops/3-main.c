#include "main.h"

/**
 * test_islower - Test the _islower function.
 */
void test_islower(void)
{
    int r;

    r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);
    putchar(r + '0');
    putchar('\n');
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    test_islower();
    return 0;
}

