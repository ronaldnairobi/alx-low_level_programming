#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a specific message to the standard error.
 *              Returns 1 as required.
 *
 * Return: Always 1
 */
int main(void)
{
	/* Message to be printed */
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	/* Using write() to print the message to the standard error */
	write(2, message, 59);

	return (1);
}

