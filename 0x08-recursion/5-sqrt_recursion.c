#include "main.h"

/**
 * _sqrt - finds the natural square root of a number n
 *
 * @n: number to find square root for
 * @i: number to be tested
 *
 * Return: square root of n
 * if n doesn't have a natural square root, return -1
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}

	return (_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - retuns the natural square root of a number
 *
 * @n: number to find square root for
 *
 * Return: square root of n
 * if n doesn't have a natural square root, return -1
 */

int _sqrt_recursion(int n)
{
	int num = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}

	return (_sqrt(n, num));
}
