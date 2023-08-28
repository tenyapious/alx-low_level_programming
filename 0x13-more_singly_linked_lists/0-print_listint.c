#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print data from linked list
 * @h: head of the linked list
 *
 * Return: the length of the linked list.
 */
size_t print_listint(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; ; i++)
	{
		printf("%d\n", h->n);
		if (h->next == NULL)
			break;
		h = h->next;
	}

	return (i);
}
