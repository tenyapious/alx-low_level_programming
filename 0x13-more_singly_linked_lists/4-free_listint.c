#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free mem block of linked list
 * @head: head of linked list
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}

		free(head);
		head = NULL;
	}
}
