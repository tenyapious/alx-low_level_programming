#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * create_new_node - create a new node for linked list
 * @n: value of the new node
 *
 * Return: the new node
*/
listint_t *create_new_node(const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_nodeint_end - add node to end of a linked list
 * @head: head of the linked list
 * @n: value of new node
 *
 * Return: address of new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	temp = *head;

	if (temp == NULL)
	{
		new_node = create_new_node(n);
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	new_node = create_new_node(n);
	temp->next = new_node;

	return (new_node);
}
