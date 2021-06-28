#include "holberton.h"
/**
 * _strlen - Returns the length of a string.
 * @s: string
 * Return: integer a
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
{
	a++;
}
	return (a);
}
