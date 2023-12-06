#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int start = 1;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp)
			{
				if (start)
				{
					printf("{");
					start = 0;
				}
				else
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);

				temp = temp->next;
			}
		}
		printf("}\n");
	}
}
