#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Returns the x ^ y
 * @x: The base
 * @y: the power of the base
 *
 * Return: The resulte of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x , (y - 1)));
}
