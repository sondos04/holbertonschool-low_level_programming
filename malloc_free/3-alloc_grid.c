#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid- grid with width & height full of 0
 *@width: width of grid
 *@height: height of grid
 *
 *Return: Pointer to pointer the newly allocated
 */
int **alloc_grid(int width, int height)
{
int row;
int col;
int **p;

if (width <= 0)
{
return (NULL);
}
if (height <= 0)
{
return (NULL);
}
p = malloc(height * sizeof(int *));
if (p == 0)
return (NULL);
for(row = 0; row < height; row++)
{
p[row] = malloc(width * sizeof(int *));
if (!p[row])
{
while (--row >= 0) free([row]);
free(p);
return (NULL);
}
for(col = 0; col < width; col++)
{
p[row] [col] = 0;
}
}
return (p);
}
