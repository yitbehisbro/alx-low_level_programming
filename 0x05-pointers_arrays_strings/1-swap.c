#include "main.h"

/**
 * swap_int - swaps two pointer integer value
 * @a: first pointer value
 * @b: second pointer value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
