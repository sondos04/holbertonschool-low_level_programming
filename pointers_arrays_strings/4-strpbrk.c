#include "main.h"
#include <stdio.h>
/**
 * _strspn -function that gets the length of a prefix substring
 * @s: the string to search in
 * @accept: the string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
char *_strpbrk(char *s, char *accept);
{
unsigned int j;
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
int count = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count = 1;
break;
}
}
if (!count)
	break;
}
return (s[i]);
}
