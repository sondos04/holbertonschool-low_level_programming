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
char *_strstr(char *haystack, char *needle)
{
unsigned int j;
unsigned int i;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (needle[j] != haystack[i])
{
return (haystack + i);
}
}
}
return (NULL);
}
