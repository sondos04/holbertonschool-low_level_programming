#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int z;
z = 0;
while (z <= 9)
{
putchar(z + '0');
z++;
}
putchar('\n');
return (0);
}
