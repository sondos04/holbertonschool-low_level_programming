#include "main.h"
#include <stdio.h>
#include <string.h>
void print_rev(char *s)
{
while (*s != '\0')
	s++;
for ( s = s-1 ; s >= 0 ; s++)
	_putchar(*s);
_putchar('\n\);
}
