#include "main.h"

/**
 * int _isalpha - Checks if character is alphabetic
 * @c: letter being checked
 * Return: 1 if c is a letter and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
