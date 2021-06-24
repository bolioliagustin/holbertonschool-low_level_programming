#include "holberton.h"

/**
*_isdigit - Entry point
*@c:charater
*Return: if is digit or return 1 else 0
*/
int _isdigit(int c)
{
if (c > 47 && c < 58)
	return (1);
else
	return (0);
}
