#include "main.h"
void print_line(int n)
{
int cunt = 0;
while (n != 0)
{
while (cunt < n)
{
_putchar('_');
cunt++;
}
}
_putchar('\n');
}
