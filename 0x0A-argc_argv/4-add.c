#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive number
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return:int value
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);


	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}

