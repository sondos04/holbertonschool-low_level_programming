#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
p = malloc(height * sizeof(int));
if (p == 0)
return (NULL);
for(row = 0; row < height; row++)
{
p[row] = malloc(width * sizeof(int));
if (!p[row])
return (NULL);
for(col = 0; col < width; col++)
{
p[row] [col] = 0;
}
}
return (p);
}
