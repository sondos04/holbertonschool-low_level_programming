#include <stdio.h>
#include "main.h"
#include <unistd.h>
void _print_rev_recursion(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	 write(1, s, 1);
	_print_rev_recursion(s - 1);
}

