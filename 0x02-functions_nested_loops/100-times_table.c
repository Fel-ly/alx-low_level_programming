#include "main.h"

/**
 * print_times_table - Prints n times table, starting with 0
 *
 * @n: integer from which times table is being created
 *
 * Return: value 0
 */

void print_times_table(int n)
{
	int a;
	int b;
	int result;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		for (b = 1; b <= n; b++)
		{
			result = a * b;
			if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result >= 10 && result < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + result / 100);
				_putchar('0' + (result % 100) / 10);
				_putchar('0' + result % 10);
			}
		}
		_putchar('\n');
	}
}
