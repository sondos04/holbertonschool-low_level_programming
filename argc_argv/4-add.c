#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - sums all integer arguments passed to the program
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Description: This program validates each argument as an integer,
 * sums them, prints the result. If argument invalid prints "Error".
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc < 1)
	{
	printf("Error\n");
	return (1);
	}

	for (i = 1; i < argc; i++)
	{
	char *arg = argv[i];

	if (*arg == '\0')
	{
		printf("Error\n");
		return (1);
	}
	if (*arg == '+' || *arg == '-')
		arg++;
	if (*arg == '\0')
	{
		printf("Error\n");
		return (1);
	}
	for (j = 0; arg[j]; j++)
	{
	if (!isdigit(arg[j]))
		{
		printf("Error\n");
		return (1);
		}
	}
	result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
