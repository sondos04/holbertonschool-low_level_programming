#include "main.h"
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	if (*s == *accept)
	{
		count++;
	}
	return (count);
}
