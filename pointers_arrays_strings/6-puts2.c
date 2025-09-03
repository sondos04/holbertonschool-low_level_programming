#include "main.h"
#include <stdio.h>
/**
 * puts2 - function print every character of a string -even
 * @str: input string
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
