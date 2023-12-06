#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: Pointer to the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *h, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		h = ht->array[i];
		while (h)
		{
			temp = h;
			h = h->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
