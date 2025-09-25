#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0;
unsigned int count;
va_list args;

if (n == 0)
return (0);

va_start(args, n);
for (count = 0; count < n; count++)
{
sum += va_arg(args, const unsigned int);
}
va_end(args);
return (sum);
}
