#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* print_numbers - print number, followed by a line
* @separator: tokenize the string
* @n: number of arguments pased to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list prints;
va_start(prints, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(prints, int));
	if (i != (n - 1) && separator != NULL)
	{
		printf("%s", separator);
	}
}
printf("\n");
va_end(prints);
}
