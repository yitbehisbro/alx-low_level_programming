#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the previously allocated
 * @old_size: original size of the memory
 * @new_size: current size of memory
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
