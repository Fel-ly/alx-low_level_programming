#include <unistd.h>

/**
 * _putchar - prints _putchar
 *
 * Return: value 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
