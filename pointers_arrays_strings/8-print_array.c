#include "main.h"
#include <stdio.h>
/**
 * print_array - function prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to print
 *
 * Description: prints the elements of array a, separated by comma and space,
 * followed by a new line. Only the first n elements are printed.
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1))
printf(", ");
i++;
}
printf("\n");
}
