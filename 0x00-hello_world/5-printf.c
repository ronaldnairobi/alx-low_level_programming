#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a piece of art with proper grammar,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s", "         ,/|\n");
	printf("%s", "       ,// |\n");
	printf("%s", "     ,//   |\n");
	printf("%s", "   ,//_____\\____\n");
	printf("%s", " ==_____(__6_\\______\n");
	printf("%s", "           \"  \"\n");

	return (0);
}

gcc -Wall 5-printf.c -o program

