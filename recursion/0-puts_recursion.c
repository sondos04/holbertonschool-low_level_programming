#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
while (*s != '\0')
{
putchar(*s);
s++;
}
putchar('\n');
}
