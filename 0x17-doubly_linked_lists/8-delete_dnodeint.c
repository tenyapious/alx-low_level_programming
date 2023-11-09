#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index of dlistint_t list
 * @head: pointer to first node of list
 * @index: index of node to delete
 *
 * Return: 1 if successful or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *f_pt, *l_pt;

	temp = *head;
	while (temp && index)
	{
		temp = temp->next;
		index--;
	}
	if (temp == NULL || index)
		return (-1);

	f_pt = temp->prev;
	l_pt = temp->next;

	if (temp == *head)
		*head = temp->next;
	else if (temp->next == NULL)
		f_pt->next = NULL;
	else
	{
		f_pt->next = l_pt;
		l_pt->prev = f_pt;
	}
	free(temp);
	temp = NULL;
	f_pt = NULL;
	l_pt = NULL;

	return (1);
}
