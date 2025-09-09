#include "main.h"
#include <stdio.h>
/**
 * sqrt_helper - recursively finds the natural square root of n
 * @n: the number to find the square root of
 * @guess: current guess to test
 *
 * Return: the natural square root of n if it exists, -1 otherwise
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (sqrt_helper(n, guess + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n if it exists, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 1));
}
