#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* *str_concat - concatena un array
* @s1: array
* @s2: array
*
*Return: Always 0.
*/
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{}

	for (j = 0; s2[j] != '\0'; j++)
	{}

	p = malloc((sizeof(*s1) * i) + (sizeof(*s2) * j + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (k = 0,l = 0; k < (i + j + 1); k++)
	{
		if (k < i)
		{
			p[k] = s1[k];
		}
		else
		{
			p[k] = s2[l++];
		}
	}
	return (p);
}
