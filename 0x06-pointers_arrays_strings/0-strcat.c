#include "holberton.h"

/**
* _strcat - Concatenates the string pointed to by @src,
*          null byte, to the end of the string pointed to by @dest.
* @dest: A pointer to the string to be concatenated upon.
* @src: The source string to be appended to @dest.
*
* Return: A pointer to the destination string @dest.
*/

char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; *(dest + i) != '\0'; i++)

dest[i] = ' ';

for (j = 0; *(src + j) != '\0'; j++)
{
	*(dest + i) = *(src + j);
	i++;
}

return (dest);
}
