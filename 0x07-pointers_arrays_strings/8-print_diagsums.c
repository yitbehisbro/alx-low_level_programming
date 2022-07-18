#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal sum
 * @a: pointer to int array
 * @size: size of the array
 * Return: 0 in success
 */
void print_diagsums(int *a, int size)
{
	int x, first_sum = 0, sec_sum = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			sec_sum += *(a + x);

		if (x % (size + 1) == 0)
			first_sum += *(a + x);
	}
	printf("%d, %d\n", first_sum, sec_sum);
}
