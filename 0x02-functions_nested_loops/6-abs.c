#include "holberton.h"
/**
*_abs - compute the absolute value of an integer
* @n: int type number
* Return: absolute value of @n
*/
int _abs(int a)
{
if (a < 1)
{
return (a * -1);
}
else
{
return (a);
}
}
