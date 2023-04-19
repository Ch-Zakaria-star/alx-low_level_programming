#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array we need to search
 * @size: The size of the array
 * @cmp: The function pointer to be used
 * Return: 0, -1, and int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
return (i);

i++;
}
}
}

return (-1);
}
