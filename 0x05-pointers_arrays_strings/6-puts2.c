#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * @str: string whose characters are to be printed
 *
 * Return: value 0
 */

void puts2(char *str)
{
	int len = 0;
	char c;

	while (str[len] != '\0')
	{
		c = str[len];
		if (len % 2 == 0)
		{
			_putchar(c);
		}
		len++;
	}

	_putchar('\n');
}
