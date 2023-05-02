#include "main.h"

/**
 * _puts - prints a string, then a new line
 * 
 * @str: string to be printed
 *
 * Return: value 0
 */

void _puts(char *str)
{
	int len = 0;
	char c;

	while (*str++)
	{
		c = str[len];
		_putchar(c);
		len++;
	}

	_putchar('\n');

}
