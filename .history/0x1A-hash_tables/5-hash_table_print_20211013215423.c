#include "hash_tables.h"

/**
 *hash_table_print - print the hash table
 *@ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned int x;
	hash_node_t *temp;

	i = 0;
	x = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];

		while (temp)
		{
			if (x == 1)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			x = 1;
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
