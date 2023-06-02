#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns number of elements in a linked list
 *
 * @h: pointer to list_t
 *
 * Return: number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
