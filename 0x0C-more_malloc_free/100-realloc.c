#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the previously allocated
 * @old_size: original size of the memory
 * @new_size: current size of memory
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *myrealloc;
	char* myptr;

	myptr = (char*)ptr;
	myptr = ptr;


	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	myrealloc = malloc(new_size);
	myptr = malloc(old_size);

	if (myrealloc == NULL || ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < (new_size - old_size); a++)
	{
		if (new_size > old_size)
			break;
		myrealloc[a] = myptr[a];
	}
	return (myrealloc);
	free(ptr);
}
