#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 *
 * @c: char to be initialized
 * @size: number of bytes
 *
 * Return: pointer to array, null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		array[size] = c;
	}

	return (array);
}
