#include "holberton.h"
/**
* print_last_digit - Entry point
*
* Description: This function prints the last digit of a number
*
* @n: number to get the last digit
*
* Return: the last digit of
**/
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
n = n * (-1);
_putchar(n + '0');
return (n);
}
