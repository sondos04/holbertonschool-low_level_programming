#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all- print anything sperated by char
 *@format: classif the types of args
 *@...: the strings
 *
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char *separator = "";

va_start(args, format);

while (format != NULL && format[i] != '\0')
{
if (format[i] == 'c')
{
printf("%s%c", separator, va_arg(args, int));
separator = ", ";
}
if (format[i] == 'i')
{
printf("%s%d", separator, va_arg(args, int));
separator = ", ";
}
if (format[i] == 'f')
{
printf("%s%f", separator, va_arg(args, double));
separator = ", ";
}
if (format[i] == 's')
{
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
separator = ", ";
}
i++;
}
va_end(args);
printf("\n");
}
