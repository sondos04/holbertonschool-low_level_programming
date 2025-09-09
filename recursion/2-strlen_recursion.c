#include "main.h"
#include <stdio.h>
int _strlen_recursion(char *s)
{
	while (*s != '\0')
		return ((int) *s);
	_strlen_recursion(s + 1);
}
