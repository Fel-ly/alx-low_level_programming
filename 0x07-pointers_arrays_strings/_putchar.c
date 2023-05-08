#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes character c to standard output
 * @c: character to be printed
 *
 * Return: 1, unless there is an error, where -1
 * is returned and errno is appropriately set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
