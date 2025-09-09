#include "main.h"
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	int j = 0;
	int i = 0;
	int count = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
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
