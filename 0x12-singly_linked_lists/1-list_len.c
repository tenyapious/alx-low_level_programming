#include <stdio.h>
#include "lists.h"

/**
 * list_len - print length of a linked list
 * @h: head of linked list
 *
 * Return: length of linked list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}

	return (++i);
}
