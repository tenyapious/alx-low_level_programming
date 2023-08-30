#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at an index
 * @head: head of node list
 * @index: index to delete
 *
 * Return: -1 if it fails or 1 if it succeed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *cur_node, *prev_node, *next_node;

	cur_node = *head;
	i = 0;
	while (i != index)
	{
		if (cur_node == NULL)
			return (-1);

		prev_node = cur_node;
		cur_node = cur_node->next;
		i++;
	}

	if (cur_node == NULL)
		return (-1);

	next_node = cur_node->next;

	if (index == 0)
		*head = next_node;
	else
		prev_node->next = next_node;

	free(cur_node);

	return (1);
}
