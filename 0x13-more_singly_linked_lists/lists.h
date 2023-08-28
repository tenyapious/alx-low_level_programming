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
