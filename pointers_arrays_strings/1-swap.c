#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Description: This function swaps the values of the two integers
 * pointed to by @a and @b.
 */
void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
