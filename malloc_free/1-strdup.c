#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strdup - Creates an array of chars, by duplicated str
 * @str: The character to fill the array with
 *
 * Return: Pointer to the newly allocated array, or NULL if str or malloc fails
 */

char *_strdup(char *str)
{
char *p;
int i = 0;
if (str == NULL)
{
return (NULL);
}
else
{
p = (char *) malloc(sizeof(str + 1));
if (p == NULL)
{
return (NULL);
}
while(str[i] != '\0')
{
p[i] = str[i];
i++;
}
}
return (p);
}
