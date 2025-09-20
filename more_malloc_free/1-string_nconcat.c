#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat- copy string and add another till n count
 *@s1: String one to add
 *@s2: String two to add
 *@n: Number of char
 *
 *Return: Pointer to the newly allocated copy, or NULL if str or malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int j;
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int size;
char *p;
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

if (n >= len2)
size = len1 + len2 + 1;
else
size = len1 + n + 1;

p = malloc(size *sizeof(char));
if (p == NULL)
return (NULL);

for (i = 0; i < len1; i++)
{
p[i] = s1 [i];
}
for (j = 0; j < n && j < len2; j++)
{
p[len1 + j] = s2 [j];
}
p[len1 + j] = '\0';
return (p);
}
