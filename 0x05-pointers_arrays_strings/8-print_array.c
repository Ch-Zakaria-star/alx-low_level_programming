#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 * @a: pointer
 * @n: array length
 * Return: No return
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i + 1 < n)
printf(", ");
}
printf("\n");
}
