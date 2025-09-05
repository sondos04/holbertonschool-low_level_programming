#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: the difference between the first characters that differ
 *         (s1[i] - s2[i]), or 0 if the strings are equal
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] && s2[i])
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (s1[i] - s2[i]);
}
