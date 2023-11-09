#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to first node of list
 *
*/
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head->next)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
