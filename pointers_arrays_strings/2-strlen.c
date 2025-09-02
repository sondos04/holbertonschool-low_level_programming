#include "main.h"
#include <stdio.h>
int _strlen(char *s)
{
int count;
while( s[count] != '\0')
count ++;
return (count);
}
