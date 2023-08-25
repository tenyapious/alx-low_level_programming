#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node to beginning of a linked list
 * @head: head of the linked list
 * @str: string to add to node
 *
 * Return: address of new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	new  = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
