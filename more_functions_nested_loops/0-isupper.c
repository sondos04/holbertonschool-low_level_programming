#include "main.h"
/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to be checked
 *
 * Description: This function checks whether the input character
 * is an uppercase letter (A-Z).
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
