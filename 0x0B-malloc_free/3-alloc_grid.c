#include "main.h"

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
int **grid;
int index, i, j;

if (width <= 0 || height <= 0)
return (0);
grid = (int **)malloc(sizeof(int *) * height);
if (grid == 0)
{
free(grid);
return (0);
}

for (index = 0; index < height; index++)
{
*(grid + index) = (int *)malloc(sizeof(int) * width);
if (*(grid + index) == 0)
{
for (i = 0; i < index; i++)
free(*(grid + i));
free(grid);
return (0);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
*(*(grid + i) + j) = 0;
}

return (grid);
}
