#include "main.h"

/**
 * main - prints all arguments received
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: int value
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
