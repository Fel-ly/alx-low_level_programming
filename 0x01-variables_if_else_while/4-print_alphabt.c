#include <stdio.h>

/**
 * main - Printing in lowercase,
 * exceptional of some characters
 *
 * Return: value 0
 */

int main(void)
{
	int a;
	char alp[24] = "abcdfghijklmnoprstuvwxyz";

	for (a = 0; a < 24; a++)
	{
		putchar(alp[a]);
	}
	putchar('\n');
	return (0);
}
