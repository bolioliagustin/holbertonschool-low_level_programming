#include "main.h"

/**
 *set_bit - value of a bit to 1 at a given index
 *@n: number
 *@index: the position
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int l;

	if (index > 64)
		return (-1);

	for (l = 1; index > 0; index--, l *= 2)
		;
	*n += l;

	return (1);
}
