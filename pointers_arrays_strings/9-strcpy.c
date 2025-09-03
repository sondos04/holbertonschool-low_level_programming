#include "main.h"
#include <stdio.h>
/**
 * _strcpy - function copies the string pointed to by src (+ \0)
 *           to the buffer pointed to by dest.
 * @dest: Destination buffer.
 * @src: Source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0 ; src[i] != '\0' ; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
