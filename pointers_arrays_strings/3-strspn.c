#include "main.h"
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	int j;
	int i;
	int count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (*s == *accept)
	{
		count++;
	}
	j++;
	}
	i++;
	}
	return (count);
}
