#include "main.h"
/**
 * print_last_digit - this function to print the last digit
 * @n: The integer
 *
 * Return: The last digit value of n
 */
int print_last_digit(int n)
{
int last = n % 10;
if (last < 0)
last = - last;
_putchar('0'+last);
return (last);
}
