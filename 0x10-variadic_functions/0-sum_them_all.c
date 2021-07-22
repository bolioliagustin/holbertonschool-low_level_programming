#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - tertun the sum of all parameters
* @n: arguments passed to the function
*Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list sum;
unsigned int i;
int j = 0;
va_start(sum, n);
for (i = 0; i < n; i++)
{
	j += va_arg(sum, int);
	va_end(sum);
}
return (j);
}
