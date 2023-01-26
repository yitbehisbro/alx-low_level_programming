#include "search_algos.h"
#include <math.h>

/**
 * display - display the searched numbers
 * @size: the size
 * @min: lowest value
 * @array: the array of numbers
 *
 */
void display(size_t size, int *array, size_t min)
{
	size_t i;

	printf("Searching in array: ");
	for (i = min; i <= size; i++)
	{
		printf("%d", array[i]);
		if (i == size)
			continue;
		else
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search -  searches for a value in an array of integers
 * using the binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array != NULL)
	{
		left = array[0];
		right = array[size - 1];

		display(size - 1, array, 0);

		while (left <= right)
		{
			mid = floor((left + right) / 2);

			if (array[mid] < value)
			{
				left = mid + 1;
				display(right, array, left);
			}
			else if (array[mid] > value)
			{
				right = mid - 1;
				display(mid - 1, array, 0);
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
