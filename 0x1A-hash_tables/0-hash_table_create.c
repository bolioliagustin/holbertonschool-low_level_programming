#include "hash_tables.h"

/**
 *hash_table_create - create hash table
 *@size: size of array
 *Return: return the pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}

	hash->size = size;


	for (i = 0; i < size; i++)
		hash->array[i] = NULL;

	return (hash);
}
