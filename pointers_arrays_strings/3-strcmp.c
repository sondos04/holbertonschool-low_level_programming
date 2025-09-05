#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function calculate the diff between two strings
 *@s1 = pointer of string one
 *@s2 = pointer of string two
 *
 * Return: the diffrente of two strings.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] && s2[i])
{
if (s1[i] != s2[i]){
return (s1[i] - s2[i]);
}
i++;
}
return (s1[i] - s2[i]);  
}
