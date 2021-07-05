#include "holberton.h"
#include <stdio.h>
/**
* _strchr - Locates a character in a string.
* @s: The string to be searched.
* @c: The character to be located.
*
* Return: If c is found - a pointer to the first occurence.
*         If c is not found - NULL
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; s++)
{
if (*s == c)
	return (s);
if (!*s)
	return (NULL);
}
return (NULL);
}
