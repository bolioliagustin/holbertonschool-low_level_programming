#include "hash_tables.h"

/**
 *hash_table_set - add elements to hash table
 *@ht: element to add
 *@key: key to add
 *@value: value of key thr hash table
 *Return: return 0 on success or 1 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *par;
	hash_node_t *temp;
	unsigned long int i;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[i];


	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	par = malloc(sizeof(hash_node_t));

	if (par == NULL)
		return (0);
	par->key = strdup(key);
	par->value = strdup(value);
	par->next = NULL;

	if (ht->array[i] == NULL)
	{
		ht->array[i] = par;
		return (1);
	}
	temp = ht->array[i];
	par->next = temp;
	ht->array[i] = par;
	return (1);
}
