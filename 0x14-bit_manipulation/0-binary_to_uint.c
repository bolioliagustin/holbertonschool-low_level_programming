#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - convierte de binario a decimal
 * @b: puntero con el numero binario
 * Return: return numero decimal
 */
unsigned int binary_to_uint(const char *b)
{
int decimal = 0, j = 1, i = 0, r, t;

if (!b)
{
	return (0);
}
for (; b[i]; i++)
{
	if (b[i] != '0' && b[i] != '1')
	{
		return (0);
	}
}
t = atoi(b);
while (t > 0)
{
	r = t % 10;
	decimal = decimal + r * j;
	t = t / 10;
	j = j * 2;
}
return (decimal);
}
