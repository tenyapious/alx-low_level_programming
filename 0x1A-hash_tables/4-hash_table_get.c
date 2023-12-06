#include "hash_tables.h"

/**
 * hash_table_get - get value from hash table
 * @ht: the hash table
 * @key: the key associated with the value
 *
 * Return: The value or NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
