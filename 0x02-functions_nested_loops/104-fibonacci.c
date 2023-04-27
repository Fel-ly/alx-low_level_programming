#include <stdio.h>

/**
 * main - Prints first 98 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, next;

	printf("%lu, %lu ", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		next = fib1 + fib2;

		if (i != 98)
		{
			printf("%lu, ", next);
			fib1 = fib2;
			fib2 = next;
		}
		else
			printf("%lu\n", next);
	}

	return (0);
}
