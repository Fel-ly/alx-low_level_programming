#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - insomnia alphabet game
 *
 * Return: value 0
 */

int main(void)
{
	int a;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	a = 0;
for (a < 26)
{
	putchar(alp[a]);
}
putchar('\n');
	return (0);
}
