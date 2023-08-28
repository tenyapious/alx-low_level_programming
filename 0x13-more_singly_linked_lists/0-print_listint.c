#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
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
