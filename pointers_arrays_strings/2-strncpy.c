#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function replace string to another
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: numbers of bytes from src
 *
 *
 * Return: pointer to the resulting string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
