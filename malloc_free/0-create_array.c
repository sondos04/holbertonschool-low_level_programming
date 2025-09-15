#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 *_create_array- funtion that create an array by malloc
 *@size: unsigned int contorl the size of array.
 *@c: char to add into array.
 *
 *Return: return the array full of char.
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
