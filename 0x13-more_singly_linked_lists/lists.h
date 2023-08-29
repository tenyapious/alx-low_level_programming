#ifndef LISTINT_S
#define LISTINT_S
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
#endif

#ifndef PUTCHAR
#define PUTCHAR
int _putchar(char c);
#endif

#ifndef PRINT_LISTINT
#define PRINT_LISTINT
size_t print_listint(const listint_t *h);
#endif

#ifndef LISTINT_LEN
#define LISTINT_LEN
size_t listint_len(const listint_t *h);
#endif

#ifndef ADD_NODEINT
#define ADD_NODEINT
listint_t *add_nodeint(listint_t **head, const int n);
#endif

#ifndef ADD_NODEINT_END
#define ADD_NODEINT_END
listint_t *add_nodeint_end(listint_t **head, const int n);
#endif

#ifndef FREE_LISTINT
#define FREE_LISTINT
void free_listint(listint_t *head);
#endif

#ifndef FREE_LISTINT2
#define FREE_LISTINT2
void free_listint2(listint_t **head);
#endif

#ifndef POP_LISTINT
#define POP_LISTINT
int pop_listint(listint_t **head);
#endif

#ifndef GET_NODEINT_AT_INDEX
#define GET_NODEINT_AT_INDEX
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
#endif
