#include "main.h"
#include <stdio.h>
/**
 * void print_diagonal - draws a backslash in the terminal
 * @n: number of times the character '\' should be printed
 *
 * Description: If n is 0 or less, the function should only print \n.
 * Return: void
 */
void print_diagonal(int n)
{
int cunt;
if (n > 0)
{
for (cunt = 0; cunt < n ; cunt++)
{
_putchar(92);
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
