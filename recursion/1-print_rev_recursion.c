#include <stdio.h>
#include "main.h"
void _print_rev_recursion(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	printf("%d", s[i]);
	_print_rev_recursion(s - 1);
}

