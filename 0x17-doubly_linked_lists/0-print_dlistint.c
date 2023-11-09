#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print elements of a dlistint_t list
 * @h: pointer to first node of the list
 *
 * Return: number of element of the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t n = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		n++;
		temp = temp->next;
	}

	return (n);
}
