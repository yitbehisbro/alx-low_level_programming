#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates dynamic memory
 * @b: unsigned integer value
 * Return: no return
 */
void *malloc_checked(unsigned int b)
{
	char *allm;

	allm = malloc(b);

	if (allm == NULL)
	{
		_putchar(56);
		exit(0);
	}
	return (allm);
}
