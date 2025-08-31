#include "main.h"
/**
 * _isdigit - Checks if a character is digit
 * @c: The character to be checked
 *
 * Description: This function checks whether the input character
 * is digit (0-9).
 *
 * Return: 1 if the character is digit, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
