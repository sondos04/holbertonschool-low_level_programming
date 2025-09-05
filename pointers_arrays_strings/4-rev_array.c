#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = n;
	 while (i >= 0)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i--;
    }
    printf("\n");
}	
