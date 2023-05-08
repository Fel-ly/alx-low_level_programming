#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: memory area where n bytes are copied into
 * @src: memory area where n bytes are copied from
 * @n: bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for ( ; a < i ; i++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
