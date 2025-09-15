#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 *create_array - function create array of chars initialized to specified char
 *@size: unsigned int contorls the size of array.
 *@c: char to add into array.
 *
 *Return: return the array full of char, null for 0 size.
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
