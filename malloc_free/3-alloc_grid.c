#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
int row;
int col;
int *p;
if (width == NULL)
{
return (NULL);
}
if (height == NULL)
{
return (NULL);
}
if (width < 0)
{
return (NULL);
}
if (height < 0)
{
return (NULL);
}
p = malloc((width * height) * sizeof(int));
if (p == NULL)
return (NULL);
for(row = 0; row < width; row++)
{
for(col = 0; col < heght: col++)
{
p[row][col] = 0;
}
}
return (p);
}
