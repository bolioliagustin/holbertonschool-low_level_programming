#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array rang
 *@min: number minimo
 *@max: number maximo
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *a = NULL;
	int i, j, c;

	c = 0;
	if (min > max)
		return (NULL);
	j = (max - min) + 1;
	a = malloc(j * sizeof(int));

	if (!a)
		return (NULL);

	if (a != NULL)
	{
		for (i = min; i <= max; i++)
		{
			a[c] = i;
			c++;
		}
		return (a);
	}
	return (NULL);
}
