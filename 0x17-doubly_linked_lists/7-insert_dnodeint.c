#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the first node of list
 * @idx: position to insert new node
 * @n: value of new node
 *
 * Return: Pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp1, *new_node;

	temp = *h;
	while (temp && idx)
	{
		temp = temp->next;
		idx--;
	}

	if (temp == NULL || idx)
		return (NULL);

	if (temp == *h)
		new_node = add_dnodeint(h, n);
	else if (temp->next == NULL)
	{
		new_node = add_dnodeint_end(h, n);
	}
	else
	{
		temp1 = temp->prev;
		temp1->next = NULL;
		new_node = add_dnodeint_end(h, n);
		new_node->next = temp;
		temp->prev = new_node;
	}

	return (new_node);
}
