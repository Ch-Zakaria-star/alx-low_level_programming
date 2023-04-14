#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: pointer to reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p, *c;
unsigned int i;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
if (new_size > old_size)
{
p = malloc(new_size * sizeof(char));
c = ptr;
for (i = 0; i < old_size; i++)
p[i] = c[i];
free(ptr);
return (p);
}
return (ptr);
}
