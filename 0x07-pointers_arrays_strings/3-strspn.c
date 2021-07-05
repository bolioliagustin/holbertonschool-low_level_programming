#include "holberton.h"
/**
* _strspn - search string for set of bytes
* @s: char string array
* @accept: char array to check bytes with
* Return: Number of bytes in the intial segmet
*/

unsigned int _strspn(char *s, char *accept)

{

int i = 0;
int c = 0;
int j;

while (s[i] != '\0')
{
	j = 0;
	while (accept[j] != '\0')
	{
		if (s[i] == accept[j])
		{
			c++;
			break;
		}
		j++;
	}
	if (accept[j] == '\0')
	{
		break;
	}
	i++;
}
return (c);
}
