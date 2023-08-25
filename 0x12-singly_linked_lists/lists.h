#ifndef LIST_S
#define LIST_S
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * *
 *  Description: singly linked list node structure
 **/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
#endif

#ifndef PUTCHAR
#define PUTCHAR
int _putchar(char c);
#endif

#ifndef PRINT_LIST
#define PRINT_LIST
size_t print_list(const list_t *h);
#endif

#ifndef LIST_LEN
#define LIST_LEN
size_t list_len(const list_t *h);
#endif
