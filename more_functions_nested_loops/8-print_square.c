#include "main.h"
#include <stdio.h>
/**
 * print_square - print a # in the terminal
 * @size: number of times and lines the character '#' should be printed
 *
 * Description: If n is 0 or less, the function should only print \n.
 * Return: void
 */
void print_square(int size)
{
int cunt;
int try;
if (size > 0)
{
for (try = 0; try < size ; try++)
{
for (cunt = 0; cunt < size ; cunt++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
