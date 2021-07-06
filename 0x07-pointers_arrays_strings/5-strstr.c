#include "holberton.h"

/**
*  _strstr - locates substring
* Description: Function locates a substring @needle
* in @haystack
* @haystack: Pointer contains a string
* @needle: Pointer contai the substring in @haystack
* Return: A pointer to the beginning of the located substring
* in @accept, or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0;
char *p = NULL;

if (needle[0] != '\0')
	return (p);
	{
		for (; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[j])
			{
				if (j == 0)
				{
					p = haystack + i;
				}
				j++;
				if (needle[j] == 0)
				{
					break;
				}
			}
			else
			{
				j = 0;
				p = NULL;
			}
		}
	}
	return (p);
}
