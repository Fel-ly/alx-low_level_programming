#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: string to be reversed
 *
 * Return: value 0
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	len = len - 1;

	while (i <= len)
	{
		tmp = s[len];
		s[len] = s[i];
		s[i] = tmp;
		len--;
		i++;
	}
}
