#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add new node to beginning of a linked list
 * @head: head of the linked list
 * @n: value of the added node
 *
 * Return: address of the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

