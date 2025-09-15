#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s2, char *s2)
{
char *p;
int i = 0;
int j = 0;
int len1 = 0;
int len2 = 0;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
{
len1++;
i++;
}
while (s2[j] != '\0')
{
len2++;
j++;
}
p = malloc(((len1 + 1) + (len2 + 1)) * sizeof(char));
if (p == NULL)
return (NULL);

i=0;
j=0;

while (s1[i] != '\0')
{
p[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
p[i] = s2[j];
i++;
j++;
}
p[i] = '\0';
return (p);
}
