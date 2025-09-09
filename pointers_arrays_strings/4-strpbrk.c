#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function to searches a string for any of a set of bytes
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: pointer to the first occurrence in s of any of the bytes in accept,
 * or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int j;
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (NULL);
}
