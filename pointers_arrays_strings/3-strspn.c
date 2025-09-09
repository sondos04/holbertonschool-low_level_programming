#include "main.h"
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j;
	unsigned int i;
	unsigned int count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
		count++;
	}
	j++;
	}
	i++;
	}
	return (count);
}
