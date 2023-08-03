#include "main.h"

/**
 * get_endianness - checks endianness of  value
 *
 * Return: 0 if big endianness, 1 if little endianness
 */
int get_endianness(void)
{
	int a;
	
	a = 1;
	if (*(char *)&a == 1)
		return (1);
	else
		return (0);
}
