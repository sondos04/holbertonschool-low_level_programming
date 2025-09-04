#include "main.h"
#include <stdio.h>
char *_strcat(char *dest, char *src)
{
	int i = 0;
	char new [];
	while ( i != '\0')
	{
		new[i] = src[i];
		i++;
	}
	i = '\0';
	return (dest + new);
	

}
