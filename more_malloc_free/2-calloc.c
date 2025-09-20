#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc- create array of 0
 *@nmemb: number of elements
 *@size: size of elements
 *
 *Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
if (nmemb == 0)
return (NULL);
if (size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
p[i] = 0;
return (p);
}
