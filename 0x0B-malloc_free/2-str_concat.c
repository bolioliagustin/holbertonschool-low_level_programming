#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer of concat string
 */
char *str_concat(char *s1, char *s2)
{
char *p = NULL;
int i, j;
for (i = 0; s1[i]; i++)
	;
for (i = 0; s2[j]; j++)
	;
p = malloc(i + j);
if (p)
{
	if (i)
	{
		for (i = 0; s1[i]; i++)
		{
			p[i] = s1[i];
		}
	}
	if (j)
	{
		for (j = 0; s2[j]; j++)
		{
			p[i + j] = s2[j];
		}
	}
	p[i + j] = 0;
}
return (p);
}

