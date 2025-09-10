#include <stdio.h>
#include <stdlib.h> 
/**
 * main - multiplies all integer arguments passed to the program
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Description: This program takes integer arguments from the command line,
 * multiplies them together, and prints the cumulative result after each multiplication.
 * If no integers are provided, it prints an error message and returns 1.
 *
 * Return: 0 on success, 1 if no arguments are provided
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 1;
	if (argc < 2)
	{
	printf("Error\n");
	return (1);
	}

	for (i = 1; i < argc; i++)
	{
		result = result * atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
