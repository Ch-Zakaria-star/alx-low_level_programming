#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */

int *array_range(int min, int max)
{
int *a;
int i, f;

f = (max - min) + 1;
if (min > max)
return (NULL);

a = malloc(sizeof(int) * f);
if (a == NULL)
return (NULL);

for (i = 0; min <= max; i++)
{
a[i] = min++;
}
return (a);
}
