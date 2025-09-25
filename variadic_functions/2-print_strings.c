#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings- print strings sperated by char
 *@separator: pinter char
 *@n: number of args
 *@...: the strings
 *
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *word;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
word = va_arg(args, char *);
if (word != NULL)
printf("%s", word);
else
printf("(nil)");

if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
