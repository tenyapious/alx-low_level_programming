#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum n value of nodes in a linked list
 * @head: head of linked list
 *
 * Return: sum of n values
*/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
