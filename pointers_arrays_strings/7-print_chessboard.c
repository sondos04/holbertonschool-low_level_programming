#include "main.h"
#include <stdio.h>
void print_chessboard(char (*a)[8])
{
	int j;
	for (j = 0; j < 8; j++)
        {
	printf("%s", a[j]);
	printf("\n");
}
	}
