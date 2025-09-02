#include "main.h"
int _strlen(char *s)
{
int count;
while( s[count] != '\0')
count ++;
return (count);
}
