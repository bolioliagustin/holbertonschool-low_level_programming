#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* argstostr - Creates a string from the concatenation of all blabla
* @ac: Number of arguments
* @av: The array of arguments
* Return: a pointer to a new string.
*/
char *argstostr(int ac, char **av)
{
	int i, j;
	char *p;
	int l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
			l++;
	}
	p = malloc(sizeof(char) * (l + i + 1));
	if (p)
	{
		l = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; *(*(av + i) + j) != '\0'; j++)
			{
				*(p + l) = *(*(av + i) + j);
				l++;
			}
			*(p + length) = '\n';
			l++;
		}
		*(p + length) = '\0';
		return (p);
	}
	else
	{
		return (NULL);
	}
}
