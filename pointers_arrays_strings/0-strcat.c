#include "main.h"
#include <stdio.h>
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	while (i != '\0')
		i++;
	while ( src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
	

}
