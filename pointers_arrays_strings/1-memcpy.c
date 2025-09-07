#include "main.h"
#include <stdio.h>
/**
 * _memcpy - fills memory with a another memory for n byte
 * @dest: pointer to the memory area to replace
 * @src: pointer to the memory area to fill
 * @n: number of bytes to replace
 *
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
