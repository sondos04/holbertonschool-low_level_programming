#include <stdio.h>
/**
 * main - prints the program's argument
 * @argc: number of arguments passed to the program
 * @argv: array of arguments, argv[0] is the program name
 *
 * Prints the program's argument that recive
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
