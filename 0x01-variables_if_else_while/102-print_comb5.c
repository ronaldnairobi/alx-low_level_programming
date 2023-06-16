#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * separated by a space, with numbers ranging from 0 to 99.
 * Numbers are printed with two digits, and combinations are separated by
 * comma, followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int first = 0;
    int second = 0;

    while (first < 100)
    {
        second = 0;
        while (second < 100)
        {
            if (first < second)
            {
                putchar((first / 10) + '0');
                putchar((first % 10) + '0');
                putchar(' ');
                putchar((second / 10) + '0');
                putchar((second % 10) + '0');

                if (first != 98 || second != 99)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
            second++;
        }
        first++;
    }

    putchar('\n');

    return 0;
}

