#include "holberton.h"
#include <stdlib.h>


void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int j;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}
p = malloc(size * nmemb);
if (!p)
{
	for (j = 0; j < size * nmemb; j++)
{
	p[j] = 0;
}
}
return (p);
}
