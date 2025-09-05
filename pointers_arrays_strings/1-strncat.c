#include "main.h"
#include <stdio.h>
/**
 * _strcat -function concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: numbers of bytes from src
 *
 * Description: This function appends the string pointed to by @src
 * to the end of the string pointed to by @dest. The terminating
 * null byte (\0) at the end of @dest is overwritten, and a new
 * null byte is added at the end of the result.
 *
 * Return: pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int i = 0;
        int j = 0;

        while (dest[i] != '\0')
                i++;
        while (j <= (n-1))
        {
                dest[i] = src[j];
                j++;
                i++;
        }
        dest[i] = '\0';
        return (dest);
}
