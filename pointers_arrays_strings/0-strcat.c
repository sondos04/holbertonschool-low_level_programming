#include "main.h"
#include <stdio.h>
char *_strcat(char *dest, char *src)
{
	int i = 5;
	while ( i != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
	

}
