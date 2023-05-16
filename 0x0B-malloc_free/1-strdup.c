#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: string given as parameter
 *
 * Return: pointer to newly allocated space in memory
 * or null if str is equal to null
 */

char *_strdup(char *str)
{
	char *s;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
