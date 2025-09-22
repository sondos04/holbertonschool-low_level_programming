#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index- function scan every element in array for a condition
 * @array: pointer to the array of integers
 * @size: size of the array
 * @cmp: pointer to the function to be executed
 *
 * Return: index if function true, or -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);
if (array == NULL && cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
