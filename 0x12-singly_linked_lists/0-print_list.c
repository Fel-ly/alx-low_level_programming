#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list list_t
 *
 * @h: pointer to list_t
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t len;

	len = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		len++;
	}

	return (len);
}