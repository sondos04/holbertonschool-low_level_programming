#include "main.h"

/**
 * is_prime_helper - checks if n is divisible by any number from i to n/2
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return 0;
	if (i > n / 2)
		return 1;
	if (n % i == 0)
		return 0;
	return is_prime_helper(n, i + 1);
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return is_prime_helper(n, 2);
}

