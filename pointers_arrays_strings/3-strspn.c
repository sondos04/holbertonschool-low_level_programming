#include "main.h"
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int count = 0;
	while (s[i] != '\0')
	{
	if (*s[i] == *accept)
	{
		count++;
	}
	i++;
	}
	return (count);
}
