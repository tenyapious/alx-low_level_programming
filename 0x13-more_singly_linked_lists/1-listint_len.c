#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - get length of a linked list
 * @h: head of the linked list
 *
 * Return: the length of the linked list.
 */
size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; ; i++)
	{
		if (h->next == NULL)
			break;
		h = h->next;
	}

	return (i);
}
