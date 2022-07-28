#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: to pointer
 */
int *array_range(int min, int max)
{
	int *arrays;
	int a;

	if (min > max)
		return (NULL);

	arrays = malloc(((max - min) + 1) * sizeof(*arrays));

	if (arrays == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		arrays[a] = min;

	return (arrays);
}
