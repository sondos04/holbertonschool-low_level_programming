#include "main.h"
#include <stdio.h>
/**
 * factorial - find the factorial of n
 * @n: number to find factorial
 *
 * Return: value of factorial n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
