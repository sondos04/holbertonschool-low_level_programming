#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str)
{
char *p;
int i;
if (str == NULL)
{
return (NULL);
}
else
{
p = (char*) malloc(sizeof(char));
for (i = 0 ; i < size ; i++)
{
p[i] = str[i];
}
}
free(p);
return (p);
}
