#include "holberton.h"
/**
 *factorial - return factorial
 *@n: int number
 *Return: factortial number
 */
int factorial(int n)
{
int i;
if (n == 0)
{
	i = 1;
}
else if (n < 0)
{
	return(-1);
}
else
{
	i = n * factorial(n - 1);
}
return (i);
}
