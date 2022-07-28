#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: the size of elements
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mycalloc;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mycalloc = malloc((nmemb + 1) * sizeof(size));

	if (mycalloc == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		mycalloc[a] = 0;

	return (mycalloc);
}
