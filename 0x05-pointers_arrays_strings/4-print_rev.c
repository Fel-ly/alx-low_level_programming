#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: string to be printed in reverse
 *
 * Return: value 0
 */

void print_rev(char *s)
{
	int len = 0, a = 0;
	char c;

	while (s[len] != '\0')
	{
		len++;
	}

	len = len - 1;
	while (a <= len)
	{
		c = s[len];
		_putchar(c);
		len--;
	}

	_putchar('\n');
}
