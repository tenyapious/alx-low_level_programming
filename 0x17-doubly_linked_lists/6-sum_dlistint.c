#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum all the data (n) of a dlintint_t list
 * @head: pointer to first element of list
 *
 * Return: sum of all the data (n)
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
