#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
p = (char*) malloc(size * sizeof(char));
for (i = 0 ; i < size ; i++)
{
p[i] = c;
}
}
free(p);
return (p);
}
