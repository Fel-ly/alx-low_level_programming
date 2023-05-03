#include "main.h"

/**
 * _atoi - converts a string to integer
 *
 * @s: string to be converted
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1, a = 0;

	while (s[a] != '\0' &&  (s[a] < '0' || s[a] > '9'))
	{
		if (s[a]  == '-')
			sign *= -1;
		a++;
	}
	while (s[a] && (s[a] >= '0' && s[a] <= '9'))
	{
		result = result * 10 + (s[a] - '0');
		a++;
	}

	return (result * sign);
}
