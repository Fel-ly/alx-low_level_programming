#include "main.h"

/**
 * isupper - checks for uppercase letter
 * @c: character being checked
 * Return: 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}