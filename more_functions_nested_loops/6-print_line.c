#include "main.h"
#include <stdio.h>
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
