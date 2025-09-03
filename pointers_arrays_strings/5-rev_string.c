#include <stdio.h>
#include "main.h"
/**
 * rev_string - Function to Reverses a string
 * @s: The string to be reversed
 *
 * Description: This function reverses the content of the string
 *              passed as argument, modifying it in place.
 */
void rev_string(char *s)
{
int len = 0;
int i;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len / 2; i++)
{
char temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
