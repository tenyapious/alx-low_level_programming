#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - remove linked list head
 * @head: head of linked list
 *
 * Return: value of head
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
