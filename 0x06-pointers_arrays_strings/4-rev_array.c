#include "main.h"

/**
 * reverse_array - reverse the arrays
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int x, y, myLogs;

	for (x = 0; x < n - 1; x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			myLogs = *(a + y);
			*(a + y) = *(a + (y - 1));
			*(a + (y - 1)) = myLogs;
		}
	}
}
