#include <stdio.h>

/**
 * main - prints all single digit numbers
 * of base 10 starting from 0
 *
 * Return: value 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
