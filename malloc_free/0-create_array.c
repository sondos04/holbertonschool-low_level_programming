#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - Creates an array of char, each initialized to a specific char
 *@size: The size of the array to allocate
 *@c: The character to fill the array with
 *
 *Return: Pointer to newly allocated array,NULL size=0 or malloc fails
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size == 0)
{
return (NULL);
}
else
{
p = (char *) malloc(size * sizeof(char));
if (p == 0)
{
return (NULL);
}
for (i = 0 ; i < size ; i++)
{
p[i] = c;
}
}
return (p);
}
