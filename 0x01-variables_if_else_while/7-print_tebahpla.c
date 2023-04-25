#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: value 0
 */

int main(void)
{

	int a;
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";

	for (a = 0; a < 26; a++)
	{
		putchar(alp[a]);
	}
	putchar('\n');
	return (0);
}
