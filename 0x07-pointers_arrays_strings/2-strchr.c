#include "holberton.h"
#include <stdio.h>
char*_strchr(char *s, char c)
{
int i;
for (i = 0;s[i] != '\0'; s++) 
{
if (*s == c) 
	return (s);
if (!*s) 
	return NULL;
}
return NULL;
}
