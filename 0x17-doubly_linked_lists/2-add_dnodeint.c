#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add new node at beginning of dlinkint_t list
 * @head: pointer to the first node of the list
 * @n: integer for the new node
 *
 * Return: pointer to the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf("fail");
		return (NULL);
	}
	if (*head)
		(*head)->prev = new_node;

	new_node->next = *head;
	new_node->prev = NULL;
	new_node->n = n;
	*head = new_node;

	return (new_node);
}
