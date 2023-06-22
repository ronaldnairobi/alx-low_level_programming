#include <stdio.h>

void positive_or_negative(int i)
{
    if (i > 0)
        printf("%d is positive\n", i);
    else if (i < 0)
        printf("%d is negative\n", i);
    else
        printf("%d is zero\n", i);
}

/**
 * main - tests function that prints if integer is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
    int i;

    i = 0;
    positive_or_negative(i);

    return (0);
}
