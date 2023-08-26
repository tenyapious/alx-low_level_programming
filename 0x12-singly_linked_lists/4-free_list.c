#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free mem allocation for linked list
 * @head: head of linked list
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		while (head->next != NULL)
		{
			temp = head->next;
			free(head->str);
			free(head);
			head = temp;
		}
		free(head->str);
		free(head);
		head = NULL;
	}
}
