#include "main.h"

/**
*get_bit - returns the value of a bit at a given index
*@n: the number
*@index: the index to return the value
*Return: the value of a bit in index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;

	if (n > 0 && index < 64)
	{
		i = (n >> index) & 1;
	return (i);
	}
	else
	{
		return (-1);
	}
}
