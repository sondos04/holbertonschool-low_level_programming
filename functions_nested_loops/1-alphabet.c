#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
