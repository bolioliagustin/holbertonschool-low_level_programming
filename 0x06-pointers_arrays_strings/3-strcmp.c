#include "holberton.h"
#include <stddef.h>
/**
* _strcmp - Compare strings
* Description: This function compare two strings
* @s1: First string to compare
* @s2: Second string to compare
* Return: @n bytes of @src
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;

if (s1 != NULL && s2 != NULL)
{
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
	i++;
	}
}
return (s1[i] - s2[i]);
}
