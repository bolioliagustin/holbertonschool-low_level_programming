#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Array of integers
 * @size: Size of the array
 * @value: Value to search for in the array
 * Return: Index of the value if found, -1 if not found
 **/
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
	return (-1);
for (i = 0; i < size; i++)
{
	printf("Value cheacked array[%lu] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);
}
return (-1);
}
