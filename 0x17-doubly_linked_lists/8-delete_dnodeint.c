#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *f_pt, *l_pt;
	unsigned int i;

	temp = *head;
	for (i = 0; i < index; i++)
	{
		if (temp)
			temp = temp->next;
		else
			return (-1);
	}

	f_pt = temp->prev;
	l_pt = temp->next;

	if (f_pt == NULL && l_pt == NULL)
		*head = NULL;
	else if (f_pt == NULL)
	{
		l_pt->prev = NULL;
		*head = l_pt;
	}
	else if (l_pt == NULL)
		f_pt->next = NULL;
	free(temp);	


	return (1);
}
