#include "hash_tables.h"

/**
  * hash_table_get - value associated with a key
  * @ht: hash table  for the key
  * @key: key to for inside the ht
  * Return: value, or NULL if key not found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *b;

	if (ht == NULL || key == NULL)
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);

	if (ht->array[ind] == NULL)
		return (NULL);

	b = ht->array[ind];

	while (b)
	{
		if (strcmp(b->key, key) == 0)
			return (b->value);
		b = b->next;
	}
	return (NULL);
}
