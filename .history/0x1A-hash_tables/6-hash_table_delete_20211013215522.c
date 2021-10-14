#include "hash_tables.h"

/**
 *hash_table_delete - delete a hash table
 *@ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int c;

	c = 0;

	if (ht == NULL)
		return;

	while (c < ht->size)
	{

		while (ht->array[c] != NULL)
		{
			n = ht->array[c];
			free(n->key);
			free(n->value);
			ht->array[c] = ht->array[c]->next;
			free(n);
		}
		c++;
	}
	free(ht->array);
	free(ht);
}
