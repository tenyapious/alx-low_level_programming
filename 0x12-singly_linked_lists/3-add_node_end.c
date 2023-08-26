#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * create_new_node - create new node
 * @str: element of new node
 *
 * Return: pointer to new node
*/
list_t *create_new_node(const char *str)
{
	int i;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - add node to end of list
 * @head: pointer to head node
 * @str: node member
 *
 * Return: pointer new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	temp = *head;

	if (temp == NULL)
	{
		new_node = create_new_node(str);
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new_node = create_new_node(str);

		temp->next = new_node;
	}

	return (new_node);
}
