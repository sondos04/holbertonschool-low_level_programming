#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a backslash in the terminal
 * @n: number of times the character '\' should be printed
 *
 * Description: If n is 0 or less, the function should only print \n.
 * Return: void
 */
void print_diagonal(int n)
{
int cunt;
int spece;
if (n > 0)
{
for (cunt = 0; cunt < n ; cunt++)
{
for (spece = 0; spece < cunt ; spece++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
