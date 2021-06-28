 #include "holberton.h"
/**
* _puts - Prints a string followed by a new line
* @str: string to print
* Return: a
*/

void _puts(char *str)
{

	int a, q;
	a = 0;

	while (str[a] != '\0')

	{
 		a++;
	}
	for(q = a;q >= 0; q--)
	{
		_putchar(q);
	}
	_putchar('\n');
}

