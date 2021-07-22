#include "variadic_functions.h"
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
vp_list sum;
int i;
vp_start (sum, n)
for (i = n; i >= 0; i = va_arg(sum, int))
{
	
}
}
