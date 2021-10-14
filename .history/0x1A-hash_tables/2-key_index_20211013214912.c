#include "hash_tables.h"

/**
 *key_index - return index of the key
 *@key: key/value
 *@size: size of array the hash table
 *Return: return index of the key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
