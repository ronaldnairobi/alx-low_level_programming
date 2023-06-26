#include "main.h"

/**
 * swap_int - take in two integers and swaps them
 * @author Anisah
 *@a: swaps and stores addresses of b
 *@b: swaps and stores addresses of a
 *Return: always 0
 */

void swap_int(int *a, int *b);
{
int change;
change = *b;
*b = *a;
*a = change;
}
