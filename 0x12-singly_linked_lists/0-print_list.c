#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements in a linked list
 * @h: head of linked list
 *
 * Return: length of linked list
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	printf("[%d] %s\n", h->len, h->str);

	return (++i);
}
