#include "holberton.h"
/**
* _abs - Generate absolute of a number
* @a: The number to be cheked
* Return: absolute value for input number
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
