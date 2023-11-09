#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node of a dlistint_t list
 * @head: pointer to first node of list
 * @index: index of node
 *
 * Return: node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp)
			temp = temp->next;
		else
			return (NULL);
	}

	return (temp);
}
