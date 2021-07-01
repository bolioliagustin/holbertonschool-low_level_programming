#include "holberton.h"

/**
 * print_rev - print in reverse
<<<<<<< HEAD
 * @s: char string
=======
 * @s: char arra string
>>>>>>> ef0cbbb989a9c74335f0b9d3b6a42fc70bdaa40e
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
