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
	dlistint_t *temp, *tail, *new_node;
	unsigned int i;

	temp = *h;
	for (i = 0; i < idx; i++)
	{
		if (temp)
			temp = temp->next;
		else
			return (NULL);
	}

	tail = temp;
	temp = temp->prev;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tail;
	new_node->prev = temp;
	tail->prev = new_node;
	temp->next = new_node;
	temp = NULL;
	tail = NULL;

	return (new_node);
}
