#include <stdio.h>

/**
 * main - prints all base 16 numbers in lowercase
 *
 * Return: value 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
	}
	for (a = 0; a < 6; a++)
	{
		putchar('i' + a);
	}

	putchar('\n');

	return (0);
}
