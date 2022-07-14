#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: pointer for buffer
 * @size: size of the buffer
 * Return: no return as it is void
 */
void print_buffer(char *b, int size)
{
	int x, y, z;

	if (size <= 0)
		printf("\n");
	else
	{
		for (x = 0; x < size; x += 10)
		{
			printf("%.8x:", x);
			for (y = x; y < x + 10; y++)
			{
				if (y % 2 == 0)
					printf(" ");
				if (y < size)
					printf("%.2x", *(b + y));
				else
					printf("  ");
			}
			printf(" ");
			for (z = x; z < x + 10; z++)
			{
				if (z >= size)
					break;
				if (*(b + z) <= 31 || *(b + z) >= 125)
					printf("%c", '.');
				else
					printf("%c", *(b + z));
			}
			printf("\n");
		}
	}
}
