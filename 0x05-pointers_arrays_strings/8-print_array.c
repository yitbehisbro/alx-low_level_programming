#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the array in list
 * @a: pointer variable
 * @n: holds size of array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x == (n - 1))
			continue;
		printf(", ");
	}
	printf("\n");
}
