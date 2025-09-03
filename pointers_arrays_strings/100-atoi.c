#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer. If no number found, returns 0.
 */
int _atoi(char *s)
{
int i = 0;
iint sign = 1;
int result = 0;
int started = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
started = 1;
result = result * 10 + (s[i] - '0');
}
else if (started)
break;
i++;
}
if (sign == 1)
result = -result;
return (result);
}
