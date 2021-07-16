#include "holberton.h"
#include <stdlib.h>
/**
  * _calloc -  allocates memory for an array, using malloc
  * @nmemb: elements of size
  * @size: size
  * Return: a pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int j;

if (nmemb == 0 || size == 0)
	return (NULL);
p = malloc(size * nmemb);
if (!p)
	return (NULL);
for (j = 0; j < size * nmemb; j++)
{
	p[j] = 0;
}
return (p);
}
