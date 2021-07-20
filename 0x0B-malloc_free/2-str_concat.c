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
if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
	;
for (i = 0; s2[j] != '\0'; j++)
	;
p = malloc((i + j) + 1);
if (p == NULL)
{
	return(NULL);
}
else
{
	if (i)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			p[i] = s1[i];
		}
	}
	if (j)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			p[i + j] = s2[j];
		}
	}
	p[i + j] = 0;
}
return (p);
}
