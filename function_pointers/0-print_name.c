#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - function that prints a name using a given function
 *@name: pointer the name
 *@f: pointer to function
 *
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
	f(name);
}
