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
int **g;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}
g = malloc(sizeof(int *) * height);

if (g == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
g[i] = malloc(sizeof(int) * width);
if (g[i] == NULL)
{
for (i = i - 1; i >= 0; i--)
{
free(g[i]);
}
free(g);
return (NULL);
}
}
for (i = 0; j < width; j++)
g[i][j] = 0;
return (g);
}
