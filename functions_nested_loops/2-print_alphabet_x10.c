#include "main.h"
/**
 * print_alphabet_x10 -Print lowercase alphabet followed by a new line 10 time
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
int num;
char a = 'a';
for (num = 1; num <= 10; num++)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
a = 'a';
}
}
