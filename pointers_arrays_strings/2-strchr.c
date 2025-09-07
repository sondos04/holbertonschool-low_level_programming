#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of c in s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}
if (c == '\0')
{
return (&s[i]);
}
return (NULL);
}
