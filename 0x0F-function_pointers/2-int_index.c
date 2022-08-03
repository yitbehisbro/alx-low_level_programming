#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointers to integer
 * @size: size of array
 * @cmp: pointers to functions
 *
 * Return: index of the first element
 * or -1 incase no element matches or
 * the size lessthan or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a, temp;

	if (array && cmp && size > 0)
	{
		for (a = 0; a < size; a++)
		{
			temp = cmp(array[a]);
			if (temp)
				break;
		}
		if (a < size)
			return (a);
	}
	return (-1);
}
