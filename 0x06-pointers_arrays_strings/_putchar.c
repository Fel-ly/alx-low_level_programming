#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 *
 * Return: Value 1, if successful and _1 if there's an error
 * error number is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
