#include "main.h"
/**
 * more_numbers - Print numbers from 0 to 14 followed by a new line 10 time
 *
 * Return: Nothing
 */
void more_numbers(void)
{
int num;
int a = 0;
for (num = 1; num <= 10; num++)
{
while ( a < 15 )
{
_putchar( (a / 10) + '0');
_putchar( (a % 10) + '0');
a++;
}
_putchar('\n');
a = 0;
}
}
