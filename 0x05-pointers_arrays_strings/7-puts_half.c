#include "main.h"

/**
 * puts_half - prints half a string, followed by a new line
 *
 * @str: string to be printed - the second half
 *
 * Return: value 0
 */

void puts_half(char *str)
{
	int len = 0, i = 0;
	char c;

	while (str[len] != '\0')
	{
		len++;
	}

	len = len - 1;

	if (len % 2 == 0)
	{
		len = (len / 2) - 1;
		for (i = len; str[i] != '\0'; i++)
		{
			c = str[i];
			_putchar(c);
		}
	}
	else
	{
		len = (len - 1) / 2;
		for (i = len; str[i] != '\0'; i++)
		{
			c = str[i];
			_putchar(c);
		}
	}

	_putchar('\n');
}
