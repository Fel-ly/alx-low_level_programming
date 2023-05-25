#include "variadic_functions.h"

/**
 * prints_numbers - prints numbers, followedby a new line
 *
 * @n: number of integers passed to the function
 * @separator: string to be printed btn numbers
 *
 * Return: value 0
 */

void print_numbers(const char *separator, const unsigned int n, ...);
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n-1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
