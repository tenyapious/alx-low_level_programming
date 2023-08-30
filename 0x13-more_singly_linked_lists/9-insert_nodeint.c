#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at an index
 * @head: head of a linked list
 * @idx: index of linked list
 * @n: value of new node
 *
 * Return: address on new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *cur_node, *prev_node, *new_node;

	cur_node = *head;
	i = 0;
	while (i != idx)
	{
		if (cur_node == NULL)
			return (NULL);

		prev_node = cur_node;
		cur_node = cur_node->next;

		i++;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = cur_node;

	if (idx == 0)
		*head = new_node;
	else
		prev_node->next = new_node;

	return (new_node);
}
