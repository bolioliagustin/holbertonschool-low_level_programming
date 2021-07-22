#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* print_strings - print string, followed by a line
* @separator: tokenize the string
* @n: number of arguments pased to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list prints;
va_start(prints, n);
for (i = 0; i < n; i++)
{
	if (va_arg(prints, char*) == NULL)
	{
		printf("Nil\n");
	}
	else
	{
		printf("%s", va_arg(prints, char*));
	}
	if (i != (n - 1) && separator != NULL)
	{
		printf("%s", separator);
	}
}
printf("\n");
va_end(prints);
}
