#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 *
 * Return: the hash table or none if an error occurs
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table) * size);
	if (hash_table == NULL)
		return (NULL);

	return (hash_table);
}
