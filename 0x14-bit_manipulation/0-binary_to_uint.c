#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - convierte vbinario a decimal
 * @b: puntero
 * Return: numero en decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int l = 0;
	int n = 1;

	if (!b)
		return (0);

	for (; b[i] ; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	while (i >= 0)
	{
		if (b[i] == '1')
		{
			l += n;
			n *= 2;
		}
		else if (b[i] == '0')
		{
			n *= 2;
		}
		i--;
	}
	return (l);

}
