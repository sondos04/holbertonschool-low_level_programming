#include "main.h"
#include <stdio.h>
char *string_toupper(char *)
{
	int i = 0;
	while (i != '\0')
	{
		if (*[i] >= 'a' && *[i] <= 'z')
		{
			*[i] = *[i] - 32;
		}
		i++;
	}
	return (*);
}
