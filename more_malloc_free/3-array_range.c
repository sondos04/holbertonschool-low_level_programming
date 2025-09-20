#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *array_range- Range the string
 *@min: Minimum number of elements
 *@max: Maximum number of elements
 *
 *Return: Pointer to the newly allocated, or NULL if str or malloc fails
 */

int *array_range(int min, int max)
{
int num;
int *p;
int i;
if (min > max)
return (NULL);
num = max - min + 1;
p = malloc(num *sizeof(int));
if (p == NULL)
return (NULL);
for (i = 0; i < num; i++)
p[i] = min + i;
return (p);
}
