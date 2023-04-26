#include <stdio.h>

/**
 * main - computes and prints sum of all multiples
 * of given numbers within a certain range
 *
 * Return : value 0
 */

int main(void)
{

	int i;
	int sum;

	i = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;

		i++;
	}

	printf("%d\n", sum);

	return (0);
}
