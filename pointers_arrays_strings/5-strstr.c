#include "main.h"
#include <stdio.h>
/**
 * _strstr - function to searches a string for any of a set of bytes
 * @haystack: the string to be scanned
 * @needle: the string containing the characters to match
 *
 * Return: first occurrence of the substring needle in the string,
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
return (needle + j);
}
}
}
return (NULL);
}
