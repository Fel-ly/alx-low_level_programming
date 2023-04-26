#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number whose sign is being printed
 * Return: value 1 if n is greater than 0
 * 0 if n is zaro and
 * -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}