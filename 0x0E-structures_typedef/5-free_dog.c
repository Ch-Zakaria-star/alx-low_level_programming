#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a memory block of type dog_t
 * @d: address to the memory block to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			free(d->name);
		if ((*d).owner != NULL)
			free(d->owner);
		free(d);
	}
}
