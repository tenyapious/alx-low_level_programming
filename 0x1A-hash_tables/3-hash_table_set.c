#include "hash_tables.h"

/**
 * hash_table_set - set a value to a hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 if successfull otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **array, *node;
	unsigned long int index;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	if (strlen(key) == 0 || key == NULL)
		return (0);

	k = strcpy(key);

	index = key_index((unsigned char *)key, ht->size);

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
