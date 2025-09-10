#include <stdio.h>
#include <stdlib.h>
/**
 * main - sum all integer arguments passed to the program
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Description: This program takes integer arguments from the command line,
 * add them & print the result.
 * If no integers are provided, it prints an error message and returns 1.
 *
 * Return: 0 on success, 1 if no arguments are provided or not corret.
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 0;
	
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i])) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
