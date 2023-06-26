#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result == 0)
				result = s[i] - '0';
			else
				result = result * 10 + (s[i] - '0');
		}
		else if (result != 0)
		{
			break;
		}
		i++;
	}

	return (result * sign);
}

