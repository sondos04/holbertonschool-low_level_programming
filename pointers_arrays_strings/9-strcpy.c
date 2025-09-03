#include "main.h"
#include <stdio.h>
char *_strcpy(char *dest, char *src)
{
	int i;
	char temp;
	for (i = 0 ; i >= '\0' ; i++)
	{
		dest[i] = src[i];
		src[i] = temp[i];
	}
	return temp;
}
