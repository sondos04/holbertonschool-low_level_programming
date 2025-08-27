#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
int num;
char a = 'a' ;
for ( num = 1; num <= 10; num++ )
{
while ( a <= 'z' )
{
_putchar(a);
a++;
}
_putchar('\n');
}
}
