#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - count the number of elements in a dlistint_t list
 * @h: pointer to the first element of the list
 *
 * Return: the number of element in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t n = 0;

	while (temp)
	{
		n++;
		temp = temp->next;
	}

	return (n);
}
