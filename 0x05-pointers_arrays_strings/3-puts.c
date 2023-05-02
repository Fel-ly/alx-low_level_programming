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

	while (*str != '\0')
	{
		c = *str;
		_putchar(*str++);
	}

	_putchar('\n');

}
