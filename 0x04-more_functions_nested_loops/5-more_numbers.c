#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: 0
 */

void more_numbers(void)
{
	int a, b;

	a = 0;

	while (a < 10)
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

		a++;
	}
}
