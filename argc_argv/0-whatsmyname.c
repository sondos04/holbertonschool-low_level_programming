#include <stdio.h>
/*
 * main:
 * main function of the code that have the arguments
 * Arguments:
 *   int argc   -> Number of arguments passed to the program
 *   char *argv[] -> Array of strings containing the arguments
 *                  argv[0] is always the program name (with path)
 * Description:
 *   Prints the program's own executable name as it was called
 *   from the terminal. Renaming or moving the executable
 *   changes the output automatically without recompiling.
 */
int main(int argc, char *argv[])
{
argc = 0;
printf("%s\n", argv[argc]);
return (0);
}
