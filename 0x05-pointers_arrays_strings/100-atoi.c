#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int i = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result <= (UINT_MAX / 10))
				result = result * 10 + (s[i] - '0');
			else
				break;
		}
		else
		{
			break;
		}
		i++;
	}

	if (result > (UINT_MAX / 10) && sign == -1)
		return (INT_MIN);
	else if (result > INT_MAX && sign == 1)
		return (INT_MAX);

	return (result * sign);
}

