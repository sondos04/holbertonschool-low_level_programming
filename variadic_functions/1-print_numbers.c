#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers- print numbers sperated by char
 *@separator: pinter char
 *@n: number of args
 *@...: the number should sum
 *
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
unsigned int num;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
num = va_arg(args, unsigned int);
printf("%d", num);

if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
