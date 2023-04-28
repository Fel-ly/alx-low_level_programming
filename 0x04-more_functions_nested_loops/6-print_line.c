#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 -14
 *
 * Return: value 0
 */

void more_numbers(void)
{
	int a, b;

	a = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar('0' + b / 10);
			}
			_putchar('0' + b % 10);


		}

		_putchar('\n');

	}
}
