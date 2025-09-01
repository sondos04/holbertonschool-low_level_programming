#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character '_' should be printed
 *
 * Description: If n is 0 or less, the function should only print \n.
 * Return: void
 */
void print_line(int n)
{
int cunt;
if (n > 0)
{
for (cunt = 0; cunt < n ; cunt++)
{
_putchar(95);
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
