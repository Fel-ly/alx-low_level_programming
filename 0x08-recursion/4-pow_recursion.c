#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: integer to be raised to power of y
 * @y: power to be raised to
 *
 * Return: value of x power y
 */

int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	result = x * _pow_recursion(x, y - 1);

	return (result);
}
