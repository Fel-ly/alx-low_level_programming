#include <stdio.h>

/**
 * main - Finds and prints sum of even-valued terms
 *
 * Return: value 0
 */

int main(void)
{
	int fib1 = 1. fib2 = 2, sum = 0, temp;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}

		temp = fib2;
		fib2 += fib1;
		fib1 = temp;
	}

	printf("%d\n", sum);

	return (0);
}
