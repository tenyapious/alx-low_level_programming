#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    new_node->next = *head;
    new_node->prev = NULL;

    if (*head)
    {
        (*head)->prev = new_node;
        printf("%d\n", (*head)->n);
    }
    *head = new_node;
    return (new_node);
}

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    printf("%d--\n", head->n);
/*    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024); */
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
