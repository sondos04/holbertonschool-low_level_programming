#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
int hexa ;
for(hexa = 0; hexa < 16; hexa++)
{
if (hexa < 10)
{
putchar('0' + hexa);
}
else
{
putchar('0' + (hexa - 10));
}
hexa++;
}
putchar('\n');
return (0);
}
