#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: integer to be checked
 *
 * Return: value 0
 */

int print_last_digit(int a)
{
	int last_digit;

	last_digit = a % 10;
	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar('0' + last_digit);

	return (last_digit);
}

