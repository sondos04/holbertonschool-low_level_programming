#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - Duplicates a string by allocating memory for a copy
 *@str: String to duplicate
 *
 *Return: Pointer to the newly allocated copy, or NULL if str or malloc fails
 */

char *_strdup(char *str)
{
char *p;
int i = 0;
int len = 0;

while(str[i] != '\0')
{
len++;
i++;
}
if (str == NULL)
{
return (NULL);
}
p = (char *) malloc((len + 1) * sizeof(char));
if (p == NULL)
{
return (NULL);
}
while(str[i] != '\0')
{
p[i] = str[i];
i++;
}
p[i] = '\0';
return (p);
}
