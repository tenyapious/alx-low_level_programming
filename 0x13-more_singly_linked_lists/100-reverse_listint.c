#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse a link list
 * @head: head of link list
 *
 * Return: head of link list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *temp;

	if (*head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	next_node = (*head)->next;
	temp = next_node->next;

	(*head)->next = NULL;
	next_node->next = *head;
	*head = next_node;

	while (temp != NULL)
	{
		next_node = temp;
		temp = next_node->next;
		next_node->next = *head;
		*head = next_node;
		next_node = NULL;
	}

	return (*head);
}
