#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 *
 * Return: pointer to a newly allocated space or null upon failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j,  len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = NULL;
	if (s2 == NULL)
		s2 = NULL;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (j = 0, i = len1; j <= len2; i++, j++)
		s[i] = s2[j];

	return (s);
}
