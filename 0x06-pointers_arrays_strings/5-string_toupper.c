#include "holberton.h"
/**
 * string_toupper - convert string
 * Description: to uppercase
 * Return: when done
 * @str: the string to convert
 */
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
	if (str[i] > 96 && str[i] < 123)
	{
		str[i] = str[i] - 32;
	}
i++;
}
return (str);
}
