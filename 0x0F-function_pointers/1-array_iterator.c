#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: pointer to array of int
 * @size: the size of the array
 * @action: a pointer to the function
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (action && array)
		for (a = 0; a < size; a++)
			action(array[a]);
}
