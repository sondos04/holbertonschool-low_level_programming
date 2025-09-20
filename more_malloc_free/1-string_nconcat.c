#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i;
int j;
int len1 = 0;
int len2 = 0;
int size;
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

char *p = malloc(size * sizeof(char));

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
