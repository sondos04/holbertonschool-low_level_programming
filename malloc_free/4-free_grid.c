#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid- free the grid after malloc
 * @grid: pointer to pointer array
 * @height: height of grid
 *
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
	free(grid[i]);
}
free(grid);
}
