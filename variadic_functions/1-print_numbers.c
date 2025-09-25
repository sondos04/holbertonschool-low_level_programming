#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
int num;
char c;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
num = va_arg(args, unsigned int);
printf("%d", num);

if (separator != NULL && i != (n-1))
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
