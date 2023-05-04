#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: String to which src is to be appended
 * @src: string to be appended to dest
 *
 * @n: bytes to be used
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
