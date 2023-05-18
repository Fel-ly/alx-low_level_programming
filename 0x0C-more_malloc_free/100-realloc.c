#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to previously allocated memory
 * @old_size: byte size of allocated space for  ptr
 * @new_size: byte size of the new memory block
 *
 * Return: ptr, or null on the case of failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}

