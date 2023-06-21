#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    printf("%d", r);
    r = _isalpha('o');
    printf("%d", r);
    r = _isalpha(108);
    printf("%d", r);
    r = _isalpha(';');
    printf("%d", r);
    printf("\n");

    return 0;
}

