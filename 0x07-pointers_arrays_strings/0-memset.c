#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	int a = 0;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
