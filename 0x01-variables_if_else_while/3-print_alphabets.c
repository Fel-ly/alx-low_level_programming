#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - alphabet in lower and upper case
 *
 * Return: value 0
 */

int main(void)
{
	int a;
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (a = 0; a < 52; a++)
	{
		putchar(alp[a]);
	}

	putchar('\n');
	return (0);
}
