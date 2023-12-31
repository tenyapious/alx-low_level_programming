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
	hash_node_t *node, *temp;
	unsigned long int index;
	char *keyDup, *valueDup;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	keyDup = strdup(key);
	valueDup = strdup(value);
	if (keyDup == NULL || valueDup == NULL)
		return (0);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, keyDup) == 0)
		{
			free(temp->value);
			temp->value = valueDup;
			return (1);
		}
		temp = temp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(keyDup);
		free(valueDup);
		return (0);
	}

	node->key = keyDup;
	node->value = valueDup;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
