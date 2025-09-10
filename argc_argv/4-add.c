#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string represents a valid integer
 * @s: string to check
 *
 * Return: 1 if valid integer, 0 otherwise
 */
int is_number(char *s)
{
	if (*s == '\0')
	return (0);
	if (*s == '-' || *s == '+')
	s++;

	if (*s == '\0')
	return (0);

	while (*s)
	{
	if (!isdigit(*s))
	return (0);
	s++;
    	}
	return (1);
}
/**
 * main - sums all integer arguments passed to the program
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Description: This program takes integer arguments from the command line,
 * validates them, sums them, and prints the result.
 * If any argument is not a valid integer or no arguments are provided,
 * it prints "Error" and returns 1.
 *
 * Return: 0 on success, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int i, result = 0;
	
    if (argc < 2)
    	{
	printf("Error\n");
	return (1);
	}
	for (i = 1; i < argc; i++)
	{
	if (!is_number(argv[i]))
	{
		printf("Error\n");
		return (1);
	}
	result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
