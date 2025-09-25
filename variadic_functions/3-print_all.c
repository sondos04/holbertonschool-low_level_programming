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
if (format[i] == 'c' || format[i] == 'i' || 
	format[i] == 'f' || format[i] == 's')
{
printf("%s", separator);
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
}
separator = ", ";
}
i++;
}
va_end(args);
printf("\n");
}
