#include "main.h"
#include <stdio.h>
#include <string.h>
void print_rev(char *s)
{
char *end = s;
while (*end != '\0')
end++;
while ( end >= 0 )
{
_putchar(*end);
end--;
}
_putchar('\n');
}
