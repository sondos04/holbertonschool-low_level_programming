#include <stdio.h>
/**
 * main - prints the program's own arguments
 * @argc: number of arguments passed to the program
 * @argv: array of arguments, argv[0] is the program name
 *
 * Prints the program's argument that passed into it.
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return 0;
}
