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
	hash_node_t *node;
	unsigned long int index;
	char *keyDup, *valueDup;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	keyDup = strdup(key);
	valueDup = strdup(value);

	node->key = keyDup;
	node->value = valueDup;

	if (ht->array[index] == NULL)
	{
		node->next = NULL;
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}
