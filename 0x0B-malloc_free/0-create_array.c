#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: char
 * Return: char pointer to malloc o NULL if error
 */

char *create_array(unsigned int size, char c)
{
char *p = NULL;
unsigned int i = 0;
if (size > 0)
{
	p = malloc(sizeof(char) * size);
	if (!p)
	{
		return (p);
	}
	for (i = 0; i <= size; i++)
	{
		p[i] = c;
	}
}
return (p);
}
