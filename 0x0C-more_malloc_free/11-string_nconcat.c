#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: string 1.
 * @s2: string 2.
 * @n: The maximum number of bytes of s2 to concatenate a s1
 *
 * Return: NULL fail, else pointer to malloc memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k;
char *p = NULL;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s1 = "";

for (i = 0; s1[i] != '\0'; i++)
{}
for (j = 0; s2[j] != '\0'; j++)
{}
if (j > n)
{
j = n;
}

p = malloc(sizeof(char) * (i + j + 1));
if (!p)
{
return (NULL);
}
for (k = 0; k < i; k++)
{
p[k] = s1[k];
}
for (k = 0; k < j; k++)
{
p[k + i] = s2[k];
}
p[i + j] = '\0';
return (p);
}
