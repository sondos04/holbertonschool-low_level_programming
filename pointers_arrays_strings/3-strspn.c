#include "main.h"
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0;
	if (s[i] == accept[i])
	{
		count++;
		i++;
	}
	return (count);
}
