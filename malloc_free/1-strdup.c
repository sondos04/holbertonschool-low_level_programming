#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Creates an array of chars, by duplicated str
 * @str: array to fill the copy array with
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
p = (char *) malloc(sizeof(strlen(str) + 1));
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
}
return (p);
}
