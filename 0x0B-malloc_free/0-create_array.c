#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * @c: char value for array
 * @size: the size of the array to print
 *
 * Return: 0 in success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = NULL;

	if (size == 0)
	{
		return ('\0');
	}
	if ((arr = malloc(BUFSIZ)) == NULL)
	{
		return ('\0');
	}
	arr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
	free(arr);
}
