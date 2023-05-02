#include "main.h"

/**
 * swap_int - swapa the values of two integers
 *
 * @a: integer to be swapped with b
 * @b: integer to be swapped with a
 *
 * Return: value 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
