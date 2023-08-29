#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node at an index
 * @head: head of linkedl ist
 * @index: index of node
 *
 * Return: node at index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;

	i = 0;
	while (i != index)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
		i++;
	}
	return (temp);
}
