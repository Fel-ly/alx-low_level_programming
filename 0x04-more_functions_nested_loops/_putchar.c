#include "main.h"
#include <unistd.h>

/**
 * putchar - writes the character c to stdout
 * @c: character to be printed
 *
 * Return: value 1 unless there is an error, where -1 is returned
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
