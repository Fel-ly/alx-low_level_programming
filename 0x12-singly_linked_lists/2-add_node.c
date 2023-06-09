#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node at the beginning of a list
 *
 * @str: string to be duplicated
 * @head: double pointer to list_t
 *
 * Return: address of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
