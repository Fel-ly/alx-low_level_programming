#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 * starting from zero
 *
 * Return: value 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
