#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - unallocate the memory
 * @d: pointer to the struct
 * Return: no return
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
